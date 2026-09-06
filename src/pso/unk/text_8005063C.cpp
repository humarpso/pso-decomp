#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A58;
extern const f32 lbl_805D8A5C;
void fn_8005076C(u8 *arg0);
}

extern "C" {

void fn_8005076C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x370) - M2C_FIELD(arg0, f32 *, 0x300);
    if (temp_f1 > lbl_805D8A30) {
        M2C_FIELD(arg0, f32 *, 0x34C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34C) + lbl_805D8A58);
    } else {
        M2C_FIELD(arg0, f32 *, 0x34C) = (f32) (M2C_FIELD(arg0, f32 *, 0x34C) - lbl_805D8A58);
    }
    if (get_random_float__8TObjFishFv(temp_f1) < lbl_805D8A5C) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
    }
}

}
