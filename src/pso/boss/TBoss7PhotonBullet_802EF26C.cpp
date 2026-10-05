#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet { M2C_UNK value; u8 remaining[0x58]; };
typedef char RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet_size[sizeof(RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet) == 0x5C ? 1 : -1];

#pragma fp_contract on
struct VBase_18_39be15 { char pad[0x18]; };

struct VObj_18_39be15 : VBase_18_39be15 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14(M2C_UNK *, void *);
};

struct V2_802EF2AC { s32 x; f32 y; };

struct Bullet_802EF2AC {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xB0 - 0x44];
    f32 b0, b4, b8, bc;
    f32 c0, c4, c8;
    f32 cc[3];
    u8 padD8[0xE4 - 0xD8];
    s32 e4;
    u32 e8;
    f32 ec;
    void *f0[2];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 fn_800BC4C8(void *, void *, void *);
extern void *__vt__18TBoss7PhotonBullet[];
extern s32 lbl_805D3FD4;
u8 *TBoss7PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void queue_destruction__7TObjectFv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 project_actor_to_ground(void *, void *, void *);
f32 get_target_pos_y__18TBoss7PhotonBulletFv(void);
extern V2_802EF2AC lbl_80474038[];
extern M2C_UNK lbl_80474040[];
extern const f32 lbl_805DEA00;
extern const f32 lbl_805DEA04;
void run_task__18TBoss7PhotonBulletFv(Bullet_802EF2AC *arg0);
}

extern "C" {

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1);
void render__18TBoss7PhotonBulletFv(u8 *arg0);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, int, void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__18TBoss7PhotonBulletFv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE8) & 1) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xCC, 0, arg0 + 0xD8);
    }
}

extern void *__vt__18TBoss7PhotonBullet[];

#pragma push
#pragma opt_loop_invariants off
void run_task__18TBoss7PhotonBulletFv(Bullet_802EF2AC *arg0) {
    s32 i;
    if (arg0->c4 > 18.7f) {
        arg0->ec += 0.05f;
        if (arg0->ec >= 3.0f) {
            arg0->ec = 3.0f;
        }
        arg0->c4 -= arg0->ec;
        arg0->c0 = (2.0f) * arg0->b4 + arg0->c0;
        arg0->c8 = (2.0f) * arg0->bc + arg0->c8;
    } else {
        arg0->c4 = 18.7f;
        arg0->c0 = arg0->b4 * arg0->b0 + arg0->c0;
        arg0->c8 = arg0->bc * arg0->b0 + arg0->c8;
    }
    arg0->pos[0] = arg0->c0;
    arg0->pos[2] = arg0->c8;
    for (i = 0; i != 2; i++) {
        if (arg0->f0[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(arg0->f0[i], &arg0->c0);
        }
    }
    if (arg0->e4 % 16 == 0) {
        if (project_actor_to_ground(arg0, arg0->pos, arg0->cc) != 0) {
            arg0->e8 |= 1;
        } else {
            arg0->e8 &= ~1;
        }
    }
    if (arg0->pos[0] <= lbl_805DEA00 && arg0->pos[0] >= lbl_805DEA04) {
        V2_802EF2AC v = lbl_80474038[0];
        v.y = get_target_pos_y__18TBoss7PhotonBulletFv();
        if (((VObj_18_39be15 *)(arg0))->m14(lbl_80474040, &v) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    }
    arg0->e4++;
    if (arg0->e4 >= 0x78) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x18) = __vt__18TBoss7PhotonBullet;
        if (M2C_FIELD(arg0, void **, 0xF0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0)); }
        if (M2C_FIELD(arg0, void **, 0xF4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF4)); }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss7PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    fn_800BC4C8((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802EF514___vt__18TBoss7PhotonBullet *)&__vt__18TBoss7PhotonBullet).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3FD4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xC0), (void *) (arg3))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB4), (void *) (arg4));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = (f32) (3.0f);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0xB0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (0.0f);
    M2C_FIELD(arg0, s32 *, 0xF0) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0xC0), (int) (0x202), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0xF4) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0xC0), (int) (0x203), (int) (0x40));
    return arg0;
}

}

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Vec_802EF74C { f32 x, y, z; };

struct Ent_802EF74C { s32 a; s32 b; s32 c; f32 d; };

