#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80237DAC { f32 x, y, z; };

struct RafoieBurst_80237DAC { s32 entry; s32 flags; f32 scale; };

struct RafoieBursts_80237DAC { RafoieBurst_80237DAC *entries; u32 count; };

struct Obj_80237DAC {
    u8 pad0[0x20];
    u16 band;
    u8 pad22[0x28 - 0x22];
    Vec_80237DAC position;
};

struct VBase_18_80237CCC { char pad[0x18]; };

struct VObj_18_80237CCC : VBase_18_80237CCC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

typedef struct Ids_80237CCC { u8 pad[0xF8]; u16 ids[32]; } Ids_80237CCC;

typedef struct Vec_80237FB8 { f32 x, y, z; } Vec_80237FB8;

typedef struct TTecRaFoie_80237FB8 {
    u8 pad0[0x7C];
    Vec_80237FB8 target;
    u8 pad1[0xEC - 0x88];
    s32 target_count;
    u16 first_id;
    u8 pad2[0x148 - 0xF2];
    s32 explicit_position;
} TTecRaFoie_80237FB8;

typedef struct TObjPlayer_80237FB8 {
    u8 pad0[0x2FC];
    Vec_80237FB8 pos;
} TObjPlayer_80237FB8;

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK TObjPlayer__sub_8022BD74(void *, int);
void run_task__11TTecRaBartaFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_80237DAC *, const Vec_80237DAC *);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *TOSwitchAttack__sub_80087278(Vec_80237DAC *, s32, s32);
extern RafoieBursts_80237DAC lbl_8044DAB4[];
extern const f32 lbl_805DC8C8;
void TTecRaFoie__sub_80237DAC(Obj_80237DAC *self);
u16 obj_getField1c(void *);
void fn_8022C2A8(void *, void *, void *, void *, void *);
void TTecRaBarta__sub_802377FC(void *);
extern M2C_UNK __vt__11TTecRaBarta[];
extern u32 lbl_805D37F8;
void *TTecRaBarta__sub_80237CCC(void *self, void *source, void *origin, void *level);
s32 is_split_screen();
void *TObjFish__sub_8001EDC4(void *, int);
void TObjFish__sub_800660D4(void *, void *, void *, int, int, f32);
void *TObjEneDellBiter__sub_80087350(Vec_80237FB8 *, int);
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(TObjPlayer_80237FB8 *);
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern const f32 TTecRaFoie__data_805DC8CC;
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self);
}

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecRaBartaFv(void);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void *TTecRaBarta__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__sub_80237CCC((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

void render__11TTecRaBartaFv(void) {  }

void run_task__11TTecRaBartaFv(u8 *arg0) {
    s32 temp_r4;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r4 + 1);
    TObjPlayer__sub_8022BD74((void *) (arg0), (int) (temp_r4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) > (s16) M2C_FIELD(arg0, s16 *, 0xA8)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *TTecRaBarta__sub_80237CCC(void *self, void *source, void *origin, void *level) {
    s32 i;
    fn_8022C2A8(self, source, origin, origin, level);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__11TTecRaBarta;
    M2C_FIELD(self, u32 *, 0) = lbl_805D37F8;
    M2C_FIELD(self, s32 *, 0xF0) = 0;
    TTecRaBarta__sub_802377FC(self);
    if (M2C_FIELD(self, u8 **, 0xE8) != NULL) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(self, u8 **, 0xE8), u8 **, 0xA4), f32 *, 0xC) = M2C_FIELD(self, f32 *, 0x90);
    }
    for (i = 0; i < 32; i++) {
        ((Ids_80237CCC *) self)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(self, s32 *, 0x138) = 0;
    ((VObj_18_80237CCC *) self)->m6(0);
    ((VObj_18_80237CCC *) self)->m7();
    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        M2C_FIELD(self, u16 *, 0xB4) = obj_getField1c(M2C_FIELD(self, void **, 0x1C));
    }
    return self;
}

void TTecRaFoie__sub_80237DAC(Obj_80237DAC *self) {
    Vec_80237DAC higher;
    u32 i;
    VecCopy__FP3VecPC3Vec(&higher, &self->position);
    higher.y = lbl_805DC8C8 + self->position.y;
    for (i = 0; i < lbl_8044DAB4[self->band].count; i++) {
        RafoieBurst_80237DAC *row = &lbl_8044DAB4[self->band].entries[i];
        s32 mode = 0;
        void *p;
        if (row->flags & 0x1000) {
            mode = 0x2000;
        }
        if (row->flags & 0x10) {
            p = TOSwitchAttack__sub_80087278(&self->position, row->entry, mode);
        } else {
            p = TOSwitchAttack__sub_80087278(&higher, row->entry, mode);
        }
        if (p != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, lbl_8044DAB4[self->band].entries[i].scale, lbl_8044DAB4[self->band].entries[i].scale);
        }
    }
}

void TTecRaFoie__vt7(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self) {
    void *emitter;
    TObjPlayer_80237FB8 *target;
    if (self->explicit_position == 1) {
        if (is_split_screen() != 0) {
            TObjEneDellBiter__sub_80087350(&self->target, 0x39);
        } else {
            emitter = TObjEneDellBiter__sub_80087350(&self->target, 0x1A);
            if (emitter != NULL) {
                TObjFish__sub_800660D4(emitter, TObjFish__sub_8001EDC4(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, TTecRaFoie__data_805DC8CC);
            }
        }
        TObjEneDellBiter__sub_80087350(&self->target, 0x3A);
        TObjEneDellBiter__sub_80087350(&self->target, 0x3B);
        return;
    }
    if (self->target_count != 0) {
        target = (TObjPlayer_80237FB8 *) TPhotonMylla__sub_80154CB4(self->first_id);
        if (is_parents_unqueued__9TTecLukerFUi() != 0 && is_valid_and_active__10TObjPlayerFUi(target) != 0) {
            Vec_80237FB8 point = target->pos;
            TObjEneDellBiter__sub_80087350(&point, 0x39);
            emitter = TObjEneDellBiter__sub_80087350(&point, 0x1A);
            if (emitter != NULL) {
                TObjFish__sub_800660D4(emitter, TObjFish__sub_8001EDC4(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, TTecRaFoie__data_805DC8CC);
            }
        }
    }
}

}
