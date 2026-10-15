#include "types.h"
#include "pso/TItemEffEquip.h"

extern "C" {

s32 spawn_equip_particle_effect(void *, s32);
s32 request_destroy__11TBoss4Type2FUl(s32);

void TItemEffEquip::release_effect() {
    if (((u32) *(u32 *)((s8 *)this + 0x1C) != 0U) && ((s32) *(s32 *)((s8 *)this + 0x24) != -1)) {
        request_destroy__11TBoss4Type2FUl(*(s32 *)((s8 *)this + 0x20));
        spawn_equip_particle_effect(this, *(s32 *)((s8 *)this + 0x24));
    }
}

}
