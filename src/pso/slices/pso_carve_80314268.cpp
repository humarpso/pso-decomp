#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80011014(void *);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDelDepth__sub_8031543C(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_80316488(s32, M2C_UNK);
extern f32 lbl_805DF298;

void fn_80314268(void *arg0) {
    TObjEneDelDepth__sub_8031543C(arg0, 0x1E, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0x888;
    if (fn_80011014(arg0) > lbl_805DF298) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = M2C_FIELD(arg0, s32 *, 0x3BC) * 0xFFFFFFFF;
    }
    fn_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 0);
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 2);
}

}
