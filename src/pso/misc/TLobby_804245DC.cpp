#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80428374_lbl_805D0A40 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_8042839C_lbl_805D0A40 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_1C { u8 bytes[0x1c]; };

struct RecoveredGlobal_8042E768_lbl_805D1D20 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80427D0C_lbl_805CFC20 {
    M2C_UNK value;
    u8 remaining[0xE1C];
};

struct RecoveredGlobal_80428360_lbl_805CFC20 {
    s16 value;
    u8 remaining[0xE1E];
};

struct RecoveredGlobal_8042DD70_lbl_805D1D20 {
    M2C_UNK value;
    u8 remaining[0x18];
};

typedef s32 M2C_UNK;

struct Rec_80426110 { u16 a; u16 b; };

struct Obj_80426110 { u8 pad[0x36]; s16 count; Rec_80426110 recs[5]; };

struct Msg_804264F4 { u32 f0; u32 f4; s32 f8; };

extern "C" {
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7BA8;
void TLobby__sub_804259F0(void);
s32 TLobby__sub_8042B9C0(void *);
extern s16 lbl_805D4828;
extern s32 lbl_805D7BB8;
extern u32 lbl_805D7BBC;
extern u32 lbl_805D7BC0;
void TLobby__sub_80425BD0(void);
void TLobby__sub_804253A0(s32);
void TLobby__sub_804264D4(s32 arg0);
s32 TLobby__sub_803F9E84(void *);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_804272B8(s32 *arg0, u8 *arg1);
M2C_UNK TLobby__sub_803F77E0(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
void TLobby__sub_80428374(void);
M2C_UNK __OSBootDol(void *);
extern RecoveredGlobal_80428374_lbl_805D0A40 lbl_805D0A40;
s32 TLobby__sub_8042839C(void);
void TLobby__sub_803F95E4(u32);
extern u32 lbl_805D7C00;
void TLobby__sub_804294C4(void);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK lbl_805D7C38;
void TLobby__sub_80429598(void);
s32 EXIDeselect(s32);
s32 EXIImm(s32, void *, s32, u32, u32);
s32 EXISelect(s32, u32, s32);
s32 EXISync(s32);
s32 EXIImmEx(s32, s32, s32, s32);
void TLobby__sub_804295BC(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_8042B370(int, int);
extern s32 lbl_805D7C40;
extern s32 lbl_805D7C54;
extern s32 lbl_805D7C7C;
extern s32 lbl_805D7C80;
void TLobby__sub_8042B334(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK lbl_805D7C30;
void TLobby__sub_8042B560(s32 arg0);
M2C_UNK OSDisableInterrupts();
M2C_UNK OSRestoreInterrupts();
extern s32 lbl_805D7C44;
extern s32 lbl_805D7C48;
void TLobby__sub_8042BA48(s32 arg0, s32 arg1);
M2C_UNK OSWakeupThread(void *);
extern M2C_UNK lbl_805D7CA0;
void TAdSinglePlyChrSelectGC__sub_8042BF48(void);
s32 EXILock(s32, u32, u32);
void TAdSinglePlyChrSelectGC__sub_8042DE20(void);
extern RecoveredGlobal_8042E768_lbl_805D1D20 lbl_805D1D20;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32 arg0);
s32 EXILock(s32, u32, u32);
s32 EXIUnlock(s32);
void TAdSinglePlyChrSelectGC__sub_8042D6A4(void *);
extern M2C_UNK lbl_805D4918;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042E84C(s32 arg0);
s32 TLobby__sub_8042B9C0(void *);
extern s16 lbl_805D4828;
s16 TLobby__sub_80426BD8(void);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
s16 TLobby__sub_80427D0C(s16 arg0);
extern RecoveredGlobal_80427D0C_lbl_805CFC20 lbl_805CFC20;
s32 TLobby__sub_80428360(void);
s16 TLobby__sub_803F96AC(void *, void *, void *);
void reset_buffer_pool__6TLobbyFv(void);
extern s32 lbl_805D7BE0;
extern s32 lbl_805D7BE8;
extern s32 lbl_805D7BEC;
extern s32 lbl_805D7BF0;
extern s32 lbl_805D7BF4;
extern s32 lbl_805D7BF8;
extern s32 lbl_805D7BFC;
extern u32 lbl_805D7C00;
s32 TLobby__sub_804294E8(void);
void TAdSinglePlyChrSelectGC__sub_8042DDE4(int, int);
extern RecoveredGlobal_8042E768_lbl_805D1D20 lbl_805D1D20;
extern s32 lbl_805D7C98;
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memcpy(void *, void *, int);
extern M2C_UNK lbl_805D7C30;
void TLobby__sub_8042B538(void *dst);
void TLobby__sub_80425DC8(void *q, void *a, void *b);
extern u8 lbl_805CF3C8[];
void TLobby__sub_80426A70(void *a, void *b);
s32 OSSendMessage(void *mq, void *msg, s32 flags);
extern u8 lbl_805CF380[];
extern s32 lbl_805D7BCC;
void TLobby__sub_80425D88(u8 v);
void TLobby__sub_80426190(Obj_80426110 *);
s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2);
s32 OSReceiveMessage(void *, void *, int);
extern u8 lbl_805CF2E0[];
u16 TLobby__sub_804264F4(s32 *arg0, u16 *arg1);
s32 TLobby__sub_803F9F04(void *, void *, int);
extern u8 lbl_805CF3C8[];
extern s32 lbl_805D7BB0;
s32 TLobby__sub_80426790(s16 arg0, void *arg1);
s16 TLobby__sub_804262CC(void *);
extern u8 lbl_805CF3C8[];
s32 TLobby__sub_80426B88(s16 arg0);
extern s32 lbl_805D7BC8;
s32 TLobby__sub_80426C34(s32 arg0);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_80427240(u8 **arg0);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_804277FC(s32 arg0, u8 *arg1, u16 arg2);
u8 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out);
void TLobby__sub_80419DDC(void *);
s32 TLobby__sub_80421B3C(s32);
s32 TLobby__sub_804250A8(s32);
extern u8 TLobby__sub_80423298[];
extern s32 lbl_805D7B14;
extern s16 lbl_805D7B18;
void TLobby__sub_80424CA8(void);
}

