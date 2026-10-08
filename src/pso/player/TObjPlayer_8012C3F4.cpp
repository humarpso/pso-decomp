#include "types.h"

struct Ent_8012C384 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Mylla_8012C384 { u8 pad[0xa4]; Ent_8012C384 *ents; s32 count; };

extern "C" {
s32 spawn_particle_effect(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
Mylla_8012C384 *find_entity_by_id(u32);
void TObjPlayer__sub_8012C384(void *self, u32 a, u32 b, s32 idx);
}

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void TObjPlayer__sub_8012C384(void *self, u32 a, u32 b, s32 idx) {
    Mylla_8012C384 *m;
    update_rico_ring__10TObjPlayerFUi(a);
    m = find_entity_by_id(b);
    if (m && m->ents && idx < m->count) {
        spawn_particle_effect((u32)m->ents[idx].f1c, 0x45);
    }
}

}

#include "types.h"

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void send_trade_action__10TObjPlayerFUiUiUiUi(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        update_rico_ring__10TObjPlayerFUi(arg1);
        spawn_particle_effect(arg3, 0x45);
        play_sound_effect(0x4001C112, 0, 0, 0);
    }
}

}
