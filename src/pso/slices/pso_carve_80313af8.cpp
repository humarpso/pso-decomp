#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TObjPlayer__sub_800115C4(void *, void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 TObjEneDelDepth__sub_803162A0(int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF280;

void TObjEneDelDepth__sub_80313AF8(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    u16 temp_r3;

    if (TObjEneDelDepth__sub_803162A0((int) (M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            temp_r3 = TObjPlayer__sub_800115C4((void *) (arg0), (void *) (&sp8), (f32) (TObjEneDelDepth__data_805DF280));
            if ((temp_r3 != 0xFFFF) && (TBoss6Kakusan__sub_803D8BD8((void *) (&sp8)) > TObjEneDelDepth__data_805DF270)) {
                TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (4));
                return;
            }
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
            TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

}
