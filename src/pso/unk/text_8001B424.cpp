#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D7E48;
void fn_8001B424(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_8001B424(u8 *arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (arg1 != 0) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (temp_r3 + 0x58), (void *) (arg1));
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
        if (temp_r3_2 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (temp_r3_2 + 0x58), (void *) (arg1));
            temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
            M2C_FIELD(temp_r4, f32 *, 0x5C) = (f32) -((lbl_805D7E48 * M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r4, u8 **, 0x4C), void **, 4), f32 *, 0x14)) - M2C_FIELD(temp_r4, f32 *, 0x5C));
        }
    }
}
#pragma pop

}
