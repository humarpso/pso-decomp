#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, int);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 lbl_805DA67C;

void fn_800E96CC(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0xCE));
    TBoss3Volopt__sub_8022675C((int) (0x4003A61A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneSlimeOne__sub_800EC7F4((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (5));
    set_display_mode__15TObjEneSlimeOneFPvi((void *) (arg0), (int) (0));
}

}
