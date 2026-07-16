#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardSoft__sub_80080BCC(u8 *arg0, s32 arg1, s32 arg2);
void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0);

void TWindowKeyBoardSoft__sub_80080BCC(u8 *arg0, s32 arg1, s32 arg2) {
    u16 *var_r4;
    u16 *var_r6;
    u16 temp_r0;

    var_r6 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (arg1 * 2));
    if ((s32) *var_r6 != 0) {
        var_r4 = var_r6 + arg2;
        do {
            *var_r6 = *var_r4;
            var_r6 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - arg2);
    }
}

void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u16 *var_r4;
    u16 *var_r5;
    u16 temp_r0;

    var_r5 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 2));
    if ((s32) *var_r5 != 0) {
        var_r4 = var_r5 + 1;
        do {
            *var_r5 = *var_r4;
            var_r5 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
    }
}

}
