#include "pso/TAdSubPlyItemGC.h"

#include "types.h"

struct Vec2_802D6E7C { f32 x, y; };

struct Self_802D6E7C {
    u8 pad[0x41C];
    s32 ids[4];
    u32 alpha[4];
    s32 flags[4];
    Vec2_802D6E7C base[4];
    Vec2_802D6E7C pos[4];
};

extern "C" {
u32 calc_text_width(const char *);
u8 *TAdSubPlyItemGC__sub_802D6D28(s32 arg0, s32 arg1);
extern const f32 lbl_805DE7CC;
extern const f32 lbl_805DE7D0;
void run_task__15TAdSubPlyItemGCFv(Self_802D6E7C *self);
}

extern "C" {
extern u8 lbl_80540FB0[];
extern u8 lbl_804725E0[];
void *memset(void *, int, u32);
s32 sprintf(void *, const void *, ...);
typedef struct S_802D6D88 { u8 pad0[0x43C]; s32 f[4]; } S_802D6D88;

u8 *TAdSubPlyItemGC__sub_802D6D28(s32 arg0, s32 arg1) {
    memset(lbl_80540FB0, 0, 0x40);
    sprintf(lbl_80540FB0, lbl_804725E0, arg1);
    return lbl_80540FB0;
}

void TAdSubPlyItemGC__sub_802D6D88(S_802D6D88 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        arg0->f[i] = 0;
    }
}
void run_task__15TAdSubPlyItemGCFv(Self_802D6E7C *self) {
    u32 i;
    for (i = 0; i < 4; i++) {
        self->pos[i].x = (lbl_805DE7CC + self->base[i].x) -
                         (f32)calc_text_width(((const char *(*)(void *, s32))TAdSubPlyItemGC__sub_802D6D28)(self, self->ids[i]));
        self->pos[i].y = lbl_805DE7D0 + self->base[i].y;
        if (self->flags[i] != 0) {
            self->alpha[i] += 0xB;
            self->alpha[i] = (self->alpha[i] > 0xFF) ? 0xFF : self->alpha[i];
        }
    }
}

}

TAdSubPlyItemGC::~TAdSubPlyItemGC() {}
