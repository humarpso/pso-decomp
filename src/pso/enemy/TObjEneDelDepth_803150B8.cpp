#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDelDepth__sub_803150B8(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
u16 TObjPlayer__sub_800115C4(void *, int, f32);
M2C_UNK set_default_depth_offset__15TObjEneDelDepthFPv(void *);

extern const f32 TObjEneDelDepth__data_805DF26C;

void TObjEneDelDepth__sub_803150B8(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C0) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
            }
            set_default_depth_offset__15TObjEneDelDepthFPv((void *) (arg0));
            return;
        }
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (1));
    }
}

}
