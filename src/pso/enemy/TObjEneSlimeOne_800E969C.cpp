#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneSlimeOne__sub_800E969C(void *arg0);
void TObjEneSlimeOne__sub_800E96CC(u8 *arg0);
void TObjEneSlimeOne__sub_800E9740(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
s32 TObjEneSlimeOne__sub_800EC41C(void *);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(int, int);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, int);

void TObjEneSlimeOne__sub_800E969C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(5));
    }
}

extern const f32 lbl_805DA67C;

void TObjEneSlimeOne__sub_800E96CC(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    TObjEneDellBiter__sub_80087350((void *)((void *) (arg0 + 0x2FC)), (int)((int) (0xCE)));
    TBoss3Volopt__sub_8022675C((int) (0x4003A61A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneSlimeOne__sub_800EC7F4((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (5));
    set_display_mode__15TObjEneSlimeOneFPvi((void *) (arg0), (int) (0));
}

void TObjEneSlimeOne__sub_800E9740(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x394) + 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r3;
    if (!(temp_r3 & 3)) {
        TObjEneDellBiter__sub_80087350((void *)(arg0 + 0x2FC), (int)(0xE0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (TObjEneSlimeOne__sub_800EC41C(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(7));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(6));
    }
}

}
