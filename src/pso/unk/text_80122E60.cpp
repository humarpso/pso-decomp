#include "types.h"
#include "pso/player/TObjPlayer.h"
struct Obj_80122E60 { u8 pad[0x1f8]; f32 a; f32 b; f32 c; };

extern const f32 lbl_805DACF8;
extern const f32 lbl_805DACFC;

extern "C" {

void TObjPlayer::decay_shared_gauge_to_floor() {
    Obj_80122E60 *self = (Obj_80122E60 *)this;
    if (lbl_805DACF8 < self->c) {
        self->c -= lbl_805DACFC;
        if (self->c < lbl_805DACF8) {
            self->c = lbl_805DACF8;
        }
        self->a = self->b = self->c;
    }
}

}
