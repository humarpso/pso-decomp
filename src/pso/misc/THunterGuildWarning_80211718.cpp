#include "types.h"
struct Obj_802119CC { u8 pad[0x24]; s32 a[4]; };

extern "C" {
void THunterGuildWarning__sub_802119CC(Obj_802119CC *self);
}

extern "C" {

void THunterGuildWarning__sub_802119CC(Obj_802119CC *self) {
    s32 i;
    for (i = 0; i < 4; i++) self->a[i] = 0;
}

}
