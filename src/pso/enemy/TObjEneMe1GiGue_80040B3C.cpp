#include "types.h"
#include "pso/enemy/TObjEneMe1GiGue.h"

extern "C" {
}

extern "C" {

void TObjEneMe1GiGue::update_if_active(s32 _w1) {
    if (!(*(s32 *)&this->m_388 & 1)) {
        set_state((s32)(_w1));
    }
}
void TObjEneMe1GiGue::set_state(s32 arg1) {
    s16 temp_r0;
    temp_r0 = this->mode;
    if (temp_r0 != arg1) {
        *(s32 *)&this->m_380 = (s32) temp_r0;
        *(s32 *)&this->next_action = arg1;
    }
}

}
