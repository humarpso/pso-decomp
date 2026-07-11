#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802C6444(void);

extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;
extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;
extern s32 TAdMultiPlyChrSelectGC__data_805D67E0;

s32 TAdMultiPlyChrSelectGC__sub_802C6444(void) {
    s32 var_r3 = (s32) TAdMultiPlyChrSelectGC__data_805D67D8;
    if (var_r3 == 0) {
        return 0;
    }
    switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
    case 0:
        return var_r3;
    case 1:
        return (s32) TAdMultiPlyChrSelectGC__data_805D67E0;
    default:
        return 0;
    }
}

}
