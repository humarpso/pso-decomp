#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_805D4700;

s32 TAdPlayerLoadGC__sub_803F18B8(s32 arg0, s32 arg1) {
    if (((arg0 != 0) && (arg0 != 1)) || (arg1 < 0) || (arg1 > 2)) {
        return 0;
    }
    if (arg1 != 2) {
        (&lbl_805D4700)[arg0] = arg1;
    }
    return (&lbl_805D4700)[arg0];
}

}
