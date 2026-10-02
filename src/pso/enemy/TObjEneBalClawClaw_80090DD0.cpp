#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_80091134 { char pad[0x14]; };

struct VObj_80091134 : VBase_80091134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct Claw_80091134 {
    u8 pad0[0x38];
    u8 pos[0xB8 - 0x38];
    s16 fieldB8;
    u8 padBA[0x2FC - 0xBA];
    u8 effects[0x37C - 0x2FC];
    s32 state;
    u8 pad380[0x390 - 0x380];
    VObj_80091134 motion;
};

typedef s32 M2C_UNK;
struct Vec_80091200 { f32 x, y, z; };

struct Claw_80091200 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB4 - 0x34];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2FC - 0xBA];
    Vec_80091200 pos;
    Vec_80091200 vel;
    u8 pad314[0x32C - 0x314];
    s16 f32C;
    u8 pad32E[0x33E - 0x32E];
    s16 f33E;
    u8 pad340[0x37C - 0x340];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
};

struct Vec_80091354 { f32 x, y, z; };

struct Info_80091354 {
    u8 pad0[4];
    f32 f4;
    s32 f8;
};

struct Claw_80091354 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xB8 - 0x34];
    s16 fB8;
    u8 padBA[0x29C - 0xBA];
    Vec_80091354 f29C;
    struct Claw_80091354 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_80091354 pos;
    u8 pad308[0x338 - 0x308];
    u16 targetId;
    u8 pad33A[0x350 - 0x33A];
    Info_80091354 *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
};

struct Vec_80090ECC { f32 x, y, z; };

struct Info_80090ECC { u8 pad0[8]; s32 f8; };

struct VBase_80090ECC { char pad[0x18]; };

struct VObj_80090ECC : VBase_80090ECC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual void m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct Claw_80090ECC {
    u8 pad0[0x38];
    u8 f38[0xB4 - 0x38];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    VObj_80090ECC *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_80090ECC pos;
    u8 f308[0x318 - 0x308];
    s32 f318;
    u8 pad31C[0x33C - 0x31C];
    s16 f33C;
    u8 pad33E[0x350 - 0x33E];
    Info_80090ECC *info;
    u8 pad354[0x37C - 0x354];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 f388;
    u8 pad38C[0x3C0 - 0x38C];
    f32 f3C0;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_800A04F0(void *);
void request_two_effects__10TObjPlayerFPv(void *);
void apply_effect_variant_a__10TObjPlayerFii(void *, int);
void refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK advance_animation_playback(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
void TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjEneBalClawClaw__sub_80091134(Claw_80091134 *self);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
s32 check_path_obstructed(void *, void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D96B4;
void TObjEneBalClawClaw__sub_80091200(Claw_80091200 *self);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017D68(void *, void *, int, void *, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
Claw_80091354 *find_active_entity_by_id(u16);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D96B8;
void TObjEneBalClawClaw__sub_80091354(Claw_80091354 *self);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017D68(void *, void *, int, void *, f32);
M2C_UNK update_angle__10TObjPlayerFPviPv(void *, s32, void *);
f32 get_pos_x__10TObjPlayerFPv(s32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D96A4;
extern const f32 lbl_805D96A8;
extern const f32 lbl_805D96AC;
extern const f32 lbl_805D96B0;
void TObjEneBalClawClaw__sub_80090ECC(Claw_80090ECC *self);
}

extern "C" {

struct En0Base_80090DD0 { char pad[0x14]; };
struct En0VObj_80090DD0 : En0Base_80090DD0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

void TObjEneBalClawClaw__sub_800914A4(void);
void action__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *, s32);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);

extern const f32 TObjEneBalClawClaw__data_805D968C;

void action__18TObjEneBalClawClawFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8C48(arg0 + 0x38, temp_r4);
        TObjPlayer__sub_800A0554(arg0 + 0x390);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        if (((En0VObj_80090DD0*)(arg0 + 0x390))->m5() == 1) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
            temp_r4_2 = temp_r5 & ~5;
            M2C_FIELD(arg0, s32 *, 0x388) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            reset_active_state__18TObjEneBalClawClawFPv(arg0, temp_r4_2, temp_r5);
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        break;
    }
}

#define RESET_80090ECC(p) ((M2C_UNK (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(p)
#define SEEK_80090ECC(p, v, f) ((M2C_UNK (*)(void *, void *, int, f32))TObjPlayer__sub_80017D68)(p, v, 1, f)
void TObjEneBalClawClaw__sub_80090ECC(Claw_80090ECC *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        clear_attack_flag__18TObjEneBalClawClawFPv(self);
        self->f388 &= ~8;
        self->state = self->fB8 = 1;
        break;
    case 1: {
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        Vec_80090ECC v = ((Claw_80090ECC *)self->target)->pos;
        SEEK_80090ECC(self, &v, lbl_805D96A4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, self->f308);
        if (self->f3C0 <= get_pos_x__10TObjPlayerFPv(self->f318) * get_pos_x__10TObjPlayerFPv(self->f318)) {
            self->state = self->fB8 = 2;
        }
        break;
    }
    case 2: {
        if (self->target == NULL) {
            RESET_80090ECC(self);
            return;
        }
        Vec_80090ECC v = ((Claw_80090ECC *)self->target)->pos;
        SEEK_80090ECC(self, &v, lbl_805D96A4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, self->f308);
        if (objInBand__FP7GameObjf(self, lbl_805D96A8) != 0) {
            TBoss3Volopt__sub_8022675C(0x4003B032, self->f38, 0, 0);
            if (self->target->m18(self, lbl_805D96AC) != 0) {
                self->target->m23(self, lbl_805D96B0);
                self->target->m20(self, lbl_805D96AC);
                self->f388 |= 8;
            }
        }
        if (self->fB4 != 4) {
            self->f33C = 0x5A;
            update_if_active__15TObjEneMe1GiGueFPv(self, 0xC);
        }
        break;
    }
    case 3:
        self->f33C = self->f33C - 1;
        if (self->f33C <= 0) {
            RESET_80090ECC(self);
        }
        break;
    }
    advance_animation_playback(self);
    apply_actor_gravity(self, 0, TObjEneBalClawClaw__data_805D968C);
    update_collisions__10TObjPlayerFPv(self);
}

