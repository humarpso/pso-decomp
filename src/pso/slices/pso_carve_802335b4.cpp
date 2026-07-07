#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 fn_8022DBC4(M2C_UNK, s16, M2C_UNK);
extern const f64 lbl_8044D658;

void fn_802335B4(u8 *arg0) {
    s32 res;
    res = fn_8022DBC4(0xB, M2C_FIELD(arg0, s16 *, 0x78), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x88, res);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, s16 *, 0xAC) * M2C_FIELD(arg0, s16 *, 0x78));
}

}
