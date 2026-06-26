#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802A9880(u32, f32, f32, s32, s32, s32, s32, s32, s32);

void fn_802A9688(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    u32 temp_r3 = __nw__7TObjectFUl(0x100);
    if (temp_r3 != 0U) {
        fn_802A9880(temp_r3, farg0, farg1, arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

}
