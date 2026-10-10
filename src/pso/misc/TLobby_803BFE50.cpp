#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C0B08_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct RecoveredGlobal_803C0AD8_lbl_80570AC0 {
    M2C_UNK value;
    u8 remaining[0x9BC];
};

struct RecoveredGlobal_803BD5C4_lbl_805663D8 {
    M2C_UNK value;
    u8 remaining[0x6DC];
};

struct Obj_803C07E8 { u8 a; s8 b; };

typedef struct Vt_803C0628 {
    u8 pad0[0x18];
    void (*fn18)(struct Obj_803C0628 *, s32, s32, void *);
} Vt_803C0628;

typedef struct Obj_803C0628 {
    Vt_803C0628 *vt;
} Obj_803C0628;

typedef struct Rec_803C0628 {
    s32 a;
    s32 b;
} Rec_803C0628;

typedef struct S_803C0628 {
    s32 f0;
    s32 f4;
    s32 f8;
    Obj_803C0628 *objs[4];
    Rec_803C0628 recs[3];
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
} S_803C0628;

struct Snd_803C0F98 {
    u8 pad0[4];
    s32 state;
    s32 lobby;
    u8 pad0C[2];
    s8 channels;
    u8 pad0F[0x50 - 0x0F];
    u8 *src;
    s32 max;
    u8 pad58[0x64 - 0x58];
    s16 *dst;
    s32 size;
    s32 rofs;
    s32 pos;
    s32 avail;
    s32 unk78;
    u8 pad7C[0x88 - 0x7C];
    void (*get)(s32, s32 *, s32 *, s32 *);
    s32 getCtx;
    void (*put)(s32, s32, s32);
    s32 putCtx;
    u8 pad98[0xA0 - 0x98];
    s32 count;
    s32 bytes;
};

struct Snd_803C0BE8 {
    u8 pad0[4];
    s32 state;
    s32 lobby;
    u8 pad0C[2];
    s8 channels;
    u8 pad0F[0x50 - 0x0F];
    u8 *src;
    s32 max;
    u8 pad58[0x64 - 0x58];
    s16 *dst;
    s32 size;
    s32 rofs;
    s32 pos;
    s32 avail;
    s32 unk78;
    u8 pad7C[0x88 - 0x7C];
    void (*get)(s32, s32 *, s32 *, s32 *);
    s32 getCtx;
    void (*put)(s32, s32, s32);
    s32 putCtx;
    u8 pad98[0xA0 - 0x98];
    s32 count;
    s32 bytes;
};

struct Rec_803C0018 { u8 state; u8 pad[0x9B]; };

struct AudioStreamSource;
struct AudioStreamChunk { void *data; s32 size; };

struct AudioStreamSourceVtable {
    void *pad[6];
    void (*lock)(AudioStreamSource *, s32, s32, AudioStreamChunk *);
    void (*unlock)(AudioStreamSource *, s32, AudioStreamChunk *);
    void (*f20)(AudioStreamSource *, s32, AudioStreamChunk *);
};

struct AudioStreamSource { AudioStreamSourceVtable *vt; };

struct AudioStreamInputState {
    u8 f0; s8 state; u8 f2; s8 f3; s32 f4; AudioStreamSource *f8; u8 pad_c[0x58 - 0xC];
    u8 f58[0x40]; s32 f98;
};

