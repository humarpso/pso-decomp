#include "types.h"
struct Obj_80287BE8 { u8 pad[0x30]; f32 f30; f32 f34; u8 pad2[8]; f32 f40; f32 f44; };

extern "C" {
extern const f32 lbl_805DD880;
void fn_80287BE8(Obj_80287BE8 *o);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80287BE8(Obj_80287BE8 *o) {
    o->f40 += lbl_805DD880 * (o->f30 - o->f40);
    o->f44 += lbl_805DD880 * (o->f34 - o->f44);
}
#pragma pop

}
