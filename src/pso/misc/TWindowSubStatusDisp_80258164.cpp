#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state__20TWindowSubStatusDispFPv(void *arg0);

void advance_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1D) == 0x14) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0x15U;
    }
}

}
