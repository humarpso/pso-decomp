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
}

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecRaBartaFv(void);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void *TTecRaBarta__ct(void *, void *, void *, void *, void *);
void *TTecRaBarta__sub_80237CCC(void *, void *, void *, void *);
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
        TTecRaBarta__sub_80237CCC(o, arg0, arg1, arg2);
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

}
