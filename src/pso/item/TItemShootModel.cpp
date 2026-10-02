#include "pso/TItemShootModel.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootModel*);
void* get_entity_id__10TObjPlayerFPv(void*);
f32   newton_sqrtf(f32);
f64   get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void  notify_fish_if_valid__10TObjPlayerFUi(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  TObjPlayer__sub_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  TObjPlayer__sub_803D99F8(void*, s32);
void  draw_ginja_object(void*);
void  pop_matrix(void);
void  end_effect_render__13TParticleCtrlFv(void);
extern const char* lbl_805D2C64;
extern const f32   lbl_805DAC60;
extern const f64   lbl_8043E7A0[];
}

void TItemShootModel::render() {
    if (is_owner_alive__10TObjPlayerFPv(this)) {
        if (this->m_58 != NULL) {
            notify_fish_if_valid__10TObjPlayerFUi(this->m_5C);
            begin_effect_render__13TParticleCtrlFv();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&this->m_pos);
            TObjPlayer__sub_803D99F8(&this->m_28, 1);
            TObjPlayer__sub_803D99F8(&this->m_60, 1);
            draw_ginja_object(this->m_58);
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        }
    }
}

TItemShootModel::TItemShootModel(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShoot(owner, pos, dir, life) {
    this->m_name = lbl_805D2C64;
    this->m_58 = *(void**)((u8*)owner + 0x188);
    this->m_5C = get_entity_id__10TObjPlayerFPv(owner);
    if (lbl_805DAC60 != this->m_dir.y) {
        f32 horiz = newton_sqrtf(this->m_dir.x * this->m_dir.x + this->m_dir.z * this->m_dir.z);
        this->m_28 = -(s32)(lbl_8043E7A0[0] * get_ad_end_text_start__10TObjPlayerFv(this->m_dir.y, horiz));
        this->m_30 = 0;
    } else {
        this->m_30 = 0;
        this->m_28 = 0;
    }
    this->m_68 = 0;
    this->m_64 = 0;
    this->m_60 = 0;
}
