#include "types.h"
#include "pso/misc/TODoorCave02.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(void *, f32);
s32 play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DB4B4;
extern const f32 lbl_805DB4B8;
extern const f32 lbl_805DB4BC;
extern const f32 lbl_805DB4C0;
void play_proximity_sound__12TODoorCave02Fv(u8 *arg0);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
}

extern "C" {

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

void vfunc_17__12TODoorCave02Fv(u8 *arg0);
void vfunc_20__12TODoorCave02Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
s32 is_any_player_within_radius_xz(void *, f32);
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(void *, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 is_in_view_depth(void *, f32);

void TODoorCave02::vfunc_20() {  }

extern u8 *cave_door02_resources;
extern const f32 lbl_805DB4B0;

void TODoorCave02::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)cave_door02_resources + 4);
        if (is_any_player_within_radius_xz(arg0, lbl_805DB4B0) != 1) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 3;
            ((TObjPlayer *)arg0)->clear_player_status_flag((s32)0, (s32)8);
            play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
        *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)cave_door02_resources + 0);
        ((TObjPlayer *)arg0)->clear_player_status_flag((s32)NULL, (s32)8);
        play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
    }
}

extern u8 *cave_door02_resources;
extern const f32 lbl_805DB4C4;

void TODoorCave02::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 0x100000) {
        *(f32 *)((s8 *)arg0 + 0xD8) = (f32) (*(f32 *)((s8 *)arg0 + 0xD8) + lbl_805DB4B4);
        if (lbl_805DB4B8 <= *(f32 *)((s8 *)arg0 + 0xD8)) {
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) & 0xFFEFFFFF);
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0xD8) = (f32) (*(f32 *)((s8 *)arg0 + 0xD8) - lbl_805DB4B4);
        if (*(f32 *)((s8 *)arg0 + 0xD8) <= lbl_805DB4BC) {
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 0x100000);
        }
    }
    if ((*(s32 *)((s8 *)arg0 + 0xD0) & 1) && (is_any_player_within_radius_xz((void *) (arg0), (f32) (lbl_805DB4C0)) == 1)) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((s32)((int) (0x42807)), (void *)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    }
}

s32 TODoorCave02::draw_parts(void *arg1_) {
    u8 *arg0 = (u8 *)this;
    u8 *arg1 = (u8 *)arg1_;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    push_matrix();
    post_translate_matrix((void *) (arg1 + 8));
    draw_ginja_model((int) (*(s32 *)((s8 *)arg1 + 4)));
    TParticleCtrl::begin_effect_render();
    temp_r4 = model_render_flags;
    lbl_805D5660 = temp_r4;
    model_render_flags = temp_r4 | 0x10;
    set_chunk_material_color((void *) (arg0 + 0xD4));
    push_matrix();
    temp_r31 = *(u8 **)((s8 *)arg1 + 0x2C);
    post_translate_matrix((void *) (temp_r31 + 8));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
    pop_matrix();
    push_matrix();
    temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x30);
    post_translate_matrix((void *) (temp_r31_2 + 8));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
    pop_matrix();
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    model_render_flags = lbl_805D5660;
    TParticleCtrl::end_effect_render();
    pop_matrix();
}

void TODoorCave02::render() {
    u8 *arg0 = (u8 *)this;
    if ((((VObj_80161D38 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) && (is_in_view_depth(arg0, lbl_805DB4C4) != 0)) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xAC) == 0) {
            TObjFish::set_global_param(*(s32 *)(cave_door02_resources + ((*(s32 *)((s8 *)arg0 + 0xD0) * 4) & 4)));
            draw_parts((void *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)));
            draw_parts((void *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)) + 0x30)));
        } else {
            TObjFish::set_global_param(*(s32 *)((s8 *)cave_door02_resources + 4));
            draw_ginja_model_with_motion(*(void **)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
        }
        pop_matrix();
    }
}

}
