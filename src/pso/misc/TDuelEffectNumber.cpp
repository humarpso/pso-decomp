#include "pso/TDuelEffectNumber.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800800EC_lbl_80438D7C {
    M2C_UNK value;
    u8 remaining[0x30];
};
struct Obj_8007FF28 {
    u8 pad0[0x1C];
    u8 x1C[0xC];
    s32 timer;
};

extern "C" {
s32 __cvt_fp2unsigned(f32);
void draw_textured_quad_at_depth(void *, f32);
void set_constant_material_color(s32);
void fn_8007FE78(Obj_8007FF28 *self, s32 arg1, void *arg2, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {
extern const char TDuelEffectNumber__class_name_string[] = "TDuelEffectNumber";
extern const RecoveredGlobal_800800EC_lbl_80438D7C lbl_80438D7C = {0, {0x43, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
void calc_duel_number_uv(M2C_UNK arg0, u8 *arg1, s32 arg2);
void fn_8007FF28(Obj_8007FF28 *self, s32 arg1);
s32 get_camera_no__11TCameraCtrlFv(void);
f32 get_scale__15TWindowCtrlMainFv(s32);

void queue_destruction__7TObjectFv(void *);
void run_task__17TDuelEffectNumberFv(u8 *arg0);
void render__17TDuelEffectNumberFv(void *arg0);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK set_draw_texture_and_color(M2C_UNK, M2C_UNK);
void fn_8007FFF4(Obj_8007FF28 *self, s32 arg1);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
extern s32 lbl_805D63F0;

void fn_8007FE78(Obj_8007FF28 *self, s32 arg1, void *arg2, f32 farg0, f32 farg1, f32 farg2) {
    f32 *src = (f32 *)arg2;
    farg1 *= (0.5);
    M2C_FIELD(arg1, f32 *, 0) = src[0] - 64.0f * farg1;
    M2C_FIELD(arg1, f32 *, 4) = src[1] - 85.0f * farg1;
    M2C_FIELD(arg1, f32 *, 8) = src[0] + 64.0f * farg1;
    M2C_FIELD(arg1, f32 *, 0xC) = src[1] + 85.0f * farg1;
    set_constant_material_color(__cvt_fp2unsigned(4278190080.0f * farg2) | 0xFF0000 | 0xFFFF);
    draw_textured_quad_at_depth((void *)arg1, farg0);
}

#pragma push
#pragma fp_contract on
void fn_8007FF28(Obj_8007FF28 *self, s32 arg1) {
    f32 scale;
    f32 b;
    f32 c;

    if (self->timer >= 5 && self->timer < 20) {
        scale = (-1.0f) / get_scale__15TWindowCtrlMainFv(get_camera_no__11TCameraCtrlFv());
        c = (0.5f);
        b = c * ((f32)(self->timer - 5) / (15.0f)) + (1.0f);
        fn_8007FE78((Obj_8007FF28 *)(self), (s32)(arg1), (void *)(self->x1C), scale, b, self->timer < 10 ? c : c - c * ((f32)(self->timer - 10) / (1e+01f)));
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void fn_8007FFF4(Obj_8007FF28 *self, s32 arg1) {
    f32 scale;
    f32 b;
    f32 c;

    scale = (-1.0f) / get_scale__15TWindowCtrlMainFv(get_camera_no__11TCameraCtrlFv());
    if (self->timer < 5) {
        b = (2.0f) - ((f32) self->timer / (5.0f));
        c = (0.5f);
        c = c * (f32) (self->timer / 5) + c;
    } else if (self->timer < 25) {
        c = b = (1.0f);
    } else {
        b = (1.0f);
        c = b - ((f32) (self->timer - 25) / (5.0f));
    }
    fn_8007FE78((Obj_8007FF28 *)(self), (s32)(arg1), (void *)(self->x1C), scale, b, c);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_800800EC_lbl_80438D7C_size[sizeof(RecoveredGlobal_800800EC_lbl_80438D7C) == 0x34 ? 1 : -1];
void calc_duel_number_uv(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 temp_r0;
    temp_r0 = arg2 * 8;
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) ((64.0f) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) ((85.0f) + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg1, f32 *, 0x10) *= (0.00390625f);
    M2C_FIELD(arg1, f32 *, 0x14) *= (0.00390625f);
    M2C_FIELD(arg1, f32 *, 0x18) *= (0.00390625f);
    M2C_FIELD(arg1, f32 *, 0x1C) *= (0.00390625f);
}
#pragma pop

void render__17TDuelEffectNumberFv(void *arg0) {
    char sp8[0x20];

    ((M2C_UNK (*)(void *, void *, s32))calc_duel_number_uv)(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0x24));
    init_xyz_limits__10TObjPlayerFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(6, -1);
    ((M2C_UNK (*)(void *, M2C_UNK *))fn_8007FFF4)(arg0, (M2C_UNK *)&sp8);
    ((M2C_UNK (*)(void *, M2C_UNK *))fn_8007FF28)(arg0, (M2C_UNK *)&sp8);
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}
void run_task__17TDuelEffectNumberFv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x28) >= (3e+01f)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}

TDuelEffectNumber::~TDuelEffectNumber() {}
