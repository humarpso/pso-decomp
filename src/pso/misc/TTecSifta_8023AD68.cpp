#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_effect_params__9TTecSiftaFPv(u8 *arg0);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);

extern const f64 lbl_8044DC18;

void update_effect_params__9TTecSiftaFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xD, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

}
