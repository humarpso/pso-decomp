#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, int);
s32 TObjEneDelDepth__sub_803162A0(int);
M2C_UNK TObjEneDelDepth__sub_80316488(int, int);
extern const f32 TObjEneDelDepth__data_805DF260;

void TObjEneDelDepth__sub_80313BC0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    TBoss3Volopt__sub_8022675C((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if (TObjEneDelDepth__sub_803162A0((int) (M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (4));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x10;
        TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (8));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void *) (arg0), (int) (0));
}

}
