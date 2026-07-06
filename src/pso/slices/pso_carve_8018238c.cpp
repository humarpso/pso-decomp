#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801821D8();
M2C_UNK fn_80226258(s32, s32, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void fn_8018238C(s32 arg0) {
    if (fn_801821D8() != 0) {
        s32 r = fn_8022675C(0x42A04, arg0 + 0x38, 0, 0);
        fn_80226258(r, -0x800, 0);
    }
}

}
