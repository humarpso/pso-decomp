#include "types.h"
struct Owner_801293FC { u8 pad[0x60]; s32 f60; };

struct Self_801293FC { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_801293FC *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };

struct Vec_801293FC { f32 x, y, z; };

struct Tec_801293FC {
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
    Vec_801293FC pos;
    Vec_801293FC dir;
};

extern "C" {
s16 obj_getField1c(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
void spawn_item_timer__13TItemAttackerFiii(void *, void *, s32);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_801295FC(void *);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *create__10TTecSlicerFPUs(void *);
void TObjPlayer__sub_801295E0(void);
extern const f32 lbl_805DAE18;
extern const f32 lbl_805DAE1C;
extern const f32 lbl_805DAE20;
extern const f32 lbl_805DAE24;
void TObjPlayer__sub_801293FC(Self_801293FC *self);
}

extern "C" {

void TObjPlayer__sub_801293FC(Self_801293FC *self) {
    Tec_801293FC tec;
    TObjPlayer__sub_80128A70();
    TObjPlayer__sub_801295FC(&tec);
    tec.id = obj_getField1c(self->owner);
    tec.fC = get_field_d8__10TObjPlayerFPv(self);
    tec.f4 = self->f24;
    tec.f8 = self->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)self->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)self->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFPv(self->owner);
    tec.f18 = lbl_805DAE18;
    tec.f1C = lbl_805DAE1C;
    tec.f20 = lbl_805DAE20;
    tec.f24 = lbl_805DAE24;
    tec.f28 = self->owner->f60;
    draw_icon__10TObjPlayerFPvii(self, 3, &tec.pos);
    draw_icon__10TObjPlayerFPvii(self, 2, &tec.dir);
    spawn_item_timer__13TItemAttackerFiii(create__10TTecSlicerFPUs(&tec), TObjPlayer__sub_801295E0, 3);
}

}
