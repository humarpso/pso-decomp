#include "types.h"
struct Obj_80076760 { u8 pad[0x20]; s32 count; s32 interval; };

extern "C" {
void TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void fn_80076760(Obj_80076760 *self);
}

extern "C" {

void fn_80076760(Obj_80076760 *self) {
    if (self->count < 0 || self->interval <= 0) {
        return;
    }
    if (self->count % self->interval == 0) {
        TBoss3Volopt__sub_8022675C(0x23230, 0, 0, 0);
    }
    self->count--;
}

}
