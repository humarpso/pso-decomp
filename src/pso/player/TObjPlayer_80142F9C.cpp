#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80142F9C(u8 *arg0);
void TObjPlayer__sub_80143024(u8 *arg0);
M2C_UNK TObjEneRe7Berura__sub_803E4CE0(M2C_UNK *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjPlayer__sub_80141F1C();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();
M2C_UNK fn_803E4A94(s32, void *, f32);

extern M2C_UNK TObjPlayer__sub_80142EEC[];
extern u32 lbl_805D567C;

void TObjPlayer__sub_80142F9C(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xE0);
    if (temp_r0 != 0U) {
        lbl_805D567C = temp_r0;
        TObjEneRe7Berura__sub_803E4CE0((M2C_UNK *)(TObjPlayer__sub_80142EEC));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
        if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
            fn_803E4A94(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
        } else {
            TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjEneRe7Berura__sub_803E4CE0((M2C_UNK *)(NULL));
        TObjPlayer__sub_80141F1C();
    }
}

extern s32 lbl_805D7810;

void TObjPlayer__sub_80143024(u8 *arg0) {
    TObjPlayer__sub_803E4BC4();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        fn_803E4A94(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        TObjEneRe7Berura__sub_803E4CE0((M2C_UNK *)(lbl_805D7810));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        TObjEneRe7Berura__sub_803E4CE0((M2C_UNK *)(0));
    }
    TObjPlayer__sub_80141F1C();
    TObjPlayer__sub_803E4BD0();
}

}
