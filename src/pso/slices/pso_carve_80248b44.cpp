#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_802671F0(void *, M2C_UNK);

void fn_80248B44(void *arg0) {
    s16 temp_r4;

    if (M2C_FIELD(arg0, s16 *, 0x88) != (temp_r4 = M2C_FIELD(arg0, s16 *, 0x74))) {
        M2C_FIELD(arg0, s16 *, 0x88) = temp_r4;
        TWindowSubStatusDisp__sub_802671F0(arg0, 1);
    }
}

}
