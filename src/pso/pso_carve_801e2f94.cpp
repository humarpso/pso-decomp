#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80068EF0();
M2C_UNK fn_80069024();
M2C_UNK fn_80228154(s32, s32, s32, f32);

void fn_801E2F94(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    fn_80069024();
    fn_80228154(arg0, arg1, arg2, farg0);
    fn_80068EF0();
}

}
