#ifndef PSO_CLASS_PACKAGE
#include "pso/TShopWindowBase.h"

TShopWindowBase::~TShopWindowBase() {}
#else
#if PSO_CLASS_PACKAGE == 0x802115F0
#include "types.h"

extern "C" {

int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

void TShopWindowBase__sub_802115F0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213FD0
#include "types.h"
struct Base_80213FD0 { char pad[0x18]; };
struct VObj_80213FD0 : Base_80213FD0 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void *, int);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0) {
    VObj_80213FD0 *o = (VObj_80213FD0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0xc, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 0xc);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802143AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802143AC { char pad[0x18]; };
struct VObj_802143AC : Base_802143AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8r();
};

extern "C" {

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 set_position_xy(s32, f32, f32);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;
    VObj_802143AC *vobj = (VObj_802143AC *)arg0;

    if ((vobj->m8r() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x38) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x38), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x38), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        vobj->m7(8, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80214490
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80214490 { char pad[0x18]; };
struct V_A_80214490 : Base_A_80214490 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();
    virtual M2C_UNK m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_80214544 { char pad[0x18]; };
struct V_A_80214544 : Base_A_80214544 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

extern "C" {

void update__15TShopWindowBaseFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void update__15TShopWindowBaseFPv(void *arg0) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x3C);
    if (v != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(v)) != 1) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214490 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214490 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void update_confirm_input__15TShopWindowBaseFPv(void *arg0) {
    void *parent = M2C_FIELD(arg0, void **, 0x3C);
    if (parent != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(parent)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214544 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214544 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80216080
#include "types.h"

extern "C" {

void TShopWindowBase__sub_80216080(void);

void TShopWindowBase__sub_80216080(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80217454
#include "types.h"

extern "C" {

void TShopWindowBase__sub_80217454(void);
void TShopWindowBase__sub_80217458(void);
int TShopWindowBase__sub_8021745C(void);

void TShopWindowBase__sub_80217454(void) {  }
void TShopWindowBase__sub_80217458(void) {  }
int TShopWindowBase__sub_8021745C(void) { return 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022393C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_scale__15TShopWindowBaseFv(void);
s32 get_instance__11TCameraCtrlFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

extern f32 lbl_805DC728;
extern f32 lbl_805DC72C;

f32 get_scale__15TShopWindowBaseFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (get_instance__11TCameraCtrlFv() > 2)) {
        return lbl_805DC728;
    }
    return lbl_805DC72C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802239B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_child_field1c__15TShopWindowBaseFPv(void *arg0);

s32 obj_getField1c(void *);

s32 get_child_field1c__15TShopWindowBaseFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80223AA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_if_ready__15TShopWindowBaseFPv(void *arg0);

extern s32 lbl_805D55C0;

struct Base_80223AA4 { char pad[0x18]; };
struct VObj_80223AA4 : Base_80223AA4 {
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
};

void draw_if_ready__15TShopWindowBaseFPv(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        ((VObj_80223AA4 *)arg0)->m9();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80223B34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__15TShopWindowBaseFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__15TShopWindowBase[];
extern void *lbl_805D3700;

void *__ct__15TShopWindowBaseFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TShopWindowBase;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3700;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
#endif
#endif
