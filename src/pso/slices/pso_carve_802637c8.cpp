#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80244C0C(void *, void *);
M2C_UNK fn_80245F98(void *, int);
M2C_UNK fn_80257BC0(void *, void *, int);

void render__13TWindowLockOnFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80244C0C(arg0, arg0 + 0x68);
    fn_80245F98(arg0, temp_r3);
    if ((M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x40)) && (M2C_FIELD(arg0, f32 *, 0x34) == M2C_FIELD(arg0, f32 *, 0x44)) && (M2C_FIELD(arg0, f32 *, 0x38) == M2C_FIELD(arg0, f32 *, 0x48)) && (M2C_FIELD(arg0, f32 *, 0x3C) == M2C_FIELD(arg0, f32 *, 0x4C))) {
        fn_80257BC0(arg0, arg0 + 0x24, temp_r3);
    }
}

}
