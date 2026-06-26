#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800196EC();
s32 fn_801A1EB0(s32);
M2C_UNK fn_801C5BC8(s32);
M2C_UNK fn_801C5C0C(s32);
s32 fn_801C5C38(s32);
M2C_UNK fn_801C6F40(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801C6F48(s32);
s32 TObjPlayer__sub_801C6F6C(s32);
s32 TObjPlayer__sub_801C6F90();
s32 fn_8020C354(s32, s32);

void TObjPlayer__sub_801C5C60(s32 arg0, s32 arg1) {
    s32 temp_r31;

    if (TObjPlayer__sub_801C6F90() == 0) {
        temp_r31 = fn_801A1EB0(arg1);
        if (fn_8020C354(fn_800196EC(), temp_r31) != 0) {
            if (TObjPlayer__sub_801C6F6C(arg0) != 0) {
                TObjPlayer__sub_801C6F48(arg0);
                fn_801C6F40(arg0, 0x5A);
                return;
            }
            if (fn_801C5C38(arg0) == 0) {
                fn_801C5BC8(arg0);
            }
        } else if (TObjPlayer__sub_801C6F6C(arg0) == 0) {
            fn_801C5C0C(arg0);
        }
    }
}

}
