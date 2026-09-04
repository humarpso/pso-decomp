#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPsoPassSaveGC__vt8(void);

M2C_UNK TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);

void TAdPsoPassSaveGC__vt8(void) {
    TAdSinglePlyChrSelectGC__sub_80132F2C(0x2A, 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8032B584
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPsoPassSaveGC__sub_8032B584(void);

extern s32 TAdPsoPassSaveGC__data_805D6E80;

s32 TAdPsoPassSaveGC__sub_8032B584(void) {
    return TAdPsoPassSaveGC__data_805D6E80;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A63C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8034A63C { char pad[0x18]; };
struct VObj_8034A63C : Base_8034A63C {
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
};

extern "C" {

void render__16TAdPsoPassSaveGCFv(void *arg0);

void render__16TAdPsoPassSaveGCFv(void *arg0) {
    struct VObj_8034A63C *o = (struct VObj_8034A63C *)arg0;
    o->m10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034A6E8 { char pad[0x18]; };
struct VObj_8034A6E8 : Base_8034A6E8 {
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

extern "C" {

void TAdPsoPassSaveGC__vt4(void);
void TAdPsoPassSaveGC__vt5(void);
void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1);
void run_task__16TAdPsoPassSaveGCFv(void *arg0);
void TAdYesNoBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);

extern s32 TAdPsoPassSaveGC__data_805D6E80;

void TAdPsoPassSaveGC__vt5(void) {
    TAdPsoPassSaveGC__data_805D6E80 = 0;
    TKeyBoardControl__sub_8000F9CC(0xF);
}

extern s32 TAdPsoPassSaveGC__data_805D6E80;

void TAdPsoPassSaveGC__vt4(void) {
    TAdPsoPassSaveGC__data_805D6E80 = 1;
    TKeyBoardControl__sub_8000F9CC(0xF);
}

void run_task__16TAdPsoPassSaveGCFv(void *arg0) {
    struct VObj_8034A6E8 *o = (struct VObj_8034A6E8 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__16TAdPsoPassSaveGC[];

void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdPsoPassSaveGC;
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034A76C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdPsoPassSaveGC__ct(void *arg0);
void TAdYesNoBaseGC__ct(void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TAdPsoPassSaveGC[];
extern void *lbl_805D4310;

void *TAdPsoPassSaveGC__ct(void *arg0) {
    void *o;
    TAdYesNoBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdPsoPassSaveGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4310;
    o = __nw__7TObjectFUl(0x138);
    if (o != NULL) {
        __ct__10TAdTitleGCFv(o, arg0, 18);
    }
    return arg0;
}

}
#endif
#endif
