#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C438(void *);
s32 TAdSinglePlyChrSelectGC__sub_8007C3E0(s32 *arg0);
}

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_8007C3E0(s32 *arg0) {
    s32 temp_r4;
    temp_r4 = *arg0;
    *arg0 = temp_r4 + 1;
    if (temp_r4 + 1 > 0x37) {
        TAdSinglePlyChrSelectGC__sub_8007C438((void *)(arg0));
        *arg0 = 1;
    }
    return arg0[*arg0 + 1];
}

}
