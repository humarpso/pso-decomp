#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next_item__11TWindowMenuFPv(void *arg0);
void move_cursor_prev__11TWindowMenuFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowMenu__sub_80266B18(void *, s32);

void select_next_item__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor_prev__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80265774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_active_flag__11TWindowMenuFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void set_active_flag__11TWindowMenuFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (is_visible__17TWindowSubComCardFPv() == 0)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x400)) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        }
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026667C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__11TWindowMenuFv(u8 *arg0);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubComCard__sub_802665C0(void *, s32);
M2C_UNK render_selected_entry__17TWindowSubComCardFPvi(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__11TWindowMenuFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        render_selected_entry__17TWindowSubComCardFPvi(arg0, temp_r3);
        TWindowSubComCard__sub_802665C0(arg0, temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x88), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802669CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TWindowMenuFv(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void destroy_window__15TWindowAdditionFPvs(void *, int);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__11TWindowMenu[];

void *__dt__11TWindowMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowMenu;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x84), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266B04
#include "types.h"

extern "C" {

void copy_position__11TWindowMenuFPvPv(void* p, void* q);

void copy_position__11TWindowMenuFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266B70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern s8 lbl_8050E208[];

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(lbl_8050E208 + 0x160, arg1, 6, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80266BB8
#include "types.h"

extern "C" {

int TWindowMenu__sub_80266BB8(void* p);
void reset_selection__17TWindowSubComCardFPv(void* p);

int TWindowMenu__sub_80266BB8(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
#endif
#endif
