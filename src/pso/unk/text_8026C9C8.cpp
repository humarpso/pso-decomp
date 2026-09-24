#include "types.h"
struct Obj_8026C9C8 { u8 pad[8]; f32 f8; };

extern "C" {
extern const f32 lbl_805DD2C4;
void fn_8026C9C8(Obj_8026C9C8 *o);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_8026C9C8(Obj_8026C9C8 *o) {
    o->f8 -= lbl_805DD2C4 * o->f8;
}
#pragma pop

}