typedef struct Pad_802EF604 {
    u8 pad0[0x10];
    void *parent;
    u8 pad14[8];
    s32 unk1C;
    u8 pos[8];
    u8 unk28[4];
    s32 level;
    s32 shots;
    s32 timer;
} Pad_802EF604;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK rotate_xz_pair_by_angle(void *, void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern Ent_802EF74C lbl_80474008[];
extern void *__vt__15TBoss7PhotonPad[];
extern s32 lbl_805D3FD0;

s32 get_state__11TBoss7JointFv();

u32 __nw__7TObjectFUl(int);

void run_task__15TBoss7PhotonPadFv(Pad_802EF604 *self);
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void render__15TBoss7PhotonPadFv(void);
void __dt__7TObjectFv(void *, s16);
void render_shadows__7TObjectFv(void);
void *__dt__15TBoss7PhotonPadFv(void *self, s16 arg1);

void render__15TBoss7PhotonPadFv(void) {  }
void run_task__15TBoss7PhotonPadFv(Pad_802EF604 *self) {
    s32 st;
    u32 p;

    self->timer--;
    if (self->timer <= 0) {
        st = get_state__11TBoss7JointFv();
        if (st != 0) {
            p = __nw__7TObjectFUl(0xF8);
            if (p != 0) {
                ((M2C_UNK (*)(void *, void *, s32, s32, void *, f32))TBoss7PhotonBullet__ct)((void *)p, self->parent, st, self->unk1C, self->pos, 1.5f * lbl_80474008[self->level].d);
            }
        }
        self->timer = lbl_80474008[self->level].b;
        rotate_xz_pair_by_angle(self->pos, self->unk28, lbl_80474008[self->level].c / lbl_80474008[self->level].a);
        self->shots--;
        if (self->shots == 0) {
            queue_destruction__7TObjectFv(self);
        }
    }
}
void *__dt__15TBoss7PhotonPadFv(void *self, s16 arg1) {
    if (self != NULL) {
        M2C_FIELD(self, void ***, 0x18) = __vt__15TBoss7PhotonPad;
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
u8 *__ct__15TBoss7PhotonPadFv(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__15TBoss7PhotonPad;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3FD0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg4;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, (void *)arg3);
    rotate_xz_pair_by_angle(arg0 + 0x20, arg0 + 0x28, -(lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].c / 2));
    M2C_FIELD(arg0, s32 *, 0x30) = lbl_80474008[M2C_FIELD(arg0, s32 *, 0x2C)].a;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}

}

extern "C" {
void TLobby__sub_801A1FD8(); void apply_object_set_data(); void release_member_90__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124(); void update_object_view_visibility(); void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C(); void TObjPlayer__sub_80019568(); void TObjPlayer__sub_800BC394();
void area_attack_deliver_direct(); void TObjPlayer__sub_800BC220(); void TObjPlayer__sub_800BC1F0();
void area_attack_deliver_physical(); void dispatch_vt15__10TObjPlayerFPvPv(); void area_attack_apply_recoil();
void area_attack_receive_direct(); void apply_hit_if_active__10TObjPlayerFPvPvPv();
void *__vt__18TBoss7PhotonBullet[23] = {
    0, 0, (void *)__dt__18TBoss7PhotonBulletFv, (void *)run_task__18TBoss7PhotonBulletFv, (void *)render__18TBoss7PhotonBulletFv, (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data, (void *)release_member_90__10TObjPlayerFPv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility, (void *)classify_actor_view_detail, (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568, (void *)TObjPlayer__sub_800BC394, (void *)area_attack_deliver_direct, (void *)TObjPlayer__sub_800BC220, (void *)TObjPlayer__sub_800BC1F0, (void *)area_attack_deliver_physical, (void *)dispatch_vt15__10TObjPlayerFPvPv, (void *)area_attack_apply_recoil, (void *)area_attack_receive_direct, (void *)apply_hit_if_active__10TObjPlayerFPvPvPv
};
void *__vt__15TBoss7PhotonPad[6] = {
    0, 0, (void *)__dt__15TBoss7PhotonPadFv, (void *)run_task__15TBoss7PhotonPadFv, (void *)render__15TBoss7PhotonPadFv, (void *)render_shadows__7TObjectFv
};
}
