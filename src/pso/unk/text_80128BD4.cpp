#include "types.h"
#include "pso/player/TObjPlayer.h"
struct Obj_80128BD4 { u8 pad[0x18]; void *vt; };

extern "C" {
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *self, void *owner, const void *a, const void *b, f32 f);
s32 TObjPlayer__sub_801290D0(void *p);
void sub_80129118__15TItemShootModelFll(void *self, s32 a, s32 b);
extern char lbl_804A4020[];
Obj_80128BD4 *TObjPlayer__sub_80128BD4(Obj_80128BD4 *self, void *owner, const void *a, const void *b, f32 f);
}

extern "C" {

Obj_80128BD4 *TObjPlayer__sub_80128BD4(Obj_80128BD4 *self, void *owner, const void *a, const void *b, f32 f) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(self, owner, a, b, f);
    self->vt = lbl_804A4020;
    sub_80129118__15TItemShootModelFll(self, TObjPlayer__sub_801290D0(owner), ((TObjPlayer *)owner)->get_entity_id());
    return self;
}

}
