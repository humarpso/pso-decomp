#include "types.h"
struct Obj_8028C8A8 { u8 pad[0x6c]; s32 f6c; };

extern "C" {
extern s32 chr_select_slot_state;
void fn_8028C8A8(Obj_8028C8A8 *o);
}

extern "C" {

void fn_8028C8A8(Obj_8028C8A8 *o) {
    if (chr_select_slot_state < 0 || chr_select_slot_state > 1) return;
    if (o->f6c == 0) return;
    chr_select_slot_state--;
    o->f6c = 0;
}

}
