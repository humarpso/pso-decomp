#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80226C3C();
M2C_UNK fn_802274B8(s32);
s32 fn_8039DAFC(M2C_UNK, s32);

void fn_8023E900(s32 arg0) {
    if (fn_8039DAFC(fn_80226C3C(), arg0) != 0) {
        fn_802274B8(arg0);
    }
}

}
