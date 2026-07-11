#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDD__sub_800B99D8(u8 *arg0);
f32 TObjBoss2Tunnel__sub_8007E918(void *, f32, f32);

extern const f32 TObjEneDD__data_805D9E8C;

void TObjEneDD__sub_800B99D8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDD__data_805D9E8C;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x3AC) = TObjBoss2Tunnel__sub_8007E918(arg0 + 0x3A0, temp_f1, temp_f2);
}

}
