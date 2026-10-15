#include "types.h"

struct Player_800A0994 {
    u8 pad0[0x28];
    s16 f28;
    u8 pad2A[0x354 - 0x2A];
    f32 f354;
    u8 pad358[0x428 - 0x358];
    u16 f428;
};

struct Ene_800A0994 {
    u8 pad0[0x358];
    f32 f358;
};

struct Gunner_800A0994 {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1E[0x28 - 0x1E];
    s16 f28;
    u8 pad2A[0x354 - 0x2A];
    f32 f354;
    u8 pad358[0x37C - 0x358];
    s32 count;
    u8 pad380[0x384 - 0x380];
    u16 ids[16];
};

extern "C" {
Player_800A0994 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
Ene_800A0994 *get_enemy_entity(u16);
extern s32 lbl_805D29D0;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjEneDarkGunner__ct(Gunner_800A0994 *self);
}

extern "C" {

void TObjEneDarkGunner__ct(Gunner_800A0994 *self) {
    s32 k;
    Ene_800A0994 *a;
    Player_800A0994 *p;
    s32 m;
    Ene_800A0994 *b;
    s32 i;
    s32 j;
    self->count = 0;
    for (k = lbl_805D586C; k < lbl_805D586C + lbl_805D5870; k++) {
        p = get_player_data__10TObjPlayerFi(k);
        if (p != NULL && check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D29D0) != 0 &&
            self->f354 == p->f354 && self->f28 == p->f28) {
            p->f428 = self->f1C;
            self->ids[self->count++] = obj_getField1c(p);
            if (self->count >= 16) {
                break;
            }
        }
    }
    for (m = self->count; m < 16; m++) {
        self->ids[m] = 0xFFFF;
    }
    for (i = 0; i < self->count - 1; i++) {
        for (j = i + 1; j < self->count; j++) {
            a = get_enemy_entity(self->ids[i]);
            b = get_enemy_entity(self->ids[j]);
            if (a != NULL && b != NULL && a->f358 > b->f358) {
                u16 t = self->ids[i];
                self->ids[i] = self->ids[j];
                self->ids[j] = t;
            }
        }
    }
}

}
