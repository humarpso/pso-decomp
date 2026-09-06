#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void TWindowSubComCard__sub_8024503C(void *, void *, s32);
extern s32 lbl_805D53A4;
void fn_8027ACF8(u8 *arg0, u8 *arg1);
}

extern "C" {

void fn_8027ACF8(u8 *arg0, u8 *arg1) {
    s16 temp_r5;
    u16 *temp_r3;
    temp_r5 = M2C_FIELD(arg0, s16 *, 0x88);
    if ((temp_r5 >= 0) && !(lbl_805D53A4 & 0x10)) {
        temp_r3 = (u16 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) temp_r5));
        if (*temp_r3 & 1) {
            TWindowSubComCard__sub_8024503C(arg1, temp_r3, 1);
        }
    }
}

}
