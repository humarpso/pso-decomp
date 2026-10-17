#include "types.h"
#include "pso/misc/TWindowSubStatusDisp_8024FBA8.h"
#include "pso/misc/TKeyBoardControl_8025CB70.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/misc/TWindowDD.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pt_80260020 { f32 x, y; };

struct Ctx_80260020 { u8 pad0[0x10]; Pt_80260020 pos; u8 pad18[0x38 - 0x18]; f32 scale; };

struct State_80260020 { u8 pad0[0xB4]; s32 flags; };

struct Win_80260020 { u8 pad0[0x70]; State_80260020 *state; };

extern "C" {
extern s32 lbl_8044F0CC[];
extern s32 lbl_8044F0D4[];
extern s32 keyboard_hard_status_text_a[];
extern s32 keyboard_hard_status_text_b[];
extern s32 lbl_8044F0FC[];
extern s32 lbl_8044F104[];
extern s32 current_language;
extern const f32 lbl_805DD068;
extern const f32 lbl_805DD06C;
extern const f32 lbl_805DD070;
void draw_status_text__19TWindowKeyBoardHardFPvPv(Win_80260020 *self, Ctx_80260020 *ctx);
s32 is_key_active__19TWindowKeyBoardHardFv();

void TWindowKeyBoardHard::release_keyboard() { void* m = *(void* *)&this->m_70; if (m) TWindowKeyBoardHard__sub_8025CC48(m); }

void draw_status_text__19TWindowKeyBoardHardFPvPv(Win_80260020 *self, Ctx_80260020 *ctx) {
    s32 flags;
    if (self->state != NULL && current_language == 0) {
        f32 inv = lbl_805DD068 / ctx->scale;
        Pt_80260020 pt;
        pt.x = ctx->pos.x;
        pt.y = ctx->pos.y;
        set_text_draw_params((s32)ctx, (s32)(0), (s32)(0), (f32)inv, (f32)lbl_805DD06C);
        flags = self->state->flags;
        if (!(flags & 1)) {
            draw_window_text((f32 *)&pt, (const char *)lbl_8044F0CC, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
        } else if (flags & 2) {
            draw_window_text((f32 *)&pt, (const char *)lbl_8044F0D4, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
        } else if (flags & 4) {
            if (flags & 8) {
                draw_window_text((f32 *)&pt, (const char *)keyboard_hard_status_text_a, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
            } else {
                draw_window_text((f32 *)&pt, (const char *)keyboard_hard_status_text_b, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
            }
        } else if (flags & 8) {
            draw_window_text((f32 *)&pt, (const char *)lbl_8044F0FC, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
        } else {
            draw_window_text((f32 *)&pt, (const char *)lbl_8044F104, (s32)(-1), (s32)(0), (f32)lbl_805DD070);
        }
    }
}

void TWindowKeyBoardHard::render() {
    s32 temp;
    if (((s32) *(s32 *)&this->m_68 > 0) && (is_key_active__19TWindowKeyBoardHardFv() == 0)) {
        temp = TWindowDD::draw_default_entry((s32)this);
        draw_status_text__19TWindowKeyBoardHardFPvPv((Win_80260020 *)(this), (Ctx_80260020 *)(temp));
    }
}

}
