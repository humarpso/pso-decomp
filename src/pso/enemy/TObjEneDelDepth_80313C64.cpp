#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_flag__15TObjEneDelDepthFPv(void *arg0);
void init_state__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, M2C_UNK);
s32 fn_8031624C();
M2C_UNK fn_80316488(s32, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

void update_state_flag__15TObjEneDelDepthFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (fn_8031624C() != 0) {
            TObjEneDelDepth__sub_803154A8(arg0, 7);
            return;
        }
        TObjEneDelDepth__sub_803154A8(arg0, 6);
    }
}

extern const f32 TObjEneDelDepth__data_805DF260;

void init_state__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    fn_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 3);
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 2);
}

}
