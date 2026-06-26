#include "pso/TItemShootModel.h"

extern "C" {
s32   fn_8011BADC(TItemShootModel*);
void* fn_8010A050(void*);
f32   fn_8001978C(f32);
f64   fn_80019760(f32, f32);
void  fn_8023E480(void*);
void  fn_801E2EFC(void);
void  fn_803D9B2C(void);
void  fn_803D9C00(Vec*);
void  fn_803D99F8(void*, s32);
void  fn_803DB470(void*);
void  fn_803D9B78(void);
void  fn_801E2F20(void);
extern const char* lbl_805D2C64;
extern const f32   lbl_805DAC60;
extern const f64   lbl_8043E7A0[];
}

void TItemShootModel::render() {
    if (fn_8011BADC(this)) {
        if (this->m_58 != NULL) {
            fn_8023E480(this->m_5C);
            fn_801E2EFC();
            fn_803D9B2C();
            fn_803D9C00(&this->m_pos);
            fn_803D99F8(&this->m_28, 1);
            fn_803D99F8(&this->m_60, 1);
            fn_803DB470(this->m_58);
            fn_803D9B78();
            fn_801E2F20();
        }
    }
}

TItemShootModel::TItemShootModel(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShoot(owner, pos, dir, life) {
    this->m_name = lbl_805D2C64;
    this->m_58 = *(void**)((u8*)owner + 0x188);
    this->m_5C = fn_8010A050(owner);
    if (lbl_805DAC60 != this->m_dir.y) {
        f32 horiz = fn_8001978C(this->m_dir.x * this->m_dir.x + this->m_dir.z * this->m_dir.z);
        this->m_28 = -(s32)(lbl_8043E7A0[0] * fn_80019760(this->m_dir.y, horiz));
        this->m_30 = 0;
    } else {
        this->m_30 = 0;
        this->m_28 = 0;
    }
    this->m_68 = 0;
    this->m_64 = 0;
    this->m_60 = 0;
}
