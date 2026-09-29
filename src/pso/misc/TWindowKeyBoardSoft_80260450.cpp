#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80260808_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124
{
  M2C_UNK value;
  u8 remaining[0x10];
};

struct RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8
{
  M2C_UNK value;
  u8 remaining[0x6C];
};

struct Win_802605DC { u8 p0[0x65]; s8 f65; s8 f66; };

extern "C" {
extern const f32 TWindowKeyBoardSoft__data_805DD078;
extern const f32 TWindowKeyBoardSoft__data_805DD07C;
f32 TWindowKeyBoardSoft__sub_80260728(M2C_UNK arg0, s32 arg1);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
M2C_UNK TWindowKeyBoardSoft__sub_8025C24C(int);
extern RecoveredGlobal_80260808_lbl_8050E208 lbl_8050E208;
void TWindowKeyBoardSoft__sub_80260808(u8 *arg0, s32 arg1);
extern u8 *TWindowKeyBoardSoft__data_805D5548;
extern const f32 TWindowKeyBoardSoft__data_805DD080;
extern const f32 lbl_805DD084;
f32 TWindowKeyBoardSoft__sub_802606E0(void);
s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3);
f32 TWindowKeyBoardSoft__sub_80260728(M2C_UNK arg0, s32 arg1);
M2C_UNK TWindowKeyBoardSoft__sub_80260760(void *, int, void *, int);
extern RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124 TWindowKeyBoardSoft__data_8044F124;
extern RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8 TWindowKeyBoardSoft__data_804CB7C8;
extern const f32 TWindowKeyBoardSoft__data_805DD078;
extern const f32 TWindowKeyBoardSoft__data_805DD07C;
extern const f32 TWindowKeyBoardSoft__data_805DD080;
f32 TWindowKeyBoardSoft__sub_8026062C(s32 arg0, s32 arg1, s32 arg2);
s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3);
extern RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8 TWindowKeyBoardSoft__data_804CB7C8;
extern RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124 TWindowKeyBoardSoft__data_8044F124;
s32 TWindowKeyBoardSoft__sub_802605DC(Win_802605DC *w);
}

extern "C" {

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2);
s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3);
void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0);
extern const f32 TWindowKeyBoardSoft__data_805DD088;
extern const f32 lbl_805DD08C;
void TWindowKeyBoardSoft__sub_80261204(u8 *arg0, s32 arg1);
s32 TWindowSubMag__sub_802627D8(s32);
s32 get_flag_bit5__13TWindowSubMagFPv();
s32 get_flag_bit6__13TWindowSubMagFPv(s32);
s32 is_cursor_locked__13TWindowSubMagFPv(s32);

