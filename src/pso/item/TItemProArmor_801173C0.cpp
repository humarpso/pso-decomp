#include "types.h"
#include "pso/item/TUnk_8049FED0.h"
#include "pso/item/TUnk_8049FE00.h"
#include "pso/item/TUnk_8049FEB8.h"
#include "pso/item/TItemProArmor.h"
#include "pso/item/TItemTimerEvent.h"

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
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern int tl_05;
u16 obj_getField1c(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_8049FEB8[];
u8 *TItemProArmor__sub_8011751C(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1);
void create__13TItemProArmorFiUi(s32 arg0, u32 arg1);
void TItemObject__ct(void *);
u32 get_player_by_client_id(u16);
s32 __dl__7TObjectFPv(void *);
void __dt__11TItemObjectFv(void *, int);
s32 __dt__7TObjectFv(void *, s32);
void *__nw__7TObjectFUl(s32);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 queue_destruction__7TObjectFv(void *);

extern s32 lbl_8049FE00[];

void *TUnk_8049FE00::construct(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_8049FE00;
    return this;
}

u8 *TItemProArmor::create() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049FE00 *)temp_r3)->construct((void *)((void *)((*(s32 *)&tl_05))), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049FEB8::run_task() {
    s32 temp_r3;

    if (get_player_by_client_id(*(u16 *)((s8 *)this + 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    temp_r3 = this->m_1e;
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    this->m_1e = (s16) (temp_r3 - 1);
}

extern s32 lbl_8049FEB8[];

void *TUnk_8049FEB8::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_8049FEB8;
        TItemTimerEvent::clear_timer_slot(*(u16 *)&(*(u16 *)((u8 *)this + 0x1C)));
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

typedef char RecoveredGlobal_8011751C_lbl_8049FEB8_size[sizeof(RecoveredGlobal_8011751C_lbl_8049FEB8) == 0x18 ? 1 : -1];
u8 *TItemProArmor__sub_8011751C(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8011751C_lbl_8049FEB8 *)&lbl_8049FEB8).value;
    *(u16 *)((s8 *)arg0 + 0x1C) = obj_getField1c(arg2);
    TItemTimerEvent::start_event_by_index(*(u16 *)((s8 *)arg0 + 0x1C));
    *(s16 *)((s8 *)arg0 + 0x1E) = 3;
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
void TUnk_8049FED0::vfunc_44() { create__13TItemProArmorFiUi((s32)((s32)((void*)(tl_05))), (u32)((u32)((void*)(*(int *)&this->m_f0)))); }

extern s32 lbl_8049FED0[];

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FED0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
