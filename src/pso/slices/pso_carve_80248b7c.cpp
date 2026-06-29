#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D38B0;

void TWindowCheckBox__ct(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D38B0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
}

}
