#include "types.h"
struct E_800EB8DC { s32 f0; s32 f4; };

struct O_800EB8DC { u8 pad[0x3b8]; E_800EB8DC arr[4]; };

struct Slot_800EB778 { s32 state; void *obj; };

struct Obj_800EB778 { u8 pad[0x1c]; u16 id; u8 pad2[0x3b8 - 0x1e]; Slot_800EB778 slots[4]; };

extern "C" {
s32 fn_800EB8DC(O_800EB8DC *self);
void fn_800EB778(Obj_800EB778 *self, s32 id);
}

extern "C" {

void fn_800EB778(Obj_800EB778 *self, s32 id) {
    s32 i = id - self->id - 1;
    if (i < 0 || i >= 4 || self->slots[i].state != 1) {
        return;
    }
    self->slots[i].obj = 0;
    self->slots[i].state = 2;
}

s32 fn_800EB8DC(O_800EB8DC *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->arr[i].f0 == 1) {
            return 0;
        }
    }
    return 1;
}

}
