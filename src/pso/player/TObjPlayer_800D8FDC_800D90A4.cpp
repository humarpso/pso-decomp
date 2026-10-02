#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_dead_spot__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
void request_two_effects__10TObjPlayerFPv(void* p);
void spawn_ground_effect__10TObjPlayerFPvi(void *arg0, s32 arg1);
void trigger_dell_biter_events__10TObjPlayerFPv(void* p);
int TLobby__sub_800869A4(void*, void*, void*, void*);
int spawn_particle_effect(void*, void*);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK adjust_to_ground__15TObjBoss2TunnelFiPv(void *, M2C_UNK *);
M2C_UNK init__9TDeadSpotFPv(s32, s32, s32, s32, f32);

extern s32 tl_05;

void create_dead_spot__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;

    temp_r3 = __nw__7TObjectFUl(0x38);
    if (temp_r3 != 0) {
        init__9TDeadSpotFPv(temp_r3, tl_05, arg0, TLobby__sub_800869A4((void*)(arg0), (void*)(arg1), (void*)(0), (void*)(arg2)), farg0);
    }
}

void request_two_effects__10TObjPlayerFPv(void* p) { TLobby__sub_800869A4((void*)(p), (void*)((void*)232), (void*)((void*)10), (void*)((void*)1)); TLobby__sub_800869A4((void*)(p), (void*)((void*)236), (void*)((void*)10), (void*)((void*)1)); }

void trigger_dell_biter_events__10TObjPlayerFPv(void* p) { spawn_particle_effect(p, (void*)251); spawn_particle_effect(p, (void*)252); spawn_particle_effect(p, (void*)227); }

void spawn_ground_effect__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_UNK sp8;

    adjust_to_ground__15TObjBoss2TunnelFiPv(arg0, &sp8);
    TLobby__sub_800869A4((void*)(&sp8), (void*)(0xE5), (void*)(0), (void*)(arg1));
}

}
