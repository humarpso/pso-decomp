#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249D34(void *arg0, s32 arg1);
M2C_UNK TWindowComCard__sub_80249C3C(M2C_UNK, s32);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void TWindowComCard__sub_80249D34(void *arg0, s32 arg1) {
    M2C_UNK temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x70) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
        temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        TWindowComCard__sub_80249C3C(temp, M2C_FIELD(arg0, s32 *, 0x70));
    }
}

}
