#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
f64 TObjPlayer__sub_80019760(f32, f32);
M2C_UNK TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);

extern const f64 TObjPlayer__data_804340B8;

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (TObjPlayer__data_804340B8 * TObjPlayer__sub_80019760(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}

}
