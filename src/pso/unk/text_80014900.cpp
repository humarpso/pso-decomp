#include "types.h"
struct Obj_80014C1C { u8 pad0[0x30]; u32 f30; u8 pad34[0x254 - 0x34]; u8 f254[0x330 - 0x254]; u32 f330; };

extern "C" {
int obj_getArrWord_254(void *p, int i);
void TObjPlayer__sub_800192DC(void *p);
void cure_poison_ailment(Obj_80014C1C *self);
}

extern "C" {

void cure_poison_ailment(Obj_80014C1C *self) {
    switch (obj_getArrWord_254(self, 0)) {
    case 0xf:
        self->f30 &= ~3;
        self->f330 = self->f30 & 0x3f;
        TObjPlayer__sub_800192DC(self->f254);
        break;
    }
}

}
