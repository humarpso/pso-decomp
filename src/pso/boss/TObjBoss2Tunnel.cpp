#include "types.h"

extern "C" {

void advance_phase__15TObjBoss2TunnelFPv(void *arg0);
void update_position__15TObjBoss2TunnelFPv(void *arg0);
s32 TObjBoss2Tunnel__sub_8007DDB0(f32);
struct Obj_8007DE80 { f32 f0, f4, f8, fC, f10, f14, f18; };
f32 eval_piecewise_curve__15TObjBoss2TunnelFPvf(Obj_8007DE80 *arg0, f32 farg0);
extern const f32 TObjBoss2Tunnel__data_805D9234;

extern f32 lbl_805D923C;

void advance_phase__15TObjBoss2TunnelFPv(void *arg0) {
    TObjBoss2Tunnel__sub_8007DDB0(*(f32 *)((s8 *)arg0 + 0x1C));
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C) + lbl_805D923C);
}

void update_position__15TObjBoss2TunnelFPv(void *arg0) {
    eval_piecewise_curve__15TObjBoss2TunnelFPvf((Obj_8007DE80 *)arg0, *(f32 *)((s8 *)arg0 + 0x1C));
}

#pragma push
#pragma fp_contract on
f32 eval_piecewise_curve__15TObjBoss2TunnelFPvf(Obj_8007DE80 *arg0, f32 farg0) {
    f32 t;
    f32 r = TObjBoss2Tunnel__data_805D9234;
    if (farg0 < r) {
        r = r;
    } else {
        if (farg0 < arg0->f10) {
            r = arg0->f0 * farg0 + arg0->f8;
        } else {
            t = arg0->f14;
            if (farg0 < t) {
                r = arg0->fC;
            } else if (farg0 < arg0->f18) {
                t = farg0 - t;
                r = arg0->f4 * t + arg0->fC;
            }
        }
    }
    return r;
}

#pragma pop

}
