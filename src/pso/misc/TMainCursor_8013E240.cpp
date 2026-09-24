#include "types.h"
struct Obj_8013E240 { s32 a; u16 b; u16 c; f32 d; f32 e; };

extern "C" {
extern const f32 TMainCursor__data_805DB0C0;
extern const f32 lbl_805DB0C4;
void TMainCursor__sub_8013E240(Obj_8013E240 *self);
}

extern "C" {

void TMainCursor__sub_8013E240(Obj_8013E240 *self) {
    self->a = 0;
    self->b = 0xffff;
    self->c = 0xffff;
    self->d = TMainCursor__data_805DB0C0;
    self->e = lbl_805DB0C4;
}

}
