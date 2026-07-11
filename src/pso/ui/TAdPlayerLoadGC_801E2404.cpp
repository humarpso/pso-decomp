#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E2404(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E1F40();

s32 PADInit(s32, s32 *, M2C_UNK *);
extern s32 TAdPlayerLoadGC__data_805D5E40;

s32 TAdPlayerLoadGC__sub_801E2404(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;

    if (arg0 >= 2) {
        return -0xFF;
    }
    if (TAdPlayerLoadGC__sub_801E1F40() != 0) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
    temp_r3 = PADInit(arg0, &spC, &sp8);
    switch (temp_r3) {
    case -3:
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    case -1:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return spC / 8192;
    case -6:
    case -128:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    default:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
}

}
