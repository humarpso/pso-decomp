#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803F1548_lbl_805A2720 {
    M2C_UNK value;
    u8 remaining[0x19C];
};

struct RecoveredGlobal_803F0CF4_lbl_805A2720 {
    M2C_UNK value;
    u8 remaining[0x19C];
};

struct K_803F119C { u8 pad0[0x10]; s32 f10; s32 f14; u8 pad1[0x18]; s32 f30; u8 pad2[0x34]; };

struct Pad_803F0C50 {
    u8 a;
    u8 b;
    u8 pad2[0x1A];
    s32 x1c;
    u8 queue[8];
    s32 x28;
    s32 x2c;
    u8 pad30[4];
    u8 x34[4];
    u8 x38[4];
    u8 pad3c[0x2C];
};

struct Pad_803F0E90 {
    u8 pad0[3];
    u8 x3;
    u8 pad4[0x14];
    void *x18;
    u8 pad1c[0x4C];
};

struct Pad_803F0D74 {
    u8 a;
    u8 b;
    u8 pad2;
    u8 x3;
    u8 pad4[3];
    u8 x7;
    u8 x8;
    u8 x9;
    u8 padA[0x12];
    s32 x1c;
    u8 pad20[8];
    s32 x28;
    s32 x2c;
    u8 pad30[0x38];
};

struct OSContext_803F0F84 { u8 a[0x90]; f64 fpr[32]; u8 rest[0x138]; };

struct Pad_803F0F84 {
    u8 a;
    u8 pad1[0x17];
    void (*x18)(s32, s32);
    s32 x1c;
    u8 pad20[0x10];
    void (*x30)(s32);
    u8 pad34[0x34];
};

struct Pad_803F107C {
    u8 a;
    u8 pad1[2];
    u8 out[4];
    u8 in[9];
    u32 outBytes;
    u32 inBytes;
    void (*x18)(s32, s32);
    s32 x1c;
    u8 pad20[8];
    s64 delay;
    void (*x30)(s32);
    u8 pad34[0x34];
};

struct Kbd_803F1210 {
    u8 pad0[0xB];
    u8 k0;
    u8 k1;
    u8 k2;
    u8 padE[0x26];
    u8 prev[4];
    u8 cur[4];
};

typedef s32 M2C_UNK;
struct Kbd_803F1210;
struct Kb_803F132C {
    u8 type;
    u8 pad1[0x1B];
    s32 err;
    u8 pad20[0x14];
    u8 prev[4];
    u8 cur[4];
    u8 queue[32];
    u32 count;
    u32 head;
    u8 pad64[4];
};

extern "C" {
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
u8 TKeyBoardControl__sub_803F1548(s32 arg0);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
void parse_pad_event__16TKeyBoardControlFiUi(s32 arg0, u32 arg1);
s32 SIDisablePolling(u32);
extern s32 lbl_805D793C;
void disable_channel_polling__16TKeyBoardControlFi(s32 arg0);
extern s32 lbl_805D793C;
extern s32 lbl_805D7930;
void disable_channel_polling__16TKeyBoardControlFi(s32 arg0);
s32 disable_all_channels__16TKeyBoardControlFv(void);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
void Dolphin_SIGetTypeAsync(s32, void *);
void TKeyBoardControl__sub_803F107C(s32 chan, u32 type);
s32 start_get_type_async__16TKeyBoardControlFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void OSInitThreadQueue(void *);
s32 OSRegisterResetFunction(void *);
s32 SIRefreshSamplingRate(void);
void *memset(void *, int, u32);
extern u8 lbl_804FCD38[];
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
extern s32 lbl_805D7930;
void init_pad_states__16TKeyBoardControlFv(void);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
s32 start_get_type_async__16TKeyBoardControlFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TKeyBoardControl__sub_803F0E8C(void);
s32 TKeyBoardControl__sub_803F0E90(s32 arg0, void *arg1);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
extern s32 lbl_805D7930;
void detect_device_type__16TKeyBoardControlFi(s32 chan);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
extern s32 lbl_805D7930;
void OSClearContext(OSContext_803F0F84 *);
void OSSetCurrentContext(OSContext_803F0F84 *);
void handle_pad_transfer_done__16TKeyBoardControlFiUiPv(s32 chan, u32 status, OSContext_803F0F84 *ctx);
void *memcpy(void *, const void *, u32);
void update_pressed_keys__16TKeyBoardControlFPv(Kbd_803F1210 *p);
s32 SITransfer(s32 chan, void *out, u32 outBytes, void *in, u32 inBytes, void (*cb)(s32, u32, OSContext_803F0F84 *), s64 delay);
OSContext_803F0F84 *OSGetCurrentContext(void);
s32 __OSReschedule(void);
void SISetCommand(s32, u32);
void SIEnablePolling(u32);
s32 SIGetResponse(s32, void *);
extern s32 lbl_805D793C;
void enable_keyboard_polling__16TKeyBoardControlFi(s32 arg0);
extern RecoveredGlobal_803F1548_lbl_805A2720 lbl_805A2720;
void *memset(void *, int, u32);
void update_pressed_keys__16TKeyBoardControlFPv(Kbd_803F1210 *p);
void update_key_events__16TKeyBoardControlFi(s32 chan);
}

