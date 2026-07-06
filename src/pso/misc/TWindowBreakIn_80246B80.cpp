#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TWindowBreakInFv(s32 arg0);
s32 fn_80244CF4();
M2C_UNK fn_80257BC0(s32, s32, s32);

void render__14TWindowBreakInFv(s32 arg0) {
    s32 tmp = fn_80244CF4();
    fn_80257BC0(arg0, arg0 + 0x24, tmp);
}

}
