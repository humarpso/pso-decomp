#include "types.h"

extern "C" {

struct Owner_8012F704 { u8 pad[0x60]; s32 f60; };
struct Self_8012F704 { u8 pad0[0x24]; s32 f24; u8 pad28[0xF0 - 0x28]; Owner_8012F704 *owner; u8 padF4[0x188 - 0xF4]; s32 f188; };
struct Vec_8012F704 { f32 x, y, z; };
struct Tec_8012F704 {
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
    Vec_8012F704 pos;
    Vec_8012F704 dir;
};

s16 obj_getField1c(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
struct SlicerState_801295FC;
void TObjPlayer__sub_801295FC(SlicerState_801295FC *s);
s16 get_validated_attack_stage(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
void *create__10TTecSlicerFPUs(void *);
extern const f32 lbl_805DAFB8;
extern const f32 lbl_805DAFC0;
extern const f32 lbl_805DAFC4;

void TObjPlayer__sub_8012F704(Self_8012F704 *self) {
    Tec_8012F704 tec;

    TObjPlayer__sub_801295FC((SlicerState_801295FC *)&tec);
    tec.id = obj_getField1c(self->owner);
    tec.fC = get_field_d8__10TObjPlayerFPv(self);
    tec.f4 = self->f24;
    tec.f8 = self->f188;
    tec.f10 = TObjPlayer__sub_801D2F4C((u8 *)self->owner + 0x7CC);
    tec.f12 = get_validated_attack_stage((u8 *)self->owner + 0x7CC);
    tec.f14 = query_extended_state__10TObjPlayerFPv(self->owner);
    tec.f18 = lbl_805DAFB8;
    tec.f1C = lbl_805DAFC0;
    tec.f20 = lbl_805DAFB8;
    tec.f24 = lbl_805DAFC4;
    tec.f28 = self->owner->f60;
    draw_icon__10TObjPlayerFPvii(self, 5, &tec.pos);
    draw_icon__10TObjPlayerFPvii(self, 4, &tec.dir);
    create__10TTecSlicerFPUs(&tec);
}

}
