#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_move__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK fn_800F6B14();
s32 fn_803162A0(s32);
M2C_UNK fn_80316488(s32, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

extern const f32 TObjEneDelDepth__data_805DF260;

void init_move__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    fn_800F6B14();
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    if (fn_803162A0(M2C_FIELD(arg0, s32 *, 0x37C)) < 6) {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x22;
        fn_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 5);
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x20;
        fn_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 9);
    }
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 0);
}

}
