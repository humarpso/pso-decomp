#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_801FDE94(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TAdSinglePlyChrSelectGC__sub_801FDDAC();
s32 TAdSinglePlyChrSelectGC__sub_801FDE14();

s32 TAdSinglePlyChrSelectGC__sub_801FDE94(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg2 >= 4) && (arg4 <= 3)) {
        return TAdSinglePlyChrSelectGC__sub_801FDDAC();
    }
    if ((arg2 <= 3) && (arg4 >= 4)) {
        return TAdSinglePlyChrSelectGC__sub_801FDE14();
    }
    return 0;
}

}