void TObjEneBalClawClaw__sub_80091134(Claw_80091134 *self) {
    switch (self->state) {
    case 0:
        refresh_lobby_state__10TObjPlayerFPv(self);
        self->fieldB8 = 4;
        TObjPlayer__sub_800A04F0(&self->motion);
        request_two_effects__10TObjPlayerFPv(self->effects);
        TBoss3Volopt__sub_8022675C(0x4003AD37, self->pos, 0, 0);
        self->state = 1;
    case 1:
        ((s32)advance_animation_playback(self));
        if (self->motion.m4() == 1) {
            apply_effect_variant_a__10TObjPlayerFii(self->pos, 0);
            send_entity_set_flags__6TLobbyFPv(self);
            queue_destruction__7TObjectFv(self);
        }
        break;
    case -1:
        return;
    }
}

void TObjEneBalClawClaw__sub_80091200(Claw_80091200 *self) {
    switch (self->state) {
    case 0:
        self->f30 &= ~0x200000;
        self->fB8 = 3;
        self->state = 1;
    case 1: {
        advance_animation_playback(self);
        Vec_80091200 v = self->pos;
        v.x += self->vel.x;
        v.z += self->vel.z;
        if (check_path_obstructed(self, &v) == 0) {
            move_with_wall_slide(self);
        } else {
            self->vel.x = self->vel.z = TObjEneBalClawClaw__data_805D968C;
        }
        self->vel.x *= lbl_805D96B4;
        self->vel.z *= lbl_805D96B4;
        apply_actor_gravity(self, 0, TObjEneBalClawClaw__data_805D968C);
        update_collisions__10TObjPlayerFPv(self);
        TOTrapAncient01__sub_80226578(0x4003B235, self, (u8 *)self + 0x38, 0, 0);
        if (self->fB4 != 8) {
            self->f30 &= ~0x200;
            self->f388 &= ~1;
            self->f33E = self->f32C;
            ((M2C_UNK (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(self);
        }
        break;
    }
    case -1:
        break;
    }
}

#define RESET(p) ((M2C_UNK (*)(void *))reset_active_state__18TObjEneBalClawClawFPv)(p)
void TObjEneBalClawClaw__sub_80091354(Claw_80091354 *self) {
    switch (self->state) {
    case 0:
        find_target_in_range__10TObjPlayerFPvf(self, lbl_805D96B8);
        if (self->targetId != 0xFFFF) {
            self->f30 &= 0xFBFFFEFF;
            TBoss3VoloptMonitor__sub_8004292C(self);
            self->state = self->fB8 = 1;
        } else {
            RESET(self);
        }
        self->target = find_active_entity_by_id(self->targetId);
        if (self->target != NULL) {
            VecCopy__FP3VecPC3Vec(&self->f29C, &self->target->pos);
        }
        break;
    case 1: {
        if (self->target == NULL) {
            RESET(self);
            break;
        }
        TOTrapAncient01__sub_80226578(0x4003B235, self, (u8 *)self + 0x38, 0, 0);
        Vec_80091354 v = self->target->pos;
        TObjPlayer__sub_80017D68(self, &v, 1, self->info, self->info->f4);
        update_angle__10TObjPlayerFPviPv(self, self->info->f8, (u8 *)self + 0x308);
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, TObjEneBalClawClaw__data_805D968C);
        update_collisions__10TObjPlayerFPv(self);
        break;
    }
    case -1:
        break;
    }
}

void TObjEneBalClawClaw__sub_800914A4(void) {  }

}