extern "C" {

void TKeyBoardControl__sub_803F0E8C(void);

typedef char RecoveredGlobal_803F0CF4_lbl_805A2720_size[sizeof(RecoveredGlobal_803F0CF4_lbl_805A2720) == 0x1A0 ? 1 : -1];

void init_pad_states__16TKeyBoardControlFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Pad_803F0C50 *p = &((Pad_803F0C50 *)&lbl_805A2720)[i];
        p->x2c = 0;
        p->x28 = 0;
        p->a = 0;
        p->b = 0;
        p->x1c = 0;
        memset(p->x38, 0, 4);
        memset(p->x34, 0, 4);
        OSInitThreadQueue(p->queue);
    }
    SIRefreshSamplingRate();
    lbl_805D7930 = 0;
    OSRegisterResetFunction(lbl_804FCD38);
}

void parse_pad_event__16TKeyBoardControlFiUi(s32 arg0, u32 arg1) {
    struct Fields_temp_r4 { s8 field_0; s8 field_1; u8 pad_2[38]; s32 field_28; s32 field_2C; };
    s32 temp_r0;
    u32 temp_r6;
    u8 *temp_r4;
    temp_r6 = arg1 >> 0x10U;
    temp_r0 = (arg1 >> 0x10U) & 0xFFF0;
    temp_r4 = (u8 *)&(*(RecoveredGlobal_803F0CF4_lbl_805A2720 *)&lbl_805A2720).value + (arg0 * 0x68);
    switch (temp_r0) {
    case 0x820:
        ((Fields_temp_r4*)temp_r4)->field_0 = 1;
        ((Fields_temp_r4*)temp_r4)->field_1 = (s8) (temp_r6 & 0xF);
        ((Fields_temp_r4*)temp_r4)->field_2C = 0;
        ((Fields_temp_r4*)temp_r4)->field_28 = 0;
        return;
    case 0x830:
        ((Fields_temp_r4*)temp_r4)->field_0 = 2;
        ((Fields_temp_r4*)temp_r4)->field_1 = (s8) (temp_r6 & 0xF);
        ((Fields_temp_r4*)temp_r4)->field_2C = 0;
        ((Fields_temp_r4*)temp_r4)->field_28 = 0;
        return;
    default:
        ((Fields_temp_r4*)temp_r4)->field_1 = 0;
        ((Fields_temp_r4*)temp_r4)->field_0 = 0;
        return;
    }
}

