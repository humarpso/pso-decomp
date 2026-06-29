#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjEneMe1GiGueMissile__ct(void *, s32, s32, s32, f32, f32);

void TObjEneMe1GiGueMissile__sub_802CE220(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;
    temp_r3 = (void *) __nw__7TObjectFUl(0xC4);
    if ((u32) temp_r3 != 0U) {
        TObjEneMe1GiGueMissile__ct(temp_r3, arg0, arg1, arg2, farg0, farg1);
    }
}

}
