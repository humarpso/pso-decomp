#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801D7AC8(s32, s32, s32, s32, s32);
s32 fn_801D84A8();

void fn_801D7A78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_801D7AC8(arg0, arg1, arg2, arg3, fn_801D84A8());
}

}
