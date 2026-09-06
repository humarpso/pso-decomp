#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 lbl_805D7D48;
void TObjPlayer__sub_80011734(u8 *arg0, M2C_UNK *arg1, f32 farg0);
}

extern "C" {

void TObjPlayer__sub_80011734(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = TObjPlayer__sub_80156844((void *) (arg0), (void *) (&position.x), (void *) (arg0 + 0x248));
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 != 0) {
        M2C_FIELD(arg0, f32 *, 0x30C) = (f32) (M2C_FIELD(arg0, f32 *, 0x30C) + lbl_805D7D48);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30C));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805D7D24;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}

}
