#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80118334_801181D0 { char pad[0x18]; };
struct VObj_80118334_801181D0 : Base_80118334_801181D0 {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m51();
};

extern "C" {

int TItemProShield__vt12(void);
void TItemProShield__vt14(void *arg0);
int TItemProShield__vt16(void);
int TItemProShield__vt44(void* p);
void TItemProShield__vt49(void);
void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1);
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1);
s32 TItemData__sub_8010CE1C(s32 a0 = 0, u8 a1 = 0);
s32 TItemData__sub_8010CE70(s32 a0 = 0, u8 a1 = 0);
M2C_UNK TItemEquipBase__sub_8010A78C(void *);
int TItemEquipBase__sub_8010A82C(void*);
M2C_UNK TItemEquipBase__sub_8010A89C(void *, s32);
int TItemProShield__vt43(void* p);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjPlayer__sub_8010069C(void *);
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_flag_40__8TItemMagFPv(void *);
M2C_UNK get_item_ptr__10TObjPlayerFPvi(u32, s32);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
s32 obj_testFlags30(void *, M2C_UNK);
int update_with_player__14TItemEquipBaseFi(void*);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv();

extern s32 some_id_805c6f74;

void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (obj_testFlags30(arg0, 0x08000000) == 0) && (get_flag_40__8TItemMagFPv(arg0) == 0)) {
        get_item_ptr__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0), arg1);
        TObjPlayer__sub_803D97F0();
        TObjPlayer__sub_80364198();
        some_id_805c6f74 &= 0xFFFFFFEF;
        get_mag_scale__10TObjPlayerFPv(arg0);
        TObjPlayer__sub_80364028();
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            begin_effect_render__13TParticleCtrlFv();
        }
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0xF4));
        if (M2C_FIELD(arg0, s32 *, 0x19C) & 2) {
            end_effect_render__13TParticleCtrlFv();
        }
        warn_if_gauge_low__10TObjPlayerFv();
        TObjPlayer__sub_8036414C();
        TObjPlayer__sub_803D9B78();
    }
}

int TItemProShield__vt44(void* p) { return update_with_player__14TItemEquipBaseFi(p); }
void TItemProShield__vt49(void) {  }
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1) {
    TItemData__sub_8010CE70(arg0, M2C_FIELD(arg1, u8 *, 0x198));
    TItemData__sub_8010CE1C(arg0, M2C_FIELD(arg1, u8 *, 0x199));
}

int TItemProShield__vt12(void) { return 0; }

void TItemProShield__vt14(void *arg0) {
    ((VObj_80118334_801181D0 *)arg0)->m51();
    TItemEquipBase__sub_8010A89C(arg0, M2C_FIELD(arg0, s32 *, 0x194));
    if (M2C_FIELD(arg0, s32 *, 0x19C) & 4) {
        TObjPlayer__sub_8010069C(arg0);
    }
    TItemEquipBase__sub_8010A78C(arg0);
}

int TItemProShield__vt16(void) { return 0; }

}
