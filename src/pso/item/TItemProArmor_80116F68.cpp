#include "types.h"
#include "pso/item/TItemObject.h"
#include "pso/item/TUnk_8049FD48.h"
#include "pso/unk/TUnk_8049FBC0.h"
#include "pso/item/TItemProArmor.h"

struct Base_8011620C_80115D6C { char pad[0x18]; };

struct VObj_8011620C_80115D6C : Base_8011620C_80115D6C {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m35();
    virtual s32 m36();
};

struct Base_8011626C_80115D6C { char pad[0x18]; };

struct VObj_8011626C_80115D6C : Base_8011626C_80115D6C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual u8 m34();
};

struct Base_801161A4_80115D6C { char pad[0x18]; };

struct VObj_801161A4_80115D6C : Base_801161A4_80115D6C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual int m34();
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_material_item(u8 *arg0);
void * construct_technique_disk_item(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_technique_disk_item(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_telepipe_item(u8 *arg0);
s32 set_item_owner_technique_level(void *, void *, int);
s32 get_slot_count__14TItemProShieldFv(void *);
void technique_disk_apply_use(s32 arg0);
}

extern "C" {

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1);
void *TItemProArmor__sub_80117160(void *arg0, s16 arg1);
void TItemObject__ct(void *);
u8 get_tool_pmt_amount_byte__11TItemObjectFv();
s32 launch_technique__10TObjPlayerFv(s32, s32, s32);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
int obj_getS16_2BA(void*);

extern s32 lbl_8049FBC0[];

void *TUnk_8049FBC0::construct_material(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_8049FBC0;
    return this;
}

extern s32 lbl_8049FC90[];

extern s32 lbl_8049FC90[];

u8 *create_material_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049FBC0 *)temp_r3)->construct_material((void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void technique_disk_apply_use(s32 arg0) {
  u8 temp_r31;
  temp_r31 = get_slot_count__14TItemProShieldFv((void *) arg0);
  set_item_owner_technique_level((void *) arg0, (void *) ((s16) (((TItemObject *)arg0)->sub_80115D7C() & 0xFF)), (int) ((s16) (temp_r31 & 0xFFFFFFFFu)));
}

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FC90;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *construct_technique_disk_item(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FC90;
    return arg0;
}

u8 *create_technique_disk_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)construct_technique_disk_item((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049FD48::vfunc_44() {
    launch_technique__10TObjPlayerFv(0xE, 0, *(s32 *)((s8 *)this + 0xF0));
}

extern s32 lbl_8049FD48[];

void *TItemProArmor__sub_80117160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FD48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_8049FD48[];

void *TUnk_8049FD48::init(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_8049FD48;
    return this;
}

u8 *create_telepipe_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049FD48 *)temp_r3)->init((void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

int TItemProArmor::get_stat_value() { return obj_getS16_2BA(*(void* *)&this->m_f0); }

extern s32 game_difficulty_selection;

s16 TItemProArmor::calc_scaled_offset() {
    return (s16) ((game_difficulty_selection * 0x32) + get_tool_pmt_amount_byte__11TItemObjectFv());
}

}
