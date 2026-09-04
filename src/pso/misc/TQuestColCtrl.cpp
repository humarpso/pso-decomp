#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__13TQuestColCtrlFv(void);

void render__13TQuestColCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80195EC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__13TQuestColCtrlFv(void);
M2C_UNK TQuestColCtrl__ct(M2C_UNK, s32);
u32 __ct__7TObjectFP7TObject(M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D5C50;
extern s32 tl_05;

void init__13TQuestColCtrlFv(void) {
    u32 var_r3;

    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        var_r3 = __ct__7TObjectFP7TObject(var_r3, 0);
    }
    lbl_805D5C50 = var_r3;
    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        TQuestColCtrl__ct(var_r3, tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80195FD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestColCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TQuestColCtrl[];
extern void *lbl_805D3404;

void *TQuestColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TQuestColCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3404;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196EC0
#include "types.h"

extern "C" {

void TQuestColCtrl__sub_80196EC0(void);

    extern int lbl_805D5C4C;
void TQuestColCtrl__sub_80196EC0(void) { lbl_805D5C4C = 0; }

}
#endif
#endif
