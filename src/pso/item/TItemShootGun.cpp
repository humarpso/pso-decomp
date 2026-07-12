#include "pso/TItemShootGun.h"

extern "C" {
s32   is_owner_alive__10TObjPlayerFPv(TItemShootGun*);
void  free_children__12TObjDoorJungFPvPv(s32, s32);
void  TObjPlayer__sub_8023E480(void*);
void  TParticleCtrl__sub_801E2EFC(void);
void  TObjPlayer__sub_803D9B2C(void);
void  TOHangerMachine01__sub_803D9C00(Vec*);
void  TObjPlayer__sub_803D99F8(void*, s32);
void  TObjBoss2Tunnel__sub_803DB470(void*);
void  TObjPlayer__sub_803D9B78(void);
void  TParticleCtrl__sub_801E2F20(void);
}

void TItemShootGun::render() {
    if (is_owner_alive__10TObjPlayerFPv(this)) {
        if (this->m_58 != NULL) {
            free_children__12TObjDoorJungFPvPv(*(s32*)((u8*)this->m_58 + 4), this->m_70 & 0xFFFF);
            TObjPlayer__sub_8023E480(this->m_5C);
            TParticleCtrl__sub_801E2EFC();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(&this->m_pos);
            TObjPlayer__sub_803D99F8(&this->m_28, 1);
            TObjBoss2Tunnel__sub_803DB470(this->m_58);
            TObjPlayer__sub_803D9B78();
            TParticleCtrl__sub_801E2F20();
        }
    }
}

void TItemShootGun::hook() {
    this->m_6C += 0x1999;
}
