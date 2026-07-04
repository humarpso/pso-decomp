#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_80248968(s32, M2C_UNK);
M2C_UNK fn_80248AA8(s32, s32, M2C_UNK);
s32 fn_80248C48(s32, M2C_UNK *);
M2C_UNK fn_8026CBA4(M2C_UNK);
extern M2C_UNK lbl_8044F494[];

s32 TWindowOptionCtrl__sub_8026B8C8(void *arg0) {
    s16 temp_r0;
    s32 temp_r31;

    s32 temp_r3_after_cba4 = fn_8026CBA4(0xCF);
    temp_r31 = fn_80248C48(temp_r3_after_cba4, lbl_8044F494);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0xE), 0);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0xD), 1);
    fn_80248AA8(temp_r31, fn_80132F2C(0xF, 0xF), 2);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x20);
    switch (temp_r0) {
    case 0:
        fn_80248968(temp_r31, 0);
        break;
    case 1:
        fn_80248968(temp_r31, 1);
        break;
    case 2:
        fn_80248968(temp_r31, 2);
        break;
    }
    return temp_r31;
}

}
