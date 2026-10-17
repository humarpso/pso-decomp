#include "types.h"
#include "pso/item/TUnk_804A1D30.h"
#include "pso/player/TObjPlayer.h"
struct Obj_80123AE8 { u8 pad[0x200]; f32 c; };

extern const f32 lbl_805DAD10;
extern const f32 lbl_805DAD14;

extern "C" {

void TUnk_804A1D30::update_idle() {
    Obj_80123AE8 *self = (Obj_80123AE8 *)this;
    if (lbl_805DAD10 < self->c) {
        self->c -= lbl_805DAD14;
        if (self->c < lbl_805DAD10) {
            self->c = lbl_805DAD10;
        }
    }
}

}
