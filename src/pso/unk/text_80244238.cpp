#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK set_position_xy(f32, f32);
extern s32 lbl_805D3878;
extern const f32 lbl_805DCAAC;
extern const f32 lbl_805DCAB0;
void TWindowAddition__ct(u8 *arg0);
}

extern "C" {

void TWindowAddition__ct(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3878;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DCAAC;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DCAAC;
    set_position_xy((f32) (lbl_805DCAB0), (f32) (lbl_805DCAB0));
}

}
