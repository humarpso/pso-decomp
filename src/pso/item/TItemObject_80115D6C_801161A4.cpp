#include "pso/item/TItemObject.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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

extern "C" {
u8 get_field_ed__10TObjPlayerFPv();
M2C_UNK set_stack_count__24TShopEquipmentListWindowFPvc(void *, void *);
void TItemObject__vt16(u8 *arg0, u8 *arg1);
void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemObject__sub_8011646C(u8 *arg0);
}

extern "C" {

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

void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
void TItemObject__vt29(void *arg0);
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 TItemObject__vt36(void *arg0, s32 arg1);
void TItemObject__vt42(void *arg0);
void *lookup_item_pmt_record(void *);
M2C_UNK TItem__ct();
M2C_UNK TItem__sub_80100824();
M2C_UNK TObjPlayer__sub_8010043C(void *, u8);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
s32 check_flag_400__20TWindowSubStatusDispFv();
M2C_UNK clear_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s32 copy_and_register_item_data__11TItemObjectFPv(void *);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
s32 get_item_flags__10TObjPlayerFPv(void *);
s32 get_item_type_or_default__9TItemListFPv(void *);
M2C_UNK notify_owner__5TItemFPvi(void *, M2C_UNK);
M2C_UNK set_flag_1024__11TItemObjectFPv(void *);
M2C_UNK update_pickup_flag__5TItemFi();

s32 TItemObject__vt36(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = arg1 + ((VObj_801161A4_80115D6C *)arg0)->m34();
    if (temp_r31 <= copy_and_register_item_data__11TItemObjectFPv(arg0)) {
        ((TItemObject *)arg0)->store_encoded_value(temp_r31);
        return 1;
    }
    return 0;
}

s32 TItemObject__vt35(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = ((VObj_8011620C_80115D6C *)arg0)->m36();
    if (arg1 <= temp_r3) {
        ((TItemObject *)arg0)->store_encoded_value(temp_r3 - arg1);
        return 1;
    }
    return 0;
}

void TItemObject__vt29(void *arg0) {
    struct VObj_8011626C_80115D6C *o = (struct VObj_8011626C_80115D6C *)arg0;
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        M2C_FIELD(arg0, u8 *, 0x101) = 0U;
        o->m42();
        if ((u8) M2C_FIELD(arg0, u8 *, 0x101) == 0) {
            apply_switch_attack__5TItemFPvi(arg0, 0x1AF);
            notify_owner__5TItemFPvi(arg0, 0x5B211);
        }
        if (get_item_flags__10TObjPlayerFPv(arg0) & 0x10) {
            get_field_d8__10TObjPlayerFPv(arg0);
            TItem__sub_80100824();
        }
    }
}

void TItemObject__vt42(void *arg0) {
    update_pickup_flag__5TItemFi();
    M2C_FIELD(arg0, s8 *, 0x101) = 1;
}

extern void* __vt__11TItemObject[];
extern s32 lbl_805D2C28;

void TItemObject__vt16(u8 *arg0, u8 *arg1) {
    if (get_field_ed__10TObjPlayerFPv() == 2) {
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x100);
    }
    set_stack_count__24TShopEquipmentListWindowFPvc((void *) (arg1), (void *) (((VObj_18 *)(arg0))->m34()));
}

void *TItemObject__ct(void *arg0, void *arg1, void *arg2) {
    s16 temp_r3;

    TItem__ct();
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__11TItemObject;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C28;
    M2C_FIELD(arg0, void **, 0xF8) = lookup_item_pmt_record(arg2);
    M2C_FIELD(arg0, u8 *, 0x100) = (u8) M2C_FIELD(arg2, u8 *, 4);
    ((TItemObject *)arg0)->store_encoded_value(get_item_type_or_default__9TItemListFPv(arg2));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0x10) & 1) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    } else {
        clear_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s16 *, 4);
    if (temp_r3 != 0) {
        TObjPlayer__sub_8010043C(arg0, (u8) (temp_r3 + 4));
    }
    return arg0;
}
u8 *TItemObject__sub_8011646C(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemObject__ct((void *)(temp_r3), (void *)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
