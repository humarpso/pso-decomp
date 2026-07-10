#include "pso/TItemShootGun.h"

extern "C" {
s32   fn_8011BADC(TItemShootGun*);
void  free_children__12TObjDoorJungFPvPv(s32, s32);
void  fn_8023E480(void*);
void  fn_801E2EFC(void);
void  fn_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  fn_803D99F8(void*, s32);
void  TObjBoss2Tunnel__sub_803DB470(void*);
void  fn_803D9B78(void);
void  fn_801E2F20(void);
}

void TItemShootGun::render() {
    if (fn_8011BADC(this)) {
        if (this->m_58 != NULL) {
            free_children__12TObjDoorJungFPvPv(*(s32*)((u8*)this->m_58 + 4), this->m_70 & 0xFFFF);
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

void TItemShootGun::hook() {
    this->m_6C += 0x1999;
}
