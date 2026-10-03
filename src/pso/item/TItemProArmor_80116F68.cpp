#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void * TItemProArmor__sub_80116F68(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_material_item(u8 *arg0);
void * TItemProArmor__sub_8011709C(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_technique_disk_item(u8 *arg0);
void * init__13TItemProArmorFPv(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemProArmor__sub_801171F4(u8 *arg0);
s32 set_item_owner_technique_level(void *, void *, int);
s32 get_slot_count__14TItemProShieldFPv(void *);
s32 TItemObject__sub_80115D7C(void *);
void technique_disk_apply_use(s32 arg0);
}

extern "C" {

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1);
void TItemProArmor__sub_80117130(void *arg0);
void *TItemProArmor__sub_80117160(void *arg0, s16 arg1);
s16 calc_scaled_offset__13TItemProArmorFv(void);
int get_stat_value__13TItemProArmorFPv(void* p);
void TItemObject__ct(void *);
u8 get_tool_pmt_amount_byte();
M2C_UNK TObjPlayer__sub_8022D27C(M2C_UNK, M2C_UNK, s32);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
int obj_getS16_2BA(void*);

extern M2C_UNK lbl_8049FBC0[];

void *TItemProArmor__sub_80116F68(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FBC0;
    return arg0;
}

extern M2C_UNK lbl_8049FC90[];

extern M2C_UNK lbl_8049FC90[];

u8 *create_material_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProArmor__sub_80116F68((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void technique_disk_apply_use(s32 arg0) {
  u8 temp_r31;
  temp_r31 = get_slot_count__14TItemProShieldFPv((void *) arg0);
  set_item_owner_technique_level((void *) arg0, (void *) ((s16) (TItemObject__sub_80115D7C((void *) arg0) & 0xFF)), (int) ((s16) (temp_r31 & 0xFFFFFFFFu)));
}

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FC90;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *TItemProArmor__sub_8011709C(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FC90;
    return arg0;
}

u8 *create_technique_disk_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProArmor__sub_8011709C((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void TItemProArmor__sub_80117130(void *arg0) {
    TObjPlayer__sub_8022D27C(0xE, 0, M2C_FIELD(arg0, s32 *, 0xF0));
}

extern M2C_UNK lbl_8049FD48[];

void *TItemProArmor__sub_80117160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FD48[];

void *init__13TItemProArmorFPv(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
    return arg0;
}

u8 *TItemProArmor__sub_801171F4(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init__13TItemProArmorFPv((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

int get_stat_value__13TItemProArmorFPv(void* p) { return obj_getS16_2BA(*(void**)((char*)p + 0xf0)); }

extern s32 lbl_805D5550;

s16 calc_scaled_offset__13TItemProArmorFv(void) {
    return (s16) ((lbl_805D5550 * 0x32) + get_tool_pmt_amount_byte());
}

}
