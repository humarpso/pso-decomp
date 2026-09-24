#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rgb_803E1FC8 { u8 r, g, b; };

extern "C" {
extern f32 lbl_805D77BC;
extern f32 lbl_805D77C0;
void fn_803E1FFC(f32 farg0, f32 farg1);
extern Rgb_803E1FC8 lbl_805D77C4;
void fn_803E1FC8(u32 c);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803E1FC8(u32 c) {
    lbl_805D77C4.r = (c & 0xFF000000) >> 24;
    lbl_805D77C4.g = (c & 0x00FF0000) >> 16;
    lbl_805D77C4.b = (c & 0x0000FF00) >> 8;
}
#pragma pop

void fn_803E1FFC(f32 farg0, f32 farg1) {
    lbl_805D77C0 = farg0;
    lbl_805D77BC = farg1;
}

}
