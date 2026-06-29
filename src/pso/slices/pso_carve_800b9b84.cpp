#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 enable_v2_features;
extern s32 lbl_805D5550;

s32 fn_800B9B84(void) {
    if (((s32) enable_v2_features != 0) && ((s32) lbl_805D5550 == 3)) {
        return 1;
    }
    return 0;
}

}
