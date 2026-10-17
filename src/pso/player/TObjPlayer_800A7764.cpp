#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEneDimedian.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"

struct VBase_14_800A7BEC { char pad[0x14]; };

struct VObj_14_800A7BEC : VBase_14_800A7BEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual s32 m5();
};

struct Obj_800A7BEC { u8 pad0[0x38]; u8 sub38[0x326 - 0x38]; s16 f326; s16 state; u8 pad32a[0x390 - 0x32A]; s32 f390; };

typedef struct Vec_800A7A14 {
    f32 x, y, z;
} Vec_800A7A14;

struct VBase_800A7A14 { char pad[0x18]; };

struct VObj_800A7A14 : VBase_800A7A14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800A7A14 *, Vec_800A7A14 *);
};

typedef struct Obj_800A7A14 {
    u8 pad0[0x38];
    Vec_800A7A14 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fB8;
    u8 padBA[0xC0 - 0xBA];
    f32 fC0;
    u8 padC4[0x3C4 - 0xC4];
    VObj_800A7A14 *effs[2];
} Obj_800A7A14;

struct VBase14_800A7CA4 { u8 pad[0x14]; };

struct Fade_800A7CA4 : VBase14_800A7CA4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
    virtual void begin();
    virtual void end();
    virtual s32 active();
    u8 pad18[4];
};

struct VBase18_800A7CA4 { u8 pad[0x18]; };

struct Node_800A7CA4 { u8 pad[6]; s16 f6; };

struct L4_800A7CA4 { u8 pad[4]; Node_800A7CA4 *n; };

struct L3_800A7CA4 { u8 pad[4]; L4_800A7CA4 *n; };

struct L2_800A7CA4 { u8 pad[0x30]; L3_800A7CA4 *n; };

struct L1_800A7CA4 { u8 pad[0x2C]; L2_800A7CA4 *n; };

struct Player_800A7CA4 : VBase18_800A7CA4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
    virtual s32 visible(f32, f32, f32);
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    L1_800A7CA4 *f34;
    u8 pos[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    u8 cam[0x326 - 0x2FC];
    s16 f326;
    u8 pad328[0x368 - 0x328];
    s32 f368;
    u8 pad36C[0x390 - 0x36C];
    s32 f390;
    u8 pad394[0x3A8 - 0x394];
    Fade_800A7CA4 sub;
    u8 pad3C4[8];
    Fade_800A7CA4 fades[2];
};

extern "C" {
s32 play_sound_effect(s32, s32, s32, s32);
s32 copy_target_state__14TObjEnePanarmsFPv(s32, s32);
s32 TObjPlayer__sub_800A0554(void *);
s32 advance_animation_playback();
s32 mult_vec_array__10TObjPlayerFUll(int, int, void *, int);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
extern s32 dimedian_type3_object;
extern s32 lbl_805D5088;
extern const f32 lbl_805D9AA4;
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 update_obstruction_fade(void *);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 TObjPlayer__sub_8023DEE0(int, int, int, int);
s32 draw_chunk_object(void *);
extern s32 dimedian_resource_handles[];
extern s32 dimedian_last_draw_tick[];
extern s32 actor_frame_tick;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805D9AA8;
extern const f32 lbl_805D9AAC;
extern const f32 lbl_805D9AB0;
extern const f32 lbl_805D9AB4;
extern const f32 lbl_805D9AB8;
extern const f32 lbl_805D9ABC;
void draw_actor_model__10TObjPlayerFPv(Player_800A7CA4 *self);
struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };
struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

s16 TObjPlayer__sub_800A776C(void* p);
int TObjPlayer__sub_800A7774(void* p);
int VecCopy__FP3VecPC3Vec(void*);
f32 calc_boss4_scale__10TObjPlayerFi();
s32 queue_destruction__7TObjectFv(void *);

