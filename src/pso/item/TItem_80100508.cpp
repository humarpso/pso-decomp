#include "types.h"

#include "pso/item/TItemData.h"
#include "pso/item/TItem.h"
struct VBase_18_72f473 { char pad[0x18]; };

struct VObj_18_72f473 : VBase_18_72f473 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual s32 m39(TItemData*);
};

extern "C" {
s32 feed_item_to_mag(u8 *arg0, u32 arg1);
}

extern "C" {

void TItem__sub_801005D8(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);
void TItem__sub_80100648(void);
s32 play_sound_effect(s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFUs(s32, s32);
s32 get_id__13TItemProArmorFv(void *);
s32 test_flag_2000000__10TObjPlayerFPv(u32);

void TItem::notify_owner(s32 arg1) {
    if (((u32) this->m_f0 != 0U) && (test_flag_2000000__10TObjPlayerFPv(this->m_f0) == 0)) {
        play_sound_effect(arg1, this->m_f0 + 0x38, 0, 0);
    }
}
void TItem::apply_switch_attack(s32 arg1) {
    s32 temp_r3;

    if (((u32) this->m_f0 != 0U) && (test_flag_2000000__10TObjPlayerFPv(this->m_f0) == 0)) {
        temp_r3 = spawn_particle_effect_with_flags(this->m_f0 + 0x2FC, arg1, 0x10);
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFUs(temp_r3, get_id__13TItemProArmorFv(this));
        }
    }
}
void TItem__sub_801005D8(void) {  }

void TItem::vfunc_16() {  }
void TItem__sub_801005E0(void) {  }
int TItem__sub_801005E4(void) { return 0; }

s32 feed_item_to_mag(u8 *arg0, u32 arg1) {
    TItemData item_data;
    if (arg1 != 0U) {
        ((TItem *)arg1)->copy_to_item_data((void *) (&item_data.data1.data_u8[0]));
        return ((VObj_18_72f473 *)(arg0))->m39(&item_data);
    }
    return 0;
}

void TItem__sub_80100648(void) {  }

}
