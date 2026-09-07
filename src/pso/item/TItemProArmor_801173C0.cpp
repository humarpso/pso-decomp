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

struct RecoveredGlobal_8011751C_lbl_8049FEB8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void * construct__13TItemProArmorFPv(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern int tl_05;
u8 *TItemProArmor__sub_801173FC(u8 *arg0);
u16 obj_getField1c(void *);
void TItemTimerEvent__sub_8011E0A4(u16);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_8049FEB8[];
u8 *TItemProArmor__sub_8011751C(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1);
void create__13TItemProArmorFiUi(s32 arg0, u32 arg1);
void create_armor__13TItemProArmorFPv(void* a0);
void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1);
void tick_lifetime__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);
M2C_UNK TItemTimerEvent__sub_8011E068(u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __dl__7TObjectFPv(void *);
void __dt__11TItemObjectFv(void *, int);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_8049FE00[];

void *construct__13TItemProArmorFPv(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FE00;
    return arg0;
}

u8 *TItemProArmor__sub_801173FC(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)construct__13TItemProArmorFPv((void *)((void *)(temp_r3)), (void *)((void *)((*(s32 *)&tl_05))), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void tick_lifetime__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x1E);
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r3 - 1);
}

extern M2C_UNK lbl_8049FEB8[];

void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FEB8;
        TItemTimerEvent__sub_8011E068(M2C_FIELD(arg0, u16 *, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8011751C_lbl_8049FEB8_size[sizeof(RecoveredGlobal_8011751C_lbl_8049FEB8) == 0x18 ? 1 : -1];
u8 *TItemProArmor__sub_8011751C(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8011751C_lbl_8049FEB8 *)&lbl_8049FEB8).value;
    M2C_FIELD(arg0, u16 *, 0x1C) = obj_getField1c(arg2);
    TItemTimerEvent__sub_8011E0A4(M2C_FIELD(arg0, u16 *, 0x1C));
    M2C_FIELD(arg0, s16 *, 0x1E) = 3;
    return arg0;
}

void create__13TItemProArmorFiUi(s32 arg0, u32 arg1) {
    void *temp_r3;
    if ((arg0 != 0) && (arg1 != 0U)) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != NULL) {
            TItemProArmor__sub_8011751C((u8 *)(temp_r3), (u8 *)(arg0), (u8 *)(arg1));
        }
    }
}

    extern int tl_05;
void create_armor__13TItemProArmorFPv(void* a0) { create__13TItemProArmorFiUi((s32)((s32)((void*)(tl_05))), (u32)((u32)((void*)(*(int*)((char*)a0 + 0xf0))))); }

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
