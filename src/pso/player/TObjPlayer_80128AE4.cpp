#include "types.h"
#include "pso/unk/TUnk_804A4020.h"

struct Elem_80128A74 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80128A74 { u8 pad[0xa4]; Elem_80128A74 *elems; s32 count; };

extern "C" {
s32 spawn_particle_effect(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFv(u32);
Obj_80128A74 *find_entity_by_id(s32);
void TObjPlayer__sub_80128A74(s32 a, u32 b, s32 c, s32 d);
}

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFv(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);

void TObjPlayer__sub_80128A74(s32 a, u32 b, s32 c, s32 d) {
    Obj_80128A74 *o;
    clear_rico_ring_flag__10TObjPlayerFv(b);
    o = find_entity_by_id(c);
    if (o != 0 && o->elems != 0 && d < o->count) {
        spawn_particle_effect((u32)o->elems[d].f1c, 0x45);
    }
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 spawn_particle_effect(u32, s32);
s32 clear_rico_ring_flag__10TObjPlayerFv(u32);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjPlayer__sub_80128A70(void);

void TObjPlayer::notify_hit_target(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        clear_rico_ring_flag__10TObjPlayerFv(arg1);
        spawn_particle_effect(arg3, 0x45);
        play_sound_effect(0x4001C112, 0, 0, 0);
    }
}

}
