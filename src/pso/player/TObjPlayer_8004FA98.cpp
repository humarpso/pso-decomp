#include "types.h"
#include "pso/object/TObjDFDemo5.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/object/TObjFish.h"

extern "C" {
s32 post_translate_matrix(void *);
s32 draw_model_motion(s32, s32, f32);
s32 TObjPlayer__sub_80052390(f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 clear_render_callback__8TObjFishFv(s32);
}

extern "C" {

s32 post_translate_matrix(void *);
s32 draw_model_motion(s32, s32, f32);
s32 TObjPlayer__sub_80052390(f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 clear_render_callback__8TObjFishFv(s32);

void TObjPlayer::release_subobjects() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0xB4) {
        TObjPlayer__sub_80052390(0.99f);
        push_matrix();
        TObjPlayer::set_global_flag();
        post_translate_matrix(arg0 + 0xD4);
        rotate_matrix_y(0, this->m_e0);
        TObjFish::set_global_param(*(s32 *)&this->unk_CC);
        ((TObjFish *)(this->m_108))->set_draw_callback_list();
        draw_model_motion(this->m_c8, this->m_d0, *(f32 *)&this->unk_E8);
        clear_render_callback__8TObjFishFv(this->m_108);
        TObjPlayer::clear_global_state();
        pop_matrix();
        TObjPlayer::sync_player_globals();
    }
}

int TObjPlayer::draw_fading_motion() {
    u8 *arg0 = (u8 *)this;
    f32 alpha;
    f32 frac;
    s32 t;
    alpha = 1.0f;
    t = *(s32 *)((s8 *)arg0 + 0xE4);
    if (t >= 0xF0) {
        return;
    }
    if (t > 0xA0) {
        alpha = (f32)(0xF0 - t) / 80.0f;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    push_matrix();
    TObjPlayer::set_global_flag();
    post_translate_matrix(arg0 + 0xD4);
    rotate_matrix_y(0, this->m_e0);
    TObjFish::set_global_param(*(s32 *)&this->unk_A8);
    ((TObjFish *)(this->m_ec))->set_draw_callback_list();
    draw_model_motion(*(s32 *)&this->m_a4, this->m_ac, *(f32 *)&this->unk_E8);
    clear_render_callback__8TObjFishFv(this->m_ec);
    frac = (s32)*(f32 *)&this->unk_E8 % 30;
    TObjFish::set_global_param(*(s32 *)&this->m_b4);
    draw_model_motion(*(s32 *)&this->unk_B0, *(s32 *)&this->unk_B8, frac);
    TObjFish::set_global_param(this->m_c0);
    draw_model_motion(*(s32 *)&this->unk_BC, *(s32 *)&this->unk_C4, frac);
    TObjPlayer::clear_global_state();
    pop_matrix();
    if (alpha < 1.0f) {
        TObjPlayer::sync_player_globals();
    }
}

void TObjPlayer::update_both() { draw_fading_motion(); release_subobjects(); }

}

typedef struct Obj_8004FD50 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x90 - 0x1C];
    void *items[5];
    u8 pada4[0xEC - 0xA4];
    void *fec;
    u8 padf0[0x108 - 0xF0];
    void *f108;
} Obj_8004FD50;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void play_cue_stream_file(s32);
void darkfalz_death_update(u8 *arg0);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void restore_player_cameras();
void __dl__7TObjectFPv(void *);
extern u8 lbl_804857F4[];
Obj_8004FD50 *__dt__11TObjDFDemo5Fv(Obj_8004FD50 *arg0, s16 arg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma readonly_strings on
void darkfalz_death_update(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    ((TObjDFDemo5 *)arg0)->update_particle_emitters();
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) == 0x8C) {
        play_cue_stream_file((s32) "dfdeath.adx");
        TBoss3Volopt::queue_event_1D(0xC0, 0xF);
    }
    { f32 k = 0.5f; temp_f1 = *(f32 *)((s8 *)arg0 + 0xE8) + k; }
    *(f32 *)((s8 *)arg0 + 0xE8) = temp_f1;
    if (temp_f1 > 149.0f) {
        *(f32 *)((s8 *)arg0 + 0xE8) = (f32) 149.0f;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xE4) + 1;
    *(s32 *)((s8 *)arg0 + 0xE4) = temp_r0;
    if (temp_r0 >= 0x12C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

Obj_8004FD50 *__dt__11TObjDFDemo5Fv(Obj_8004FD50 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804857F4;
        if (arg0->fec != NULL) {
            TObjFish::init_state_1(arg0->fec);
            arg0->fec = NULL;
        }
        if (arg0->f108 != NULL) {
            TObjFish::init_state_1(arg0->f108);
            arg0->f108 = NULL;
        }
        for (i = 0; i < 5; i++) {
            if (arg0->items[i] != NULL) {
                TBoss4Type2::request_destroy((u32)(arg0->items[i]));
                arg0->items[i] = NULL;
            }
        }
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            restore_player_cameras();
        }
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" { extern const f32 lbl_805D8A1C = -0.5f; }
