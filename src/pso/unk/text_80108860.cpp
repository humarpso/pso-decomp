#include "types.h"
#include "pso/TItemEffEquip.h"
#include "pso/TParticleCtrl.h"

struct VBase_18_7128e8 { char pad[0x18]; };

struct VObj_18_7128e8 : VBase_18_7128e8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

extern "C" {
u16 obj_getField1c(void *);
s32 spawn_continuous_particle_effect_with_flags(s32, s32, s32);
}

extern "C" {

void TItemEffEquip::spawn_equip_particle_effect(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    temp_r3 = (u8 *)(*(u8 * *)&this->m_1c);
    *(s32 *)&this->m_20 = spawn_continuous_particle_effect_with_flags(((VObj_18_7128e8 *)(temp_r3))->m7(), arg1, 0x10);
    if ((u32) *(s32 *)&this->m_20 != 0U) {
        ((TParticleCtrl *)((void *) *(s32 *)&this->m_20))->set_owner_id(obj_getField1c(*(u8 * *)&this->m_1c));
    }
}

}
