#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowSimpleStatusFv(s32 arg0);
M2C_UNK update_fade__17TWindowSubComCardFPv(s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowComCard__sub_8026F9F4(s32, s32);
M2C_UNK fn_8026FDC0(s32);
M2C_UNK fn_8026FEA8();
M2C_UNK fn_80270014(s32);
M2C_UNK update_status_help_item(s32);

void run_task__19TWindowSimpleStatusFv(s32 arg0) {
    fn_8026FEA8();
    fn_80270014(arg0);
    update_status_help_item(arg0);
    TWindowComCard__sub_8026F9F4(arg0, TWindowSubComCard__sub_8026CBB8(0x1D));
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
    fn_8026FDC0(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802706F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__19TWindowSimpleStatusFPvPv(void *arg0, void *arg1);
void *TWindowSimpleStatus__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern unsigned char lbl_804D0CB0[];

void * create__19TWindowSimpleStatusFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSimpleStatus__ct(o, arg0, arg1, lbl_804D0CB0);
    }
    return o;
}

}
#endif
#endif
