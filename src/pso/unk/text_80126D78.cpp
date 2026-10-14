#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805DAD98;
extern const f32 lbl_805DAD9C;
void harisen_battle_fan_grow_fan(u8 *arg0);
}

extern "C" {

void harisen_battle_fan_grow_fan(u8 *arg0) {
    f32 temp_f2;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1FC);
    if (temp_f2 < lbl_805DAD9C) {
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) (temp_f2 + lbl_805DAD98);
        if (lbl_805DAD9C <= M2C_FIELD(arg0, f32 *, 0x1FC)) {
            M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DAD9C;
        }
    }
}

}
