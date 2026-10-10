#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Web_800BC798 {
    u8 pad0[0x38];
    u8 pos[0x84 - 0x38];
    s32 timer;
    u8 pad88[0x90 - 0x88];
    s32 state;
} Web_800BC798;

extern "C" {
int queue_destruction__12TObjGrassWebFPv(void* p);
void apply_to_player__12TObjGrassWebFPv(void *arg0);
void run_task__12TObjGrassWebFv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s16 obj_getField1c(u32);
int queue_destruction__7TObjectFv(void*);
M2C_UNK construct_world_actor_base();
extern M2C_UNK __vt__12TObjGrassWeb[];
extern s32 lbl_805D2A3C;
u8 *TObjGrassWeb__ct(u8 *arg0, s32 arg1, u32 arg2);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
extern s32 enable_v2_features;
void TObjGrassWeb__sub_800BC798(Web_800BC798 *o);
}

extern "C" {

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1);
void apply_to_player__12TObjGrassWebFPv(void *arg0);
int queue_destruction__12TObjGrassWebFPv(void* p);
void render__12TObjGrassWebFv(void);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
s32 __dl__FPv(u32 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 fill_value_array(void *);
s32 free__11TOBoss4RockFUi(u32);
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__12TObjGrassWebFPv(void* p) { return queue_destruction__7TObjectFv(p); }

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

void apply_to_player__12TObjGrassWebFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xA4));
    if ((temp_r3 != 0) && (is_locally_controlled__10TObjPlayerFPv() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        play_effect__10TObjPlayerFiii(temp_r3, M2C_FIELD(arg0, s32 *, 0x84), 1);
    }
}

void run_task__12TObjGrassWebFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    switch (temp_r0) {
    case 0:
        apply_to_player__12TObjGrassWebFPv((void *)arg0);
        return;
    case 1:
        TObjGrassWeb__sub_800BC798((Web_800BC798 *)(arg0));
        return;
    default:
        queue_destruction__12TObjGrassWebFPv((void*)arg0);
        return;
    }
}

void render__12TObjGrassWebFv(void) {  }

extern M2C_UNK __vt__12TObjGrassWeb[];

void *__dt__12TObjGrassWebFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjGrassWeb;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjGrassWeb;
    if (arg2 != 0U) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A3C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
        M2C_FIELD(arg0, s16 *, 0xA4) = obj_getField1c(arg2);
        M2C_FIELD(arg0, s32 *, 0x84) = 0xB4;
    } else {
        queue_destruction__7TObjectFv((void*)(arg0));
    }
    return arg0;
}
#pragma pop

}
