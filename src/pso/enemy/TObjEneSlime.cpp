#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800EBB18_800EB9F0 { char pad[0x18]; };
struct VObj_800EBB18_800EB9F0 : Base_800EBB18_800EB9F0 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m77(s32 *);
};

struct Slot_800EB910 { s32 state; void *obj; };

struct Obj_800EB910 { u8 pad[0x3b8]; Slot_800EB910 slots[4]; };

struct Slot_800EB984 { s32 state; void *obj; };

struct Obj_800EB984 { u8 pad[0x3b8]; Slot_800EB984 slots[4]; };

extern "C" {
void TObjEneSlimeOne__sub_800EC470(void* p);
void TObjEneSlime__sub_800EB910(Obj_800EB910 *self);
void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void fn_800EB7BC(void *, s32, s32, s32);
extern const Slot_800EB984 lbl_8043D218;
void TObjEneSlime__sub_800EB984(Obj_800EB984 *self);
}

extern "C" {

void TObjEneSlime__sub_800EB9F0(void* p, void* q);
void TObjEneSlime__vt61(void* p);
void run_task__12TObjEneSlimeFv(void *arg0);
M2C_UNK TLobby__sub_8002AFD4(void *, s32 *, M2C_UNK);
M2C_UNK TLobby__sub_800F6510(void *, s32 *);
s32 check_demo_mode__10TObjPlayerFv();
s32 fn_800EB8DC(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);

void TObjEneSlime__sub_800EB910(Obj_800EB910 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Slot_800EB910 *s = &self->slots[i];
        if (s->state == 1) {
            if (s->obj != 0) {
                TObjEneSlimeOne__sub_800EC470(s->obj);
                s->obj = 0;
            }
            s->state = 2;
        }
    }
}

void TObjEneSlime__sub_800EB984(Obj_800EB984 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TObjEneSlime__sub_800EB9F0(&self->slots[i], (void *)&lbl_8043D218);
    }
    fn_800EB7BC(self, 0, 0, 0);
}

void TObjEneSlime__sub_800EB9F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

void run_task__12TObjEneSlimeFv(void *arg0) {
    s32 sp8;

    if ((check_demo_mode__10TObjPlayerFv() == 0) && (fn_800EB8DC(arg0) != 0)) {
        sp8 = 0x800;
        TLobby__sub_800F6510(arg0, &sp8);
        TLobby__sub_8002AFD4(arg0, &sp8, 0);
        ((VObj_800EBB18_800EB9F0 *)arg0)->m77(&sp8);
        send_entity_set_flags__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void TObjEneSlime__vt61(void* p) { TObjEneSlime__sub_800EB910((Obj_800EB910 *)(p)); }

}
