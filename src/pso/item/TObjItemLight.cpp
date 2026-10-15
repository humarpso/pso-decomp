#include "types.h"

struct Light_80191F90 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x18]; f32 rot[3]; u8 pad68[0x28]; f32 f90; void *f94; };

struct Ply_80191F90 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFv(void *);
void queue_destruction__7TObjectFv(void *);
void copy_vec3__11TBoss4Type2FPv(void *, void *);
void copy_pos__11TNowLoadingFPv(void *, void *);
s32 is_item_light_interaction_blocked();
f32 xz_distance_squared(void *, void *);
Ply_80191F90 *get_player_by_client_id(s32);
void set_event_source_flag(void *, s32);
void run_task__13TObjItemLightFv(Light_80191F90 *arg0);
}

extern "C" {

struct VObjItemLight_80192060 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

u8 *TObjItemLight__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__13TObjItemLightFv(void *arg0, s16 arg1);
s32 spawn_particle_effect_with_rotation(void *, void *, s32, s32);
s32 construct_world_actor_base();
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void request_destroy__11TBoss4Type2FUl(void *);

extern s32 __vt__13TObjItemLight[];

void run_task__13TObjItemLightFv(Light_80191F90 *arg0) {
    s32 i;
    Ply_80191F90 *p;
    if (arg0->f94 != 0) {
        copy_pos__11TNowLoadingFPv(arg0->f94, arg0->pos);
        copy_vec3__11TBoss4Type2FPv(arg0->f94, arg0->rot);
    }
    if (is_item_light_interaction_blocked() != 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && get_field_3e4__10TObjPlayerFv(p) == get_current_floor()
            && is_locally_controlled__10TObjPlayerFPv(p) != 0
            && xz_distance_squared(p->pos, arg0->pos) < arg0->f90 * arg0->f90) {
            set_event_source_flag(arg0, 8);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    }
}

void *__dt__13TObjItemLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjItemLight;
        if (*(void **)((s8 *)arg0 + 0x94) != NULL) { request_destroy__11TBoss4Type2FUl(*(void **)((s8 *)arg0 + 0x94)); *(s32 *)((s8 *)arg0 + 0x94) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__13TObjItemLight[];
extern s32 TObjItemLight__class_name;
extern const f32 lbl_805DBE40;
extern const f32 lbl_805DBE44;

u8 *TObjItemLight__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjItemLight;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjItemLight__class_name;
    ((VObjItemLight_80192060 *)arg0)->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x94) = 0;
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
    if (*(f32 *)((s8 *)arg0 + 0x90) < lbl_805DBE40) {
        *(f32 *)((s8 *)arg0 + 0x90) = (f32) lbl_805DBE44;
    }
    *(s32 *)((s8 *)arg0 + 0x94) = spawn_particle_effect_with_rotation(arg0 + 0x38, arg0 + 0x5C, 0x1CA, 0x40);
    return arg0;
}

}
