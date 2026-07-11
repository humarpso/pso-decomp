#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);

extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;

s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void) {
    if (((s32) TAdMultiPlyChrSelectGC__data_805D67D8 < 0) || ((s32) TAdMultiPlyChrSelectGC__data_805D67D8 > 3)) {
        TAdMultiPlyChrSelectGC__data_805D67D8 = 0;
    }
    return TAdMultiPlyChrSelectGC__data_805D67D8;
}

}
