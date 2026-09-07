#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80260808_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
extern const f32 TWindowKeyBoardSoft__data_805DD078;
extern const f32 TWindowKeyBoardSoft__data_805DD07C;
f32 TWindowKeyBoardSoft__sub_80260728(M2C_UNK arg0, s32 arg1);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
M2C_UNK TWindowKeyBoardSoft__sub_8025C24C(int);
extern RecoveredGlobal_80260808_lbl_8050E208 lbl_8050E208;
void TWindowKeyBoardSoft__sub_80260808(u8 *arg0, s32 arg1);
}

extern "C" {

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2);
s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3);
void update_focus_flags__19TWindowKeyBoardSoftFPv(void *arg0);
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

s32 calc_key_index__19TWindowKeyBoardSoftFiii(s32 arg1, s32 arg2, s32 arg3) {
    return arg2 + (arg3 * 0x10);
}

extern s32 lbl_805D5544;

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

}
