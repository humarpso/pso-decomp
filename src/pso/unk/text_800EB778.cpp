#include "types.h"
struct E_800EB8DC { s32 f0; s32 f4; };

struct O_800EB8DC { u8 pad[0x3b8]; E_800EB8DC arr[4]; };

struct Slot_800EB778 { s32 state; void *obj; };

struct Obj_800EB778 { u8 pad[0x1c]; u16 id; u8 pad2[0x3b8 - 0x1e]; Slot_800EB778 slots[4]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 create__15TObjEneSlimeOneFiii(void *, void *, u32);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
s32 spawn_slime_in_slot(Obj_800EB7BC *arg0, s32 arg1, Vec_800EB7BC *arg2, u32 arg3);
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

s32 spawn_slime_in_slot(Obj_800EB7BC *arg0, s32 arg1, Vec_800EB7BC *arg2, u32 arg3) {
    Tmpl_800EB7BC t;
    Slot_800EB7BC *slot;
    s32 n;
    if (arg1 < 0 || arg1 >= arg0->count || arg0->slots[arg1].active != 0) {
        return 0;
    }
    *(Blob_800EB7BC *) &t = *(Blob_800EB7BC *) &arg0->tmpl;
    n = arg1 + 1;
    t.a = arg0->tmpl.a + n;
    t.b = 0;
    t.d = arg0->tmpl.d + n;
    if (arg2 == NULL) {
        VecCopy__FP3VecPC3Vec(&t.pos, &arg0->pos);
    } else {
        VecCopy__FP3VecPC3Vec(&t.pos, arg2);
    }
    slot = &arg0->slots[arg1];
    if (arg3 == 0) {
        slot->obj = create__15TObjEneSlimeOneFii((s32) arg0, (s32) &t);
    } else {
        slot->obj = create__15TObjEneSlimeOneFiii(arg0, &t, arg3);
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
