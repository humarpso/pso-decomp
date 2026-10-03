#include "types.h"
typedef struct Pair_80165940 { u32 a; u32 b; } Pair_80165940;

typedef struct Key_80165940 {
    u8 pad0[0x34];
    void *f34;
    u8 pad38[0x84 - 0x38];
    u32 f84;
    u32 f88;
    u32 f8C;
    u32 f90;
    u32 f94;
    u16 f98;
    u16 f9A;
    u8 pad9C[0xBC - 0x9C];
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
    u8 padCC[4];
    s32 fD0;
} Key_80165940;

extern "C" {
u8 is_current_floor_switch_set(u16);
u32 get_global_state__14TOKeyMachine01Fv(void);
void *get_bml_model(void *, s32);
extern void *lbl_805D5A10;
extern Pair_80165940 *TOKeyAncient03__data_805D5A14;
extern void *lbl_805D5A18;
extern Pair_80165940 *TOKeyCave01__data_805D5A1C;
extern void *lbl_805D5A30;
extern Pair_80165940 *TOKeyMachine01__data_805D5A34;
void fn_80165940(Key_80165940 *self);
}

extern "C" {

void fn_80165940(Key_80165940 *self) {
    self->fD0 = 0;
    self->f98 = self->f84;
    if (self->f98 < 0x100) {
        self->f9A = is_current_floor_switch_set(self->f98);
    } else {
        self->f98 = 0xFFFF;
        self->f9A = 1;
    }
    self->fBC = self->f88 & 0xFFFF;
    self->fC8 = self->f88 >> 16;
    self->fC0 = self->f8C & 0xFFFF;
    if (self->fC0 > 6) {
        self->fC0 = 0;
    }
    self->fC4 = self->f8C >> 16;
    if (self->fC4 > 1) {
        self->fC4 = 0;
    }
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        self->f34 = get_bml_model(lbl_805D5A18, 0);
        self->f90 = TOKeyCave01__data_805D5A1C->a;
        self->f94 = TOKeyCave01__data_805D5A1C->b;
        break;
    case 1:
    case 2:
    case 6:
    case 7:
        self->f34 = get_bml_model(lbl_805D5A30, 0);
        self->f90 = TOKeyMachine01__data_805D5A34->a;
        self->f94 = TOKeyMachine01__data_805D5A34->b;
        break;
    case 8:
    case 9:
    case 10:
        self->f34 = get_bml_model(lbl_805D5A10, 0);
        self->f90 = TOKeyAncient03__data_805D5A14->a;
        self->f94 = TOKeyAncient03__data_805D5A14->b;
        break;
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
        if (self->fBC == 0) {
            self->f34 = get_bml_model(lbl_805D5A18, 0);
            self->f90 = TOKeyCave01__data_805D5A1C->a;
            self->f94 = TOKeyCave01__data_805D5A1C->b;
        } else {
            self->f34 = get_bml_model(lbl_805D5A30, 0);
            self->f90 = TOKeyMachine01__data_805D5A34->a;
            self->f94 = TOKeyMachine01__data_805D5A34->b;
        }
        break;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 34:
    case 35:
        self->f34 = get_bml_model(lbl_805D5A18, 0);
        self->f90 = TOKeyCave01__data_805D5A1C->a;
        self->f94 = TOKeyCave01__data_805D5A1C->b;
        self->fD0 = 1;
        break;
    default:
        self->f34 = 0;
        self->f90 = 0;
        self->f94 = 0;
        break;
    }
}

}
