#include "types.h"
struct Obj_80122E60 { u8 pad[0x1f8]; f32 a; f32 b; f32 c; };

extern "C" {
extern const f32 lbl_805DACF8;
extern const f32 lbl_805DACFC;
void TObjPlayer__sub_80122E60(Obj_80122E60 *self);
}

extern "C" {

void TObjPlayer__sub_80122E60(Obj_80122E60 *self) {
    if (lbl_805DACF8 < self->c) {
        self->c -= lbl_805DACFC;
        if (self->c < lbl_805DACF8) {
            self->c = lbl_805DACF8;
        }
        self->a = self->b = self->c;
    }
}

}
