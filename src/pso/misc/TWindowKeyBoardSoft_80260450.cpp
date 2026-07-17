#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_cursor_step__19TWindowKeyBoardSoftFiPvPv(s32 arg0, s32 *arg1, s32 *arg2);
s32 TWindowSubMag__sub_802627D8(s32);
s32 is_cursor_locked__13TWindowSubMagFPv(s32);
s32 get_flag_bit6__13TWindowSubMagFPv(s32);
s32 get_flag_bit5__13TWindowSubMagFPv();

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

}
