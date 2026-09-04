#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjRainCtrl.h"

void TObjRainCtrl::run_task() {}

TObjRainCtrl::~TObjRainCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x80197CE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__12TObjRainCtrlFv(void);
M2C_UNK TObjRainCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 tl_particle;

void create__12TObjRainCtrlFv(void) {
    void *temp_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != 0) {
            TObjRainCtrl__ct(temp_r3, tl_particle);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80197E08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjRainCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TObjRainCtrl[];
extern void *lbl_805D3428;

void *TObjRainCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjRainCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3428;
    M2C_FIELD(arg0, u32 *, 0x1C) = 2;
    return arg0;
}

}
#endif
#endif
