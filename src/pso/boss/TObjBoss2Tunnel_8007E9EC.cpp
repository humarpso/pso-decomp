#include "types.h"
#include "pso/boss/TObjBoss2Tunnel.h"

extern "C" {

s32 TCameraCtrl__sub_8006B370();
f32 vec_squared_length();
f32 normalize_vector(void *);

extern f32 TObjBoss2Tunnel__data_805D9234;

f32 TObjBoss2Tunnel::update_scale() {
    f32 var_f31;
    f32 temp_f0;

    var_f31 = TObjBoss2Tunnel__data_805D9234;
    if (TObjBoss2Tunnel__data_805D9234 != vec_squared_length()) {
        var_f31 = normalize_vector(this);
        if (TCameraCtrl__sub_8006B370() != 0) {
            *(f32 *)&this->m_name = var_f31 = TObjBoss2Tunnel__data_805D9234;
            *(f32 *)&this->m_flags = var_f31;
            *(f32 *)&this->m_prev = var_f31;
        }
    } else {
        temp_f0 = TObjBoss2Tunnel__data_805D9234;
        *(f32 *)&this->m_name = temp_f0;
        *(f32 *)&this->m_flags = temp_f0;
        *(f32 *)&this->m_prev = temp_f0;
    }
    return var_f31;
}

}
