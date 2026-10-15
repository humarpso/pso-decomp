#include "pso/TItemShootModelRotZ.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFv(TItemShootModelRotZ*);
void  notify_fish_if_valid__10TObjPlayerFUl(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  push_matrix(void);
void  post_translate_matrix(Vec*);
void  rotate_matrix_by_node_angles(void*, s32);
void  draw_ginja_object(void*);
void  pop_matrix(void);
void  end_effect_render__13TParticleCtrlFv(void);
extern const char* item_shoot_model_rot_z_class_name;
}

void TItemShootModelRotZ::render() {
    if (is_owner_alive__10TObjPlayerFv(this)) {
        if (this->m_58 != NULL) {
            notify_fish_if_valid__10TObjPlayerFUl(this->m_5C);
            begin_effect_render__13TParticleCtrlFv();
            push_matrix();
            post_translate_matrix(&this->m_pos);
            rotate_matrix_by_node_angles(&this->m_28, 1);
            draw_ginja_object(this->m_58);
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        }
    }
}

void TItemShootModelRotZ::hook() {
    this->m_30 += 0xCCC;
}

TItemShootModelRotZ::TItemShootModelRotZ(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShootModel(owner, pos, dir, life) {
    this->m_name = item_shoot_model_rot_z_class_name;
}