extern "C" {
extern s8 lbl_805D74B8;
void hwSetTimeOffset(s8 arg0);
extern s8 lbl_805D74B8;
u8 hwGetTimeOffset(void);
extern s32 lbl_805D7490;
void hwSetMesgCallback(s32 arg0);
extern M2C_UNK lbl_805D4638;
extern s32 lbl_805D748C;
void hwSetSRCType(s32 arg0, s32 arg1);
extern s32 lbl_805D748C;
extern M2C_UNK lbl_805D4640;
void hwSetPolyPhaseFilter(s32 arg0, s32 arg1);
void hwTransAddr(void);
void hwFrameDone(void);
extern s32 lbl_805D747C;
void hwDisableHRTF(void);
extern s32 lbl_805D748C;
s32 hwGetVirtualSampleID(s32 arg0);
extern s32 lbl_805D74CC;
void aramRemoveData(s32 arg0, s32 arg1);
void TLobby__sub_803BE0DC(void);
extern s32 lbl_805D74F0;
extern s32 lbl_805D7500;
void dspInitCallback(void);
s32 get_offset_58__6TLobbyFi(s32 arg0);
M2C_UNK get_field_34__6TLobbyFPv(int);
void TLobby__sub_803BFE58(u8 *arg0);
M2C_UNK get_field30__6TLobbyFPv(int);
void dispatch_field4_event__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_2c__6TLobbyFPv(int);
void send_with_offset4_alt__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_28__6TLobbyFPv(int);
void notify_client__6TLobbyFPv(u8 *arg0);
M2C_UNK get_slot__6TLobbyFPv(int);
void TLobby__sub_803BFEE8(u8 *arg0);
M2C_UNK TLobby__sub_803C3ABC(int);
void send_packet_by_id__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3AC4(int);
void notify_field_4_alt__6TLobbyFPv(u8 *arg0);
M2C_UNK get_packet_flag_for_state__6TLobbyFPv(int);
void send_packet_by_id_2__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3B38(int);
void send_with_offset4__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3B44(int);
void notify_field_4__6TLobbyFPv(u8 *arg0);
M2C_UNK get_field_a8__6TLobbyFPv(int);
void TLobby__sub_803BFFC0(u8 *arg0);
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2);
void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C0010(u8 *arg0);
M2C_UNK TLobby__sub_803C39CC(int);
void reset_flag__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803C0758(u8 *arg0);
M2C_UNK TLobby__sub_803C1A00(int);
void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1);
M2C_UNK invoke_notify_callback__6TLobbyFPv(int);
void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
void clear_record__6TLobbyFPv(void *);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
M2C_UNK memset(void *, int, int);
void reset_entry__6TLobbyFPv(u8 *arg0);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80570AC0;
void clear_session_buffer__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C406C(void);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80570AC0;
void reset_sound_buffers__6TLobbyFv(void);
s32 TLobby__sub_803C133C(void *);
void TLobby__sub_803C0B3C(u8 *arg0);
extern RecoveredGlobal_803BD5C4_lbl_805663D8 lbl_805663D8;
void hwSetAUXProcessingCallbacks(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 inpTranslateExCtrl(u8 arg0);
s32 TLobby__sub_803C07E8(Obj_803C07E8 *self);
s32 memcmp(void *, void *, int);
extern s32 lbl_805E0CB0;
extern s32 lbl_805E0CB8;
s32 is_riff_wave__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803C3B38(int);
s32 get_field_0x3c__6TLobbyFPv(int);
s32 TLobby__sub_803D2638(int);
void TLobby__sub_803C0628(void *arg0_, s32 *arg1, s32 *arg2, s32 *arg3);
s32 get_client_count__6TLobbyFPv(int);
void convert_pcm_u8_to_s16__6TLobbyFPv(Snd_803C0F98 *arg0);
s32 get_client_count__6TLobbyFPv(int);
void EXIGetID(Snd_803C0BE8 *arg0);
extern RecoveredGlobal_803C0B08_lbl_80570AC0 lbl_80570AC0;
void GXFlush(void);
M2C_UNK TLobby__sub_803C0238();
M2C_UNK get_field_a8__6TLobbyFPv(int);
s32 TLobby__sub_803C3B68(s32, void *, s32);
M2C_UNK TLobby__sub_803D3130(AudioStreamChunk *, s32, AudioStreamChunk *, AudioStreamChunk *);
void *memcpy(void *, const void *, u32);
void process_audio_stream_input(AudioStreamInputState *arg0);
}

