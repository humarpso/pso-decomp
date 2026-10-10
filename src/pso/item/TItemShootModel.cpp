#include "pso/TItemShootModel.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootModel*);
void* get_entity_id__10TObjPlayerFPv(void*);
f32   newton_sqrtf(f32);
f64   atan2_float(f32, f32);
void  notify_fish_if_valid__10TObjPlayerFUi(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  push_matrix(void);
void  post_translate_matrix(Vec*);
void  rotate_matrix_by_node_angles(void*, s32);
void  draw_ginja_object(void*);
void  pop_matrix(void);
void  end_effect_render__13TParticleCtrlFv(void);
extern const char* TItemShootModel__class_name;
extern const f32   lbl_805DAC60;
extern const f64   lbl_8043E7A0[];
}

void TItemShootModel::render() {
    if (is_owner_alive__10TObjPlayerFPv(this)) {
        if (this->m_58 != NULL) {
            notify_fish_if_valid__10TObjPlayerFUi(this->m_5C);
            begin_effect_render__13TParticleCtrlFv();
            push_matrix();
            post_translate_matrix(&this->m_pos);
            rotate_matrix_by_node_angles(&this->m_28, 1);
            rotate_matrix_by_node_angles(&this->m_60, 1);
            draw_ginja_object(this->m_58);
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        }
    }
}

TItemShootModel::TItemShootModel(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShoot(owner, pos, dir, life) {
    this->m_name = TItemShootModel__class_name;
    this->m_58 = *(void**)((u8*)owner + 0x188);
    this->m_5C = get_entity_id__10TObjPlayerFPv(owner);
    if (lbl_805DAC60 != this->m_dir.y) {
        f32 horiz = newton_sqrtf(this->m_dir.x * this->m_dir.x + this->m_dir.z * this->m_dir.z);
        this->m_28 = -(s32)(lbl_8043E7A0[0] * atan2_float(this->m_dir.y, horiz));
        this->m_30 = 0;
    } else {
        this->m_30 = 0;
        this->m_28 = 0;
    }
    this->m_68 = 0;
    this->m_64 = 0;
    this->m_60 = 0;
}
