#include "types.h"

extern "C" {

void update_velocity__9TObjEneDDFPv(u8 *arg0);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);

extern const f32 TObjEneDD__data_805D9E8C;

void update_velocity__9TObjEneDDFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg0 + 0x394);
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) (temp_f2 - *(f32 *)((s8 *)arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x3A4) = (f32) TObjEneDD__data_805D9E8C;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x39C);
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) (temp_f1 - *(f32 *)((s8 *)arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x3AC) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x3A0, temp_f1, temp_f2);
}

}
