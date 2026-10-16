#include "pso/TItemReverseTechBG.h"

#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"

struct TItemReverseTechBG_80119658 {
    u8 pad0[0x1C];
    s32 m1C;
    s32 m20;
    u32 alpha;
    s32 step;
    u8 pad2C[0x34 - 0x2C];
    u32 color;
    u8 pad38[0x5C - 0x38];
    s32 timer;
    s32 state;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
}

extern "C" {

void *__ct__18TItemReverseTechBGFv(void *arg0, void *arg1, void *arg3);
void draw_textured_quad_at_depth(void *, f32);
void begin_screen_draw(int);
void set_draw_texture_and_color(void *, void *);
s32 __ct__7TObjectFP7TObject();
void reset_transform_state__10TObjPlayerFv(void *);

void TItemReverseTechBG::render() {
    reset_transform_state__10TObjPlayerFv(this);
    TObjPlayer::notify_fish_if_valid((u32)(*(void **)((s8 *)this + 0x2C)));
    begin_screen_draw(1);
    set_draw_texture_and_color(*(void **)((s8 *)this + 0x30), *(void **)((s8 *)this + 0x34));
    draw_textured_quad_at_depth((void *)((char *)this + 56), *(f32 *)((s8 *)this + 0x58));
    TWindowSubStatusDisp::get_player();
}

extern void *__vt__18TItemReverseTechBG[];
extern s32 lbl_805D2C54;
extern const f32 lbl_805DAC08;

void TItemReverseTechBG::run_task() {
    TItemReverseTechBG_80119658 *o = (TItemReverseTechBG_80119658 *)this;
    switch (o->state) {
    case 0:
        if (o->alpha != 0xFF) {
            o->alpha += o->step;
            if (o->alpha > 0xFF) {
                o->alpha = 0xFF;
            }
        }
        if (o->timer == o->m20) {
            o->alpha = 0xFF;
            o->state = 1;
            o->timer = 0;
        } else {
            o->timer++;
        }
        break;
    case 1:
        if (o->timer == o->m1C) {
            o->state = 2;
            o->timer = 0;
        } else {
            o->timer++;
        }
        break;
    case 2:
        if (o->alpha != 0) {
            o->alpha -= o->step;
        }
        if (o->timer == o->m20) {
            o->alpha = 0;
            o->state = 3;
            o->timer = 0;
        } else {
            o->timer++;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv(o);
        return;
    }
    o->color = (o->alpha << 24) | 0xFFFFFF;
}

TItemReverseTechBG::~TItemReverseTechBG() {}
void *__ct__18TItemReverseTechBGFv(void *arg0, void *arg1, void *arg3) {
    s32 temp_r3;

    __ct__7TObjectFP7TObject();
    *(void **)((s8 *)arg0 + 0x18) = __vt__18TItemReverseTechBG;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C54;
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg3 + 0);
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg3 + 4);
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) *(s32 *)((s8 *)arg3 + 8);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) *(s32 *)((s8 *)arg3 + 0xC);
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x20);
    if (temp_r3 != 0) {
        *(s32 *)((s8 *)arg0 + 0x28) = (s32) (0xFF / temp_r3);
        if ((u32) *(s32 *)((s8 *)arg0 + 0x28) == 0U) {
            *(s32 *)((s8 *)arg0 + 0x28) = 1;
        }
    }
    *(s32 *)((s8 *)arg0 + 0x34) = -1;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) *(f32 *)((s8 *)arg3 + 0x10);
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) *(f32 *)((s8 *)arg3 + 0x14);
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) (*(f32 *)((s8 *)arg3 + 0x10) + *(f32 *)((s8 *)arg3 + 0x18));
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) (*(f32 *)((s8 *)arg3 + 0x14) + *(f32 *)((s8 *)arg3 + 0x1C));
    *(f32 *)((s8 *)arg0 + 0x48) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) *(f32 *)((s8 *)arg3 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) *(f32 *)((s8 *)arg3 + 0x24);
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) *(f32 *)((s8 *)arg3 + 0x28);
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x5C) = 0;
    return arg0;
}

}
