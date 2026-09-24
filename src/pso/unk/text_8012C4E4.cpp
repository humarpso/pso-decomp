#include "types.h"
struct Obj_8012C4E4 { u8 pad[0x18]; void *vt; };

extern "C" {
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *self, void *owner, const void *a, const void *b, f32 f);
s32 get_entity_id__10TObjPlayerFPv(void *p);
s32 get_hp_by_flag__10TObjPlayerFPv(void *p);
void TObjPlayer__sub_80129118(void *self, s32 a, s32 b);
extern char lbl_804A5340[];
Obj_8012C4E4 *TObjPlayer__sub_8012C4E4(Obj_8012C4E4 *self, void *owner, const void *a, const void *b, f32 f);
}

extern "C" {

Obj_8012C4E4 *TObjPlayer__sub_8012C4E4(Obj_8012C4E4 *self, void *owner, const void *a, const void *b, f32 f) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(self, owner, a, b, f);
    self->vt = lbl_804A5340;
    TObjPlayer__sub_80129118(self, get_hp_by_flag__10TObjPlayerFPv(owner), get_entity_id__10TObjPlayerFPv(owner));
    return self;
}

}
