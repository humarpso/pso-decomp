#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TShopEquipmentSequence__sub_8021D65C(void);

void TShopEquipmentSequence__sub_8021D65C(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8021D524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021D584 { char pad[0x18]; };
struct VObj_8021D584 : Base_8021D584 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};
struct Base_8021D5D4 { char pad[0x18]; };
struct VObj_8021D5D4 : Base_8021D5D4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};

extern "C" {

void exit__22TShopEquipmentSequenceFPv(void *arg0);
void handle_confirm__22TShopEquipmentSequenceFPv(void *arg0);
void init_window__22TShopEquipmentSequenceFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);

extern s32 lbl_805D622C;
extern s32 lbl_805D6230;

struct Base_8021D524 { char pad[0x18]; };
struct VObj_8021D524 : Base_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

void init_window__22TShopEquipmentSequenceFPv(void *arg0) {
    if (arg0 != NULL) {
        ((VObj_8021D524 *)arg0)->m4(0x1B, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(8));
        lbl_805D622C = 0x1A;
        lbl_805D6230 = 2;
    }
}

void exit__22TShopEquipmentSequenceFPv(void *arg0) {
    struct VObj_8021D584 *o = (struct VObj_8021D584 *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
    }
}

extern s32 lbl_805D622C;
extern s32 lbl_805D6230;

void handle_confirm__22TShopEquipmentSequenceFPv(void *arg0) {
    if ((((VObj_8021D5D4*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021D5D4*)arg0)->m4(lbl_805D622C, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(lbl_805D6230));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021D660
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021D660 { char pad[0x18]; };
struct VObj_8021D660 : Base_8021D660 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

extern "C" {

void close_if_done__22TShopEquipmentSequenceFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_if_done__22TShopEquipmentSequenceFPv(void *arg0) {
    if ((((VObj_8021D660 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_if_single_screen__13TShopSequenceFv(arg0);
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E2E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_instance__22TShopEquipmentSequenceFPv(void *arg0);
void *TShopEquipmentSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_instance__22TShopEquipmentSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TShopEquipmentSequence__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E330
#include "types.h"

extern "C" {

int TShopEquipmentSequence__sub_8021E330(int a0);

    extern int TShopEquipmentSequence__data_80513EC0[];
int TShopEquipmentSequence__sub_8021E330(int a0) {  return TShopEquipmentSequence__data_80513EC0[a0]; }

}
#endif
#endif
