#include "types.h"
#include "pso/enemy/TObjEneMe1GiGueMissile.h"

extern "C" {

s32 queue_destruction__7TObjectFv();

void TObjEneMe1GiGueMissile::update_lifetime() {
    f32 temp_f1;

    temp_f1 = this->m_24;
    if (temp_f1 > *(f32 *)((s8 *)this + 0x20)) {
        queue_destruction__7TObjectFv();
        return;
    }
    this->m_24 = (f32) (temp_f1 + *(f32 *)&this->_padAC);
}

}
