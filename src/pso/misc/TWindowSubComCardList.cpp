#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TWindowSubComCardListFv(void *arg0);
M2C_UNK run_task__11TWindowMenuFv();
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);

void run_task__21TWindowSubComCardListFv(void *arg0) {
    run_task__11TWindowMenuFv();
    if ((is_visible__17TWindowSubComCardFPv(arg0) == 0) && (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0)) {
        set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
        TWindowSubComCardList__sub_80275360(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8027553C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TWindowSubComCardListFv(u8 *arg0);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK render_selected_entry__17TWindowSubComCardFPvi(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);
M2C_UNK fn_802752D8(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__21TWindowSubComCardListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    render_selected_entry__17TWindowSubComCardFPvi(arg0, temp_r3);
    fn_802752D8(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027562C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowMenuFv(void *, int);
void delete_if_allocated(void *, int);

extern M2C_UNK __vt__21TWindowSubComCardList[];

void *__dt__21TWindowSubComCardListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubComCardList;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x8C), 1);
        __dt__11TWindowMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
