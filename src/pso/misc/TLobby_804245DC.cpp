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

s32 TLobby__sub_80426440(void) {
    return 0;
}

void TLobby__sub_804264D4(s32 arg0) {
    TLobby__sub_804253A0(arg0);
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
