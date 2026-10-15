#include "types.h"
#include "pso/object/TObjGrassWeb.h"

typedef struct Web_800BC798 {
    u8 pad0[0x38];
    u8 pos[0x84 - 0x38];
    s32 timer;
    u8 pad88[0x90 - 0x88];
    s32 state;
} Web_800BC798;

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, s32);
s16 obj_getField1c(u32);
int queue_destruction__7TObjectFv(void*);
s32 construct_world_actor_base();
extern s32 __vt__12TObjGrassWeb[];
extern s32 lbl_805D2A3C;
u8 *TObjGrassWeb__ct(u8 *arg0, s32 arg1, u32 arg2);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
extern s32 enable_v2_features;
void TObjGrassWeb__sub_800BC798(Web_800BC798 *o);
}

extern "C" {

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
s32 __dl__FPv(u32 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 mem_alloc(s32);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 fill_value_array(void *);
s32 mem_free(u32);
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
int queue_destruction__7TObjectFv(void*);

int TObjGrassWeb::queue_destruction() { return queue_destruction__7TObjectFv(this); }

void TObjGrassWeb__sub_800BC798(Web_800BC798 *o) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        play_persistent_sound(0x4003A809, o, o->pos, 0, 0);
        break;
    case 16:
    case 17:
        if (enable_v2_features == 1) {
            play_persistent_sound(0x3051E, o, o->pos, 0, 0);
        }
        break;
    case 18:
        break;
    case 19:
    case 20:
        play_persistent_sound(0x3A81D, o, o->pos, 0, 0);
        break;
    }
    if (o->timer-- < 0) {
        o->state = 2;
    }
}

void TObjGrassWeb::apply_to_player() {
    s32 temp_r3;

    *(s32 *)((s8 *)this + 0x90) = 1;
    temp_r3 = get_player_by_client_id(*(u16 *)((s8 *)this + 0xA4));
    if ((temp_r3 != 0) && (is_locally_controlled__10TObjPlayerFPv() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        play_effect__10TObjPlayerFiii(temp_r3, *(s32 *)((s8 *)this + 0x84), 1);
    }
}

void TObjGrassWeb::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x90);
    switch (temp_r0) {
    case 0:
        apply_to_player();
        return;
    case 1:
        TObjGrassWeb__sub_800BC798((Web_800BC798 *)(arg0));
        return;
    default:
        queue_destruction();
        return;
    }
}

void TObjGrassWeb::render() {  }

extern s32 __vt__12TObjGrassWeb[];

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjGrassWeb;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TObjGrassWeb__ct(u8 *arg0, s32 arg1, u32 arg2) {
    construct_world_actor_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjGrassWeb;
    if (arg2 != 0U) {
        *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2A3C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2 + 0x38);
        *(s32 *)((s8 *)arg0 + 0x90) = 0;
        *(s16 *)((s8 *)arg0 + 0xA4) = obj_getField1c(arg2);
        *(s32 *)((s8 *)arg0 + 0x84) = 0xB4;
    } else {
        queue_destruction__7TObjectFv((void*)(arg0));
    }
    return arg0;
}
#pragma pop

}
