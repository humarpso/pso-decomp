#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802D5900(void *arg0);
f32 TObjPlayer__sub_8017A1A4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_802D577C(void *);

extern f32 lbl_805DE790;

void TObjPlayer__sub_802D5900(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x248) = 0;
    M2C_FIELD(arg0, s16 *, 0x24A) = 0;
    M2C_FIELD(arg0, f32 *, 0x24C) = (f32) (lbl_805DE790 + TObjPlayer__sub_8017A1A4(M2C_FIELD(arg0, s32 *, 0xF0), 0));
    M2C_FIELD(arg0, s32 *, 0x250) = 0;
    TObjPlayer__sub_802D577C(arg0);
}

}
