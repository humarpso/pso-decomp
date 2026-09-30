#include "pso/TObjWaitEntryHairMoveSim.h"

TObjWaitEntryHairMoveSim::~TObjWaitEntryHairMoveSim() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_800FE698 { s8 a; s8 b; s8 c; s8 d; u8 pad[0xC]; };

struct Obj_800FE698 {
    u8 pad0[0x88D];
    s8 lvl;
    s8 flags;
    u8 pad1[0xB];
    s16 v9A;
    s16 v9C;
};

typedef s32 M2C_UNK;
struct EntX_800FE5A0 { s8 a; s8 b; s8 c; s8 d; void *p4; void *p8; s32 pc; };

struct Pl_800FE5A0 {
    u8 pad0[0x88D];
    s8 lvl;
    s8 flags;
    u8 pad1[0xB];
    s16 v9A;
    s16 v9C;
    u8 pad2[0x8AC - 0x89E];
    s32 vAC;
    s32 vB0;
    s32 vB4;
};

struct Self_800FE5A0 {
    u8 pad[0x1C];
    Pl_800FE5A0 *pl;
};

extern "C" {
s32 is_move_done__24TObjWaitEntryHairMoveSimFv(void *);
s32 create__24TObjWaitEntryHairMoveSimFPv(void *);
void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1);
s32 TObjTailsTailsMove__sub_800FFDBC(void *);
s32 __nw__7TObjectFUl(int);
s32 get_display_index__12TCharaMakingFPv(void *);
s32 TObjWaitEntryHairMoveSim__sub_800FE73C(s32 arg0);
extern Ent_800FE698 lbl_8049D998[];
s32 TObjWaitEntryHairMoveSim__sub_800FE698(Obj_800FE698 *o);
void TObjWaitEntryHairMoveSim__sub_800FE3BC(s32);
void create__19TObjEZBoneRotPlayerFPvPvPv(void *, s32, void *);
void create_hairmove__10TObjPlayerFPvPvPv(void *, void *, s32);
extern Ent_800FE698 lbl_8049D998[];
void TObjWaitEntryHairMoveSim__sub_800FE5A0(void *arg0);
}

extern "C" {

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1);
void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xCFC) == 0) {
        TObjWaitEntryHairMoveSim__sub_800FE5A0((void *)(arg0));
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__24TObjWaitEntryHairMoveSim[];
extern void *lbl_805D2B40;

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TObjWaitEntryHairMoveSim;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B40;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

void TObjWaitEntryHairMoveSim__sub_800FE5A0(void *arg0) {
    Self_800FE5A0 *self = (Self_800FE5A0 *)arg0;
    EntX_800FE5A0 *e;
    s32 v;
    for (e = (EntX_800FE5A0 *)lbl_8049D998; e->a >= 0 && e->a <= self->pl->lvl; e++) {
        if (self->pl->lvl == e->a) {
            if (self->pl->v9C == e->b) {
                v = self->pl->vB0;
            } else if (self->pl->v9C == e->c) {
                v = self->pl->vAC;
            } else if (self->pl->v9A == e->d) {
                v = self->pl->vB4;
            } else {
                continue;
            }
            TObjWaitEntryHairMoveSim__sub_800FE3BC(v);
            if (e->p4 != NULL) {
                create__19TObjEZBoneRotPlayerFPvPvPv(self->pl, v, e->p4);
            } else if (e->p8 != NULL) {
                create_hairmove__10TObjPlayerFPvPvPv(self->pl, e->p8, e->pc);
            }
        }
    }
}

s32 TObjWaitEntryHairMoveSim__sub_800FE698(Obj_800FE698 *o) {
    Ent_800FE698 *e;
    if (o->flags & 0xA) {
        return 0;
    }
    for (e = lbl_8049D998; e->a >= 0 && e->a <= o->lvl; e++) {
        if (o->lvl == e->a && (o->v9C == e->b || o->v9C == e->c || o->v9A == e->d)) {
            return 1;
        }
    }
    return 0;
}

s32 TObjWaitEntryHairMoveSim__sub_800FE73C(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;
    if (get_display_index__12TCharaMakingFPv((void *) (arg0 + 0x85C)) == 0xE) {
        TObjTailsTailsMove__sub_800FFDBC((void *) (arg0));
        return 0;
    }
    if (is_move_done__24TObjWaitEntryHairMoveSimFv((void *) (arg0)) != 0) {
        create__24TObjWaitEntryHairMoveSimFPv((void *) (arg0));
        return 0;
    }
    if (TObjWaitEntryHairMoveSim__sub_800FE698((Obj_800FE698 *)((void *) (arg0))) != 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x20));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)__ct__24TObjWaitEntryHairMoveSimFv((void *)((int) (temp_r3)), (void *)((void *) (arg0))));
        }
        return var_r0;
    }
    return 0;
}

}
