#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_546d8d { char pad[0x18]; };

struct VObj_18_546d8d : VBase_18_546d8d {
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
    virtual M2C_UNK m21(M2C_UNK);
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
    virtual M2C_UNK m43();
};

struct VBase_18_5e04d5 { char pad[0x18]; };

struct VObj_18_5e04d5 : VBase_18_5e04d5 {
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
    virtual M2C_UNK m48();
};

extern "C" {
s8 TItemEquipBase__sub_8010A77C(u8 *arg0);
s8 TObjPlayer__sub_8010A770(u8 *arg0);
M2C_UNK get_id__13TItemProArmorFPv(void *);
int TItemEquipBase__sub_8010AC60(void *, int, int);
M2C_UNK check_flag_32__14TItemEquipBaseFPv(int);
M2C_UNK TItemEquipBase__sub_801190B0(M2C_UNK, int);
M2C_UNK TItemTimerEvent__sub_8011E0A4();
void TItemEquipBase__sub_8010A948(u8 *arg0);
M2C_UNK set_mode__5TItemFPvc(void *, int);
M2C_UNK clear_item_flags__10TObjPlayerFPvUi(void *, int);
void TItemEquipBase__sub_8010AAD0(void *);
M2C_UNK delete_children__7TObjectFv(void *);
void TItemEquipBase__sub_8010B198(u8 *arg0);
s32 TItemLoad__sub_801100F0(s32);
s32 TItemLoad__sub_8011038C(s32);
void TItemEquipBase__sub_8010A78C(u8 *arg0);
M2C_UNK get_id__13TItemProArmorFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv();
M2C_UNK TItemEquipBase__sub_8010B73C(void *);
M2C_UNK TItemEquipBase__sub_8022C680(void *, void *, void *);
void TItemEquipBase__sub_8010A82C(s32 arg0);
}

extern "C" {

struct Base_8010B054_8010A710 { char pad[0x18]; };
struct VObj_8010B054_8010A710 : Base_8010B054_8010A710 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};

void TItemEquipBase__sub_8010A788(void);
int TItemEquipBase__sub_8010A89C(void);
void TItemEquipBase__sub_8010A938(void);
void TItemEquipBase__sub_8010A93C(void);
void TItemEquipBase__sub_8010A940(void);
void TItemEquipBase__sub_8010AD80(s32 unused, s16 *arg1, s16 arg2);
int TItemEquipBase__sub_8010B58C(void* a0 = 0, void* a1 = 0);
void TItemEquipBase__sub_8010B620(void);
void TItemEquipBase__vt42(void);
void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1);
s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1);
int fn_8010A710(void);
void* fn_8010A768(void* p);
void release__14TItemEquipBaseFPv(void *arg0);
void reset__14TItemEquipBaseFPv(void* p);
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, u8 v);
void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
void update_equip__14TItemEquipBaseFPv(void *arg0);
void update_with_player__14TItemEquipBaseFi(s32 arg0);
M2C_UNK TItemData__sub_8010B7F8(void *, void *);
void TItemEquipBase__sub_8010AAD0(void *);
s32 TItemLoad__sub_801103F4(s16);
s32 TObjPlayer__sub_800194E8(void *);
s32 TObjPlayer__sub_8001BEF8(s32);
s8 TObjPlayer__sub_80102C30();
void __dt__5TItemFv(void *, int);
s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
M2C_UNK destroy__5TItemFPv(void *);
M2C_UNK fn_8010B7D8(void *, void *);
M2C_UNK fn_8010B7E8(void *, void *);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_field_ed__10TObjPlayerFPv();
s32 get_id__10TObjPlayerFPv(void *);
s32 get_level__10TObjPlayerFPv(void *);
int memset(void*, void*, void*);

int fn_8010A710(void) { return 0; }
void* fn_8010A768(void* p) { return (char*)p + 0x16c; }

s8 TObjPlayer__sub_8010A770(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x171);
}

s8 TItemEquipBase__sub_8010A77C(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0x170);
}

void TItemEquipBase__sub_8010A788(void) {  }

void TItemEquipBase__sub_8010A78C(u8 *arg0) {
    s16 temp_r3;
    u8 *temp_r3_2;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF4) == 0U) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x172);
        if ((temp_r3 != -1) && (TItemLoad__sub_801100F0((s32) temp_r3) == 1)) {
            temp_r3_2 = (u8 *)(TItemLoad__sub_8011038C((s32) M2C_FIELD(arg0, s16 *, 0x172)));
            if (temp_r3_2 != NULL) {
                M2C_FIELD(arg0, u32 *, 0xF4) = (u32) M2C_FIELD(temp_r3_2, u32 *, 0);
                M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(temp_r3_2, s32 *, 4);
                M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x10);
                M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0x14);
                M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(temp_r3_2, s32 *, 8);
                M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(temp_r3_2, s32 *, 0xC);
                ((VObj_18_5e04d5 *)(arg0))->m48();
            }
        }
    }
}

void TItemEquipBase__sub_8010A82C(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r30;
    temp_r31 = (get_field_ec__12TOSwitchItemFPv() != 0) ? 3 : 0;
    TItemEquipBase__sub_8010B73C((void *) (&sp8));
    var_r30 = 0;
    do {
        TItemEquipBase__sub_8022C680((void *) (&sp8), (void *) (((s32)get_id__13TItemProArmorFPv((void *) (arg0)))), (void *) (temp_r31 + var_r30));
        var_r30 += 1;
    } while (var_r30 != 3);
}

