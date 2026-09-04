#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowSubEquipKindFv(void *arg0);
M2C_UNK TWindowSubStatusDisp__sub_80268048();

void run_task__19TWindowSubEquipKindFv(void *arg0) {
    int temp_r3;

    TWindowSubStatusDisp__sub_80268048();
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x8A);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s16 *, 0x8A) = (s16) (temp_r3 - 1);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80278EA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TWindowSubEquipKindFv(u8 *arg0);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK TWindowSubStatusDisp__sub_8027831C(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__19TWindowSubEquipKindFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x88) != 4) {
        TWindowSubStatusDisp__sub_8027831C(arg0, temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80278F88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowSubEquipKindFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);

extern M2C_UNK __vt__19TWindowSubEquipKind[];

void *__dt__19TWindowSubEquipKindFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubEquipKind;
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
