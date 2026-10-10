#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80038DCC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80038DCC_lbl_80435B6C {
    M2C_UNK value;
    u8 remaining[0x8];
};

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
    virtual s32 m14(M2C_UNK *, s32 *);
};

typedef struct Pair_80038E2C { s32 a; f32 b; } Pair_80038E2C;

extern "C" {
s32 draw_oriented_shadow__9TObjEneDDFiiiUi(void *, void *, int, void *);
extern RecoveredGlobal_80038DCC_lbl_80435B6C lbl_80435B6C;
void render__18TBoss2PhotonBulletFv(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
f32 TBoss2DeRolLe__sub_80034CF8(void);
u32 spawn_continuous_particle_effect_with_flags(void *, int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 project_actor_to_ground(void *, void *, void *);
extern M2C_UNK lbl_80435B40[];
extern const f32 lbl_805D8268;
extern const f32 lbl_805D826C;
extern Pair_80038E2C lbl_80435B38[];
void run_task__18TBoss2PhotonBulletFv(u8 *arg0);
void *__dt__18TBoss2PhotonBulletFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
extern void *__vt__18TBoss2PhotonBullet[];
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 construct_collision_body(void *, void *, void *);
extern s32 TBoss2PhotonBullet__name;
u8 *TBoss2PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80038DCC_lbl_80435B6C_size[sizeof(RecoveredGlobal_80038DCC_lbl_80435B6C) == 0xC ? 1 : -1];
void render__18TBoss2PhotonBulletFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80038DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80038DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80038DCC, sp10) == 0x8) ? 1 : -1];
    Stack_80038DCC stack;
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 1) {
        stack.sp8 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_80435B6C.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 8);
        draw_oriented_shadow__9TObjEneDDFiiiUi((void *) (arg0 + 0x38), (void *) (arg0 + 0xCC), (int) (0), (void *) (&stack.sp8));
    }
}
#pragma push
#pragma fp_contract on
void run_task__18TBoss2PhotonBulletFv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0xC4) > 8.7f) {
        M2C_FIELD(arg0, f32 *, 0xE0) += 0.05f;
        if (M2C_FIELD(arg0, f32 *, 0xE0) >= 3.0f) {
            M2C_FIELD(arg0, f32 *, 0xE0) = 3.0f;
        }
        M2C_FIELD(arg0, f32 *, 0xC4) = M2C_FIELD(arg0, f32 *, 0xC4) - M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg0, f32 *, 0xC0) = 2.0f * M2C_FIELD(arg0, f32 *, 0xB4) + M2C_FIELD(arg0, f32 *, 0xC0);
        M2C_FIELD(arg0, f32 *, 0xC8) = 2.0f * M2C_FIELD(arg0, f32 *, 0xBC) + M2C_FIELD(arg0, f32 *, 0xC8);
    } else {
        M2C_FIELD(arg0, f32 *, 0xC4) = 8.7f;
        M2C_FIELD(arg0, f32 *, 0xC0) = M2C_FIELD(arg0, f32 *, 0xB4) * M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xC0);
        M2C_FIELD(arg0, f32 *, 0xC8) = M2C_FIELD(arg0, f32 *, 0xBC) * M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xC8);
    }
    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0xC0);
    M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0xC8);
    if (M2C_FIELD(arg0, u32 *, 0xE4) == 0) {
        M2C_FIELD(arg0, u32 *, 0xE4) = spawn_continuous_particle_effect_with_flags(arg0 + 0xC0, 0xDF, 0x40);
    } else {
        copy_pos__11TNowLoadingFPvPv((void *)M2C_FIELD(arg0, u32 *, 0xE4), arg0 + 0xC0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD8) % 15 == 0) {
        if (project_actor_to_ground(arg0, arg0 + 0x38, arg0 + 0xCC) != 0) {
            M2C_FIELD(arg0, s32 *, 0xDC) |= 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xDC) &= ~1;
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x38) <= lbl_805D8268 && M2C_FIELD(arg0, f32 *, 0x38) >= lbl_805D826C) {
        Pair_80038E2C p = lbl_80435B38[0];
        p.b = TBoss2DeRolLe__sub_80034CF8();
        if (((VObj_18_39be15 *)arg0)->m14(lbl_80435B40, (s32 *)&p) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xD8)++;
    if (M2C_FIELD(arg0, s32 *, 0xD8) >= 0x78) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void *__dt__18TBoss2PhotonBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x18) = __vt__18TBoss2PhotonBullet;
        if (M2C_FIELD(arg0, void **, 0xE4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE4)); M2C_FIELD(arg0, M2C_UNK *, 0xE4) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TBoss2PhotonBullet__ct(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, u8 *arg4, f32 farg0) {
    construct_collision_body((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, void ***, 0x18) = __vt__18TBoss2PhotonBullet;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TBoss2PhotonBullet__name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xC0), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0xC0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB4), (void *) (arg4));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = 3.0f;
    M2C_FIELD(arg0, f32 *, 0xCC) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0xD0) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0xD4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0xB0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, f32 *, 0xE0) = (0.0f);
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    return arg0;
}

}

struct Rec_80039288 { s32 a, b, c; f32 d; };