extern "C" {

s32 TLobby__sub_80426440(void);
s32 TLobby__sub_80428358(void);
s32 fn_8042E8B8(void);
s32 get_task_count__6TLobbyFv(void);
void reset_buffer_pool__6TLobbyFv(void);

extern s32 lbl_805D4820;

s32 get_task_count__6TLobbyFv(void) {
    return lbl_805D4820;
}

u8 TLobby__sub_80424830(u8 *p, u8 tag, u8 **out) {
    u8 *base = p;
    u8 t;
    u8 len;
    p += 4;
    while ((s32)((u32)base - (u32)p) < 0x4D4) {
        t = *p++;
        if (t == 0) {
            continue;
        }
        if (t == 0xFF) {
            return 0;
        }
        if (t == tag) {
            len = *p++;
            *out = p;
            return len;
        }
        len = *p++;
        p += len;
    }
    return 0;
}

void TLobby__sub_80424CA8(void) {
    TLobby__sub_80419DDC(TLobby__sub_80423298);
    if (lbl_805D7B18 != -1) {
        TLobby__sub_80421B3C(lbl_805D7B18);
        lbl_805D7B18 = -1;
    }
    lbl_805D7B14 = TLobby__sub_804250A8(0);
}

void TLobby__sub_804259F0(void) {
    TLobby__sub_803F95E4(lbl_805D7BA8);
}

void TLobby__sub_80425BD0(void) {
    s32 sp8;
    if (TLobby__sub_8042B9C0(&sp8) == 1) {
        if (sp8 != (s32) lbl_805D7BB8) {
            lbl_805D7BB8 = sp8;
            lbl_805D7BBC = 1U;
        } else if ((u32) lbl_805D7BBC != 0U) {
            lbl_805D7BBC += 1;
        }
        if ((u32) lbl_805D7BBC >= (u32) lbl_805D7BC0) {
            if ((s32) lbl_805D7BB8 == 1) {
                lbl_805D4828 = 1;
            } else {
                lbl_805D4828 = 0;
            }
            lbl_805D7BBC = 0U;
            lbl_805D7BC0 = 0xAU;
        }
    }
}

void TLobby__sub_80425D88(u8 v) {
    lbl_805D7BCC++;
    OSSendMessage(lbl_805CF380, (void *)v, 0);
}

s16 TLobby__sub_80426110(Obj_80426110 *o, u16 arg1, u16 arg2) {
    s32 i;
    Rec_80426110 *p = o->recs;
    for (i = 5; i != 0; i--, p++) {
        if (p->a != 0) {
            if (p->b != arg2) {
                continue;
            }
            break;
        } else {
            p->a = arg1;
            p->b = arg2;
            o->count++;
            if (o->count > 0) {
                TLobby__sub_80426190(o);
            }
            return 0;
        }
    }
    return -1;
}

s32 TLobby__sub_80426440(void) {
    return 0;
}

void TLobby__sub_804264D4(s32 arg0) {
    TLobby__sub_804253A0(arg0);
}

u16 TLobby__sub_804264F4(s32 *arg0, u16 *arg1) {
    Msg_804264F4 *msg;
    if (OSReceiveMessage(lbl_805CF2E0, &msg, 0) == 1) {
        *arg0 = msg->f8;
        *arg1 = msg->f4;
        return msg->f4;
    }
    return 0;
}

s32 TLobby__sub_80426790(s16 arg0, void *arg1) {
    if (arg0 != 0) {
        return -0x113;
    }
    u8 *src = lbl_805CF3C8;
    if (lbl_805D7BB0 == 0) {
        return -0x113;
    }
    TLobby__sub_803F9F04(arg1, src, 6);
    return 6;
}

s32 TLobby__sub_80426A18(s16 arg0, u16 arg1) {
    if (arg0 != 0) {
        return -0x113;
    }
    Obj_80426110 *g = (Obj_80426110 *)lbl_805CF3C8;
    if (TLobby__sub_80426110(g, 1, arg1) < 0) {
        return -0x113;
    }
    return 0;
}

void TLobby__sub_80426A70(void *a, void *b) {
    if (a != NULL) {
        void *q = lbl_805CF3C8;
        TLobby__sub_80425DC8(q, a, b);
    }
}

s32 TLobby__sub_80426B88(s16 arg0) {
    if (arg0 != 0) {
        return -0x113;
    }
    void *g = lbl_805CF3C8;
    if (TLobby__sub_804262CC(g) < 0) {
        return -0x113;
    }
    return 0;
}

s16 TLobby__sub_80426BD8(void) {
    s32 sp8;
    if ((s16) lbl_805D4828 != -1) {
        return lbl_805D4828;
    }
    if (TLobby__sub_8042B9C0((void *) (&sp8)) == 1) {
        if (sp8 == 1) {
            return 1;
        }
        return 0;
    }
    return -1;
}

s32 TLobby__sub_80426C34(s32 arg0) {
    switch (arg0) {
    case 1:
        lbl_805D7BC8 = 1;
        break;
    case 2:
        lbl_805D7BC8 = 2;
        break;
    case 3:
        lbl_805D7BC8 = 3;
        break;
    case 4:
        lbl_805D7BC8 = 4;
        break;
    case 0:
        lbl_805D7BC8 = 0;
        break;
    default:
        return -1;
    }
    return 0;
}

s32 TLobby__sub_80427240(u8 **arg0) {
    s16 a = 0;
    s16 b;
    u8 pad[6];
    TLobby__sub_803F9F04(*arg0, &a, 2);
    *arg0 += 2;
    b = 0;
    TLobby__sub_803F9F04(*arg0, &b, 2);
    *arg0 += 2;
    return 4;
}

s32 TLobby__sub_804272B8(s32 *arg0, u8 *arg1) {
    struct Fields_arg1 { u8 pad_0[58]; u8 field_3A; };
    s16 sp12;
    s16 sp10;
    s16 temp_r3;
    if ((u8) ((Fields_arg1*)arg1)->field_3A == 0) {
        return 0;
    }
    sp12 = 0x102;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (&sp12), (int) (2));
    *arg0 += 2;
    temp_r3 = TLobby__sub_803F9E84((void *) (arg1 + 0x3A));
    sp10 = temp_r3;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (&sp10), (int) (2));
    *arg0 += 2;
    TLobby__sub_803F9F04((void *) (*arg0), (void *) (arg1 + 0x3A), (int) (temp_r3));
    *arg0 += temp_r3;
    return temp_r3 + 4;
}

