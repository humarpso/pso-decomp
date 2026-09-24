#include "types.h"
struct Vec_80074E04 { f32 x, y, z; };

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_80074E04 *, Vec_80074E04 *);
extern Vec_80074E04 lbl_804FF938[];
void fn_80074E04(s32 i, Vec_80074E04 *out);
}

extern "C" {

void fn_80074E04(s32 i, Vec_80074E04 *out) {
    if (i < 0 || i >= 4) {
        return;
    }
    VecCopy__FP3VecPC3Vec(&lbl_804FF938[i], out);
}

}
