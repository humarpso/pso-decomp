#include "types.h"
struct Entry_800E31C4 { s32 id; u8 data[0xC]; };

struct Vec_800E31C4 { f32 x; f32 y; f32 z; };

struct Obj_800E31C4 { Entry_800E31C4 *list; Vec_800E31C4 *vecs; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern Vec_800E31C4 lbl_80495A88;
Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs);
}

extern "C" {

Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs) {
    Entry_800E31C4 *p;
    Vec_800E31C4 *q;
    self->list = list;
    self->vecs = vecs;
    p = self->list;
    q = self->vecs;
    while (p->id != -1) {
        VecCopy__FP3VecPC3Vec(q, &lbl_80495A88);
        p++;
        q++;
    }
    return self;
}

}
