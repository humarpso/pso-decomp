#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_801692AC();
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
void fn_80169230(u8 *arg0);
}

extern "C" {

void fn_80169230(u8 *arg0) {
    fn_801692AC();
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) + 0x147);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (M2C_FIELD(arg0, f32 *, 0xD0) + lbl_805DB6B8);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) ((lbl_805DB6BC + M2C_FIELD(arg0, f32 *, 0x3C)) - M2C_FIELD(arg0, f32 *, 0xD0));
    if (lbl_805DB6BC <= M2C_FIELD(arg0, f32 *, 0xD0)) {
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DB6BC;
        M2C_FIELD(arg0, s32 *, 0xAC) = 2;
    }
}

}
