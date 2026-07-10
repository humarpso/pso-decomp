#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2);

extern M2C_UNK lbl_804785D8;
extern const f32 lbl_805DFC6C;

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) arg2;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (lbl_805DFC6C / M2C_FIELD(arg0, f32 *, 0x64));
}

}