void detect_device_type__16TKeyBoardControlFi(s32 chan) {
    Pad_803F0D74 *p = &((Pad_803F0D74 *)&lbl_805A2720)[chan];
    u32 type;
    if (p->x1c != 0) {
        return;
    }
    type = (p->x7 << 24) | (p->x8 << 16);
    switch ((type >> 16) & 0xFFF0) {
    case 0x820:
        p->a = 1;
        p->b = (type >> 16) & 0xF;
        p->x2c = 0;
        p->x28 = 0;
        break;
    case 0x830:
        p->a = 2;
        p->b = (type >> 16) & 0xF;
        p->x2c = 0;
        p->x28 = 0;
        break;
    default:
        p->b = 0;
        p->a = 0;
        break;
    }
    if ((s32)p->a >= 3 || (s32)p->a < 1) {
        p->x1c = -1;
        return;
    }
    if (p->x9 & 0x10) {
        p->x1c = -0x80;
        return;
    }
    if (p->x9 & 8) {
        p->x1c = -3;
        return;
    }
    if (p->x3 == 0xFF && lbl_805D7930 == 0) {
        enable_keyboard_polling__16TKeyBoardControlFi((s32)(chan));
    }
}

void TKeyBoardControl__sub_803F0E8C(void) {

}
typedef char RecoveredGlobal_803F1548_lbl_805A2720_size[sizeof(RecoveredGlobal_803F1548_lbl_805A2720) == 0x1A0 ? 1 : -1];

s32 TKeyBoardControl__sub_803F0E90(s32 arg0, void *arg1) {
    Pad_803F0E90 *p = &((Pad_803F0E90 *)&lbl_805A2720)[arg0];
    void *cb;
    s32 ret;
    s32 lvl;
    cb = arg1 != NULL ? arg1 : (void *)TKeyBoardControl__sub_803F0E8C;
    lvl = OSDisableInterrupts();
    if (p->x18 != NULL) {
        ret = -2;
    } else {
        p->x18 = cb;
        ret = 0;
    }
    OSRestoreInterrupts(lvl);
    if (ret != 0) {
        return ret;
    }
    p->x3 = 0xFF;
    return start_get_type_async__16TKeyBoardControlFiiii(arg0, 1, 3, (s32)detect_device_type__16TKeyBoardControlFi);
}

s32 disable_all_channels__16TKeyBoardControlFv(void) {
    u32 v;
    while ((v = (u32)lbl_805D793C) != 0) {
        disable_channel_polling__16TKeyBoardControlFi(__cntlzw(v));
    }
    lbl_805D7930 = 1;
    return 1;
}

void handle_pad_transfer_done__16TKeyBoardControlFiUiPv(s32 chan, u32 status, OSContext_803F0F84 *ctx) {
    Pad_803F0F84 *p = &((Pad_803F0F84 *)&lbl_805A2720)[chan];
    u8 unused[8];
    OSContext_803F0F84 tmp;
    void (*cb)(s32);
    void (*cb2)(s32, s32);
    if (lbl_805D7930 != 0) {
        return;
    }
    if (status & 8) {
        p->a = 0;
        p->x1c = -1;
    } else if (status & 7) {
        p->x1c = -3;
    } else {
        p->x1c = 0;
    }
    if ((cb = p->x30) != 0) {
        p->x30 = 0;
        cb(chan);
    }
    if (p->x18 != 0) {
        OSClearContext(&tmp);
        OSSetCurrentContext(&tmp);
        cb2 = p->x18;
        p->x18 = 0;
        cb2(chan, p->x1c);
        OSClearContext(&tmp);
        OSSetCurrentContext(ctx);
    }
}

void TKeyBoardControl__sub_803F107C(s32 chan, u32 type) {
    Pad_803F107C *p = &((Pad_803F107C *)&lbl_805A2720)[chan];
    u8 unused[8];
    OSContext_803F0F84 tmp;
    OSContext_803F0F84 *old;
    void (*cb)(s32);
    void (*cb2)(s32, s32);

    if (lbl_805D7930 != 0) {
        return;
    }
    parse_pad_event__16TKeyBoardControlFiUi(chan, type);
    if (p->a != 0) {
        if (SITransfer(chan, p->out, p->outBytes, p->in, p->inBytes, handle_pad_transfer_done__16TKeyBoardControlFiUiPv, p->delay) != 0) {
            return;
        }
        p->x1c = -2;
    } else {
        p->x1c = -1;
    }
    if ((cb = p->x30) != 0) {
        p->x30 = 0;
        cb(chan);
    }
    if (p->x18 != 0) {
        old = OSGetCurrentContext();
        OSClearContext(&tmp);
        OSSetCurrentContext(&tmp);
        cb2 = p->x18;
        p->x18 = 0;
        cb2(chan, p->x1c);
        OSClearContext(&tmp);
        OSSetCurrentContext(old);
        __OSReschedule();
    }
}
s32 start_get_type_async__16TKeyBoardControlFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 en;
    K_803F119C *k = &((K_803F119C *)&lbl_805A2720)[arg0];
    en = OSDisableInterrupts();
    k->f30 = arg3;
    k->f10 = arg1;
    k->f14 = arg2;
    Dolphin_SIGetTypeAsync(arg0, (void *)TKeyBoardControl__sub_803F107C);
    OSRestoreInterrupts(en);
    return 0;
}

