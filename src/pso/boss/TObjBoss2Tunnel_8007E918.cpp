#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

f32 clamp_velocity__15TObjBoss2TunnelFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);
f32 TObjPlayer__sub_8001978C(f32);

extern const f32 TObjBoss2Tunnel__data_805D9234;
extern const f32 lbl_805D923C;

f32 clamp_velocity__15TObjBoss2TunnelFPv(void *arg0) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;

    temp_f30 = M2C_FIELD(arg0, f32 *, 8);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0);
    temp_f29 = (temp_f31 * temp_f31) + (temp_f30 * temp_f30);
    if (TObjBoss2Tunnel__data_805D9234 != temp_f29) {
        temp_f28 = lbl_805D923C / TObjPlayer__sub_8001978C(temp_f29);
        if (TCameraCtrl__sub_8006B370(temp_f28) != 0) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) TObjBoss2Tunnel__data_805D9234;
            M2C_FIELD(arg0, f32 *, 8) = (f32) TObjBoss2Tunnel__data_805D9234;
            return TObjBoss2Tunnel__data_805D9234;
        }
        M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f31 * temp_f28);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f30 * temp_f28);
        return temp_f29 * temp_f28;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) TObjBoss2Tunnel__data_805D9234;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjBoss2Tunnel__data_805D9234;
    return TObjBoss2Tunnel__data_805D9234;
}

}
