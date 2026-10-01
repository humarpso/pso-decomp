#include "pso/TItemReverseTechBG.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void run_task__18TItemReverseTechBGFv(TItemReverseTechBG_80119658 *o);
}

extern "C" {

void *__ct__18TItemReverseTechBGFv(void *arg0, void *arg1, void *arg3);
void render__18TItemReverseTechBGFv(void *arg0);
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DEE6C(int);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject();
void get_player__20TWindowSubStatusDispFv(void);
void notify_fish_if_valid__10TObjPlayerFUi(void *);
void reset_transform_state__10TObjPlayerFv(void *);

void render__18TItemReverseTechBGFv(void *arg0) {
    reset_transform_state__10TObjPlayerFv(arg0);
    notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, void **, 0x2C));
    TWindowSubStatusDisp__sub_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x30), M2C_FIELD(arg0, void **, 0x34));
    TWindowSubComCard__sub_803DEECC((void *)((char *)arg0 + 56), M2C_FIELD(arg0, f32 *, 0x58));
    get_player__20TWindowSubStatusDispFv();
}

extern void *__vt__18TItemReverseTechBG[];
extern s32 lbl_805D2C54;
extern const f32 lbl_805DAC08;

void run_task__18TItemReverseTechBGFv(TItemReverseTechBG_80119658 *o) {
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
    M2C_FIELD(arg0, void **, 0x18) = __vt__18TItemReverseTechBG;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C54;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (0xFF / temp_r3);
        if ((u32) M2C_FIELD(arg0, s32 *, 0x28) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg3, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg3, f32 *, 0x10) + M2C_FIELD(arg3, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg3, f32 *, 0x14) + M2C_FIELD(arg3, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg3, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg3, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg3, f32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    return arg0;
}

}
