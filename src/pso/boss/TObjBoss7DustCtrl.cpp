#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss7DustCtrl.h"

void TObjBoss7DustCtrl::run_task() {}

TObjBoss7DustCtrl::~TObjBoss7DustCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x802F125C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss7DustCtrl__sub_802F125C(void);

extern s32 lbl_805D6958;

void TObjBoss7DustCtrl__sub_802F125C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D6958 + 1;
    lbl_805D6958 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D6958 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F13D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss7DustCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TObjBoss7DustCtrl[];
extern void *lbl_805D3FE0;

void *TObjBoss7DustCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss7DustCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3FE0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F141C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__17TObjBoss7DustCtrlFv(void);
void* TObjBoss7DustCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_05;

void create__17TObjBoss7DustCtrlFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TObjBoss7DustCtrl__ct(obj, tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F1450
#include "types.h"

extern "C" {

void TObjBoss7DustCtrl__sub_802F1450(void);

void TObjBoss7DustCtrl__sub_802F1450(void) {  }

}
#endif
#endif
