#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_68 { u8 bytes[0x68]; };

struct M2CCopy_6C { u8 bytes[0x6C]; };

extern "C" {
s32 forward_return_arg__17TWindowSubComCardFi(s32);
s32 TWindowSubComCard__sub_8007A9C0(s32 arg0, u8 *arg1);
}

extern "C" {

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK reinit__17TWindowSubComCardFi(M2C_UNK *);
M2C_UNK *TWindowSubComCard__sub_8007A8F8(s32);

void swap_cards__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    M2C_UNK sp8[64];
    M2C_UNK *first_ptr;
    M2C_UNK *second_ptr;

    reinit__17TWindowSubComCardFi(sp8);
    first_ptr = TWindowSubComCard__sub_8007A8F8(arg0);
    second_ptr = TWindowSubComCard__sub_8007A8F8(arg1);
    TWindowSubComCard__sub_8007A9C0((s32)(sp8), (u8 *)(first_ptr));
    TWindowSubComCard__sub_8007A9C0((s32)(first_ptr), (u8 *)(second_ptr));
    TWindowSubComCard__sub_8007A9C0((s32)(second_ptr), (u8 *)(sp8));
}
s32 TWindowSubComCard__sub_8007A9C0(s32 arg0, u8 *arg1) {
    s32 temp_r5;
    u8 *temp_r4;
    forward_return_arg__17TWindowSubComCardFi(arg0);
    temp_r5 = arg0 + 0x90;
    temp_r4 = (u8 *)(arg1 + 0x90);
    M2C_FIELD(arg0, u8 *, 0x90) = (u8) M2C_FIELD(arg1, u8 *, 0x90);
    M2C_FIELD(arg0, u8 *, 0x91) = (u8) M2C_FIELD(arg1, u8 *, 0x91);
    M2C_FIELD(arg0, u8 *, 0x92) = (u8) M2C_FIELD(arg1, u8 *, 0x92);
    M2C_FIELD(arg0, u8 *, 0x93) = (u8) M2C_FIELD(arg1, u8 *, 0x93);
    *(M2CCopy_6C *)(temp_r5 + 4) = *(const M2CCopy_6C *)((s32) temp_r4 + 4);
    return arg0;
}

}
