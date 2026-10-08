#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK draw_string__14TObjWarpStringFPviff(void *, void *, f32, f32);
void fn_802A0A30(M2C_UNK arg0, u8 *arg1, M2C_UNK arg2, s32 arg3, s32 arg4);
}

extern "C" {

void fn_802A0A30(M2C_UNK arg0, u8 *arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    draw_string__14TObjWarpStringFPviff((void *) (arg4), (void *) (arg3), (f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 4)));
}

}
