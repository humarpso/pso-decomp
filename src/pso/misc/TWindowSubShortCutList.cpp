#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__22TWindowSubShortCutListFv(void *arg0);
s32 get_status_flag__6TLobbyFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80268048();
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubShortCutList__sub_8027E278(void *);

void run_task__22TWindowSubShortCutListFv(void *arg0) {
    TWindowSubStatusDisp__sub_80268048();
    if ((get_status_flag__6TLobbyFPv(arg0) == 0) && (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x88)) != 0)) {
        TWindowSubShortCutList__sub_8027E278(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80267020
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4);
M2C_UNK TWindowSubStatusDisp__sub_802589AC(s32, u8, u8, int, s32, s32);
M2C_UNK fn_80266BD0(s32, u8 *, u8 *, s16);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void draw_entry__22TWindowSubShortCutListFPviUcii(void *arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    u8 sp9;
    u8 sp8;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        fn_80266BD0(arg1, &sp9, &sp8, M2C_FIELD(arg0, s16 *, 0x20));
        TWindowSubStatusDisp__sub_802589AC(get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x72)), sp9, sp8, arg2, arg3, arg4);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E418
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__22TWindowSubShortCutListFv(u8 *arg0);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(s32, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__22TWindowSubShortCutListFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        TWindowSubStatusDisp__sub_8026C800(M2C_FIELD(arg0, u32 *, 0x88), temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027E4F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TWindowSubShortCutListFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
void delete_if_allocated(void *, int);

extern M2C_UNK __vt__22TWindowSubShortCutList[];

void *__dt__22TWindowSubShortCutListFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubShortCutList;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x88), 1);
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
