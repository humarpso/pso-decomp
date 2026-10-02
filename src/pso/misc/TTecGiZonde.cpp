#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_80232598 { char pad[0x18]; };

struct VObj_80232598 : VBase_80232598 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(u32 actor);
};

typedef struct GTarget_80232598 {
    u16 id;
    u16 pad2;
    u32 pad4;
} GTarget_80232598;

typedef struct GChain_80232598 {
    u8 pad0[0x130];
    s32 count;
    GTarget_80232598 targets[1];
} GChain_80232598;

extern "C" {
u32 find_entity_by_id(u16);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(u32);
void TTecGiZonde__sub_80232598(GChain_80232598 *self);
}

extern "C" {

void *__dt__11TTecGiZondeFv(void *arg0, s16 arg1);
void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void run_task__11TTecGiZondeFv(void *arg0);
u32 find_entity_by_id(u16);
void *TTecGiZonde__ct(void *, void *, void *, void *, void *);
s32 TTecGiZonde__sub_80231C58(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x18C);
    if (o != NULL) {
        TTecGiZonde__ct(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__11TTecGiZonde[];

void *__dt__11TTecGiZondeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TTecGiZonde;
        destroy_technique_effect_resources__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TTecGiZonde__sub_80232598(GChain_80232598 *self) {
    s32 i;
    u32 actor;
    for (i = 0; i < self->count; i++) {
        actor = find_entity_by_id(self->targets[i].id);
        if (is_parents_unqueued__9TTecLukerFUi() != 0 && is_valid_and_active__10TObjPlayerFUi(actor) != 0) {
            ((VObj_80232598 *)self)->m6(actor);
        }
    }
}

void run_task__11TTecGiZondeFv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x130) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TTecGiZonde__sub_80231C58(arg0) == 1) {
        TTecGiZonde__sub_80232598((GChain_80232598 *)(arg0));
    }
    queue_destruction__7TObjectFv(arg0);
}

}
