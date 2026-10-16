#include "types.h"

struct Ent_8012C384 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Mylla_8012C384 { u8 pad[0xa4]; Ent_8012C384 *ents; s32 count; };

extern "C" {
s32 spawn_particle_effect(u32, s32);
s32 rocket_punch_return_timer(u32);
Mylla_8012C384 *find_entity_by_id(u32);
void rocket_punch_target_impact(void *self, u32 a, u32 b, s32 idx);
}

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 rocket_punch_return_timer(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void hook__13TUnk_804A5340Fv(void);

void rocket_punch_target_impact(void *self, u32 a, u32 b, s32 idx) {
    Mylla_8012C384 *m;
    rocket_punch_return_timer(a);
    m = find_entity_by_id(b);
    if (m && m->ents && idx < m->count) {
        spawn_particle_effect((u32)m->ents[idx].f1c, 0x45);
    }
}

}

#include "types.h"

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 rocket_punch_return_timer(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void hook__13TUnk_804A5340Fv(void);

void rocket_punch_wall_impact(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        rocket_punch_return_timer(arg1);
        spawn_particle_effect(arg3, 0x45);
        play_sound_effect(0x4001C112, 0, 0, 0);
    }
}

}
