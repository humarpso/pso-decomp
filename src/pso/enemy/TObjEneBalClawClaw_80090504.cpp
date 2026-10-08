#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct VBase_14_0d3ae4 { char pad[0x14]; };

struct VObj_14_0d3ae4 : VBase_14_0d3ae4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredFields_8009060C_arg0 {
    u8 unknown_0[0x37C];
    s32 field_37C;
    u8 unknown_380[0x8];
    s32 field_388;
};

struct VBase_800906C8 { char pad[0x14]; };

struct VObj_800906C8 : VBase_800906C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct Claw_800906C8 {
    u8 pad0[0xB8];
    s16 fieldB8;
    u8 padBA[0x37C - 0xBA];
    s32 state;
    u8 pad380[0x388 - 0x380];
    u32 flags;
    u8 pad38C[0x390 - 0x38C];
    VObj_800906C8 motion;
};

struct Vec_80090850 { f32 x, y, z; };

struct Params_80090850 { u8 pad0[4]; f32 speed; s32 angle; };

struct Claw_80090850 {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x50 - 0x34];
    Vec_80090850 pos;
    u8 pad5C[0xB8 - 0x5C];
    s16 fieldB8;
    u8 padBA[0x290 - 0xBA];
    Vec_80090850 target;
    Vec_80090850 home;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_80090850 field2FC;
    s32 field308;
    f32 field30C;
    u8 pad310[0x350 - 0x310];
    Params_80090850 *params;
    u8 pad354[0x37C - 0x354];
    s32 state;
};

struct Vec_80090504 { f32 x, y, z; };

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEneBalClawClaw__sub_80090798(u8 *arg0);
void obj_setFlags30(void *, u32);
void TObjEneBalClawClaw__sub_800907DC(u8 *arg0);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
void TObjEneBalClawClaw__sub_8009060C(u8 *arg0);
void apply_actor_gravity(void *, int, f32);
void obj_setFlags30(void *, u32);
void advance_animation_playback(void *);
extern const f32 TObjEneBalClawClaw__data_805D968C;
void update_drop__18TObjEneBalClawClawFPv(Claw_800906C8 *self);
void apply_actor_gravity(void *, int, f32);
s32 move_with_wall_slide(void *);
void calc_velocity_toward_destination(void *self, Vec_80090850 pos, Vec_80090850 dest, f32 speed);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void advance_animation_playback(void *);
extern const f32 TObjEneBalClawClaw__data_805D968C;
void update_move_to_target__18TObjEneBalClawClawFPv(Claw_80090850 *self);
void apply_actor_gravity(void *, int, f32);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
void TObjPlayer__sub_800C7168(void *, Vec_80090504, void *, f32, f32);
void advance_animation_playback(void *);
s32 update_collisions__10TObjPlayerFPv(void *);
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D9690;
void update_chase_state__18TObjEneBalClawClawFPv(u8 *arg0);
}

extern "C" {

void TObjEneBalClawClaw__sub_80090824(void);
void TObjEneBalClawClaw__sub_80090828(void);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

typedef char RecoveredFields_8009060C_arg0_37C_offset[offsetof(RecoveredFields_8009060C_arg0, field_37C) == 0x37C ? 1 : -1];
typedef char RecoveredFields_8009060C_arg0_388_offset[offsetof(RecoveredFields_8009060C_arg0, field_388) == 0x388 ? 1 : -1];

void update_chase_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    u8 *temp_r5;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) &= ~0x100;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        M2C_FIELD(arg0, s16 *, 0x3C8) = 0x78;
        break;
    case 1:
        if (M2C_FIELD(arg0, void **, 0x2A8) == NULL || --M2C_FIELD(arg0, s16 *, 0x3C8) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
            break;
        }
        M2C_FIELD(arg0, f32 *, 0x30C) = TObjEneBalClawClaw__data_805D968C;
        TObjPlayer__sub_800C7168(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2A8), Vec_80090504 *, 0x2FC), M2C_FIELD(arg0, u8 **, 0xA4), lbl_805D9690, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC));
        update_angle__10TObjPlayerFPviPv(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), arg0 + 0x308);
        advance_animation_playback(arg0);
        apply_actor_gravity(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        update_collisions__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBalClawClaw__sub_8009060C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C;
    switch (temp_r0) {
    case 0:
        ((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m3();
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 | 5);
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C = 1;
    case 1:
        if (((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m5() == 1) {
            ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & ~5);
            reset_active_state__18TObjEneBalClawClawFPv((void*)(arg0));
        }
        return;
    case -1:
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & 0xFFFFFFFB);
        break;
    }
}

void update_drop__18TObjEneBalClawClawFPv(Claw_800906C8 *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        self->fieldB8 = 0;
        self->motion.m2();
        self->flags |= 4;
        self->state = 1;
    case 1:
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, TObjEneBalClawClaw__data_805D968C);
        if (self->motion.m4() == 1) {
            self->flags &= ~4;
            obj_setFlags30(self, 0x02000000);
            self->state = 2;
        }
        break;
    case 2:
        break;
    }
}

void TObjEneBalClawClaw__sub_80090798(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xEFFFFFFF);
    obj_clearFlags30(arg0, 0x06040000U);
    M2C_FIELD(arg0, s32 *, 0x374) = 0xB;
}

void TObjEneBalClawClaw__sub_800907DC(u8 *arg0) {
    obj_setFlags30(arg0, 0x04040000U);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000000);
}

void TObjEneBalClawClaw__sub_80090824(void) {  }

void TObjEneBalClawClaw__sub_80090828(void) {  }
int reset_active_state__18TObjEneBalClawClawFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void update_move_to_target__18TObjEneBalClawClawFPv(Claw_80090850 *self) {
    switch (self->state) {
    case -1:
        break;
    case 0:
        self->flags30 &= ~0x100;
        self->fieldB8 = 1;
        VecCopy__FP3VecPC3Vec(&self->home, &self->pos);
        self->state = 1;
    case 1:
        self->field30C = TObjEneBalClawClaw__data_805D968C;
        VecCopy__FP3VecPC3Vec(&self->target, &self->field2FC);
        calc_velocity_toward_destination(self, self->target, self->home, self->params->speed);
        update_angle__10TObjPlayerFPviPv(self, self->params->angle, &self->field308);
        move_with_wall_slide(self);
        advance_animation_playback(self);
        apply_actor_gravity(self, 0, TObjEneBalClawClaw__data_805D968C);
        break;
    }
}

}
