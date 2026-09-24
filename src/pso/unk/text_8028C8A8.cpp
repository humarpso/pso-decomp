#include "types.h"
struct Obj_8028C8A8 { u8 pad[0x6c]; s32 f6c; };

extern "C" {
extern s32 lbl_805D64E8;
void fn_8028C8A8(Obj_8028C8A8 *o);
}

extern "C" {

void fn_8028C8A8(Obj_8028C8A8 *o) {
    if (lbl_805D64E8 < 0 || lbl_805D64E8 > 1) return;
    if (o->f6c == 0) return;
    lbl_805D64E8--;
    o->f6c = 0;
}

}
