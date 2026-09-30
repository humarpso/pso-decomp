#include "types.h"

typedef struct Techs_801D9D24 {
    u8 pad0[2];
    u8 f2;
    u8 f3;
    u8 pad4[0xA - 0x4];
    s16 fa;
    u8 padc[0x5C - 0xC];
    u8 levels[0x14];
    u8 caps[0x14];
} Techs_801D9D24;

extern "C" {
void TObjPlayer__sub_801D9E2C(void *, s16);
void TObjPlayer__sub_801D9CE0(void *arg0);
void set_technique_id__10TObjPlayerFPvs(void *, s16);
u8 get_item_count_max__10TObjPlayerFv(void);
void set_technique_state__10TObjPlayerFPvi(void *, s32);
void set_technique_id__10TObjPlayerFPvUc(void *, u8);
void TObjPlayer__sub_801D2CC4(void *, f32);
void set_tech_override__10TObjPlayerFPvUc(void *, u8);
void set_tech_level__10TObjPlayerFPvs(void *, s16);
void reset_slots__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D9CE0(void *arg0);
s32 TObjPlayer__sub_801D9E08(void *);
void TObjPlayer__sub_801D9E10(void *, s32);
void set_field_1c__10TObjPlayerFPvf(void *, f32);
void set_field18__10TObjPlayerFPvf(void *, f32);
extern const f32 lbl_805DC408;
extern const f32 lbl_805DC40C;
void TObjPlayer__sub_801D9D24(Techs_801D9D24 *self);
}

extern "C" {

void TObjPlayer__sub_801D9CE0(void *arg0) {
    s32 i = 0;
    do {
        TObjPlayer__sub_801D9E2C(arg0, i);
        i++;
    } while (i < 0x13);
}
void TObjPlayer__sub_801D9D24(Techs_801D9D24 *self) {
    s32 n;
    u8 v;
    s32 i;
    n = TObjPlayer__sub_801D9E08(self);
    v = get_item_count_max__10TObjPlayerFv();
    for (i = 0; i < n; i++) {
        self->levels[i] = v;
        self->caps[i] = v;
    }
    set_technique_id__10TObjPlayerFPvUc(self, 0xFF);
    set_tech_override__10TObjPlayerFPvUc(self, 0);
    set_technique_id__10TObjPlayerFPvs(self, 0);
    set_tech_level__10TObjPlayerFPvs(self, 0);
    TObjPlayer__sub_801D9E10(self, 0);
    set_technique_state__10TObjPlayerFPvi(self, 0);
    TObjPlayer__sub_801D2CC4(self, lbl_805DC408);
    set_field18__10TObjPlayerFPvf(self, lbl_805DC408);
    set_field_1c__10TObjPlayerFPvf(self, lbl_805DC40C);
    TObjPlayer__sub_801D9CE0(self);
    reset_slots__10TObjPlayerFPv(self);
    self->fa = 0;
    self->f3 = 0;
    self->f2 = 0;
}

}
