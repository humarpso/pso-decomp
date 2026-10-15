#include "types.h"
#include "pso/boss/TObjBoss2Tunnel.h"

#pragma fp_contract on

extern "C" {

s32 TCameraCtrl__sub_8006B370(f32);
f32 newton_sqrtf(f32);

extern const f32 TObjBoss2Tunnel__data_805D9234;
extern const f32 lbl_805D923C;

f32 TObjBoss2Tunnel::clamp_velocity() {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;

    temp_f30 = *(f32 *)((s8 *)this + 8);
    temp_f31 = *(f32 *)((s8 *)this + 0);
    temp_f29 = (temp_f31 * temp_f31) + (temp_f30 * temp_f30);
    if (TObjBoss2Tunnel__data_805D9234 != temp_f29) {
        temp_f28 = lbl_805D923C / newton_sqrtf(temp_f29);
        if (TCameraCtrl__sub_8006B370(temp_f28) != 0) {
            *(f32 *)((s8 *)this + 0) = (f32) TObjBoss2Tunnel__data_805D9234;
            *(f32 *)((s8 *)this + 8) = (f32) TObjBoss2Tunnel__data_805D9234;
            return TObjBoss2Tunnel__data_805D9234;
        }
        *(f32 *)((s8 *)this + 0) = (f32) (temp_f31 * temp_f28);
        *(f32 *)((s8 *)this + 8) = (f32) (temp_f30 * temp_f28);
        return temp_f29 * temp_f28;
    }
    *(f32 *)((s8 *)this + 0) = (f32) TObjBoss2Tunnel__data_805D9234;
    *(f32 *)((s8 *)this + 8) = (f32) TObjBoss2Tunnel__data_805D9234;
    return TObjBoss2Tunnel__data_805D9234;
}

}
