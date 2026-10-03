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

struct Owner_80129648 { u8 pad[0x60]; s32 f60; };

struct Self_80129648 { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_80129648 *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };

struct Vec_80129648 { f32 x, y, z; };

struct Tec_80129648 {
    s16 id;
    u8 pad2[2];
    s32 f4;
    s32 f8;
    s32 fC;
    s16 f10;
    s16 f12;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    s32 f28;
    u8 pad2C[4];
    Vec_80129648 pos;
    Vec_80129648 dir;
};

extern "C" {
extern const f32 lbl_805DAE18;
extern const f32 lbl_805DAE2C;
void init_slicer_launch_state(struct SlicerState_801295FC *s);
s16 obj_getField1c(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80128A70(void);
void init_slicer_launch_state(struct SlicerState_801295FC *s);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *create__10TTecSlicerFPUs(void *);
extern const f32 lbl_805DAE30;
extern const f32 lbl_805DAE34;
extern const f32 lbl_805DAE38;
extern const f32 lbl_805DAE3C;
void TObjPlayer__sub_80129648(Self_80129648 *self);
}

extern "C" {

void init_slicer_launch_state(struct SlicerState_801295FC *s) {
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
struct SlicerState_801295FC;
void TObjPlayer__sub_80129648(Self_80129648 *self) {
    Tec_80129648 tec;
    TObjPlayer__sub_80128A70();
    init_slicer_launch_state((struct SlicerState_801295FC *)((SlicerState_801295FC *)&tec));
    tec.id = obj_getField1c(self->owner);
    tec.fC = get_field_d8__10TObjPlayerFPv(self);
    tec.f4 = self->f24;
    tec.f8 = self->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)self->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)self->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFPv(self->owner);
    tec.f18 = lbl_805DAE30;
    tec.f1C = lbl_805DAE34;
    tec.f20 = lbl_805DAE38;
    tec.f24 = lbl_805DAE3C;
    tec.f28 = self->owner->f60;
    draw_icon__10TObjPlayerFPvii(self, 1, &tec.pos);
    draw_icon__10TObjPlayerFPvii(self, 2, &tec.dir);
    create__10TTecSlicerFPUs(&tec);
}

}
