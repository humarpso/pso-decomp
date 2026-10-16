#include "types.h"

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
void render_lazer_fence_model(void *arg0);
void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0);
void update_wait_switch__19TObjLazerFenceExtraFPv(TObjLazerFenceExtra_801926D0 *self);
u8 is_current_floor_switch_set(u16);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
s32 draw_lazer_fence_extra_model(void *);
void set_global_param__8TObjFishFl(void *);
s32 set_indexed_flags(void *, s32, s32);

extern void *lazer_fence_norm_texture_list;

void render_lazer_fence_model(void *arg0) {
    set_global_param__8TObjFishFl(lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0x60));
    draw_ginja_object(*(void **)((s8 *)arg0 + 0xBC));
    pop_matrix();
}

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    if ((((LazerFenceExtraVObj_801925F8*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0xD8) != 0)) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0xB4);
        switch (temp_r0) {
        case 0:
            draw_lazer_fence_extra_model(arg0);
            return;
        case 1:
            render_lazer_fence_model((void *)(arg0));
            break;
        }
    }
}

extern "C" void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, u32);
extern const f32 lbl_805DBE58;
extern const f32 lbl_805DBE64;

void update_wait_switch__19TObjLazerFenceExtraFPv(TObjLazerFenceExtra_801926D0 *self) {
    self->frame += lbl_805DBE64;
    if ((f32)(self->motion->frames - 1) < self->frame) {
        self->frame = lbl_805DBE58;
    }
    if (is_current_floor_switch_set((u16)self->switchId) == 1) {
        clear_player_status_flag__10TObjPlayerFlUl(self, 0, 1);
        self->state = 1;
    }
}

void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0) {
    if (is_current_floor_switch_set((u16) *(s16 *)((s8 *)arg0 + 0xB0)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    }
}

}

#include "types.h"

struct Node_80192A3C { u32 flags; void *model; u8 pad8[0x24]; Node_80192A3C *child; Node_80192A3C *sibling; };

struct Fish_80192A3C { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80192A3C *fBC; Node_80192A3C *fC0; s32 fC4; void *fC8[4]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

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
void select_models__18TObjLazerFenceNormFPv(Fish_80192A3C *arg0);
void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, u32);
void reset_photon_effect__10TObjPlayerFv(void *);
void refresh_collision_body_centers(void *);
void init_collision_body_parts(void *, void *, s32);
void construct_collider_proxy__10TObjPlayerFv(void *, void *);
void init_models__8TObjFishFv(void *);
extern Ent_80192874 laser_fence_collision_body_parts[];
extern s32 __vt__19TObjLazerFenceExtra[];
extern s32 lazer_fence_extra_class_name;
extern const f32 lbl_805DBE58;
void *TObjLazerFenceExtra__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *TObjLazerFenceExtra__create(void *arg0);
void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1);
void run_task__19TObjLazerFenceExtraFv(void *arg0);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_particle_controller__10TObjPlayerFs(void *, s32);

void run_task__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB4);
    switch (temp_r0) {
    case 0:
        ((s32 (*)())update_wait_switch__19TObjLazerFenceExtraFPv)();
        return;
    case 1:
        ((s32 (*)())reset_by_door__19TObjLazerFenceExtraFPv)();
        return;
    }
}

extern s32 __vt__19TObjLazerFenceExtra[];

void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjLazerFenceExtra;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
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
    construct_collider_proxy__10TObjPlayerFv(arg0, arg1);
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
    init_models__8TObjFishFv(self);
    init_collision_body_parts(self, &laser_fence_collision_body_parts[*(s32 *)((s8 *)self + 0x8C) % 2], 3);
    *(u32 *)((s8 *)self + 0x30) |= 0x40000000;
    *(f32 *)((s8 *)(*(u8 **)((s8 *)self + 0xA4)) + 0x10) = *(f32 *)((s8 *)self + 0x6C);
    *(f32 *)((s8 *)(*(u8 **)((s8 *)self + 0xA4)) + 0xC) = *(f32 *)((s8 *)self + 0x70);
    reset_photon_effect__10TObjPlayerFv(self);
    refresh_collision_body_centers(self);
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
        o = TObjLazerFenceExtra__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}
void select_models__18TObjLazerFenceNormFPv(Fish_80192A3C *arg0) {
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

#include "types.h"
struct Obj_80192B5C { u8 pad0[0x38]; u8 f38[0x24]; s32 f5C; s32 f60; u8 pad64[0x48]; s32 fAC; u8 padB0[8]; f32 fB8; s32 fBC; s32 fC0; s32 fC4; s32 fC8[4]; };

extern "C" {
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(s32, int);
void post_translate_matrix(void *);
void draw_ginja_model_with_motion(s32, s32, f32);
extern u16 lbl_80445B7C[];
void draw_animated_beam__18TObjLazerFenceNormFPv(Obj_80192B5C *arg0);
}

extern "C" {

void draw_animated_beam__18TObjLazerFenceNormFPv(Obj_80192B5C *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        free_children__12TObjDoorJungFPvPv(arg0->fC8[i], lbl_80445B7C[arg0->fAC]);
    }
    set_global_param__8TObjFishFl(lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, (void *)arg0->f60);
    draw_ginja_object((void *)arg0->fBC);
    begin_effect_render__13TParticleCtrlFv();
    draw_ginja_model_with_motion(arg0->fC0, arg0->fC4, arg0->fB8);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

}

#include "types.h"
#include "pso/object/TObjLazerFenceNorm.h"

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
void clear_player_status_flag__10TObjPlayerFlUl(void *, s32, u32);
u8 is_current_floor_switch_set(u16);
extern const f32 lbl_805DBE58;
extern const f32 lbl_805DBE64;
void update_closed__18TObjLazerFenceNormFPv(TObjLazerFenceNorm_80192CCC *self);
}

extern "C" {

u8 is_current_floor_switch_set(u16);
void post_translate_matrix(void *);
void draw_ginja_object(void *);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
void set_global_param__8TObjFishFl(void *);
s32 set_indexed_flags(void *, s32, s32);

extern void *lazer_fence_norm_texture_list;

void TObjLazerFenceNorm::draw_model() {
    set_global_param__8TObjFishFl(lazer_fence_norm_texture_list);
    push_matrix();
    post_translate_matrix((void *)((char *)this + 56));
    rotate_matrix_y(0, *(void * *)&this->rotation_y);
    draw_ginja_object(this->m_bc);
    pop_matrix();
}

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void TObjLazerFenceNorm::render() {
    s32 temp_r0;

    if (((LazerFenceNormVObj_80192C00*)this)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) {
        temp_r0 = *(s32 *)&this->m_b4;
        switch (temp_r0) {
        case 0:
            draw_animated_beam__18TObjLazerFenceNormFPv((Obj_80192B5C *)this);
            return;
        case 1:
            draw_model();
            break;
        }
    }
}

void update_closed__18TObjLazerFenceNormFPv(TObjLazerFenceNorm_80192CCC *self) {
    self->frame += lbl_805DBE64;
    if ((f32)(self->motion->frames - 1) < self->frame) {
        self->frame = lbl_805DBE58;
    }
    if (is_current_floor_switch_set((u16)self->switchId) == 1) {
        clear_player_status_flag__10TObjPlayerFlUl(self, 0, 1);
        self->state = 1;
    }
}

void TObjLazerFenceNorm::reset_by_door() {
    if (is_current_floor_switch_set((u16) *(s16 *)&this->m_b0) == 0) {
        set_indexed_flags(this, 0, 1);
        *(s32 *)&this->m_b4 = 0;
    }
}

}
