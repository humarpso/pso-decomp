#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubMag__sub_8027B3F4(void *arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xE;
        return;
    }
}

}
