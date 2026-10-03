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
void deliver_chain_hits__11TTecGiZondeFPv(GChain_80232598 *self);
s16 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_8004433C(void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(s32, void *, s32, s32);
M2C_UNK copy_technique_target_list(void *, void *);
M2C_UNK init_parameters__11TTecGiZondeFPv(void *);
M2C_UNK TObjPlayer__sub_8023AA4C(void *, void *, void *, s32);
extern M2C_UNK __vt__11TTecGiZonde[];
extern s32 lbl_805D37C8;
u8 *TTecGiZonde__ct(u8 *arg0, void *arg1, void *arg2, void *arg3, void * _w4);
}

extern "C" {

void *__dt__11TTecGiZondeFv(void *arg0, s16 arg1);
void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void run_task__11TTecGiZondeFv(void *arg0);
u32 find_entity_by_id(u16);
s32 find_chain_targets__11TTecGiZondeFv(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void create__11TTecGiZondeFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x18C);
    if (o != NULL) {
        TTecGiZonde__ct((u8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
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

void deliver_chain_hits__11TTecGiZondeFPv(GChain_80232598 *self) {
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
    if (find_chain_targets__11TTecGiZondeFv(arg0) == 1) {
        deliver_chain_hits__11TTecGiZondeFPv((GChain_80232598 *)(arg0));
    }
    queue_destruction__7TObjectFv(arg0);
}
u8 *TTecGiZonde__ct(u8 *arg0, void *arg1, void *arg2, void *arg3, void * _w4) {
    s32 h;
    TObjPlayer__sub_8023AA4C(arg0, arg1, arg2, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TTecGiZonde;
    TObjPlayer__sub_8004433C(arg0 + 0x130);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D37C8;
    init_parameters__11TTecGiZondeFPv(arg0);
    copy_technique_target_list(arg0 + 0x130, arg3);
    switch (M2C_FIELD(arg0, s16 *, 0xC6)) {
    case 0:
        if ((h = play_sound_effect(0x4002A509, arg0 + 0x20, 0, 0)) >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, 0x100, 0);
        }
        break;
    case 1:
        play_sound_effect(0x4002A509, arg0 + 0x20, 0, 0);
        break;
    case 2:
    case 3:
        if ((h = play_sound_effect(0x4002A509, arg0 + 0x20, 0, 0)) >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x180, 0);
        }
        break;
    case 4:
        if ((h = play_sound_effect(0x4002A509, arg0 + 0x20, 0, 0)) >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x250, 0);
        }
        break;
    case 5:
        if ((h = play_sound_effect(0x4002A509, arg0 + 0x20, 0, 0)) >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x100, 0);
        }
        break;
    }
    if (M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c((void *)M2C_FIELD(arg0, u32 *, 0x1C));
    }
    return arg0;
}

}
