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
void * TItemProShield__sub_80116708(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemProShield__sub_80116744(u8 *arg0);
}

extern "C" {

void *TItemProShield__sub_801166B0(void *arg0, s16 arg1);
void *TItemProShield__sub_801167E8(void *arg0, s16 arg1);
void apply_to_equip_slot__14TItemProShieldFPv(void *arg0);
M2C_UNK apply_transform_action__8TItemMagFPvUc(s32, s32);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
s32 activate_d04_slot__10TObjPlayerFPv(s32);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_slot_count__14TItemProShieldFPv(void *);

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

extern M2C_UNK lbl_8049F770[];

void *TItemProShield__sub_80116708(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F770;
    return arg0;
}

u8 *TItemProShield__sub_80116744(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116708((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = activate_d04_slot__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        apply_transform_action__8TItemMagFPvUc(temp_r3, get_slot_count__14TItemProShieldFPv(arg0));
    }
}

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

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK obj_getField1c(void *);
int get_type_id__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_80116620(s32, M2C_UNK);
s32 find_by_pos__11TMainCursorFiss(M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_current_room__10TObjRoomIdFPv(void *);
M2C_UNK send_6x33_revive_player(M2C_UNK, M2C_UNK);
void apply_moon_atomizer(void *arg0);
void * init__14TItemProShieldFPv(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create__14TItemProShieldFPv(u8 *arg0);
void * init_item_object__14TItemProShieldFPv(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_moon_atomizer_item(u8 *arg0);
}

extern "C" {

struct Base_80116A5C_80116634 { char pad[0x18]; };
struct VObj_80116A5C_80116634 : Base_80116A5C_80116634 {
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

void *TItemProShield__sub_80116970(void *arg0, s16 arg1);
void dispatch_state_action__14TItemProShieldFPv(void *arg0);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F828[];

void *init__14TItemProShieldFPv(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F828;
    return arg0;
}

extern M2C_UNK lbl_8049F8E0[];

u8 *create__14TItemProShieldFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init__14TItemProShieldFPv((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

#pragma push
#pragma scheduling off
void apply_moon_atomizer(void *arg0) {
    s32 temp_r3;
    u32 temp_r424;
    int temp_r31;
    if (is_current_room__10TObjRoomIdFPv(M2C_FIELD(arg0, void **, 0xF0)) != 0) {
        temp_r424 = (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), u32 *, 0x424);
        if (temp_r424 != 0U) {
            temp_r3 = find_by_pos__11TMainCursorFiss(temp_r424, 4, 9);
            if (temp_r3 != 0) {
                TObjPlayer__sub_80116620(temp_r3 + 0x9C, 0);
                if ((u16) get_type_id__10TObjPlayerFPv() != 0xffffU) {
                    TObjPlayer__sub_80116620(temp_r3 + 0x9C, 0);
                    temp_r31 = get_type_id__10TObjPlayerFPv();
                    send_6x33_revive_player(obj_getField1c(M2C_FIELD(arg0, void **, 0xF0)), temp_r31);
                }
            }
        }
    }
}
#pragma pop

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

extern M2C_UNK lbl_8049F8E0[];

void *init_item_object__14TItemProShieldFPv(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F8E0;
    return arg0;
}

u8 *create_moon_atomizer_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_item_object__14TItemProShieldFPv((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void dispatch_state_action__14TItemProShieldFPv(void *arg0) {
    u8 temp_r3;
    struct VObj_80116A5C_80116634 *obj;

    temp_r3 = ((u8 (*)())get_slot_count__14TItemProShieldFPv)();
    switch ((s32) temp_r3) {
    case 0:
        obj = *(struct VObj_80116A5C_80116634 **)((s8 *)arg0 + 0xF0);
        obj->m51();
        return;
    case 1:
        obj = *(struct VObj_80116A5C_80116634 **)((s8 *)arg0 + 0xF0);
        obj->m52();
        return;
    }
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Base_80116BBC_80116634 { char pad[0x18]; };
struct VObj_80116BBC_80116634 : Base_80116BBC_80116634 {
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

#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void * TItemProShield__sub_80116B28(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_status_cure_item(u8 *arg0);
void * TItemProShield__sub_80116C44(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_sol_atomizer_item(u8 *arg0);
}

extern "C" {

void *item_object_variant_deleting_dtor_80116BEC(void *arg0, s16 arg1);
void *item_object_variant_deleting_dtor_80116CFC(void *arg0, s16 arg1);
void *TItemProShield__sub_80116AD0(void *arg0, s16 arg1);
void apply_sol_atomizer(void *arg0);
int apply_star_atomizer(void* p);
void *TItemProShield__sub_80116D54(void *arg0);
void TItemObject__ct(void *);
int send_star_atomizer_targets(void*);
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

extern M2C_UNK lbl_8049F998[];

void *TItemProShield__sub_80116B28(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F998;
    return arg0;
}

u8 *create_status_cure_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116B28((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void apply_sol_atomizer(void *arg0) {
    struct VObj_80116BBC_80116634 *o = (struct VObj_80116BBC_80116634 *)M2C_FIELD(arg0, void **, 0xF0);
    o->m48();
}

extern M2C_UNK lbl_8049FA50[];

void *item_object_variant_deleting_dtor_80116BEC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FA50[];

void *TItemProShield__sub_80116C44(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FA50;
    return arg0;
}

u8 *create_sol_atomizer_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116C44((void *)((void *)(temp_r3)), (void *)((void *)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

int apply_star_atomizer(void* p) { return send_star_atomizer_targets(*(void**)((char*)p + 0xf0)); }

extern M2C_UNK lbl_8049FB08[];

void *item_object_variant_deleting_dtor_80116CFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FB08;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FB08[];

void *TItemProShield__sub_80116D54(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FB08;
    return arg0;
}

}
