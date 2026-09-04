#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss2DustCtrl.h"

void TObjBoss2DustCtrl::run_task() {}

TObjBoss2DustCtrl::~TObjBoss2DustCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x8003AB5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2DustCtrl__sub_8003AB5C(void);

extern s32 lbl_805D4BF0;

void TObjBoss2DustCtrl__sub_8003AB5C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D4BF0 + 1;
    lbl_805D4BF0 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D4BF0 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003ACD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss2DustCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TObjBoss2DustCtrl[];
extern void *lbl_805D26F8;

void *TObjBoss2DustCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss2DustCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D26F8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003AD1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__17TObjBoss2DustCtrlFv(void);
M2C_UNK TObjBoss2DustCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void create__17TObjBoss2DustCtrlFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TObjBoss2DustCtrl__ct(obj, tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003AD50
#include "types.h"

extern "C" {

void TObjBoss2DustCtrl__sub_8003AD50(void);

void TObjBoss2DustCtrl__sub_8003AD50(void) {  }

}
#endif
#endif
