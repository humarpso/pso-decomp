#include "types.h"
#include "pso/object/TObjDoorJung.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/object/TObjLazerFenceNorm.h"
#include "pso/object/TObjLazerFenceExtra.h"

struct LazerFenceExtraBase_801925F8 { char pad[0x18]; };
struct LazerFenceExtraVObj_801925F8 : LazerFenceExtraBase_801925F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Motion_801926D0 { u8 pad[4]; u32 frames; };
struct TObjLazerFenceExtra_801926D0 {
    u8 pad[0xB0];
    s16 switchId;
    u8 padb2[2];
    s32 state;
    f32 frame;
    u8 padbc[8];
    Motion_801926D0 *motion;
};

extern "C" {

void render__19TObjLazerFenceExtraFv(void *arg0);
void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0);
void update_wait_switch__19TObjLazerFenceExtraFv(TObjLazerFenceExtra_801926D0 *self);
u8 is_current_floor_switch_set(u16);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void);
s32 pop_matrix(void);
void set_indexed_flags(void *arg0, s32 index, s32 flags);

extern void *lazer_fence_norm_texture_list;

void TObjLazerFenceExtra::render_lazer_fence_model() {
    TObjFish::set_global_param((s32)lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix((void *)((char *)this + 56));
    rotate_matrix_y(0, *(void * *)&this->rotation_y);
    draw_ginja_object(*(void * *)&this->m_d8);
    pop_matrix();
}

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__19TObjLazerFenceExtraFv(void *arg0) {

    if ((((LazerFenceExtraVObj_801925F8*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0xD8) != 0)) {
        switch (((TObjLazerFenceExtra *)arg0)->m_b4) {
        case 0:
            ((TObjLazerFenceExtra *)arg0)->draw_lazer_fence_extra_model();
            return;
        case 1:
            ((TObjLazerFenceExtra *)arg0)->render_lazer_fence_model();
            break;
        }
    }
}

extern "C" void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, u32);
extern const f32 lbl_805DBE58;
extern const f32 lbl_805DBE64;

void TObjLazerFenceExtra::update_wait_switch() {
    ((TObjLazerFenceExtra_801926D0 *)this)->frame += lbl_805DBE64;
    if ((f32)(((TObjLazerFenceExtra_801926D0 *)this)->motion->frames - 1) < ((TObjLazerFenceExtra_801926D0 *)this)->frame) {
        ((TObjLazerFenceExtra_801926D0 *)this)->frame = lbl_805DBE58;
    }
    if (is_current_floor_switch_set((u16)((TObjLazerFenceExtra_801926D0 *)this)->switchId) == 1) {
        clear_player_status_flag__10TObjPlayerFlUl(((TObjLazerFenceExtra_801926D0 *)this), 0, 1);
        ((TObjLazerFenceExtra_801926D0 *)this)->state = 1;
    }
}

void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0) {
    if (is_current_floor_switch_set((u16) *(s16 *)((s8 *)arg0 + 0xB0)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    }
}

}

struct Node_80192A3C { u32 flags; void *model; u8 pad8[0x24]; Node_80192A3C *child; Node_80192A3C *sibling; };

struct Fish_80192A3C { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80192A3C *fBC; Node_80192A3C *fC0; s32 fC4; void *fC8[4]; };

struct VBase_80192874 { char pad[0x18]; };

struct VObj_80192874 : VBase_80192874 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(void *);
};

struct Ent_80192874 { u8 b[0x84]; };

