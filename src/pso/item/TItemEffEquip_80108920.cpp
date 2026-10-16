#include "types.h"
#include "pso/TItemEffEquip.h"
#include "pso/boss/TBoss4Type2.h"

extern "C" {

void TItemEffEquip::release_effect() {
    if (((u32) *(u32 *)&this->m_1c != 0U) && ((s32) *(s32 *)((s8 *)this + 0x24) != -1)) {
        TBoss4Type2::request_destroy(*(s32 *)&this->m_20);
        spawn_equip_particle_effect(*(s32 *)((s8 *)this + 0x24));
    }
}

}
