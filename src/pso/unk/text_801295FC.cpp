#include "types.h"
struct SlicerState_801295FC {
    u16 id;
    u8 pad0[2];
    s32 count;
    u8 pad1[4];
    s32 owner;
    s16 a;
    s16 b;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    u8 pad2[4];
    s32 angle;
};

extern "C" {
extern const f32 lbl_805DAE18;
extern const f32 lbl_805DAE2C;
void TObjPlayer__sub_801295FC(struct SlicerState_801295FC *s);
}

extern "C" {

void TObjPlayer__sub_801295FC(struct SlicerState_801295FC *s) {
    s->id = 0xFFFF;
    s->owner = -1;
    s->count = 0;
    s->a = -1;
    s->b = -1;
    s->f14 = lbl_805DAE18;
    s->f24 = lbl_805DAE2C;
    s->f20 = lbl_805DAE2C;
    s->f1C = lbl_805DAE2C;
    s->f18 = lbl_805DAE2C;
    s->angle = -0x2AAA;
}

}