extern "C" {
s32 get_bml_motion(s32, s32);
Node_80192A3C *get_bml_model(s32, s32);
extern s32 lazer_fence_norm_bml_resource;
void init_collision_body_parts(void *, void *, s32);
void construct_collider_proxy__13TUnk_804AF8A0Fv(void *, void *);
extern Ent_80192874 laser_fence_collision_body_parts[];
extern s32 __vt__19TObjLazerFenceExtra[];
extern s32 lazer_fence_extra_class_name;
void *TObjLazerFenceExtra__ct(void *arg0, void *arg1, void *arg2);
void *TObjLazerFenceExtra__create(void *arg0);
void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1);
void run_task__19TObjLazerFenceExtraFv(void *arg0);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void run_task__19TObjLazerFenceExtraFv(void *arg0) {

    switch (((TObjLazerFenceExtra *)arg0)->m_b4) {
    case 0:
        ((s32 (*)())update_wait_switch__19TObjLazerFenceExtraFv)();
        return;
    case 1:
        ((s32 (*)())reset_by_door__19TObjLazerFenceExtraFPv)();
        return;
    }
}

void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjLazerFenceExtra;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

#define self ((u8 *)arg0)
void *TObjLazerFenceExtra__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    construct_collider_proxy__13TUnk_804AF8A0Fv(arg0, arg1);
    *(s32 **)((s8 *)self + 0x18) = __vt__19TObjLazerFenceExtra;
    *(s32 *)((s8 *)self + 0) = lazer_fence_extra_class_name;
    ((VObj_80192874 *)self)->m5(arg2);
    *(s32 *)((s8 *)self + 0xB4) = 0;
    *(f32 *)((s8 *)self + 0xB8) = lbl_805DBE58;
    *(s32 *)((s8 *)self + 0xAC) = (s32)*(f32 *)((s8 *)self + 0x68);
    if (*(s32 *)((s8 *)self + 0xAC) < 0) {
        *(s32 *)((s8 *)self + 0xAC) = 0;
    }
    if (*(s32 *)((s8 *)self + 0xAC) > 3) {
        *(s32 *)((s8 *)self + 0xAC) = 3;
    }
    *(s16 *)((s8 *)self + 0xB0) = *(s32 *)((s8 *)self + 0x84);
    if (*(s32 *)((s8 *)self + 0x8C) < 0 || *(s32 *)((s8 *)self + 0x8C) > 1) {
        *(s32 *)((s8 *)self + 0xD8) = 0;
        *(s32 *)((s8 *)self + 0x8C) = 0;
    } else {
        *(s32 *)((s8 *)self + 0xD8) = 1;
    }
    ((TObjLazerFenceExtra *)self)->init_models();
    init_collision_body_parts(self, &laser_fence_collision_body_parts[*(s32 *)((s8 *)self + 0x8C) % 2], 3);
    *(u32 *)((s8 *)self + 0x30) |= 0x40000000;
    *(f32 *)((s8 *)(*(u8 **)((s8 *)self + 0xA4)) + 0x10) = *(f32 *)((s8 *)self + 0x6C);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)self + 0xA4)) + 0xC) = *(f32 *)((s8 *)self + 0x70);
    ((TObjPlayer *)self)->reset_photon_effect();
    ((TUnk_804AF8A0 *)self)->refresh_collision_body_centers();
    if (*(s32 *)((s8 *)self + 0xD8) == 0) {
        for (i = 1; i < *(s32 *)((s8 *)self + 0xA8); i++) {
            clear_player_status_flag__10TObjPlayerFlUl(self, i, 1);
        }
    }
    return arg0;
}
#undef self

void *TObjLazerFenceExtra__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjLazerFenceExtra__ct(o, tl_05, arg0);
    }
    return o;
}
void TObjLazerFenceNorm::select_models() {
    Fish_80192A3C *arg0 = (Fish_80192A3C *)this;
    s32 i;
    Node_80192A3C *node;
    s32 j;
    if (arg0->f8C % 2 == 0) {
        arg0->fBC = get_bml_model(lazer_fence_norm_bml_resource, 1);
        arg0->fC0 = get_bml_model(lazer_fence_norm_bml_resource, 0);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 0);
    } else {
        arg0->fBC = get_bml_model(lazer_fence_norm_bml_resource, 3);
        arg0->fC0 = get_bml_model(lazer_fence_norm_bml_resource, 2);
        arg0->fC4 = get_bml_motion(lazer_fence_norm_bml_resource, 1);
    }
    for (j = 0; j < 4; j++) {
        arg0->fC8[j] = 0;
    }
    i = 0;
    node = arg0->fC0->child;
    if (node != 0) {
        arg0->fC8[i++] = node->model;
        node = node->sibling;
        while (node != 0 && i < 4) {
            arg0->fC8[i++] = node->model;
            node = node->sibling;
        }
    }
}

}

