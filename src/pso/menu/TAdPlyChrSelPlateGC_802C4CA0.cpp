#include "types.h"
struct O_802C4D5C { u8 pad[0x2a8]; f32 v[1]; };

extern "C" {
extern const f32 lbl_805DE548;
bool TAdPlyChrSelPlateGC__sub_802C4D5C(O_802C4D5C *self, s32 i);
}

extern "C" {

bool TAdPlyChrSelPlateGC__sub_802C4D5C(O_802C4D5C *self, s32 i) {
    return (self->v[i] >= lbl_805DE548) ? true : false;
}

}
