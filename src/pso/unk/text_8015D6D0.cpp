#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

extern "C" {

s32 TUnk_804B0BB8::init_door_switch_binding() {
    s32 temp_r0;

    *(s32 *)&this->unk_C8 = (s32) this->m_84;
    temp_r0 = *(s32 *)&this->unk_C8;
    if (temp_r0 > 0x100) {
        this->m_cc = 0;
    } else if (temp_r0 < 0) {
        this->m_cc = 1;
    } else {
        this->m_cc = 2;
    }
    return *(s32 *)&this->unk_C8;
}

}