void update_pressed_keys__16TKeyBoardControlFPv(Kbd_803F1210 *p) {
    s32 n;
    memcpy(p->prev, p->cur, 4);
    if (p->k0 == 1 || p->k0 == 2) {
        return;
    }
    n = 0;
    if (p->k0 != 0) {
        n = 1;
        p->cur[0] = p->k0;
    }
    if (p->k1 != 0) {
        ((u8 *)p)[n++ + 0x38] = p->k1;
    }
    if (p->k2 != 0) {
        ((u8 *)p)[n++ + 0x38] = p->k2;
    }
    for (; n < 4; n++) {
        p->cur[n] = 0;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 kb_push_803F132C(Kb_803F132C *k, u8 c) {
    if (k->count < 32) {
        k->queue[(k->head + k->count) & 31] = c;
        k->count++;
        return 1;
    }
    return 0;
}
void update_key_events__16TKeyBoardControlFi(s32 chan) {
    Kb_803F132C *k;
    u8 c;
    s32 j;
    s32 i;
    s32 j2;
    u8 c2;
    s32 i2;
    k = &((Kb_803F132C *)&lbl_805A2720)[chan];
    if (k->err == -1) {
        memset(k->prev, 0, 4);
        memset(k->cur, 0, 4);
    }
    if (k->err != 0) {
        return;
    }
    switch (k->type) {
    case 1:
    case 2:
        update_pressed_keys__16TKeyBoardControlFPv((Kbd_803F1210 *)k);
        break;
    default:
        return;
    }
    for (i = 0; i < 4 && k->count < 32; i++) {
        c = k->prev[i];
        if (c != 0) {
            for (j = 0; j < 4; j++) {
                if (c == k->cur[j]) {
                    break;
                }
            }
            if (j == 4) {
                if (!kb_push_803F132C(k, c | 0x80)) {
                    k->err = -4;
                    return;
                }
            }
        }
    }
    for (i2 = 0; i2 < 4; i2++) {
        c2 = k->cur[i2];
        if (c2 != 0) {
            for (j2 = 0; j2 < 4; j2++) {
                if (c2 == k->prev[j2]) {
                    break;
                }
            }
            if (j2 == 4) {
                if (!kb_push_803F132C(k, c2)) {
                    k->err = -4;
                    return;
                }
            }
        }
    }
}
#pragma pop

u8 TKeyBoardControl__sub_803F1548(s32 arg0) {
    return M2C_FIELD(((u8 *)&lbl_805A2720.value + (arg0 * 0x68)), u8 *, 1);
}

void enable_keyboard_polling__16TKeyBoardControlFi(s32 arg0) {
    u32 cmd;
    u32 buf[2];
    u32 bit = 0x80000000U >> arg0;
    if (!(lbl_805D793C & bit)) {
        lbl_805D793C |= bit;
        SIGetResponse(arg0, buf);
        cmd = 0x540000;
        SISetCommand(arg0, cmd);
        SIEnablePolling(lbl_805D793C);
    }
}

void disable_channel_polling__16TKeyBoardControlFi(s32 arg0) {
    u32 temp_r31;
    temp_r31 = 0x80000000U >> arg0;
    SIDisablePolling(temp_r31);
    lbl_805D793C &= ~temp_r31;
}

}
