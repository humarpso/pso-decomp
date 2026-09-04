#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TWindowStatusFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowSimpleStatusFv(void *, int);

extern M2C_UNK __vt__13TWindowStatus[];

void *__dt__13TWindowStatusFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
        __dt__19TWindowSimpleStatusFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802712F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TWindowStatusFv(s32 arg0);
M2C_UNK update_fade__17TWindowSubComCardFPv(s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowComCard__sub_8026F9F4(s32, s32);
M2C_UNK fn_80270014(s32);
M2C_UNK update_status_help_item(s32);
M2C_UNK TWindowSubStatusDisp__sub_80270F14();

void run_task__13TWindowStatusFv(s32 arg0) {
    TWindowSubStatusDisp__sub_80270F14();
    fn_80270014(arg0);
    update_status_help_item(arg0);
    TWindowComCard__sub_8026F9F4(arg0, TWindowSubComCard__sub_8026CBB8(0x1D));
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802713BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowStatus__ct(void *arg0);
void TWindowSimpleStatus__ct(void *);

extern M2C_UNK __vt__13TWindowStatus[];
extern void *lbl_805D39F8;

void *TWindowStatus__ct(void *arg0) {
    TWindowSimpleStatus__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39F8;
    return arg0;
}

}
#endif
#endif
