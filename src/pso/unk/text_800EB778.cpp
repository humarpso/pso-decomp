#include "types.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEneSlimeOne.h"
struct E_800EB8DC { s32 f0; s32 f4; };

struct O_800EB8DC { u8 pad[0x3b8]; E_800EB8DC arr[4]; };

struct Slot_800EB778 { s32 state; void *obj; };

struct Obj_800EB778 { u8 pad[0x1c]; u16 id; u8 pad2[0x3b8 - 0x1e]; Slot_800EB778 slots[4]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
typedef struct { f32 x, y, z; } Vec_800EB7BC;
struct Tmpl_800EB7BC {
    s16 a;
    s16 b;
    s16 c;
    u16 d;
    u8 pad8[8];
    Vec_800EB7BC pos;
    u8 rest[0x40 - 0x1C];
};

struct Blob_800EB7BC { u8 bytes[0x40]; };

struct Slot_800EB7BC { s32 active; u32 obj; };

struct Obj_800EB7BC {
    u8 pad0[0x38];
    Vec_800EB7BC pos;
    u8 pad44[0x374 - 0x44];
    Tmpl_800EB7BC tmpl;
    s32 count;
    Slot_800EB7BC slots[8];
};

extern "C" {
s32 has_no_active_slot(O_800EB8DC *self);
void fn_800EB778(Obj_800EB778 *self, s32 id);
u32 create__15TObjEneSlimeOneFlll(void *, void *, u32);
s32 spawn_slime_in_slot(Obj_800EB7BC *arg0, s32 arg1, Vec_800EB7BC *arg2, u32 arg3);

void fn_800EB778(Obj_800EB778 *self, s32 id) {
    s32 i = id - self->id - 1;
    if (i < 0 || i >= 4 || self->slots[i].state != 1) {
        return;
    }
    self->slots[i].obj = 0;
    self->slots[i].state = 2;
}

s32 spawn_slime_in_slot(Obj_800EB7BC *origin, s32 arg1, Vec_800EB7BC *arg2, u32 arg3) {
    Tmpl_800EB7BC t;
    Slot_800EB7BC *slot;
    s32 n;
    if (arg1 < 0 || arg1 >= origin->count || origin->slots[arg1].active != 0) {
        return 0;
    }
    *(Blob_800EB7BC *) &t = *(Blob_800EB7BC *) &origin->tmpl;
    n = arg1 + 1;
    t.a = origin->tmpl.a + n;
    t.b = 0;
    t.d = origin->tmpl.d + n;
    if (arg2 == NULL) {
        VecCopy((Vec *)&t.pos, (const Vec *)&origin->pos);
    } else {
        VecCopy((Vec *)&t.pos, (const Vec *)arg2);
    }
    slot = &origin->slots[arg1];
    if (arg3 == 0) {
        slot->obj = TObjEneSlimeOne::create((s32) origin, (s32) &t);
    } else {
        slot->obj = create__15TObjEneSlimeOneFlll(origin, &t, arg3);
    }
    if (slot->obj == 0) {
        return 0;
    }
    slot->active = 1;
    return 1;
}

s32 has_no_active_slot(O_800EB8DC *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->arr[i].f0 == 1) {
            return 0;
        }
    }
    return 1;
}

}