typedef struct Pad_80039140 {
    u8 pad0[0x10];
    void *parent;
    u8 pad14[8];
    s32 unk1C;
    u8 pos[8];
    u8 unk28[4];
    s32 level;
    s32 shots;
    s32 timer;
} Pad_80039140;

struct S_80039288 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    u8 v20[8];
    u8 v28[4];
    s32 f2c, f30, f34;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);

void rotate_xz_pair_by_angle(void *, void *, s32);
extern Rec_80039288 lbl_80435B08[];
extern void *__vt__15TBoss2PhotonPad[];
extern s32 TBoss2PhotonPad__name;
void queue_destruction__7TObjectFv(void *);
void *get_instance__13TBoss2DeRolLeFv(void);
void *__nw__7TObjectFUl(u32);
void run_task__15TBoss2PhotonPadFv(Pad_80039140 *self);
S_80039288 *__ct__15TBoss2PhotonPadFv(S_80039288 *o, void *parent, s32 arg2, void *arg3, s32 arg4);
}

extern "C" {

void render__15TBoss2PhotonPadFv(void);
void __dt__7TObjectFv(void *, s16);
void render_shadows__7TObjectFv(void);
void *__dt__15TBoss2PhotonPadFv(void *self, s16 arg1);

void render__15TBoss2PhotonPadFv(void) {  }
void run_task__15TBoss2PhotonPadFv(Pad_80039140 *self) {
    void *inst;
    void *p;

    self->timer--;
    if (self->timer <= 0) {
        inst = get_instance__13TBoss2DeRolLeFv();
        if (inst != NULL) {
            p = __nw__7TObjectFUl(0xE8);
            if (p != NULL) {
                ((void *(*)(void *, void *, void *, s32, void *, f32))TBoss2PhotonBullet__ct)(p, self->parent, inst, self->unk1C, self->pos, (1.5f) * lbl_80435B08[self->level].d);
            }
        }
        self->timer = lbl_80435B08[self->level].b;
        rotate_xz_pair_by_angle(self->pos, self->unk28, lbl_80435B08[self->level].c / lbl_80435B08[self->level].a);
        self->shots--;
        if (self->shots == 0) {
            queue_destruction__7TObjectFv(self);
        }
    }
}
void *__dt__15TBoss2PhotonPadFv(void *self, s16 arg1) {
    if (self != NULL) {
        M2C_FIELD(self, void ***, 0x18) = __vt__15TBoss2PhotonPad;
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
S_80039288 *__ct__15TBoss2PhotonPadFv(S_80039288 *o, void *parent, s32 arg2, void *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(o, parent);
    o->vt = (void *)__vt__15TBoss2PhotonPad;
    o->f0 = TBoss2PhotonPad__name;
    o->f1c = arg2;
    o->f2c = arg4;
    VecCopy__FP3VecPC3Vec(o->v20, arg3);
    rotate_xz_pair_by_angle(o->v20, o->v28, -(lbl_80435B08[o->f2c].c / 2));
    o->f30 = lbl_80435B08[o->f2c].a;
    o->f34 = 0;
    return o;
}

}

extern "C" {
void TLobby__sub_801A1FD8(); void apply_object_set_data(); void release_member_90__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124(); void update_object_view_visibility(); void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C(); void TObjPlayer__sub_80019568(); void call_vt13_with_default__10TObjPlayerFPv();
void area_attack_deliver_direct(); void TObjPlayer__sub_800BC220(); void call_vt16_with_default__10TObjPlayerFPv();
void area_attack_deliver_physical(); void dispatch_vt15__10TObjPlayerFPvPv(); void area_attack_apply_recoil();
void area_attack_receive_direct(); void apply_hit_if_active__10TObjPlayerFPvPvPv();
void *__vt__18TBoss2PhotonBullet[23] = {
    0, 0, (void *)__dt__18TBoss2PhotonBulletFv, (void *)run_task__18TBoss2PhotonBulletFv, (void *)render__18TBoss2PhotonBulletFv, (void *)render_shadows__7TObjectFv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data, (void *)release_member_90__10TObjPlayerFPv, (void *)TParticleCtrl__sub_801A2124, (void *)update_object_view_visibility, (void *)classify_actor_view_detail, (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568, (void *)call_vt13_with_default__10TObjPlayerFPv, (void *)area_attack_deliver_direct, (void *)TObjPlayer__sub_800BC220, (void *)call_vt16_with_default__10TObjPlayerFPv, (void *)area_attack_deliver_physical, (void *)dispatch_vt15__10TObjPlayerFPvPv, (void *)area_attack_apply_recoil, (void *)area_attack_receive_direct, (void *)apply_hit_if_active__10TObjPlayerFPvPvPv
};
void *__vt__15TBoss2PhotonPad[6] = {
    0, 0, (void *)__dt__15TBoss2PhotonPadFv, (void *)run_task__15TBoss2PhotonPadFv, (void *)render__15TBoss2PhotonPadFv, (void *)render_shadows__7TObjectFv
};
}

extern "C" {
extern char lbl_80435B48[];
extern char lbl_80435B58[];
s32 TBoss2PhotonPad__name = (s32)lbl_80435B48;
s32 TBoss2PhotonBullet__name = (s32)lbl_80435B58;
}
