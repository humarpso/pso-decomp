#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1);

extern s32 lbl_805DF2D4;

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r6_2;

    temp_r6 = M2C_FIELD(arg0, void **, 0x380);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    case 3:
        temp_r6_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r6_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6_2, s32 *, 0x18) | lbl_805DF2D4);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    }
}

}
