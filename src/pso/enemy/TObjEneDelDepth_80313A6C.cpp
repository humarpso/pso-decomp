#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_move__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
s32 get_type__15TObjEneDelDepthFPv(s32);
M2C_UNK TObjEneDelDepth__sub_80316488(s32, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

extern const f32 TObjEneDelDepth__data_805DF260;

void init_move__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    refresh_lobby_state__10TObjPlayerFPv();
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    if (get_type__15TObjEneDelDepthFPv(M2C_FIELD(arg0, s32 *, 0x37C)) < 6) {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x22;
        TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 5);
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x20;
        TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 9);
    }
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 0);
}

}