typedef char RecoveredGlobal_80427D0C_lbl_805CFC20_size[sizeof(RecoveredGlobal_80427D0C_lbl_805CFC20) == 0xE20 ? 1 : -1];

s32 TLobby__sub_804277FC(s32 arg0, u8 *arg1, u16 arg2) {
    u8 *p = arg1;
    u16 len = arg2;
    u16 a;
    u16 b;
    u8 pad[4];
    s32 t;
    while (len != 0) {
        TLobby__sub_803F9F04(&a, p, 2);
        if (a == 0) {
            break;
        }
        TLobby__sub_803F9F04(&b, p + 2, 2);
        t = b + 4;
        p += t;
        len -= t;
    }
    return 0;
}

s16 TLobby__sub_80427D0C(s16 arg0) {
    if ((arg0 < 0) || (arg0 >= 1)) {
        return -1;
    }
    return M2C_FIELD(((u8 *)(&lbl_805CFC20.value) + (arg0 * 0xE14)), s16 *, 0);
}

s32 TLobby__sub_80428358(void) {
    return 0;
}

extern u32 lbl_805D7C04;
extern s32 lbl_805D7C08;
extern s32 lbl_805D7C0C;
extern u32 lbl_805D7C10;
extern u32 lbl_805D7C14;
extern u32 lbl_805D7C18;
extern s32 lbl_805D7C1C;
extern s32 lbl_805D7C20;
extern s32 lbl_805D7C24;
extern s32 lbl_805D7C28;