extern s32 lbl_805D5544;

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2) {
    switch ((s32) lbl_805D5544) {
    case 0:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 4;
            *arg2 = 4;
            return;
        }
        if (TWindowSubMag__sub_802627D8(arg0) != 0) {
            *arg1 = 4;
            *arg2 = 5;
            return;
        }
        *arg1 = 0;
        *arg2 = 5;
        return;
    case 1:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        *arg1 = 0;
        *arg2 = 1;
        return;
    case 2:
    case 3:
    case 4:
        if ((get_flag_bit5__13TWindowSubMagFPv() != 0) || (get_flag_bit6__13TWindowSubMagFPv(arg0) != 0) || (is_cursor_locked__13TWindowSubMagFPv(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        if (TWindowSubMag__sub_802627D8(arg0) != 0) {
            *arg1 = 0;
            *arg2 = 1;
            return;
        }
        *arg1 = 0;
        *arg2 = 2;
        return;
    }
}

typedef struct RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124 RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124;
typedef struct RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8 RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8;
#pragma fp_contract on
typedef char RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124_size[((sizeof(RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_8044F124)) == 0x14) ? (1) : (-1)];
typedef char RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8_size[((sizeof(RecoveredGlobal_8026062C_TWindowKeyBoardSoft__data_804CB7C8)) == 0x70) ? (1) : (-1)];

s32 TWindowKeyBoardSoft__sub_802605DC(Win_802605DC *w) {
    s32 idx = calc_key_index__19TWindowKeyBoardSoftFiii((s32)(w), (s32)(w->f65), (s32)(w->f66));
    return idx + ((s8 *)&TWindowKeyBoardSoft__data_8044F124)[((u8 *)&TWindowKeyBoardSoft__data_804CB7C8)[idx]];
}

f32 TWindowKeyBoardSoft__sub_8026062C(s32 arg0, s32 arg1, s32 arg2) {
  f32 new_var;
  s32 sp8;
  s32 temp_r31;
  s32 temp_r3;
  temp_r3 = calc_key_index__19TWindowKeyBoardSoftFiii((s32)(arg0), (s32)(arg1), (s32)(arg2));
  temp_r31 = arg1 + ((s8) (*((u8 *) (((s8 *) (((u8 *) (&TWindowKeyBoardSoft__data_8044F124.value)) + (*((u8 *) (((s8 *) (((u8 *) (&TWindowKeyBoardSoft__data_804CB7C8.value)) + temp_r3)) + 0))))) + 0))));
  TWindowKeyBoardSoft__sub_80260760((void *) arg0, (int) temp_r3, (void *) (&sp8), (int) 0);
  new_var = TWindowKeyBoardSoft__sub_80260728(arg0, sp8);
  return TWindowKeyBoardSoft__data_805DD078 + ((TWindowKeyBoardSoft__data_805DD07C * ((f32) temp_r31)) + (TWindowKeyBoardSoft__data_805DD080 * new_var));
}

s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3) {
    return arg2 + (arg3 * 0x10);
}

extern s32 lbl_805D5544;

#pragma push
#pragma fp_contract on
f32 TWindowKeyBoardSoft__sub_802606E0(void) {
    return -((TWindowKeyBoardSoft__data_805DD080 * (f32) (M2C_FIELD(TWindowKeyBoardSoft__data_805D5548, u8 *, 0) * M2C_FIELD(TWindowKeyBoardSoft__data_805D5548, u8 *, 1))) - lbl_805DD084);
}
#pragma pop

#pragma push
#pragma fp_contract on
f32 TWindowKeyBoardSoft__sub_80260728(M2C_UNK arg0, s32 arg1) {
    return (TWindowKeyBoardSoft__data_805DD07C * (f32) arg1) + TWindowKeyBoardSoft__data_805DD078;
}
#pragma pop

typedef char RecoveredGlobal_80260808_lbl_8050E208_size[sizeof(RecoveredGlobal_80260808_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowKeyBoardSoft__sub_80260808(u8 *arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = arg1 * 0x50;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + temp_r5 + 0x20), (int) (2), (int) (temp_r5)) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U)) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFEF);
        TBoss3Volopt__sub_8022675C((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        TWindowKeyBoardSoft__sub_8025C24C((int) (M2C_FIELD(arg0, u32 *, 0x6C)));
    }
}

void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;

    if ((s32) lbl_805D5544 != 0) {
        if ((s32) lbl_805D5544 < 0) {
            return;
        }
        return;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x64) == 0) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r4, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xB4) | 1);
        temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xB4) & 0xFFFFFFBF);
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r4_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0xB4) & 0xFFFFFFFE);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x6C);
    M2C_FIELD(temp_r3_2, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0xB4) | 0x40);
}

void TWindowKeyBoardSoft__sub_80261204(u8 *arg0, s32 arg1) {
    s32 spC;
    s32 sp8;
    u8 *temp_r30;
    temp_r30 = (u8 *)&lbl_8050E208.value + (arg1 * 0x50) + 0x20;
    if (((s32 (*)(int, int))TWindowShortListCtrl__check_controller_button)((int) (temp_r30), (int) (0x30000)) != 0) {
        TBoss3Volopt__sub_8022675C((int) (0x54100), (int) (0), (int) (0), (int) (0));
        calc_cursor_step__19TWindowKeyBoardSoftFiPvPv((s32) (arg0), &spC, &sp8);
        if (((s32 (*)(int, int))TWindowShortListCtrl__check_controller_button)((int) (temp_r30), (int) (0x10000)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) TWindowKeyBoardSoft__data_805DD088;
            M2C_FIELD(arg0, u8 *, 0x64) = (u8) (M2C_FIELD(arg0, u8 *, 0x64) + 1);
        }
        if (((s32 (*)(int, int))TWindowShortListCtrl__check_controller_button)((int) (temp_r30), (int) (0x20000)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DD08C;
            M2C_FIELD(arg0, u8 *, 0x64) = (u8) (M2C_FIELD(arg0, u8 *, 0x64) - 1);
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x64) < spC) {
            M2C_FIELD(arg0, u8 *, 0x64) = (u8) sp8;
        }
        if ((s8) M2C_FIELD(arg0, u8 *, 0x64) > sp8) {
            M2C_FIELD(arg0, u8 *, 0x64) = (u8) spC;
        }
        update_focus_flags__19TWindowKeyBoardSoftFPv((void *) (arg0));
    }
}

}
