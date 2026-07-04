#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowOptionCtrl__sub_8026B6CC(void);
s32 TWindowOptionCtrl__sub_8026B2E4();
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80248968(s32, s32);
M2C_UNK fn_80248AA8(s32, s32, M2C_UNK);
s32 fn_80248C48(M2C_UNK, M2C_UNK *);
s32 fn_8026CBA4(M2C_UNK);

extern M2C_UNK lbl_8044F49C[];

s32 TWindowOptionCtrl__sub_8026B6CC(void) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = fn_8026CBA4(0xD0);
    temp_r31 = fn_80248C48(temp_r3, lbl_8044F49C);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0x10), 0);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0x11), 1);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0x12), 2);
    fn_80248968(temp_r31, (s16) TWindowOptionCtrl__sub_8026B2E4());
    return temp_r31;
}

}
