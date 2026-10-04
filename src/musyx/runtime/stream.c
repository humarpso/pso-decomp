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

void hwEnableIrq(void);
void hwDisableIrq(void);
void hwSetVolume(s32 idx, u32 p, u32 x, s32 a3, f32 a, f32 b, f32 c);
u32 hwGetStreamPlayBuffer(u8 i);
void DCInvalidateRange(void *addr, u32 nBytes);
void hwInitSamplePlayback(u32 v, u16 smpID, void *newsmp, u32 set_defadsr, u32 prio, u32 callbackUserValue, u32 setSRC, u8 itdMode);
void hwSetPitch(s32 i, u16 v);
void hwStart(s32, u8);
void hwFlushStream(u8 *base, u32 offset, u32 len, u8 i, void *cb, void *arg);
u32 hwGetPos(s32 arg0);
void hwSetStreamLoopPS(s32 i, u8 v);
u8 hwInitStream(u32 size);
void hwExitStream(u8 i);
u32 voiceBlock(u8 prio);
void voiceUnblock(s32);

s32 GetPrivateIndex(u32 arg0);
void CheckOutputMode(s8 *arg0, s8 *arg1);
u32 sndStreamAllocLength(u32 arg0, u32 arg1);
void sndStreamMixParameter(u32 stid, u8 vol, u8 pan, u8 span, u8 fxvol);
void sndStreamMixParameterEx(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb);
void sndStreamFrq(u32 stid, u32 frq);
void sndStreamFree(u32 stid);
u32 sndStreamActivate(u32 stid);
void sndStreamDeactivate(u32 stid);

static STREAM_INFO streamInfo[64];
static u32 nextPublicID;
static u8 streamCallDelay;
static u8 streamCallCnt;

#pragma push
#pragma opt_common_subs on
void streamInit(void) {
    s32 i;
    streamCallDelay = 0;
    streamCallCnt = 3;
    for (i = 0; i < lbl_80557348.voiceNum; ++i) {
        streamInfo[i].state = 0;
    }
    nextPublicID = 0;
}
#pragma pop

void streamCorrectLoops(void) {

}

void streamKill(s32 arg0) {
    STREAM_INFO *r = &streamInfo[arg0];

    switch (r->state) {
    case 1:
    case 2:
        if (r->state == 2) {
            voiceUnblock(r->voice);
        }
        r->state = 3;
        r->updateFunction(0, 0, 0, 0, r->user);
        break;
    }
}

s32 GetPrivateIndex(u32 arg0) {
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

void sndStreamARAMUpdate(u32 stid, u32 off1, u32 len1, u32 off2, u32 len2) {
    u32 i;

    hwDisableIrq();
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
            hwFlushStream((u8 *)streamInfo[i].buffer, off1, len1, streamInfo[i].hwStreamHandle, 0, 0);
        }

        if (len2 != 0) {
            hwFlushStream((u8 *)streamInfo[i].buffer, off2, len2, streamInfo[i].hwStreamHandle, 0, 0);
        }

        if (streamInfo[i].type == 1) {
            hwSetStreamLoopPS(streamInfo[i].voice, *(u32 *)((u8 *)streamInfo[i].buffer + 0x40000000) >> 24);
        }
    }
    hwEnableIrq();
}
#pragma pop

