#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFPv(void* p);
void* TItemEquipBase__sub_8010B73C(void* p);

int init_slot__14TItemEquipBaseFPv(void*);

u8 get_slot_count__14TItemProShieldFPv(void* p) { return *(u8*)((char*)p + 0xee); }
void* TItemEquipBase__sub_8010B73C(void* p) { init_slot__14TItemEquipBaseFPv(p); return p; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80076B5C
#include "types.h"

extern "C" {

s16 get_field_2b8__14TItemProShieldFPv(void* p);

s16 get_field_2b8__14TItemProShieldFPv(void* p) { return *(s16*)((char*)p + 0x2b8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80076B64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80076B64(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC048[];

void *TItemProShield__sub_80076B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010A650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_shield_effect__14TItemProShieldFiUsUi(s32 arg0, u16 arg1, u32 arg2);

M2C_UNK __ct__14TItemEffShieldFv(u32, s32, u16, u32);
u32 __nw__7TObjectFUl(M2C_UNK);

void create_shield_effect__14TItemProShieldFiUsUi(s32 arg0, u16 arg1, u32 arg2) {
    u32 obj;
    if ((arg0 != 0) && ((u16) arg1 != 0xFFFF) && (arg2 != 0U) && ((obj = __nw__7TObjectFUl(0x48)) != 0U)) {
        __ct__14TItemEffShieldFv(obj, arg0, arg1, arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801166B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_801166B0(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F770[];

void *TItemProShield__sub_801166B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F770;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116708
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116708(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049F770[];

void *TItemProShield__sub_80116708(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F770;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011679C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0);
M2C_UNK TItemMag__sub_80111188(s32, s32);
s32 get_slot_count__14TItemProShieldFPv(void *);
s32 activate_d04_slot__10TObjPlayerFPv(s32);

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = activate_d04_slot__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TItemMag__sub_80111188(temp_r3, get_slot_count__14TItemProShieldFPv(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801167E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_801167E8(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F828[];

void *TItemProShield__sub_801167E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F828;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116840
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__14TItemProShieldFPv(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049F828[];

void *init__14TItemProShieldFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F828;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116970
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116970(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F8E0[];

void *TItemProShield__sub_80116970(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F8E0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801169C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_item_object__14TItemProShieldFPv(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049F8E0[];

void *init_item_object__14TItemProShieldFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F8E0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116A5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_state_action__14TItemProShieldFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();

struct Base_80116A5C { char pad[0x18]; };
struct VObj_80116A5C : Base_80116A5C {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
};

void dispatch_state_action__14TItemProShieldFPv(void *arg0) {
    u8 temp_r3;
    struct VObj_80116A5C *obj;

    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 0:
        obj = *(struct VObj_80116A5C **)((s8 *)arg0 + 0xF0);
        obj->m51();
        return;
    case 1:
        obj = *(struct VObj_80116A5C **)((s8 *)arg0 + 0xF0);
        obj->m52();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116AD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116AD0(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F998[];

void *TItemProShield__sub_80116AD0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F998;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116B28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116B28(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049F998[];

void *TItemProShield__sub_80116B28(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F998;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80116BBC { char pad[0x18]; };
struct VObj_80116BBC : Base_80116BBC {
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
};

extern "C" {

void TItemProShield__sub_80116BBC(void *arg0);

void TItemProShield__sub_80116BBC(void *arg0) {
    struct VObj_80116BBC *o = (struct VObj_80116BBC *)M2C_FIELD(arg0, void **, 0xF0);
    o->m48();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116C44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116C44(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FA50[];

void *TItemProShield__sub_80116C44(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116CD8
#include "types.h"

extern "C" {

int TItemProShield__sub_80116CD8(void* p);
int TItemObject__sub_801160E0(void*);

int TItemProShield__sub_80116CD8(void* p) { return TItemObject__sub_801160E0(*(void**)((char*)p + 0xf0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116D54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProShield__sub_80116D54(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FB08[];

void *TItemProShield__sub_80116D54(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FB08;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801181D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void deactivate_shield_effect__14TItemProShieldFPvi(void *arg0, s32 arg1);
s32 get_flag_40__8TItemMagFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK get_item_ptr__10TObjPlayerFPvi(u32, s32);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80364028();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B78();

s32 obj_testFlags30(void *, M2C_UNK);
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011829C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010CE70(s32 a0 = 0, u8 a1 = 0);
s32 TItemData__sub_8010CE1C(s32 a0 = 0, u8 a1 = 0);
void TItemProShield__vt49(void);
int TItemProShield__vt44(void* p);
int update_with_player__14TItemEquipBaseFi(void*);

int TItemProShield__vt44(void* p) { return update_with_player__14TItemEquipBaseFi(p); }
void TItemProShield__vt49(void) {  }
void set_params__14TItemProShieldFiPv(s32 arg0, void *arg1) {
    TItemData__sub_8010CE70(arg0, M2C_FIELD(arg1, u8 *, 0x198));
    TItemData__sub_8010CE1C(arg0, M2C_FIELD(arg1, u8 *, 0x199));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80118334
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80118334 { char pad[0x18]; };
struct VObj_80118334 : Base_80118334 {
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

void TItemProShield__vt14(void *arg0);
M2C_UNK TObjPlayer__sub_8010069C(void *);
M2C_UNK TItemEquipBase__sub_8010A78C(void *);
M2C_UNK TItemEquipBase__sub_8010A89C(void *, s32);

void TItemProShield__vt14(void *arg0) {
    ((VObj_80118334 *)arg0)->m51();
    TItemEquipBase__sub_8010A89C(arg0, M2C_FIELD(arg0, s32 *, 0x194));
    if (M2C_FIELD(arg0, s32 *, 0x19C) & 4) {
        TObjPlayer__sub_8010069C(arg0);
    }
    TItemEquipBase__sub_8010A78C(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801183D8
#include "types.h"

extern "C" {

int TItemProShield__vt43(void* p);
int TItemEquipBase__sub_8010A82C(void*);

int TItemProShield__vt43(void* p) { return TItemEquipBase__sub_8010A82C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801183F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProShield__vt42(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
M2C_UNK TItemEffShield__sub_8010A404(int, int, void *);
s32 get_flag_40__8TItemMagFPv();
s32 get_id__13TItemProArmorFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK TObjPlayer__sub_8010A1D0(int, int, void *, int);
M2C_UNK construct_timer_event__10TObjPlayerFPv(int, int, void *, int);
s32 __nw__7TObjectFUl(int);
s32 alloc__13TItemProArmorFi(int);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(int, int, void *, int);

void TItemProShield__vt42(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u8 temp_r3;

    if (get_flag_40__8TItemMagFPv() == 0) {
        TBoss3Volopt__sub_8022675C((int) (0x4000B20A), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = get_slot_count__14TItemProShieldFPv((void *) (arg0));
        switch ((s32) temp_r3) {
        case 39:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_2 = alloc__13TItemProArmorFi((int) (0x2C));
                if (temp_r3_2 != 0) {
                    init_item_timer_event__10TObjPlayerFPv((int) (temp_r3_2), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (0x1C2));
                }
                temp_r3_3 = alloc__13TItemProArmorFi((int) (0x2C));
                if (temp_r3_3 != 0) {
                    construct_timer_event__10TObjPlayerFPv((int) (temp_r3_3), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (0x1C2));
                }
            }
            break;
        case 26:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_4 = __nw__7TObjectFUl((int) (0x2C));
                if (temp_r3_4 != 0) {
                    TItemEffShield__sub_8010A404((int) (temp_r3_4), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
                }
            }
            break;
        }
        if ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) {
            temp_r3_5 = __nw__7TObjectFUl((int) (0x30));
            if (temp_r3_5 != 0) {
                TObjPlayer__sub_8010A1D0((int) (temp_r3_5), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (get_id__13TItemProArmorFPv((void *) (arg0))), (int) (temp_r3));
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80118828
#include "types.h"

extern "C" {

void free__14TItemProShieldFv(void);
int fn_800F953C(void*);

    extern int lbl_805D54C8;
void free__14TItemProShieldFv(void) { fn_800F953C((void*)(lbl_805D54C8)); lbl_805D54C8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80118854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_data__14TItemProShieldFv(void);
M2C_UNK bswap_32__FPUl(s32);
s32 fn_800F955C(s32);

extern s32 lbl_805D2C3C;
extern s32 lbl_805D54C8;

void load_data__14TItemProShieldFv(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    s32 var_r28;

    temp_r3 = fn_800F955C(lbl_805D2C3C);
    lbl_805D54C8 = temp_r3;
    var_r31 = 0;
    var_r28 = temp_r3;
    do {
        var_r29 = var_r28;
        var_r30 = 0;
loop_2:
        bswap_32__FPUl(var_r29);
        var_r30 += 1;
        var_r29 += 4;
        if (var_r30 < 8) {
            goto loop_2;
        }
        bswap_32__FPUl(var_r28 + 0x20);
        bswap_32__FPUl(var_r28 + 0x24);
        bswap_32__FPUl(var_r28 + 0x28);
        var_r31 += 1;
        var_r28 += 0x2C;
    } while (var_r31 != 0x32);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801188D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TItemProShieldFv(void *arg0, s16 arg1);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__14TItemProShield[];

void *__dt__14TItemProShieldFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemProShield;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
