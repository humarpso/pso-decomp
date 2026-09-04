#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_active_photon_object__17TWindowMessageLogFv(void);
s32 TObjPlayer__sub_80019248(s32);
s32 TPhotonMylla__sub_80154CB4();
s32 obj_isState2_324();

s32 get_active_photon_object__17TWindowMessageLogFv(void) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 == 0) {
        return 0;
    }
    if ((obj_isState2_324() == 0) && (TObjPlayer__sub_80019248(temp_r3) == 0)) {
        return 0;
    }
    var_r3 = temp_r3 + 0x85C;
    if (var_r3 == 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8026A52C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_offset__17TWindowMessageLogFPv(void *arg0);
M2C_UNK TWindowMessageLog__sub_8026A434(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv();

extern f32 lbl_805DD240;

void update_fade_offset__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = M2C_FIELD(arg0, f32 *, 0x4C);
    update_fade__17TWindowSubComCardFPv();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - temp_f31;
    if (lbl_805DD240 != temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) - temp_f1);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) - temp_f1);
        TWindowMessageLog__sub_8026A434(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026A5A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0);
M2C_UNK TWindowMessageLog__sub_8026A434(f32);

extern const f32 lbl_805DD240;

void update_scroll_animation__17TWindowMessageLogFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
    if (lbl_805DD240 != temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) (M2C_FIELD(arg0, f32 *, 0x84) + temp_f1);
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x6C);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1_2 + M2C_FIELD(arg0, f32 *, 0x94));
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) (M2C_FIELD(arg0, f32 *, 0x94) * lbl_805DD240);
        TWindowMessageLog__sub_8026A434(temp_f1_2);
    }
}

}
#endif
#endif