typedef char RecoveredGlobal_80428374_lbl_805D0A40_size[sizeof(RecoveredGlobal_80428374_lbl_805D0A40) == 0x60 ? 1 : -1];

typedef char RecoveredGlobal_80428360_lbl_805CFC20_size[sizeof(RecoveredGlobal_80428360_lbl_805CFC20) == 0xE20 ? 1 : -1];
s32 TLobby__sub_80428360(void) {
    (*(RecoveredGlobal_80428360_lbl_805CFC20 *)&lbl_805CFC20).value = -1;
    return 0;
}

void TLobby__sub_80428374(void) {
    TLobby__sub_803F77E0((void *) (&lbl_805D0A40.value));
}

typedef char RecoveredGlobal_8042839C_lbl_805D0A40_size[sizeof(RecoveredGlobal_8042839C_lbl_805D0A40) == 0x60 ? 1 : -1];
s32 TLobby__sub_8042839C(void) {
    __OSBootDol((void *) (&(*(RecoveredGlobal_8042839C_lbl_805D0A40 *)&lbl_805D0A40).value));
    return 0;
}

void TLobby__sub_804294C4(void) {
    TLobby__sub_803F95E4(lbl_805D7C00);
}

s32 TLobby__sub_804294E8(void) {
    lbl_805D7BEC = lbl_805D7BE0;
    lbl_805D7BF0 = lbl_805D7BE0;
    lbl_805D7BF4 = lbl_805D7BE0;
    lbl_805D7BF8 = lbl_805D7BE0 + lbl_805D7BE8;
    lbl_805D7BFC = lbl_805D7BE8;
    if (TLobby__sub_803F96AC((void *) (&lbl_805D7C00), (void *) (lbl_805D7BE0), (void *) (lbl_805D7BE8)) < 0) {
        return -1;
    }
    reset_buffer_pool__6TLobbyFv();
    return 0;
}

