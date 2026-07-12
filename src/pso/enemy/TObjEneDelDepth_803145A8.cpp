#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDelDepth__sub_803145A8(u8 *arg0);
void TObjEneDelDepth__sub_80314610(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 TObjEneDelDepth__sub_80316420(int);
M2C_UNK TObjEneDelDepth__sub_80316488(int, int);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, int);

void TObjEneDelDepth__sub_803145A8(u8 *arg0) {
    if (TObjEneDelDepth__sub_80316420((int) (M2C_FIELD(arg0, s32 *, 0x37C))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
        TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void TObjEneDelDepth__sub_80314610(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x14;
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (0xB));
    set_draw_mode__15TObjEneDelDepthFPvi((void *) (arg0), (int) (1));
}

}
