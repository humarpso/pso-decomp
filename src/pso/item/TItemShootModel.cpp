#include "pso/TItemShootModel.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootModel*);
void* TObjPlayer__sub_8010A050(void*);
f32   TObjPlayer__sub_8001978C(f32);
f64   TObjPlayer__sub_80019760(f32, f32);
void  notify_fish_if_valid__10TObjPlayerFUi(void*);
void  begin_effect_render__13TParticleCtrlFv(void);
void  TObjPlayer__sub_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  TObjPlayer__sub_803D99F8(void*, s32);
void  TObjBoss2Tunnel__sub_803DB470(void*);
void  TObjPlayer__sub_803D9B78(void);
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
            TObjBoss2Tunnel__sub_803DB470(this->m_58);
            TObjPlayer__sub_803D9B78();
            end_effect_render__13TParticleCtrlFv();
        }
    }
}

TItemShootModel::TItemShootModel(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShoot(owner, pos, dir, life) {
    this->m_name = lbl_805D2C64;
    this->m_58 = *(void**)((u8*)owner + 0x188);
    this->m_5C = TObjPlayer__sub_8010A050(owner);
    if (lbl_805DAC60 != this->m_dir.y) {
        f32 horiz = TObjPlayer__sub_8001978C(this->m_dir.x * this->m_dir.x + this->m_dir.z * this->m_dir.z);
        this->m_28 = -(s32)(lbl_8043E7A0[0] * TObjPlayer__sub_80019760(this->m_dir.y, horiz));
        this->m_30 = 0;
    } else {
        this->m_30 = 0;
        this->m_28 = 0;
    }
    this->m_68 = 0;
    this->m_64 = 0;
    this->m_60 = 0;
}
