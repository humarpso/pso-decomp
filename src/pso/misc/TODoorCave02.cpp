#include "types.h"
#include "pso/player/TUnk_80494AE0.h"
#include "pso/unk/text_80158360.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TODoorCave02.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DB4B4;
extern const f32 lbl_805DB4B8;
extern const f32 lbl_805DB4BC;
extern const f32 lbl_805DB4C0;
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
void draw_ginja_model(s32 model);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
struct Base_80161D38 { char pad[0x18]; };
struct VObj_80161D38 : Base_80161D38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

s32 draw_ginja_model_with_motion(void *, s32, f32);
s32 rotate_matrix_y(s32, s32);

void TODoorCave02::vfunc_20() {  }

extern u8 *cave_door02_resources;
extern const f32 lbl_805DB4B0;

void TODoorCave02::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    if (this->m_d0 & 1) {
        this->texture_id = (s32) *(s32 *)((s8 *)cave_door02_resources + 4);
        if (is_any_player_within_radius_xz(arg0, lbl_805DB4B0) != 1) {
            this->m_ac = 3;
            ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag(0, 8);
            play_sound_effect(0x42807, (u8 *)&this->position, 0, 0);
        }
    } else {
        this->m_ac = 3;
        this->texture_id = (s32) *(s32 *)((s8 *)cave_door02_resources + 0);
        ((TUnk_804AF8A0 *)arg0)->clear_player_status_flag((s32)NULL, 8);
        play_sound_effect(0x42807, (u8 *)&this->position, 0, 0);
    }
}

extern const f32 lbl_805DB4C4;

void TODoorCave02::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if (this->m_d0 & 0x100000) {
        this->m_d8 = (f32) (this->m_d8 + lbl_805DB4B4);
        if (lbl_805DB4B8 <= this->m_d8) {
            this->m_d0 = (s32) (this->m_d0 & 0xFFEFFFFF);
        }
    } else {
        this->m_d8 = (f32) (this->m_d8 - lbl_805DB4B4);
        if (this->m_d8 <= lbl_805DB4BC) {
            this->m_d0 = (s32) (this->m_d0 | 0x100000);
        }
    }
    if ((this->m_d0 & 1) && (is_any_player_within_radius_xz((arg0), lbl_805DB4C0) == 1)) {
        this->m_ac = 1;
        ((TUnk_804AF8A0 *)arg0)->set_indexed_flags(0, 8);
        play_sound_effect(0x42807, (u8 *)&this->position, 0, 0);
    }
}

s32 TODoorCave02::draw_parts(void *arg1_) {
    u8 *arg0 = (u8 *)this;
    u8 *arg1 = (u8 *)arg1_;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    push_matrix();
    post_translate_matrix(arg1 + 8);
    draw_ginja_model((*(s32 *)((s8 *)arg1 + 4)));
    TParticleCtrl::begin_effect_render();
    temp_r4 = model_render_flags;
    lbl_805D5660 = temp_r4;
    model_render_flags = temp_r4 | 0x10;
    ((TUnk_80494AE0 *)(arg0 + 0xD4))->set_chunk_material_color();
    push_matrix();
    temp_r31 = *(u8 **)((s8 *)arg1 + 0x2C);
    post_translate_matrix(temp_r31 + 8);
    draw_ginja_model((*(s32 *)((s8 *)temp_r31 + 4)));
    pop_matrix();
    push_matrix();
    temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x30);
    post_translate_matrix(temp_r31_2 + 8);
    draw_ginja_model((*(s32 *)((s8 *)temp_r31_2 + 4)));
    pop_matrix();
    ((TUnk_80494AE0 *)chunk_material_color_half_alpha_f32)->set_chunk_material_color();
    model_render_flags = lbl_805D5660;
    TParticleCtrl::end_effect_render();
    pop_matrix();
}

void TODoorCave02::render() {
    u8 *arg0 = (u8 *)this;
    if ((((VObj_80161D38 *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) && (((TUnk_804AFBF8 *)arg0)->is_in_view_depth(lbl_805DB4C4) != 0)) {
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        if ((s32) *(s32 *)&this->m_ac == 0) {
            TObjFish::set_global_param(*(s32 *)(cave_door02_resources + ((this->m_d0 * 4) & 4)));
            draw_parts((void *)(*(void **)((s8 *)(*(void * *)&this->model) + 0x2C)));
            draw_parts((void *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void * *)&this->model) + 0x2C)) + 0x30)));
        } else {
            TObjFish::set_global_param(*(s32 *)((s8 *)cave_door02_resources + 4));
            draw_ginja_model_with_motion(*(void * *)&this->model, *(s32 *)&this->m_bc, this->m_b0);
        }
        pop_matrix();
    }
}

}
