#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805D937C;
extern const f32 lbl_805D9380;
void fn_80081B7C(u8 *arg0);
}

extern "C" {

void fn_80081B7C(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) (M2C_FIELD(arg0, f32 *, 0x340) - lbl_805D937C);
    if (M2C_FIELD(arg0, f32 *, 0x340) <= lbl_805D9380) {
        M2C_FIELD(arg0, s32 *, 0x334) = 3;
        M2C_FIELD(arg0, f32 *, 0x340) = (f32) lbl_805D9380;
    }
}

}
