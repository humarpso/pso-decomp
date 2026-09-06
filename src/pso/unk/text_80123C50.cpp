#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_800112A4(void *, s32);
s16 obj_getS16_32E(void *);
extern const f32 lbl_805DAD20;
void TObjPlayer__sub_80123D3C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80123D3C(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r3_3;
    s32 temp_r3;
    s32 temp_r3_2;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1FE) == 1) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r3 == 7) {
            M2C_FIELD(arg0, s16 *, 0x1FE) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r3 + 1);
        }
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1FE) == 2) {
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r3_2 == 0) {
            M2C_FIELD(arg0, s16 *, 0x1FE) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (temp_r3_2 - 1);
        }
    }
    temp_r3_3 = obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0xF0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1FC) - temp_r3_3;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s16 *, 0x1FC) = temp_r3_3;
        return;
    }
    if (temp_r0 > 0) {
        TObjPlayer__sub_800112A4(M2C_FIELD(arg0, u8 **, 0xF0), (s32) (lbl_805DAD20 * (f32) temp_r0));
        M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0xF0));
    }
}

}
