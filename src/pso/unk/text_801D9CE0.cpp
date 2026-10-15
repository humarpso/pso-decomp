#include "types.h"
#include "pso/player/TObjPlayer.h"

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
void set_technique_id__10TObjPlayerFs(void *, s16);
u8 get_item_count_max__10TObjPlayerFv(void);
void set_technique_state__10TObjPlayerFl(void *, s32);
void set_technique_id__10TObjPlayerFUc(void *, u8);
void TObjPlayer__sub_801D2CC4(void *, f32);
void set_tech_override__10TObjPlayerFUc(void *, u8);
void set_tech_level__10TObjPlayerFs(void *, s16);
void reset_slots__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801D9E08(void *);
void TObjPlayer__sub_801D9E10(void *, s32);
void set_field_1c__10TObjPlayerFf(void *, f32);
void set_field18__10TObjPlayerFf(void *, f32);
extern const f32 lbl_805DC408;
extern const f32 lbl_805DC40C;
}

extern "C" {

void TObjPlayer::reset_all_tech_slots() {
    s32 i = 0;
    do {
        TObjPlayer__sub_801D9E2C(this, i);
        i++;
    } while (i < 0x13);
}
void TObjPlayer::reset_tech_state() {
    Techs_801D9D24 *self = (Techs_801D9D24 *)this;
    s32 n;
    u8 v;
    s32 i;
    n = TObjPlayer__sub_801D9E08(self);
    v = get_item_count_max__10TObjPlayerFv();
    for (i = 0; i < n; i++) {
        self->levels[i] = v;
        self->caps[i] = v;
    }
    set_technique_id__10TObjPlayerFUc(self, 0xFF);
    set_tech_override__10TObjPlayerFUc(self, 0);
    set_technique_id__10TObjPlayerFs(self, 0);
    set_tech_level__10TObjPlayerFs(self, 0);
    TObjPlayer__sub_801D9E10(self, 0);
    set_technique_state__10TObjPlayerFl(self, 0);
    TObjPlayer__sub_801D2CC4(self, lbl_805DC408);
    set_field18__10TObjPlayerFf(self, lbl_805DC408);
    set_field_1c__10TObjPlayerFf(self, lbl_805DC40C);
    reset_all_tech_slots();
    reset_slots__10TObjPlayerFv(self);
    self->fa = 0;
    self->f3 = 0;
    self->f2 = 0;
}

}