struct Obj_80192B5C { u8 pad0[0x38]; u8 f38[0x24]; s32 f5C; s32 f60; u8 pad64[0x48]; s32 fAC; u8 padB0[8]; f32 fB8; s32 fBC; s32 fC0; s32 fC4; s32 fC8[4]; };

extern "C" {
void draw_ginja_model_with_motion(s32, s32, f32);
extern u16 lbl_80445B7C[];
void TObjLazerFenceNorm::draw_animated_beam() {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((TObjDoorJung *)(((Obj_80192B5C *)this)->fC8[i]))->free_children((void *)(lbl_80445B7C[((Obj_80192B5C *)this)->fAC]));
    }
    TObjFish::set_global_param((s32)lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix(((Obj_80192B5C *)this)->f38);
    rotate_matrix_y(0, (void *)((Obj_80192B5C *)this)->f60);
    draw_ginja_object((void *)((Obj_80192B5C *)this)->fBC);
    TParticleCtrl::begin_effect_render();
    draw_ginja_model_with_motion(((Obj_80192B5C *)this)->fC0, ((Obj_80192B5C *)this)->fC4, ((Obj_80192B5C *)this)->fB8);
    TParticleCtrl::end_effect_render();
    pop_matrix();
}

}

struct LazerFenceNormBase_80192C00 { char pad[0x18]; };
struct LazerFenceNormVObj_80192C00 : LazerFenceNormBase_80192C00 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Motion_80192CCC { u8 pad[4]; u32 frames; };

struct TObjLazerFenceNorm_80192CCC {
    u8 pad[0xB0];
    s16 switchId;
    u8 padb2[2];
    s32 state;
    f32 frame;
    u8 padbc[8];
    Motion_80192CCC *motion;
};

extern "C" {
void TObjLazerFenceNorm::draw_model() {
    TObjFish::set_global_param((s32)lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix((void *)((char *)this + 56));
    rotate_matrix_y(0, *(void * *)&this->rotation_y);
    draw_ginja_object(this->m_bc);
    pop_matrix();
}

void TObjLazerFenceNorm::render() {

    if (((LazerFenceNormVObj_80192C00*)this)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) {
        switch (this->m_b4) {
        case 0:
            draw_animated_beam();
            return;
        case 1:
            draw_model();
            break;
        }
    }
}

void TObjLazerFenceNorm::update_closed() {
    ((TObjLazerFenceNorm_80192CCC *)this)->frame += lbl_805DBE64;
    if ((f32)(((TObjLazerFenceNorm_80192CCC *)this)->motion->frames - 1) < ((TObjLazerFenceNorm_80192CCC *)this)->frame) {
        ((TObjLazerFenceNorm_80192CCC *)this)->frame = lbl_805DBE58;
    }
    if (is_current_floor_switch_set((u16)((TObjLazerFenceNorm_80192CCC *)this)->switchId) == 1) {
        clear_player_status_flag__10TObjPlayerFlUl(((TObjLazerFenceNorm_80192CCC *)this), 0, 1);
        ((TObjLazerFenceNorm_80192CCC *)this)->state = 1;
    }
}

void TObjLazerFenceNorm::reset_by_door() {
    if (is_current_floor_switch_set((u16) *(s16 *)&this->m_b0) == 0) {
        set_indexed_flags(this, 0, 1);
        *(s32 *)&this->m_b4 = 0;
    }
}

}
