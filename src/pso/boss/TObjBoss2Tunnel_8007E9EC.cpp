#include "types.h"

extern "C" {

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370();
f32 vec_squared_length();
f32 normalize_vector(void *);

extern f32 TObjBoss2Tunnel__data_805D9234;

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0) {
    f32 var_f31;
    f32 temp_f0;

    var_f31 = TObjBoss2Tunnel__data_805D9234;
    if (TObjBoss2Tunnel__data_805D9234 != vec_squared_length()) {
        var_f31 = normalize_vector(arg0);
        if (TCameraCtrl__sub_8006B370() != 0) {
            *(f32 *)((s8 *)arg0 + 0) = var_f31 = TObjBoss2Tunnel__data_805D9234;
            *(f32 *)((s8 *)arg0 + 4) = var_f31;
            *(f32 *)((s8 *)arg0 + 8) = var_f31;
        }
    } else {
        temp_f0 = TObjBoss2Tunnel__data_805D9234;
        *(f32 *)((s8 *)arg0 + 0) = temp_f0;
        *(f32 *)((s8 *)arg0 + 4) = temp_f0;
        *(f32 *)((s8 *)arg0 + 8) = temp_f0;
    }
    return var_f31;
}

}
