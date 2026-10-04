#include "types.h"

extern "C" {

typedef u32 (*SND_STREAM_UPDATE_CALLBACK)(void *buffer1, u32 len1, void *buffer2, u32 len2, u32 user);

typedef struct SND_ADPCMSTREAM_INFO {
    s16 coefTab[8][2];
} SND_ADPCMSTREAM_INFO;

typedef struct ADPCM_INFO {
    u16 numCoef;
    u8 initialPS;
    u8 loopPS;
    s16 loopY0;
    s16 loopY1;
    s16 coefTab[8][2];
} ADPCM_INFO;

typedef struct STREAM_INFO {
    u32 stid;
    u32 flags;
    u8 state;
    u8 type;
    SND_STREAM_UPDATE_CALLBACK updateFunction;
    s16 *buffer;
    u32 size;
    u32 bytes;
    u32 last;
    ADPCM_INFO adpcmInfo;
    u32 voice;
    u32 user;
    u32 frq;
    u8 prio;
    u8 vol;
    u8 pan;
    u8 span;
    u8 auxa;
    u8 auxb;
    u8 orgPan;
    u8 orgSPan;
    u8 studio;
    u8 hwStreamHandle;
    u32 nextStreamHandle;
} STREAM_INFO;

typedef struct SAMPLE_INFO {
    u32 info;
    void *addr;
    void *extraData;
    u32 offset;
    u32 length;
    u32 loop;
    u32 loopLength;
    u8 compType;
} SAMPLE_INFO;

typedef struct SynthInfo_Stream {
    u32 mixFrq;
    u32 numSamples;
    u8 pbInfo[0x208];
    u8 voiceNum;
    u8 maxMusic;
    u8 maxSFX;
    u8 studioNum;
} SynthInfo_Stream;

typedef struct Voice_Stream {
    u8 pad0[0xF4];
    u32 id;
    u8 padF8[0x404 - 0xF8];
} Voice_Stream;

extern SynthInfo_Stream lbl_80557348;
extern u32 lbl_805D73AC;
extern Voice_Stream *lbl_805D73B0;

void sound_enable_irq(void);
void sound_disable_irq(void);
void set_sound_voice_mix(s32 idx, u32 p, u32 x, s32 a3, f32 a, f32 b, f32 c);
u32 TLobby__sub_803BD800(u8 i);
void DCInvalidateRange(void *addr, u32 nBytes);
void start_sound_sample_voice(u32 v, u16 smpID, void *newsmp, u32 set_defadsr, u32 prio, u32 callbackUserValue, u32 setSRC, u8 itdMode);
void TLobby__sub_803BD19C(s32 i, u16 v);
void TLobby__sub_803BD138(s32, u8);
void TLobby__sub_803BD738(u8 *base, u32 offset, u32 len, u8 i, void *cb, void *arg);
u32 TLobby__sub_803BD694(s32 arg0);
void TLobby__sub_803BD124(s32 i, u8 v);
u8 TLobby__sub_803BD7C0(u32 size);
void TLobby__sub_803BD7E0(u8 i);
u32 TLobby__sub_803B3540(u8 prio);
void TLobby__sub_803B3628(s32);

s32 TLobby__sub_803AB168(u32 arg0);
void TLobby__sub_803AB574(s8 *arg0, s8 *arg1);
u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1);
void TLobby__sub_803ABB54(u32 stid, u8 vol, u8 pan, u8 span, u8 fxvol);
void apply_sound_volume_mix(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb);
void TLobby__sub_803AC268(u32 stid, u32 frq);
void TLobby__sub_803AC510(u32 stid);
u32 TLobby__sub_803AC720(u32 stid);
void TLobby__sub_803AC920(u32 stid);

#define hwFlushStream(b, o, l, h) TLobby__sub_803BD738((u8 *)(b), (o), (l), (h), 0, 0)

static STREAM_INFO streamInfo[64];
static u32 nextPublicID;
static u8 streamCallDelay;
static u8 streamCallCnt;

#pragma push
#pragma opt_common_subs on
void TLobby__sub_803AA79C(void) {
    s32 i;
    streamCallDelay = 0;
    streamCallCnt = 3;
    for (i = 0; i < lbl_80557348.voiceNum; ++i) {
        streamInfo[i].state = 0;
    }
    nextPublicID = 0;
}
#pragma pop

void TLobby__sub_803AB0E0(void) {

}

void TLobby__sub_803AB0E4(s32 arg0) {
    STREAM_INFO *r = &streamInfo[arg0];

    switch (r->state) {
    case 1:
    case 2:
        if (r->state == 2) {
            TLobby__sub_803B3628(r->voice);
        }
        r->state = 3;
        r->updateFunction(0, 0, 0, 0, r->user);
        break;
    }
}

