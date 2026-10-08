#include "types.h"
struct Obj_80123AE8 { u8 pad[0x200]; f32 c; };

extern "C" {
extern const f32 lbl_805DAD10;
extern const f32 lbl_805DAD14;
void decay_gauge_c_to_floor__10TObjPlayerFPv(Obj_80123AE8 *self);
}

extern "C" {

void decay_gauge_c_to_floor__10TObjPlayerFPv(Obj_80123AE8 *self) {
    if (lbl_805DAD10 < self->c) {
        self->c -= lbl_805DAD14;
        if (self->c < lbl_805DAD10) {
            self->c = lbl_805DAD10;
        }
    }
}

}
