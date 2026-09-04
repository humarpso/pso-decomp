#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TWindowSoundBalanceFv(s32 arg0);
M2C_UNK apply_balance__19TWindowSoundBalanceFPvPv(s32, void *, f32, f32);
void *draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(s32, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, void *);

extern const f32 lbl_805DD40C;
extern const f32 lbl_805DD410;

void render__19TWindowSoundBalanceFv(s32 arg0) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    temp_f2 = M2C_FIELD(temp_r3, f32 *, 0x10);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (temp_f2 + lbl_805DD40C);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x18);
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) (temp_f1 - lbl_805DD410);
    apply_balance__19TWindowSoundBalanceFPvPv(arg0, temp_r3, temp_f1, temp_f2);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80270860
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK TWindowSubComCard__sub_8024503C(void *, s32, s32);
s32 is_active__17TWindowOptionCtrlFPv(void *);

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1) {
    s32 temp;

    temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) ((s8 *) arg0)[0x61]);
    TWindowSubComCard__sub_8024503C(arg1, temp, is_active__17TWindowOptionCtrlFPv(arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802708B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__19TWindowSoundBalanceFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_active__17TWindowOptionCtrlFPv();

void handle_cancel__19TWindowSoundBalanceFPv(void *arg0) {
    if (is_active__17TWindowOptionCtrlFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80270910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_open_sound__19TWindowSoundBalanceFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void play_open_sound__19TWindowSoundBalanceFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80270D74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__19TWindowSoundBalance[];

void *__dt__19TWindowSoundBalanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSoundBalance;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
