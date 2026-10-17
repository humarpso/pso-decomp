#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TODoorAncient07.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Base1 { char pad[0x18]; };

struct VObj1 : Base1 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
void draw_ginja_object(void *child);
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern s32 TODoorAncient07__render_nodes;
extern const f32 lbl_805DB450;
extern const f32 lbl_805DB454;
extern const f32 lbl_805DB458;
extern const f32 lbl_805DB45C;
void set_indexed_flags(void *, s32, s32);
s32 is_any_player_within_radius_xz(u8 *self, f32 radius);
s32 play_sound_effect(s32, void *, s32, s32);
extern u8 *TODoorAncient07__texture_lists;
extern const f32 lbl_805DB464;
u8 *TODoorAncient07__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);

extern const f32 lbl_805DB460;

void TODoorAncient07::render() {
    u8 *arg0 = (u8 *)this;
    VObj1 *self = (VObj1 *)arg0;
    if ((self->m8(lbl_805DB450, lbl_805DB454) != 0) && (((TUnk_804AFBF8 *)arg0)->is_in_view_depth(lbl_805DB458) != 0)) {
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        TObjFish::set_global_param(this->texture_id);
        if (((u32) *(u32 *)&this->m_bc != 0U) && (lbl_805DB45C != this->m_b0)) {
            draw_ginja_model_with_motion(*(s32 *)&this->model, *(s32 *)&this->m_bc, this->m_b0);
        } else {
            draw_ginja_object((void *)TODoorAncient07__render_nodes);
            draw_ginja_object((void *)(TODoorAncient07__render_nodes + 0x38));
            TParticleCtrl::begin_effect_render();
            draw_ginja_object((void *)(TODoorAncient07__render_nodes + 0x70));
            TParticleCtrl::end_effect_render();
        }
        pop_matrix();
    }
}

void TODoorAncient07::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    if (this->m_d0 & 1) {
        this->texture_id = (s32) *(s32 *)((s8 *)TODoorAncient07__texture_lists + 4);
        if (is_any_player_within_radius_xz(arg0, lbl_805DB460) != 1) {
            *(s32 *)&this->m_ac = 3;
            ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
            play_sound_effect(0x4004B708, (u8 *)&this->position, 0, 0);
        }
    } else {
        *(s32 *)&this->m_ac = 3;
        this->texture_id = (s32) *(s32 *)((s8 *)TODoorAncient07__texture_lists + 0);
        ((TObjPlayer *)arg0)->clear_player_status_flag((s32)NULL, 8);
        play_sound_effect(0x4004B708, (u8 *)&this->position, 0, 0);
    }
}

extern void *tl_05;

void TODoorAncient07::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if (this->m_d0 & 1) {
        this->texture_id = (s32) *(s32 *)((s8 *)TODoorAncient07__texture_lists + 4);
        if (is_any_player_within_radius_xz((u8 *)((s32) arg0), lbl_805DB464) == 1) {
            *(s32 *)&this->m_ac = 1;
            set_indexed_flags(arg0, 0, 8);
            play_sound_effect(0x4004B708, arg0 + 0x38, 0, 0);
        }
    } else {
        this->texture_id = (s32) *(s32 *)((s8 *)TODoorAncient07__texture_lists + 0);
    }
}

void *TODoorAncient07::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient07__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

}
