#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370();
f32 TCameraCtrl__sub_803D8D00();
f32 normalize_vector(void *);

extern f32 TObjBoss2Tunnel__data_805D9234;

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0) {
    f32 var_f31;
    f32 temp_f0;

    var_f31 = TObjBoss2Tunnel__data_805D9234;
    if (TObjBoss2Tunnel__data_805D9234 != TCameraCtrl__sub_803D8D00()) {
        var_f31 = normalize_vector(arg0);
        if (TCameraCtrl__sub_8006B370() != 0) {
            M2C_FIELD(arg0, f32 *, 0) = var_f31 = TObjBoss2Tunnel__data_805D9234;
            M2C_FIELD(arg0, f32 *, 4) = var_f31;
            M2C_FIELD(arg0, f32 *, 8) = var_f31;
        }
    } else {
        temp_f0 = TObjBoss2Tunnel__data_805D9234;
        M2C_FIELD(arg0, f32 *, 0) = temp_f0;
        M2C_FIELD(arg0, f32 *, 4) = temp_f0;
        M2C_FIELD(arg0, f32 *, 8) = temp_f0;
    }
    return var_f31;
}

}