void CheckOutputMode(s8 *arg0, s8 *arg1) {
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
    hwSetVolume(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

void streamOutputModeChanged(void) {
    u32 i;

    hwDisableIrq();
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
    hwEnableIrq();
}
#pragma pop

u32 sndStreamAllocLength(u32 arg0, u32 arg1) {
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
    CheckOutputMode((s8 *)&pan, (s8 *)&span);
    si->vol = vol;
    si->pan = pan;
    si->span = span;
    si->auxa = auxa;
    si->auxb = auxb;
}

static inline void SetHWMix_803ABECC(const STREAM_INFO *si) {
    hwSetVolume(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

static inline void MixParameterInner_803ABECC(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    u32 i;
    hwDisableIrq();
    i = GetPrivateIndex(stid);
    if (i != -1) {
        SetupVolumeAndPan2_803ABECC(&streamInfo[i], vol, pan, span, auxa, auxb);
        if (streamInfo[i].state == 2) {
            SetHWMix_803ABECC(&streamInfo[i]);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            sndStreamMixParameterEx(streamInfo[i].nextStreamHandle, vol, pan, span, auxa, auxb);
        }
    }
    hwEnableIrq();
}

void sndStreamMixParameterEx(u32 stid, u8 vol, u8 pan, u8 span, u8 auxa, u8 auxb) {
    u32 i;

    hwDisableIrq();
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
    hwEnableIrq();
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

void hwSetPitch(s32 i, u16 v);
void sndStreamFrq(u32 stid, u32 frq);

static inline void FrqInner_803AC268(u32 stid, u32 frq) {
    u32 i;
    u16 pitch;

    hwDisableIrq();
    if ((i = GetPrivateIndex(stid)) != -1) {
        streamInfo[i].frq = frq;
        if (streamInfo[i].state == 2) {
            pitch = (4096.f * frq) / lbl_80557348.mixFrq;
            hwSetPitch(streamInfo[i].voice, pitch);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            sndStreamFrq(streamInfo[i].nextStreamHandle, frq);
        }
    }
    hwEnableIrq();
}

void sndStreamFrq(u32 stid, u32 frq) {
    u32 i;
    u16 pitch;

    hwDisableIrq();
    if ((i = GetPrivateIndex_803AC268(stid)) != -1) {
        streamInfo[i].frq = frq;
        if (streamInfo[i].state == 2) {
            pitch = (4096.f * frq) / lbl_80557348.mixFrq;
            hwSetPitch(streamInfo[i].voice, pitch);
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            FrqInner_803AC268(streamInfo[i].nextStreamHandle, frq);
        }
    }
    hwEnableIrq();
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

void sndStreamDeactivate(u32 stid);
void hwExitStream(u8 i);
void sndStreamFree(u32 stid);

static inline void FreeInner_803AC510(u32 stid) {
    u32 i;
    hwDisableIrq();
    i = GetPrivateIndex(stid);
    if (i != -1) {
        sndStreamDeactivate(stid);
        hwExitStream(streamInfo[i].hwStreamHandle);
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            sndStreamFree(streamInfo[i].nextStreamHandle);
        }
        streamInfo[i].state = 0;
    }
    hwEnableIrq();
}

void sndStreamFree(u32 stid) {
    u32 i;
    hwDisableIrq();
    i = GetPrivateIndex_803AC510(stid);
    if (i != -1) {
        sndStreamDeactivate(stid);
        hwExitStream(streamInfo[i].hwStreamHandle);
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            FreeInner_803AC510(streamInfo[i].nextStreamHandle);
        }
        streamInfo[i].state = 0;
    }
    hwEnableIrq();
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

u32 voiceBlock(u8 prio);

u32 sndStreamActivate(u32 stid) {
    u32 i;
    u32 ret = 0;

    hwDisableIrq();
    i = GetPrivateIndex_803AC720(stid);
    if (i != -1) {
        if (streamInfo[i].state == 3) {
            if ((streamInfo[i].voice = voiceBlock(streamInfo[i].prio)) == -1) {
                hwEnableIrq();
                return 0;
            }

            streamInfo[i].last = 0;
            streamInfo[i].state = 1;
        }

        if (streamInfo[i].nextStreamHandle != -1) {
            ret = sndStreamActivate(streamInfo[i].nextStreamHandle);
        } else {
            ret = 1;
        }
    }
    hwEnableIrq();
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

void voiceUnblock(s32);
void sndStreamDeactivate(u32 stid);

static inline void DeactivateInner_803AC920(u32 stid) {
    u32 i;
    hwDisableIrq();
    i = GetPrivateIndex(stid);
    if (i != -1) {
        if (streamInfo[i].state == 1 || streamInfo[i].state == 2) {
            voiceUnblock(streamInfo[i].voice);
            streamInfo[i].state = 3;
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            sndStreamDeactivate(streamInfo[i].nextStreamHandle);
        }
    }
    hwEnableIrq();
}

void sndStreamDeactivate(u32 stid) {
    u32 i;
    hwDisableIrq();
    i = GetPrivateIndex_803AC920(stid);
    if (i != -1) {
        if (streamInfo[i].state == 1 || streamInfo[i].state == 2) {
            voiceUnblock(streamInfo[i].voice);
            streamInfo[i].state = 3;
        }
        if (streamInfo[i].nextStreamHandle != 0xffffffff) {
            DeactivateInner_803AC920(streamInfo[i].nextStreamHandle);
        }
    }
    hwEnableIrq();
}
#pragma pop
}
