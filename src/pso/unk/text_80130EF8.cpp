#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DB038;
void fn_80130EF8(u8 *arg0);
extern const f32 lbl_805DB03C;
void fn_80130F24(u8 *arg0);
}

extern "C" {

void fn_80130EF8(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    if (temp_r0 == 1) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (u8) (temp_r0 == 0);
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DB038;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB038;
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DB038;
    }
}
void fn_80130F24(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (u8) (temp_r0 == 0);
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DB03C;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB03C;
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DB03C;
    }
}

}
