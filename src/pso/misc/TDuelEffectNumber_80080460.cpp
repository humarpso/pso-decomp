#pragma push

#include "types.h"
#pragma fp_contract on

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D9330;
void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3);
s32 __cvt_fp2unsigned(f32);
void begin_screen_draw(s32);
void set_draw_texture_and_color(s32, s32);
extern s32 lbl_805D63F0;
extern const f32 lbl_805D932C;
void render__17TDuelEffectStringFv(u8 *arg0);
}

extern "C" {

void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3);

extern const f32 lbl_805D9310;
extern const f32 lbl_805D9314;
extern const f32 lbl_805D9318;
extern const f32 lbl_805D931C;
extern const f32 lbl_805D9320;
extern const f32 lbl_805D9324;
extern const f32 lbl_805D9328;

void calc_digit_transform__17TDuelEffectNumberFiPvPvi(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    if (arg3 < 0xA) {
        *arg1 = -(lbl_805D9314 * ((f32) arg3 / lbl_805D9318) - lbl_805D9310);
    } else {
        *arg1 = lbl_805D9320 * ((f32) (arg3 - 0xA) / lbl_805D9324) + lbl_805D931C;
    }
    if (arg3 < 5) {
        *arg2 = (f32) (arg3 / 5);
        return;
    }
    *arg2 = lbl_805D931C - ((f32) (arg3 - 5) / lbl_805D9328);
}

}

#pragma pop

#pragma push

#include "pso/TDuelEffectString.h"

#include "types.h"
#include "pso/TDuelEffectNumber.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

f32 TBoss8Dragon__sub_8008072C(void);
void *__ct__17TDuelEffectStringFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
f64 pow();

extern s32 __vt__17TDuelEffectString[];
extern void *TDuelEffectString__class_name;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void render__17TDuelEffectStringFv(u8 *arg0) {
    f32 spC;
    f32 sp8;
    s32 temp_r0;
    s32 temp_r31;
    calc_digit_transform__17TDuelEffectNumberFiPvPvi((s32)((s32) arg0), (f32 *)(&spC), (f32 *)(&sp8), (s32)(*(s32 *)((s8 *)arg0 + 0x28)));
    temp_r31 = __cvt_fp2unsigned(lbl_805D932C * sp8) | 0xFF0000 | 0xFFFF;
    TObjPlayer::init_xyz_limits();
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_805D63F0);
    set_draw_texture_and_color(6, temp_r31);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    switch (temp_r0) {
    case 0:
        ((TDuelEffectNumber *)arg0)->render_number_default(spC);
        break;
    case 1:
        ((TDuelEffectNumber *)arg0)->render_pair(spC);
        break;
    }
    TWindowSubStatusDisp::get_player();
    TObjPlayer::reset_transform_state();
}
#pragma pop

void TDuelEffectString::run_task() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (*(s32 *)((s8 *)arg0 + 0x28) + 1);
    if ((f32) *(s32 *)((s8 *)arg0 + 0x28) >= lbl_805D9330) {
        queue_destruction__7TObjectFv(arg0);
    }
}

TDuelEffectString::~TDuelEffectString() {}
void *__ct__17TDuelEffectStringFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TDuelEffectString;
    *(void **)((s8 *)arg0 + 0x0) = TDuelEffectString__class_name;
    *(f32 *)((s8 *)arg0 + 0x1C) = *(f32 *)((s8 *)arg2 + 0x0);
    *(f32 *)((s8 *)arg0 + 0x20) = *(f32 *)((s8 *)arg2 + 0x4);
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    return arg0;
}

f32 TBoss8Dragon__sub_8008072C(void) {
    return (f32) pow();
}

}

#pragma pop