s32 TLobby__sub_803AB168(u32 arg0) {
    STREAM_INFO *r = streamInfo;
    s32 i;

    for (i = 0; i < 64; r++, i++) {
        if (r->state != 0 && arg0 == r->stid) {
            return i;
        }
    }
    return -1;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803AB2C8(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803AB2C8(u32 stid, u32 off1, u32 len1, u32 off2, u32 len2) {
    u32 i;

    sound_disable_irq();
    i = GetPrivateIndex_803AB2C8(stid);
    if (i != -1) {
        switch (streamInfo[i].type) {
        case 0:
            off1 *= 2;
            len1 *= 2;
            off2 *= 2;
            len2 *= 2;
            break;
        case 1:
            off1 = (off1 / 14) * 8;
            len1 = ((len1 + 13) / 14) * 8;
            off2 = (off2 / 14) * 8;
            len2 = ((len2 + 13) / 14) * 8;
            break;
        }

        if (len1 != 0) {
            TLobby__sub_803BD738((u8 *)streamInfo[i].buffer, off1, len1, streamInfo[i].hwStreamHandle, 0, 0);
        }

        if (len2 != 0) {
            TLobby__sub_803BD738((u8 *)streamInfo[i].buffer, off2, len2, streamInfo[i].hwStreamHandle, 0, 0);
        }

        if (streamInfo[i].type == 1) {
            TLobby__sub_803BD124(streamInfo[i].voice, *(u32 *)((u8 *)streamInfo[i].buffer + 0x40000000) >> 24);
        }
    }
    sound_enable_irq();
}
#pragma pop

void TLobby__sub_803AB574(s8 *arg0, s8 *arg1) {
    if (lbl_805D73AC & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_805D73AC & 2)) {
        *arg1 = 0;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline void CheckOutputMode_803AB5A8(u8 *pan, u8 *span) {
    if (lbl_805D73AC & 1) {
        *pan = 64;
        *span = 0;
    } else if (!(lbl_805D73AC & 2)) {
        *span = 0;
    }
}

static inline void SetHWMix_803AB5A8(const STREAM_INFO *si) {
    set_sound_voice_mix(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

void TLobby__sub_803AB5A8(void) {
    u32 i;

    sound_disable_irq();
    for (i = 0; i < lbl_80557348.voiceNum; ++i) {
        if (streamInfo[i].state != 0) {
            streamInfo[i].pan = streamInfo[i].orgPan;
            streamInfo[i].span = streamInfo[i].orgSPan;
            CheckOutputMode_803AB5A8(&streamInfo[i].pan, &streamInfo[i].span);
            if (streamInfo[i].state != 3) {
                SetHWMix_803AB5A8(&streamInfo[i]);
            }
        }
    }
    sound_enable_irq();
}
#pragma pop

u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1) {
    if (arg1 & 1) {
        return (((arg0 + 13) / 7 * 4 & ~7) + 31) & ~31;
    }
    return ((arg0 * 2) + 31) & ~31;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803ABECC(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

static inline void CheckOutputMode_803ABECC(u8 *pan, u8 *span) {
    if (lbl_805D73AC & 1) {
        *pan = 64;
        *span = 0;
    } else if (!(lbl_805D73AC & 2)) {
        *span = 0;
    }
}

static inline void SetupVolumeAndPan_803ABECC(STREAM_INFO *si, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    si->orgPan = pan;
    si->orgSPan = span;
    CheckOutputMode_803ABECC(&pan, &span);
    si->vol = vol;
    si->pan = pan;
    si->span = span;
    si->auxa = auxa;
    si->auxb = auxb;
}

static inline void SetupVolumeAndPan2_803ABECC(STREAM_INFO *si, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    si->orgPan = pan;
    si->orgSPan = span;
    TLobby__sub_803AB574((s8 *)&pan, (s8 *)&span);
    si->vol = vol;
    si->pan = pan;
    si->span = span;
    si->auxa = auxa;
    si->auxb = auxb;
}

static inline void SetHWMix_803ABECC(const STREAM_INFO *si) {
    set_sound_voice_mix(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

static inline void MixParameterInner_803ABECC(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    u32 i;
    sound_disable_irq();
    i = TLobby__sub_803AB168(stid);
    if (i != -1) {
        SetupVolumeAndPan2_803ABECC(&streamInfo[i], vol, pan, span, auxa, auxb);
        if (streamInfo[i].state == 2) {
            SetHWMix_803ABECC(&streamInfo[i]);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            apply_sound_volume_mix(streamInfo[i].nextStreamHandle, vol, pan, span, auxa, auxb);
        }
    }
    sound_enable_irq();
}

void apply_sound_volume_mix(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    u32 i;

    sound_disable_irq();
    i = GetPrivateIndex_803ABECC(stid);
    if (i != -1) {
        SetupVolumeAndPan_803ABECC(&streamInfo[i], vol, pan, span, auxa, auxb);
        if (streamInfo[i].state == 2) {
            SetHWMix_803ABECC(&streamInfo[i]);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            MixParameterInner_803ABECC(streamInfo[i].nextStreamHandle, vol, pan, span, auxa, auxb);
        }
    }
    sound_enable_irq();
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803AC268(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803BD19C(s32 i, u16 v);
void TLobby__sub_803AC268(u32 stid, u32 frq);

static inline void FrqInner_803AC268(u32 stid, u32 frq) {
    u32 i;
    u16 pitch;

    sound_disable_irq();
    if ((i = TLobby__sub_803AB168(stid)) != -1) {
        streamInfo[i].frq = frq;
        if (streamInfo[i].state == 2) {
            pitch = (4096.f * frq) / lbl_80557348.mixFrq;
            TLobby__sub_803BD19C(streamInfo[i].voice, pitch);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            TLobby__sub_803AC268(streamInfo[i].nextStreamHandle, frq);
        }
    }
    sound_enable_irq();
}

void TLobby__sub_803AC268(u32 stid, u32 frq) {
    u32 i;
    u16 pitch;

    sound_disable_irq();
    if ((i = GetPrivateIndex_803AC268(stid)) != -1) {
        streamInfo[i].frq = frq;
        if (streamInfo[i].state == 2) {
            pitch = (4096.f * frq) / lbl_80557348.mixFrq;
            TLobby__sub_803BD19C(streamInfo[i].voice, pitch);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            FrqInner_803AC268(streamInfo[i].nextStreamHandle, frq);
        }
    }
    sound_enable_irq();
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803AC510(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803AC920(u32 stid);
void TLobby__sub_803BD7E0(u8 i);
void TLobby__sub_803AC510(u32 stid);

static inline void FreeInner_803AC510(u32 stid) {
    u32 i;
    sound_disable_irq();
    i = TLobby__sub_803AB168(stid);
    if (i != -1) {
        TLobby__sub_803AC920(stid);
        TLobby__sub_803BD7E0(streamInfo[i].hwStreamHandle);
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            TLobby__sub_803AC510(streamInfo[i].nextStreamHandle);
        }
        streamInfo[i].state = 0;
    }
    sound_enable_irq();
}

void TLobby__sub_803AC510(u32 stid) {
    u32 i;
    sound_disable_irq();
    i = GetPrivateIndex_803AC510(stid);
    if (i != -1) {
        TLobby__sub_803AC920(stid);
        TLobby__sub_803BD7E0(streamInfo[i].hwStreamHandle);
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            FreeInner_803AC510(streamInfo[i].nextStreamHandle);
        }
        streamInfo[i].state = 0;
    }
    sound_enable_irq();
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803AC720(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

u32 TLobby__sub_803B3540(u8 prio);

u32 TLobby__sub_803AC720(u32 stid) {
    u32 i;
    u32 ret = 0;

    sound_disable_irq();
    i = GetPrivateIndex_803AC720(stid);
    if (i != -1) {
        if (streamInfo[i].state == 3) {
            if ((streamInfo[i].voice = TLobby__sub_803B3540(streamInfo[i].prio)) == -1) {
                sound_enable_irq();
                return 0;
            }

            streamInfo[i].last = 0;
            streamInfo[i].state = 1;
        }

        if (streamInfo[i].nextStreamHandle != -1) {
            ret = TLobby__sub_803AC720(streamInfo[i].nextStreamHandle);
        } else {
            ret = 1;
        }
    }
    sound_enable_irq();
    return ret;
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 GetPrivateIndex_803AC920(u32 publicID) {
    u32 i;
    for (i = 0; i < 64; ++i) {
        if (streamInfo[i].state != 0 && publicID == streamInfo[i].stid) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803B3628(s32);
void TLobby__sub_803AC920(u32 stid);

static inline void DeactivateInner_803AC920(u32 stid) {
    u32 i;
    sound_disable_irq();
    i = TLobby__sub_803AB168(stid);
    if (i != -1) {
        if (streamInfo[i].state == 1 || streamInfo[i].state == 2) {
            TLobby__sub_803B3628(streamInfo[i].voice);
            streamInfo[i].state = 3;
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            TLobby__sub_803AC920(streamInfo[i].nextStreamHandle);
        }
    }
    sound_enable_irq();
}

void TLobby__sub_803AC920(u32 stid) {
    u32 i;
    sound_disable_irq();
    i = GetPrivateIndex_803AC920(stid);
    if (i != -1) {
        if (streamInfo[i].state == 1 || streamInfo[i].state == 2) {
            TLobby__sub_803B3628(streamInfo[i].voice);
            streamInfo[i].state = 3;
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            DeactivateInner_803AC920(streamInfo[i].nextStreamHandle);
        }
    }
    sound_enable_irq();
}
#pragma pop
}
