#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pt_80260020 { f32 x, y; };

struct Ctx_80260020 { u8 pad0[0x10]; Pt_80260020 pos; u8 pad18[0x38 - 0x18]; f32 scale; };

struct State_80260020 { u8 pad0[0xB4]; s32 flags; };

struct Win_80260020 { u8 pad0[0x70]; State_80260020 *state; };

extern "C" {
s32 draw_window_text(void *, void *, s32, s32, f32);
void set_text_draw_params(void *, s32, s32, f32, f32);
extern M2C_UNK lbl_8044F0CC[];
extern M2C_UNK lbl_8044F0D4[];
extern M2C_UNK lbl_8044F0DC[];
extern M2C_UNK lbl_8044F0EC[];
extern M2C_UNK lbl_8044F0FC[];
extern M2C_UNK lbl_8044F104[];
extern s32 lbl_805D5544;
extern const f32 lbl_805DD068;
extern const f32 lbl_805DD06C;
extern const f32 lbl_805DD070;
void draw_status_text__19TWindowKeyBoardHardFPvPv(Win_80260020 *self, Ctx_80260020 *ctx);
}

extern "C" {

void release_keyboard__19TWindowKeyBoardHardFPv(void* p);
void render__19TWindowKeyBoardHardFv(void *arg0);
int TWindowKeyBoardHard__sub_8025CC48(void*);
s32 draw_default_entry__9TWindowDDFi(void *);
s32 is_key_active__19TWindowKeyBoardHardFPv();

void release_keyboard__19TWindowKeyBoardHardFPv(void* p) { void* m = *(void**)((char*)p + 0x70); if (m) TWindowKeyBoardHard__sub_8025CC48(m); }

void draw_status_text__19TWindowKeyBoardHardFPvPv(Win_80260020 *self, Ctx_80260020 *ctx) {
    s32 flags;
    if (self->state != NULL && lbl_805D5544 == 0) {
        f32 inv = lbl_805DD068 / ctx->scale;
        Pt_80260020 pt;
        pt.x = ctx->pos.x;
        pt.y = ctx->pos.y;
        set_text_draw_params(ctx, 0, 0, inv, lbl_805DD06C);
        flags = self->state->flags;
        if (!(flags & 1)) {
            draw_window_text(&pt, lbl_8044F0CC, -1, 0, lbl_805DD070);
        } else if (flags & 2) {
            draw_window_text(&pt, lbl_8044F0D4, -1, 0, lbl_805DD070);
        } else if (flags & 4) {
            if (flags & 8) {
                draw_window_text(&pt, lbl_8044F0DC, -1, 0, lbl_805DD070);
            } else {
                draw_window_text(&pt, lbl_8044F0EC, -1, 0, lbl_805DD070);
            }
        } else if (flags & 8) {
            draw_window_text(&pt, lbl_8044F0FC, -1, 0, lbl_805DD070);
        } else {
            draw_window_text(&pt, lbl_8044F104, -1, 0, lbl_805DD070);
        }
    }
}

void render__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0) && (is_key_active__19TWindowKeyBoardHardFPv() == 0)) {
        temp = draw_default_entry__9TWindowDDFi(arg0);
        draw_status_text__19TWindowKeyBoardHardFPvPv((Win_80260020 *)(arg0), (Ctx_80260020 *)(temp));
    }
}

}
