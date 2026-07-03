#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_80437EB8;

void fn_8005F834(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) (M2C_FIELD(arg0, f32 *, 0x474) * farg0);
    M2C_FIELD(arg0, f32 *, 0x478) = (f32) (M2C_FIELD(arg0, f32 *, 0x478) * farg1);
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) (M2C_FIELD(arg0, f32 *, 0x47C) * farg0);
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x480) * farg2);
}

}
