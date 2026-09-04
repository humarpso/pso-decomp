#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TJudgmentSequence__vt10(void* p);

int set_field_20__12TQuestListVMFPvi(void*, void*);
int restore_player_state__13TShopSequenceFPv(void*);

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80215BA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TJudgmentSequence__sub_80215BA0(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TJudgmentSequence__sub_80215BA0(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80215BCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TJudgmentSequence__sub_80215BCC(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TJudgmentSequence__sub_80215BCC(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80215BF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80215BF8 { char pad[0x18]; };
struct VObj_80215BF8 : Base_80215BF8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(int a, int b);
};

extern "C" {

void TJudgmentSequence__sub_80215BF8(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TJudgmentSequence__sub_80215BF8(void *arg0) {
    struct VObj_80215BF8 *o = (struct VObj_80215BF8 *)arg0;
    if (o != NULL) {
        o->m6(0xD, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80215C48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80215C48 { char pad[0x18]; };
struct VObj_80215C48 : Base_80215C48 {
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

void handle_close_input__17TJudgmentSequenceFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void handle_close_input__17TJudgmentSequenceFPv(void *arg0) {
    if ((((VObj_80215C48 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80215D34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80215D34 { char pad[0x18]; };
struct VObj_80215D34 : Base_80215D34 {
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

void handle_confirm__17TJudgmentSequenceFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);

void handle_confirm__17TJudgmentSequenceFPv(void *arg0) {
    if ((((VObj_80215D34 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E4C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TJudgmentSequenceFPv(void *arg0);
void *TJudgmentSequence__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TJudgmentSequenceFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        o = TJudgmentSequence__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021E510
#include "types.h"

extern "C" {

int TJudgmentSequence__sub_8021E510(int a0);

    extern int TJudgmentSequence__data_80513E80[];
int TJudgmentSequence__sub_8021E510(int a0) {  return TJudgmentSequence__data_80513E80[a0]; }

}
#endif
#endif
