#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_80393F84(void *, void *);
s32 TRKTargetFlushCache(M2C_UNK arg0, u32 arg1, u32 arg2);
}

extern "C" {

s32 TRKTargetFlushCache(M2C_UNK arg0, u32 arg1, u32 arg2) {
    if (arg1 < arg2) {
        fn_80393F84((void *) (arg1), (void *) (arg2 - arg1));
        return 0;
    }
    return 0x700;
}

}
