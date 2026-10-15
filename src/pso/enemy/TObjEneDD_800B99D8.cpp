#include "types.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {

f32 clamp_velocity__15TObjBoss2TunnelFv(void *, f32, f32);

extern const f32 TObjEneDD__data_805D9E8C;

void TObjEneDD::update_velocity() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg0 + 0x394);
    *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) (temp_f2 - *(f32 *)((s8 *)arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x3A4) = (f32) TObjEneDD__data_805D9E8C;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x39C);
    *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) (temp_f1 - *(f32 *)((s8 *)arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x3AC) = clamp_velocity__15TObjBoss2TunnelFv(arg0 + 0x3A0, temp_f1, temp_f2);
}

}
