#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
void *fn_803DEB74(M2C_UNK);

s32 fn_8006CEF8(void) {
    if (fn_80019690() != 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(fn_803DEB74(0x12), u32 *, 8) >> 0x11U) & 1;
}

}
