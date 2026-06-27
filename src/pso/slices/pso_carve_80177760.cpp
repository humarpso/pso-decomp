#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOSwitchAttackSub__ct(void *, s32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);

void TOSwitchAttack__sub_80177760(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    void *temp_r3;
    temp_r3 = (void *)__nw__7TObjectFUl(0x30);
    if (temp_r3 != (void *)0U) {
        TOSwitchAttackSub__ct(temp_r3, arg0, arg1, arg2, arg3, farg0);
    }
}

}