void reset_buffer_pool__6TLobbyFv(void) {
    lbl_805D7C0C = 0;
    lbl_805D7C24 = 0;
    lbl_805D7C28 = 0;
    if ((u32) lbl_805D7C04 != 0U) {
        lbl_805D7C10 = lbl_805D7C04;
        lbl_805D7C14 = lbl_805D7C04;
        lbl_805D7C18 = lbl_805D7C04;
        lbl_805D7C1C = lbl_805D7C04 + lbl_805D7C08;
        lbl_805D7C20 = lbl_805D7C08;
        return;
    }
    lbl_805D7C10 = 0U;
    lbl_805D7C14 = 0U;
    lbl_805D7C18 = 0U;
    lbl_805D7C1C = 0;
    lbl_805D7C20 = 0;
}

void TLobby__sub_80429598(void) {
    OSWakeupThread((void *) (&lbl_805D7C38));
}

void TLobby__sub_804295BC(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    sp14 = ((arg0 << 8) & 0xFFFF00) | 0x80000000;
    EXISelect(0, 2U, 5);
    EXIImm(0, &sp14, 4, 1U, 0U);
    EXISync(0);
    EXIImmEx(0, arg1, arg2, 0);
    EXIDeselect(0);
}

void TLobby__sub_8042B334(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    s32 var_r4;
    lbl_805D7C7C = arg0;
    var_r3 = 0;
    lbl_805D7C80 = arg1;
    var_r4 = 0;
    lbl_805D7C40 = 1;
    lbl_805D7C54 = arg2;
    TLobby__sub_8042B370((int) (0), (int) (0));
}

void TLobby__sub_8042B538(void *dst) {
    memcpy(dst, &lbl_805D7C30, 6);
}

void TLobby__sub_8042B560(s32 arg0) {
    memcpy((void *) (&lbl_805D7C30), (void *) (arg0), (int) (6));
}

void TLobby__sub_8042BA48(s32 arg0, s32 arg1) {
    OSDisableInterrupts();
    lbl_805D7C44 = arg0;
    lbl_805D7C48 = arg1;
    OSRestoreInterrupts();
}

void TAdSinglePlyChrSelectGC__sub_8042BF48(void) {
    OSWakeupThread((void *) (&lbl_805D7CA0));
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8042DD70_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042DD70_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042DD70(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB0) != 0) {
        return -4;
    }
    if ((s32) lbl_805D7C98 != 3) {
        return -7;
    }
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB0) = 1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB4) = arg0;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xBC) = arg1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xB8) = arg1;
    M2C_FIELD(&(*(RecoveredGlobal_8042DD70_lbl_805D1D20 *)&lbl_805D1D20).value, s32 *, 0xD8) = arg2;
    TAdSinglePlyChrSelectGC__sub_8042DDE4((int)((int) (0)), (int)((int) (0)));
    return 1;
}
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8042DDE4(int _w0, int _w1) {
    if (EXILock(0, 2U, (u32) TAdSinglePlyChrSelectGC__sub_8042DDE4) != 0) {
        TAdSinglePlyChrSelectGC__sub_8042DE20();
    }
}

typedef char RecoveredGlobal_8042E768_lbl_805D1D20_size[sizeof(RecoveredGlobal_8042E768_lbl_805D1D20) == 0x1C ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32 arg0) {
    if (arg0 != 0U) {
        *(M2CCopy_1C *)(arg0) = *(const M2CCopy_1C *)(&lbl_805D1D20.value);
    }
    return lbl_805D7C98;
}

s32 TAdSinglePlyChrSelectGC__sub_8042E84C(s32 arg0) {
    if ((arg0 == 0) && ((s32) lbl_805D7C98 == 3)) {
        lbl_805D7C98 = 1;
        if (EXILock(0, 2U, 0U) == 0) {
            return 1;
        }
        TAdSinglePlyChrSelectGC__sub_8042D6A4(&lbl_805D4918);
        EXIUnlock(0);
        goto block_5;
    }
block_5:
    return 1;
}

s32 fn_8042E8B8(void) {
    return 0x80003100;
}

}