s16 TObjPlayer::get_field_2c8() { return *(s16 *)&this->m_2c8; }
s16 TObjPlayer__sub_800A776C(void* p) { return *(s16*)((char*)p + 0x2ca); }
int TObjPlayer__sub_800A7774(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void TObjEnemy::sub_800A7798(f32 farg0) {
    *(f32 *)((s8 *)((u8 *)this) + 0xD0) = farg0;
    ((TObjEnemy *)((u8 *)this))->set_flags_B0((u32)(0x100U));
}

void TObjEnemy::set_flags_B0(u32 v) { *(u32*)((char*)this + 0xb0) |= v; }
void TObjEneDimedian::vfunc_101() {  }

void TObjEneDimedian::vfunc_99() {
    s32 arg0 = (s32)this;
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((s32)((void *) (arg0)), (s32)((int) (0x4003AD40)))))), (s32)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    TObjPlayer::play_effect_if_v2((s32)((int) (-0x100)));
}

void TObjEneDimedian::vfunc_98() {
    s32 arg0 = (s32)this;
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((s32)((void *) (arg0)), (s32)((int) (0x4003AD3D)))))), (s32)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    TObjPlayer::play_effect_if_v2((s32)((int) (-0x100)));
}

void TObjEneDimedian::vfunc_97() {
    s32 arg0 = (s32)this;
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((s32)((void *) (arg0)), (s32)((int) (0x4003A83E)))))), (s32)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    TObjPlayer::play_effect_if_v2((s32)((int) (-0x100)));
}

extern f32 lbl_805D9AA0;

void TObjEneDimedian::vfunc_96() {
    s32 arg0 = (s32)this;
    play_sound_effect((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((s32)((void *) (arg0)), (s32)((int) (0x4003A83F)))))), (s32)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    TObjPlayer::play_effect_if_v2((s32)((int) (-0x100)));
}

void TObjEneDimedian::vfunc_95() {
    s32 arg0 = (s32)this;
    s32 temp_r3;
    if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9AA0) {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003B23B);
        play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
    } else {
        temp_r3 = copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003B23C);
        play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
    }
    TObjPlayer::play_effect_if_v2(-0x100);
}

