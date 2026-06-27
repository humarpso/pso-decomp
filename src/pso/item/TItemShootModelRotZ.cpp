#include "pso/TItemShootModelRotZ.h"

extern "C" {
s32   fn_8011BADC(TItemShootModelRotZ*);
void  fn_8023E480(void*);
void  fn_801E2EFC(void);
void  fn_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  fn_803D99F8(void*, s32);
void  TObjBoss2Tunnel__sub_803DB470(void*);
void  fn_803D9B78(void);
void  fn_801E2F20(void);
extern const char* lbl_805D2C70;
}

void TItemShootModelRotZ::render() {
    if (fn_8011BADC(this)) {
        if (this->m_58 != NULL) {
            fn_8023E480(this->m_5C);
            fn_801E2EFC();
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&this->m_pos);
            fn_803D99F8(&this->m_28, 1);
            TObjBoss2Tunnel__sub_803DB470(this->m_58);
            fn_803D9B78();
            fn_801E2F20();
        }
    }
}

void TItemShootModelRotZ::hook() {
    this->m_30 += 0xCCC;
}

TItemShootModelRotZ::TItemShootModelRotZ(void* owner, const Vec* pos, const Vec* dir, f32 life)
    : TItemShootModel(owner, pos, dir, life) {
    this->m_name = lbl_805D2C70;
}
