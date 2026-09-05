#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);
extern const f32 TBoss8Dragon__data_805DED50;
void TBoss8Dragon__sub_802FC9D8(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FC9D8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x5CC) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x410));
    M2C_FIELD(arg0, f32 *, 0x5D0) = (f32) TBoss8Dragon__data_805DED50;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x5D4) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x418));
    M2C_FIELD(arg0, f32 *, 0x5D8) = clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x5CC), (f32) (temp_f1), (f32) (temp_f2));
}

}
