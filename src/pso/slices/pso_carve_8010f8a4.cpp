#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8010FAB4(void *, s32);

void fn_8010F8A4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (fn_8010FAB4(arg0, arg2) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

}