int TItemEquipBase__sub_8010A89C(void) { return 0; }

void TItemEquipBase__sub_8010A938(void) {  }
void TItemEquipBase__sub_8010A93C(void) {  }
void TItemEquipBase__sub_8010A940(void) {  }

void TItemEquipBase__vt42(void) {  }

void TItemEquipBase__sub_8010A948(u8 *arg0) {
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (2)), (int)((int) (4)))) != 0) {
        get_id__13TItemProArmorFPv((void *) (arg0));
        TItemTimerEvent__sub_8011E0A4();
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (8)), (int)((int) (0x10)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (0));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x20)), (int)((int) (0x40)))) != 0) {
        check_flag_32__14TItemEquipBaseFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x80)), (int)((int) (0x100)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (1));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x200)), (int)((int) (0x400)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (2));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x800)), (int)((int) (0x1000)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (3));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x2000)), (int)((int) (0x4000)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (4));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x8000)), (int)((int) (0x10000)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (5));
    }
    if (((s32)TItemEquipBase__sub_8010AC60((void *)((void *) (arg0)), (int)((int) (0x20000)), (int)((int) (0x40000)))) != 0) {
        TItemEquipBase__sub_801190B0(get_id__13TItemProArmorFPv((void *) (arg0)), (int) (6));
    }
}

int TItemEquipBase__sub_8010AC60(void * _w0, int _w1, int _w2) { return 0; }

s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x178) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x178, arg1);
        return 1;
    }
    return 0;
}
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x171) = v; }

void TItemEquipBase__sub_8010AD80(s32 unused, s16 *arg1, s16 arg2) {
    if (arg2 > 0) {
        *arg1 -= arg2;
    }
}

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    if (arg1 != 0) {
        TItemData__sub_8010B7F8((void *) (arg1), (void *) (get_id__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7E8((void *) (arg1), (void *) (get_level__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7D8((void *) (arg1), (void *) (TObjPlayer__sub_800194E8((void *) (arg0 + 0x11C))));
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0x14C));
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 0x168));
        M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg2, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0x14E));
        M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg2, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0x150));
        M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg2, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0x152));
        M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x154));
        M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg2, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x156));
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, s16 *, 0) = (s16) (M2C_FIELD(arg3, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0xF8));
        M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg3, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0xFA));
        M2C_FIELD(arg3, s16 *, 4) = (s16) (M2C_FIELD(arg3, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0xFC));
        M2C_FIELD(arg3, s16 *, 6) = (s16) (M2C_FIELD(arg3, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0xFE));
        M2C_FIELD(arg3, s16 *, 8) = (s16) (M2C_FIELD(arg3, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x100));
        M2C_FIELD(arg3, s16 *, 0xA) = (s16) (M2C_FIELD(arg3, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x102));
        M2C_FIELD(arg3, s16 *, 0xC) = (s16) (M2C_FIELD(arg3, s16 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x104));
    }
}

void reset__14TItemEquipBaseFPv(void* p) { memset((char*)p + 0xf8, (void*)0, (void*)36); memset((char*)p + 0x11c, (void*)0, (void*)48); memset((char*)p + 0x14c, (void*)0, (void*)32); memset((char*)p + 0x16c, (void*)0, (void*)4); }

void update_equip__14TItemEquipBaseFPv(void *arg0) {
    if (TObjPlayer__sub_80102C30() == 2) {
        ((VObj_8010B054_8010A710 *)arg0)->m19();
    }
    destroy__5TItemFPv(arg0);
}

void TItemEquipBase__sub_8010B198(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        set_mode__5TItemFPvc((void *)(arg0), (int) (1));
        clear_item_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x28));
        ((VObj_18_546d8d *)(arg0))->m21(1);
        TItemEquipBase__sub_8010AAD0((void *) (arg0));
        ((VObj_18_546d8d *)(arg0))->m43();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
            delete_children__7TObjectFv(M2C_FIELD(arg0, void **, 0x174));
        }
    }
}

void release__14TItemEquipBaseFPv(void *arg0) {
    s16 temp = M2C_FIELD(arg0, s16 *, 0x172);
    if (temp != -1) {
        TItemLoad__sub_801103F4(temp);
        M2C_FIELD(arg0, s16 *, 0x172) = -1;
        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x188) = 0;
        M2C_FIELD(arg0, s32 *, 0x17C) = 0;
        M2C_FIELD(arg0, s32 *, 0x180) = 0;
        M2C_FIELD(arg0, s32 *, 0x184) = 0;
    }
}

int TItemEquipBase__sub_8010B58C(void* a0, void* a1) { return 0; }

void update_with_player__14TItemEquipBaseFi(s32 arg0) {
    TItemEquipBase__sub_8010B58C((void*)((void*)(arg0)), (void*)((void*)(get_field_ed__10TObjPlayerFPv())));
}
void TItemEquipBase__sub_8010B620(void) {  }

extern M2C_UNK __vt__14TItemEquipBase[];

void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemEquipBase;
        TItemEquipBase__sub_8010AAD0(arg0);
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