extern "C" {

void sndConvertMs(s32 *arg0);
u32 sndConvert2Ms(u32 arg0);
void salApplyMatrix(u8 *arg0, u8 *arg1, u8 *arg2);

s32 get_offset_58__6TLobbyFi(s32 arg0) {
    return arg0 + 0x58;
}
void TLobby__sub_803BFE58(u8 *arg0) {
    get_field_34__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void dispatch_field4_event__6TLobbyFPv(u8 *arg0) {
    get_field30__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void send_with_offset4_alt__6TLobbyFPv(u8 *arg0) {
    get_field_2c__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void notify_client__6TLobbyFPv(u8 *arg0) {
    get_field_28__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void TLobby__sub_803BFEE8(u8 *arg0) {
    get_slot__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void send_packet_by_id__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3ABC((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void notify_field_4_alt__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3AC4((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void send_packet_by_id_2__6TLobbyFPv(u8 *arg0) {
    get_packet_flag_for_state__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void send_with_offset4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B38((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void notify_field_4__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C3B44((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void TLobby__sub_803BFFC0(u8 *arg0) {
    get_field_a8__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void set_field_44__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}
void set_field_40__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}
void set_field_3c__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
void TLobby__sub_803BFFFC(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}
void set_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}
s32 TLobby__sub_803C0010(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

struct Obj_803C0628;

void GXFlush(void) {
    s32 i;
    for (i = 0; i < 0x10; i++) {
        if ((s32)((Rec_803C0018 *)&lbl_80570AC0)[i].state == 1) {
            process_audio_stream_input((AudioStreamInputState *)(&((Rec_803C0018 *)&lbl_80570AC0)[i]));
        }
    }
}

#pragma push
#pragma inline_depth(4)
#pragma dont_inline off
inline void parse_audio_stream_input_header(AudioStreamInputState *arg0) {
    AudioStreamChunk b;
    AudioStreamChunk b2;
    AudioStreamSource *s = arg0->f8;
    s32 h = arg0->f4;
    s32 n;
    s->vt->lock(s, 1, 0x1000, &b);
    if (b.size < 0x10) {
        s->vt->unlock(s, 1, &b);
        return;
    }
    n = TLobby__sub_803C3B68(h, b.data, b.size);
    if (n == 0 || n > b.size) {
        s->vt->unlock(s, 1, &b);
        return;
    }
    arg0->f98 = n;
    if (get_field_a8__6TLobbyFPv(h) == 4) {
        arg0->f3 = 1;
    }
    if (get_field_a8__6TLobbyFPv(h) == 2) {
        memcpy(arg0->f58, b.data, b.size < 0x40 ? b.size : 0x40);
    }
    if (get_field_a8__6TLobbyFPv(h) == 10) {
        s->vt->unlock(s, 1, &b);
    } else {
        TLobby__sub_803D3130(&b, n, &b, &b2);
        s->vt->f20(s, 0, &b);
        s->vt->unlock(s, 1, &b2);
    }
    arg0->state = 2;
}
void process_audio_stream_input(AudioStreamInputState *arg0) {
    if (arg0->state == 2) {
        TLobby__sub_803C0238();
    } else if (arg0->state == 1) {
        parse_audio_stream_input_header(arg0);
    }
}
#pragma pop

void TLobby__sub_803C0628(void *arg0_, s32 *arg1, s32 *arg2, s32 *arg3) {
    S_803C0628 *arg0 = (S_803C0628 *)arg0_;
    s32 h;
    s32 i;
    s32 t;
    s32 v;
    h = (s32)arg0->objs[0];
    for (i = 0; i < ((s32)TLobby__sub_803C3B38(arg0->f4)); i++) {
        arg0->objs[i]->vt->fn18(arg0->objs[i], 0, 0x4000, &arg0->recs[i]);
    }
    *arg1 = (arg0->recs[0].a - TLobby__sub_803D2638(h)) / 2;
    v = arg0->f38;
    t = arg0->recs[0].b / 2;
    if (t < v) {
        v = t;
    }
    *arg2 = v;
    if (arg0->f3C >= 0) {
        *arg3 = arg0->f3C - arg0->f40;
    } else {
        *arg3 = 0x1FFFFFFF;
    }
    get_field_0x3c__6TLobbyFPv(arg0->f4);
}

void reset_flag__6TLobbyFPv(u8 *arg0) {
    TLobby__sub_803C39CC((int) (M2C_FIELD(arg0, s32 *, 4)));
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
void TLobby__sub_803C0758(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}
void set_network_result__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    TLobby__sub_803C1A00((int) (M2C_FIELD(arg0, s32 *, 4)));
}
void set_param_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    invoke_notify_callback__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
}

s32 TLobby__sub_803C07E8(Obj_803C07E8 *self) {
    return self->b;
}

void reset_entry__6TLobbyFPv(u8 *arg0) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 4));
        if (temp_r3 != NULL) {
            clear_record__6TLobbyFPv(temp_r3);
        }
        init_once__6TLobbyFv();
        memset((void *) (arg0), (int) (0), (int) (0x9C));
        release_ref__6TLobbyFv();
    }
}
void clear_session_buffer__6TLobbyFv(void) {
    memset((void *) (&(*(RecoveredGlobal_803C0AD8_lbl_80570AC0 *)&lbl_80570AC0).value), (int) (0), (int) (0x9C0));
}
void reset_sound_buffers__6TLobbyFv(void) {
    TLobby__sub_803C406C();
    memset((void *) (&lbl_80570AC0.value), (int) (0), (int) (0x9C0));
}
void TLobby__sub_803C0B3C(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xAA);
    if (temp_r0 == 2) {
        EXIGetID((Snd_803C0BE8 *)((void *) (arg0)));
        return;
    }
    if (temp_r0 == 1) {
        convert_pcm_u8_to_s16__6TLobbyFPv((Snd_803C0F98 *)((void *) (arg0)));
        return;
    }
    if (temp_r0 == 0) {
        TLobby__sub_803C133C((void *) (arg0));
    }
}
s32 is_riff_wave__6TLobbyFPv(u8 *arg0) {
    if (memcmp(arg0, &lbl_805E0CB0, 4) == 0 && memcmp(arg0 + 8, &lbl_805E0CB8, 4) == 0) {
        return 1;
    }
    return 0;
}

void EXIGetID(Snd_803C0BE8 *arg0) {
    u8 *src = arg0->src;
    s16 *l;
    s16 *r;
    s32 i;
    s32 n;
    if (arg0->state == 1 && get_client_count__6TLobbyFPv(arg0->lobby) == 0) {
        arg0->get(arg0->getCtx, &arg0->pos, &arg0->avail, &arg0->unk78);
        n = arg0->size - arg0->pos;
        if (n > arg0->avail) {
            n = arg0->avail;
        }
        if (n > arg0->max) {
            n = arg0->max;
        }
        l = arg0->dst + arg0->pos;
        if (arg0->channels == 2) {
            r = arg0->dst + (arg0->rofs + arg0->pos);
            for (i = 0; i < n; i++) {
                l[i] = src[i * 4] | (src[i * 4 + 2] << 8);
                r[i] = src[i * 4 + 1] | (src[i * 4 + 3] << 8);
            }
        } else {
            for (i = 0; i < n; i++) {
                l[i] = src[i * 2] | (src[i * 2 + 1] << 8);
            }
        }
        arg0->count = n;
        arg0->bytes = arg0->channels * (n * 2);
        arg0->state = 2;
    }
    if (arg0->state == 2) {
        arg0->put(arg0->putCtx, arg0->bytes, arg0->count);
        arg0->state = 3;
    }
}

void convert_pcm_u8_to_s16__6TLobbyFPv(Snd_803C0F98 *arg0) {
    u8 *src = arg0->src;
    s16 *l;
    s16 *r;
    s32 i;
    s32 n;
    if (arg0->state == 1 && get_client_count__6TLobbyFPv(arg0->lobby) == 0) {
        arg0->get(arg0->getCtx, &arg0->pos, &arg0->avail, &arg0->unk78);
        n = arg0->size - arg0->pos;
        if (n > arg0->avail) {
            n = arg0->avail;
        }
        if (n > arg0->max) {
            n = arg0->max;
        }
        l = arg0->dst + arg0->pos;
        if (arg0->channels == 2) {
            r = arg0->dst + (arg0->rofs + arg0->pos);
            for (i = 0; i < n; i++) {
                l[i] = (u8)(src[i * 2] - 0x80) << 8;
                r[i] = (u8)(src[i * 2 + 1] - 0x80) << 8;
            }
        } else {
            for (i = 0; i < n; i++) {
                l[i] = (u8)(src[i] - 0x80) << 8;
            }
        }
        arg0->count = n;
        arg0->bytes = n * arg0->channels;
        arg0->state = 2;
    }
    if (arg0->state == 2) {
        arg0->put(arg0->putCtx, arg0->bytes, arg0->count);
        arg0->state = 3;
    }
}

typedef char RecoveredGlobal_803C0B08_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0B08_lbl_80570AC0) == 0x9C0 ? 1 : -1];
typedef char RecoveredGlobal_803C0AD8_lbl_80570AC0_size[sizeof(RecoveredGlobal_803C0AD8_lbl_80570AC0) == 0x9C0 ? 1 : -1];

}
