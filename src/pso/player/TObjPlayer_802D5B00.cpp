#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802D5B00(s32 arg0);
M2C_UNK TItemLoad__sub_80110154(M2C_UNK, s32 *);
M2C_UNK TItemLoad__sub_80110190(M2C_UNK, s32 *);
s32 TObjEneDellBiter__sub_80087350(M2C_UNK, s32);
M2C_UNK TObjFish__sub_800660D4(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_800822D4(s32, f32, f32);

extern f32 lbl_805DE78C;
extern f32 lbl_805DE79C;

void TObjPlayer__sub_802D5B00(s32 arg0) {
    s32 spC;
    s32 sp8;
    s32 temp_r3;

    temp_r3 = TObjEneDellBiter__sub_80087350(arg0, 0x1BF);
    if (temp_r3 != 0) {
        TItemLoad__sub_80110190(0xD, &spC);
        TItemLoad__sub_80110154(0xD, &sp8);
        TObjFish__sub_800660D4(temp_r3, spC, sp8, 0, 0, lbl_805DE78C);
        TObjPlayer__sub_800822D4(temp_r3, lbl_805DE79C, lbl_805DE79C);
    }
}

}
