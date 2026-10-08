#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_phase__15TObjBoss2TunnelFPv(void *arg0);
void update_position__15TObjBoss2TunnelFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007DDB0(f32);
struct Obj_8007DE80 { f32 f0, f4, f8, fC, f10, f14, f18; };
f32 eval_piecewise_curve__15TObjBoss2TunnelFPvf(Obj_8007DE80 *arg0, f32 farg0);
extern const f32 TObjBoss2Tunnel__data_805D9234;

extern f32 lbl_805D923C;

void advance_phase__15TObjBoss2TunnelFPv(void *arg0) {
    TObjBoss2Tunnel__sub_8007DDB0(M2C_FIELD(arg0, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805D923C);
}

void update_position__15TObjBoss2TunnelFPv(void *arg0) {
    eval_piecewise_curve__15TObjBoss2TunnelFPvf((Obj_8007DE80 *)arg0, M2C_FIELD(arg0, f32 *, 0x1C));
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
