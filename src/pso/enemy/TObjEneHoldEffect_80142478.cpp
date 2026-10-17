#include "types.h"
#include "pso/enemy/TObjEneHoldEffect.h"

extern "C" {

int TCameraCtrl__sub_8006B370(f32 farg0);

u8 TObjEneHoldEffect::is_in_view() {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(*(f32 *)&this->m_name) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)&this->m_flags) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)&this->m_prev) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