void TObjEneDimedian::vfunc_94() {
    s32 arg0 = (s32)this;
    s32 global_state;
    TObjPlayer::apply_effect_variant_a((s32)((void *) (arg0 + 0x38)), (s32)((int) (0)));
    ((TObjPlayer *)(arg0 + 0x2FC))->request_two_effects();
    global_state = TOKeyMachine01::get_global_state();
    if ((global_state == 0x13) || (global_state == 0x14)) {
        play_sound_effect((s32)(0x3AD3F), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(((s32)copy_target_state__14TObjEnePanarmsFPv((s32)((void *) (arg0)), (s32)((int) (0x4003AD25))))), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
}

void TObjEneDimedian::vfunc_93() {
    Obj_800A7A14 *o = (Obj_800A7A14 *)this;
    Vec_800A7A14 b;
    Vec_800A7A14 a;
    u32 e;
    s32 idx;
    VObj_800A7A14 *eff;
    if (!(o->fC0 < lbl_805D9AA4)) {
        return;
    }
    switch (o->fB8) {
    case 3:
        e = TObjPlayer::lookup_entry_by_value((void *)dimedian_type3_object, o->fC0);
        idx = 0;
        break;
    case 4:
        e = TObjPlayer::lookup_entry_by_value((void *)lbl_805D5088, o->fC0);
        idx = 1;
        break;
    default:
        e = 0;
        break;
    }
    if (e == 0) {
        return;
    }
    push_matrix();
    set_matrix_identity(0);
    post_translate_matrix(&o->pos);
    rotate_matrix_y(0, o->f60);
    mult_vec_array__10TObjPlayerFUll(0, e, &a, 2);
    pop_matrix();
    eff = o->effs[idx];
    if (eff != NULL) {
        eff->m4(&a, &b);
    }
}

int TObjEneDimedian::beast_retire_corpse() {
    u8 *arg0 = (u8 *)this;
    this->m_390 = 1;
    if (((A7B00Obj_800a7b00_800A7764*)(arg0 + 0x3A8))->m4() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}
void TObjEneDimedian::sub_800A7B54() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x334);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x334) = 0;
    } else if (temp_r0 > 2) {
        *(s32 *)((s8 *)arg0 + 0x334) = 2;
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x334);
    switch (temp_r0_2) {
    case 2:
        *(s32 *)((s8 *)arg0 + 0x368) = 0;
        ((TObjEneLappy *)arg0)->set_param(0x2B);
        return;
    case 1:
        *(s32 *)((s8 *)arg0 + 0x368) = 1;
        ((TObjEneLappy *)arg0)->set_param(0x2A);
        return;
    default:
        *(s32 *)((s8 *)arg0 + 0x368) = 2;
        ((TObjEneLappy *)arg0)->set_param(0x29);
        return;
    }
}
void TObjEneDimedian::vfunc_83() {
    Obj_800A7BEC *arg0 = (Obj_800A7BEC *)this;
    advance_animation_playback();
    switch (arg0->state) {
    case 0:
    default:
        if (arg0->f390 == 1) {
            arg0->state = 1;
            ((TBoss3Volopt *)(arg0->sub38))->play_area_se_with_particle();
            TObjPlayer__sub_800A0554((u8 *)arg0 + 0x3A8);
        } else {
            arg0->state = 2;
        }
        break;
    case 1:
        if (((VObj_14_800A7BEC *)((u8 *)arg0 + 0x3A8))->m5() == 1) {
            arg0->state = 2;
            arg0->f390 = 0;
        }
        break;
    case 2:
        arg0->f326 = 1;
        break;
    }
}
void draw_actor_model__10TObjPlayerFPv(Player_800A7CA4 *self) {
    s16 saved;
    s32 vis;
    s32 fading;
    s32 mode;
    s32 d;
    s32 doDraw;
    f32 pos[3];
    if (actor_frame_tick != dimedian_last_draw_tick[self->f368]) {
        dimedian_last_draw_tick[self->f368] = actor_frame_tick;
        TObjPlayer__sub_8023DEE0(dimedian_resource_handles[self->f368], 0xE, 0, 0);
    }
    mode = 0;
    if (is_split_screen() != 0) {
        mode = get_camera_mode__11TCameraCtrlFv();
    }
    vis = self->visible(lbl_805D9AA8, lbl_805D9AAC, lbl_805D9AB0);
    if (vis == 0) {
        return;
    }
    fading = 0;
    if (TObjEneDD::check_v2_mode() != 0) {
        update_obstruction_fade(&self->fades[mode]);
        fading = ((RenderFadeState *)(&self->fades[mode]))->updateFromCamera((const f32*)(self->cam));
    }
    select_actor_lighting(self);
    TObjFish::set_global_param(self->f24);
    push_matrix();
    post_translate_matrix(self->pos);
    rotate_matrix_y(0, self->f60);
    if (TObjPlayer::check_demo_mode() == 1) {
        draw_chunk_object(self->f34);
    } else {
        switch (self->f326) {
        case 0:
        case 1:
        case 8: {
            Node_800A7CA4 *n = self->f34->n->n->n->n;
            saved = n->f6;
            n->f6 = (u8)n->f6;
            break;
        }
        }
        TObjPlayer::toggle_particle_effect();
        if (self->f390 == 1) {
            if (self->sub.active() != 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                self->sub.begin();
                d = 1;
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(self) != 0) {
                    d = 0;
                }
                if (d != 0) {
                    ((TObjEneRe7Berura *)self)->draw();
                }
                self->sub.end();
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
                model_render_flags = lbl_805D5660;
            }
        } else {
            doDraw = 1;
            if (fading != 0) {
                self->fades[mode].begin();
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(self) != 0) {
                    doDraw = 0;
                }
            }
            if (doDraw != 0) {
                if (vis == 1) {
                    ((TObjEneRe7Berura *)self)->draw();
                } else {
                    ((TObjPlayer *)self)->render_world_model();
                }
            }
            if (fading != 0) {
                self->fades[mode].end();
            }
        }
        TParticleCtrl::end_effect_render();
        switch (self->f326) {
        case 0:
        case 1:
        case 8:
            self->f34->n->n->n->n->f6 = saved;
            break;
        }
    }
    pop_matrix();
    restore_scene_lighting();
    switch (self->f326) {
    case 0:
    case 1:
    case 8:
    case 9:
        break;
    default:
        pos[0] = lbl_805D9AB4;
        pos[1] = lbl_805D9AB8;
        pos[2] = lbl_805D9ABC;
        ((TObjEnemy *)self)->render_with_position_override((u8 *)pos, (s32)0);
        break;
    }
}

}
