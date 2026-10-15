#include "types.h"

extern "C" {

void release_effect__13TItemEffEquipFPv(void *arg0);
s32 spawn_equip_particle_effect(void *, s32);
s32 request_destroy__11TBoss4Type2FUi(s32);

void release_effect__13TItemEffEquipFPv(void *arg0) {
    if (((u32) *(u32 *)((s8 *)arg0 + 0x1C) != 0U) && ((s32) *(s32 *)((s8 *)arg0 + 0x24) != -1)) {
        request_destroy__11TBoss4Type2FUi(*(s32 *)((s8 *)arg0 + 0x20));
        spawn_equip_particle_effect(arg0, *(s32 *)((s8 *)arg0 + 0x24));
    }
}

}
