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
extern const f64 lbl_80438DB0;
void fn_8007FE78(Obj_8007FF28 *self, s32 arg1, void *arg2, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {
extern const RecoveredGlobal_800800EC_lbl_80438D7C lbl_80438D7C;
extern const f32 lbl_805D92D8;
extern const f32 lbl_805D92DC;
extern const f32 lbl_805D9300;
void fn_800800EC(M2C_UNK arg0, u8 *arg1, s32 arg2);
void fn_8007FF28(Obj_8007FF28 *self, s32 arg1);
s32 get_camera_no__11TCameraCtrlFv(void);
f32 get_scale__15TWindowCtrlMainFv(s32);
extern const f32 lbl_805D92E4;
extern const f32 lbl_805D92E8;
extern const f32 lbl_805D92EC;
extern const f32 lbl_805D92F0;
extern const f32 lbl_805D92F4;

void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D9304;
void run_task__17TDuelEffectNumberFv(u8 *arg0);
void render__17TDuelEffectNumberFv(void *arg0);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK set_draw_texture_and_color(M2C_UNK, M2C_UNK);
void fn_8007FFF4(Obj_8007FF28 *self, s32 arg1);
extern const f32 lbl_805D92F8;
extern const f32 lbl_805D92FC;
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
extern s32 lbl_805D63F0;

void fn_8007FE78(Obj_8007FF28 *self, s32 arg1, void *arg2, f32 farg0, f32 farg1, f32 farg2) {
    f32 *src = (f32 *)arg2;
    farg1 = farg1 * lbl_80438DB0;
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
        scale = lbl_805D92E4 / get_scale__15TWindowCtrlMainFv(get_camera_no__11TCameraCtrlFv());
        c = lbl_805D92EC;
        b = c * ((f32)(self->timer - 5) / lbl_805D92F0) + lbl_805D92E8;
        fn_8007FE78((Obj_8007FF28 *)(self), (s32)(arg1), (void *)(self->x1C), scale, b, self->timer < 10 ? c : c - c * ((f32)(self->timer - 10) / lbl_805D92F4));
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

    scale = lbl_805D92E4 / get_scale__15TWindowCtrlMainFv(get_camera_no__11TCameraCtrlFv());
    if (self->timer < 5) {
        b = lbl_805D92F8 - ((f32) self->timer / lbl_805D92FC);
        c = lbl_805D92EC;
        c = c * (f32) (self->timer / 5) + c;
    } else if (self->timer < 25) {
        c = b = lbl_805D92E8;
    } else {
        b = lbl_805D92E8;
        c = b - ((f32) (self->timer - 25) / lbl_805D92FC);
    }
    fn_8007FE78((Obj_8007FF28 *)(self), (s32)(arg1), (void *)(self->x1C), scale, b, c);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_800800EC_lbl_80438D7C_size[sizeof(RecoveredGlobal_800800EC_lbl_80438D7C) == 0x34 ? 1 : -1];
void fn_800800EC(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 temp_r0;
    temp_r0 = arg2 * 8;
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(((u8 *)(&lbl_80438D7C.value) + temp_r0), f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (lbl_805D92D8 + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (lbl_805D92DC + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(arg1, f32 *, 0x10) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (M2C_FIELD(arg1, f32 *, 0x14) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * lbl_805D9300);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg1, f32 *, 0x1C) * lbl_805D9300);
}
#pragma pop

void render__17TDuelEffectNumberFv(void *arg0) {
    char sp8[0x20];

    ((M2C_UNK (*)(void *, void *, s32))fn_800800EC)(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0x24));
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
    if ((f32) M2C_FIELD(arg0, s32 *, 0x28) >= lbl_805D9304) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}

TDuelEffectNumber::~TDuelEffectNumber() {}
