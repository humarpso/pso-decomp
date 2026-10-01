#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80049E9C_lbl_80484AD0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80049E9C_lbl_80484AFC {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80049E9C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_80049C10 { f32 x, y, z; };

struct Flags_80049C10 { u8 pad[0x18]; u32 f18; };

struct Tgt_80049C10 { u8 pad[0x2FC]; Vec_80049C10 pos; };

struct Self_80049C10 {
    u8 pad0[0x38];
    Vec_80049C10 pos;
    Vec_80049C10 prev;
    u8 pad50[0x5c - 0x50];
    s32 f5c;
    s32 f60;
    u8 pad64[0xa4 - 0x64];
    Flags_80049C10 *fa4;
    u8 pada8[0xb4 - 0xa8];
    Vec_80049C10 vel;
    u8 padc0[0xcc - 0xc0];
    s32 fcc;
    s32 fd0;
    u8 padd4[0xe0 - 0xd4];
    void *fe0;
    u8 fe4[4];
    s32 fe8;
    s32 fec;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss3Volopt__sub_8004812C(int);
s32 TObjParticle__sub_800870BC(void *, void *, int, int);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, void *);
s32 TCameraCtrl__sub_803D8934(int, int, int);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80049E9C_lbl_80484AD0 lbl_80484AD0;
extern M2C_UNK lbl_80484AFC[];
extern RecoveredGlobal_80049E9C_lbl_8058D490 lbl_8058D490;
extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D30;
extern const f32 lbl_805D88AC;
extern const f32 lbl_805D88B0;
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss3Volopt__sub_8004812C(int);
void TBoss3Volopt__sub_80049A1C(void *);
u32 TObjButterflyLobby__sub_8007A5D8(void *, void *, s32);
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
void TObjPlayer__sub_80142170(void *, void *, void *);
void TObjPlayer__sub_801422A8(void *, void *, void *);
void TObjPlayer__sub_801564A0(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
Tgt_80049C10 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TOTrapAncient01__sub_80226578(s32, void *, void *, s32, s32);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern s32 lbl_805D4D30;
extern const f32 lbl_805D88A4;
extern const f32 lbl_805D88A8;
void TBoss3Volopt__sub_80049C10(Self_80049C10 *self);
}

extern "C" {

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80484AFC[];

void TBoss3Volopt__sub_80049C10(Self_80049C10 *self) {
    Tgt_80049C10 *t;
    t = TPlayerBattleCtrl4P__sub_801BA74C(self->fcc);
    if (t != NULL) {
        Vec_80049C10 d = t->pos;
        TBoss6Type1__sub_803D9370(&d, &self->pos);
        scale_velocity__19TObjGyaranzoMissileFPvf(&d, TBoss3Volopt__sub_8004812C(1));
        TBoss4Zako__sub_803D8910(&self->vel, &d);
        scale_velocity__19TObjGyaranzoMissileFPvf(&self->vel, TBoss3Volopt__sub_8004812C(0));
    }
    VecCopy__FP3VecPC3Vec(&self->prev, &self->pos);
    TBoss4Zako__sub_803D8910(&self->pos, &self->vel);
    TObjPlayer__sub_801422A8(&self->vel, &self->f5c, &self->f60);
    if (self->fe0 != NULL) {
        Vec_80049C10 n = self->vel;
        n.x = -n.x;
        n.y = -n.y;
        n.z = -n.z;
        TObjPlayer__sub_80142170(&n, &self->fe8, &self->fec);
        self->fec -= 0x4000;
        copy_vec3__11TBoss4Type2FPvPv(self->fe0, self->fe4);
        scale_velocity__19TObjGyaranzoMissileFPvf(&n, lbl_805D88A4);
        TBoss4Zako__sub_803D8910(&n, &self->pos);
        copy_pos__11TNowLoadingFPvPv(self->fe0, &n);
    }
    if (TObjButterflyLobby__sub_8007A5D8(&self->prev, &self->pos, -1) != 0) {
        TBoss3Volopt__sub_80049A1C(self);
        return;
    }
    self->fa4->f18 &= ~6;
    if (self->pos.y < lbl_805D88A8) {
        self->fa4->f18 |= 2;
    } else {
        self->fa4->f18 |= 4;
    }
    check_object_collisions__10TObjPlayerFPv(self);
    TObjPlayer__sub_801564A0(self);
    if (self->fa4->f18 & 0x180000) {
        TBoss3Volopt__sub_80049A1C(self);
        return;
    }
    self->fd0++;
    if (self->fd0 > lbl_805D4D30) {
        TBoss3Volopt__sub_80049A1C(self);
        return;
    }
    TOTrapAncient01__sub_80226578(0x4003C114, self, &self->pos, 0, 0);
}

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484AFC;
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80049E9C_lbl_80484AD0_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AD0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_80484AFC_size[sizeof(RecoveredGlobal_80049E9C_lbl_80484AFC) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_80049E9C_lbl_8058D490_size[sizeof(RecoveredGlobal_80049E9C_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *TBoss3Volopt__sub_80049E9C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80049E9C_lbl_80484AFC *)&lbl_80484AFC).value;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_80484AD0.value), (int) (1));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805D88AC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0xCC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805D88B0;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805D88B0;
    M2C_FIELD(arg0, f32 *, 0xBC) = TBoss3Volopt__sub_8004812C((int) (0));
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_r4 = (u8 *)(arg0 + 0xB4);
    TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4C10, u8 **, 0x42C), s32 *, 0x168);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4C10, u8 **, 0x42C), s32 *, 0x16C);
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = TObjParticle__sub_800870BC((void *) (arg0 + 0x38), (void *) (arg0 + 0xE4), (int) (0x112), (int) (2));
    lbl_805D4D30 = (s32) TBoss3Volopt__sub_8004812C((int) (3)) + 0xF0;
    return arg0;
}

}
