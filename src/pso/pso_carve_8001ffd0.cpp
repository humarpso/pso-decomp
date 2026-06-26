#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D4AD0;

void fn_8001FFD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    lbl_805D4AD0 = 0;
}

}
