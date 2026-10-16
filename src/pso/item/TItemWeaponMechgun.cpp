#include "types.h"
#include "pso/item/TUnk_804A3260.h"
#include "pso/items/TItemWeaponMechgun.h"
#include "pso/player/TObjPlayer.h"
struct WeaponDispatchPrefix { char pad[0x18]; };
struct WeaponDispatch : WeaponDispatchPrefix {
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
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual s32 launchShot(void *, s32, s32, s32);
};

extern "C" {
void reserved_53__13TUnk_804A3260Fv(u8 *arg0);
extern const f32 lbl_805DADD0;
extern const f32 lbl_805DADD4;
void update_weapon__13TUnk_804A3260Fv(void *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_mechgun_weapon(u8 *arg0);
s32 TItemWeapon__ct(void *, s32, void *);
s32 set_status_flags__10TObjPlayerFPvUi(void *, s32);
void spawn_weapon_impact_effect();
extern s32 lbl_804A3260[];
void *TItemWeaponMechgun__ct(void *arg0, s32 parent, void *arg2);
}

extern "C" {
void advance_angle_wrap(void*,int);
}
void TItemWeaponMechgun::prepareMarker() {
    TItemWeaponMechgun* arg0=this;
    if (((WeaponDispatch *)(arg0))->launchShot(arg0->muzzle[0], 0, 0, 1) != 0) {
        ((WeaponDispatch *)(arg0))->launchShot(arg0->muzzle[1], 0, 0, 0);
    } else {
        ((WeaponDispatch *)(arg0))->launchShot(arg0->muzzle[1], 0, 0, 1);
    }
    advance_angle_wrap((void *) (&arg0->effectAngle), (int) (0x2000));
    arg0->effectFrame = 1;
}

extern "C" {

void TUnk_804A3260::update_weapon() {
    s32 temp_r4;
    if ((s32) *(s32 *)((s8 *)this + 0x218) != -1) {
        temp_r4 = *(s32 *)((s8 *)this + 0x21C);
        if (lbl_805DADD0 < (f32) temp_r4) {
            *(s32 *)((s8 *)this + 0x21C) = (s32) ((f32) temp_r4 - lbl_805DADD4);
            if ((f32) *(s32 *)((s8 *)this + 0x21C) < lbl_805DADD0) {
                *(s32 *)((s8 *)this + 0x21C) = 0;
            }
        }
    }
}

void TUnk_804A3260::reserved_53() {
    u8 *arg0 = (u8 *)this;
    ((TObjPlayer *)arg0)->draw_status_icons(arg0 + 0x1F8, arg0 + 0x204);
}

void *TItemWeaponMechgun__ct(void *arg0, s32 parent, void *arg2) {
    u8 temp_r0;
    TItemWeapon__ct(arg0, parent, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A3260;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x203);
    *(void (**)())((s8 *)arg0 + 0x1EC) = &spawn_weapon_impact_effect;
    *(s32 *)((s8 *)arg0 + 0x210) = -1;
    *(s32 *)((s8 *)arg0 + 0x214) = 0;
    *(s32 *)((s8 *)arg0 + 0x218) = -1;
    *(s32 *)((s8 *)arg0 + 0x21C) = 0;
    temp_r0 = *(u8 *)((s8 *)arg2 + 2);
    switch ((s32) temp_r0) {
    case 6:
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x210) = 2;
        break;
    case 7:
        *(s32 *)((s8 *)arg0 + 0x210) = 2;
        break;
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        ((TObjPlayer *)arg0)->set_atp(-1);
    }
    return arg0;
}

u8 *create_mechgun_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x220));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemWeaponMechgun__ct((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
