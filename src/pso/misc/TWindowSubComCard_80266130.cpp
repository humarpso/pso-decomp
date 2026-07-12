#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0);

extern const f32 lbl_805DD154;

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD154 + M2C_FIELD(arg0, f32 *, 0x7C));
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
