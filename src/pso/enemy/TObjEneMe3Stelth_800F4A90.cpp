#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800F4D68 { f32 x; f32 y; f32 z; };

struct Node_800F4D68 { u8 pad[0x2c]; void *child; };

struct Obj_800F4D68 { u8 pad[0x34]; Node_800F4D68 *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800F4CC8 { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800F4CC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800F4CC8 *fA4; };

struct Base_800F4A90 { u8 pad[0x18]; };

struct VObj_800F4A90 : Base_800F4A90 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual f32 m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct Stelth_800F4A90 {
    u8 pad0[0x38];
    u8 pos[0x390 - 0x38];
    VObj_800F4A90 *target;
    u8 pad394[0x3F8 - 0x394];
    u8 f3F8[1];
};

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TObjEneMe3Stelth__data_805DA834;
extern const f32 TObjEneMe3Stelth__data_805DA844;
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
s32 push_matrix_from(void *);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D7CA4(void *);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 pop_matrix();
extern u8 lbl_8058D490[];
extern const f32 TObjEneMe3Stelth__data_805DA840;
f32 TObjEneMe3Stelth__sub_800F4D68(Obj_800F4D68 *self);
void fn_8002B630(void *, void *, s32);
void check_enemy_body_collisions(void *, s32, f32, f32);
extern u8 lbl_804976E4[];
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 lbl_805DA81C;
extern const f32 lbl_805DA8A4;
u8 TObjEneMe3Stelth__sub_800F4CC8(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
u32 get_item_field_6__10TObjPlayerFPv(void *);
void spawn_particle_effect(void *, s32);
s32 get_field_d8__10TObjPlayerFPv(void);
s32 fn_800B91F4(void *);
void TObjEneDD__sub_800BA438(void *, void *);
s32 TObjEneMe3Stelth__sub_800F47D4(void *);
s32 objInBand__FP7GameObjf(void *, f32);
void get_hand_joint_position__10TObjPlayerFPvi(void *, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *, s32);
void play_sound_effect(s32, void *, s32, s32);
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 lbl_805DA810;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
extern const f32 lbl_805DA8A0;
void TObjEneMe3Stelth__sub_800F4A90(Stelth_800F4A90 *self);
}

extern "C" {

void TObjEneMe3Stelth__sub_800F4A90(Stelth_800F4A90 *self) {
    s32 near = objInBand__FP7GameObjf(self, lbl_805DA810);
    if (objInBand__FP7GameObjf(self, TObjEneMe3Stelth__data_805DA808) == 0 && near == 0) {
        return;
    }
    if (fn_800B91F4(self) != 0 && self->target->m18(self, TObjEneMe3Stelth__data_805DA80C) != 0) {
        f32 d = self->target->m20(self, TObjEneMe3Stelth__data_805DA80C);
        self->target->m23(self, TObjEneMe3Stelth__data_805DA84C);
        if (d > TObjEneMe3Stelth__data_805DA840) {
            if (TObjEneMe3Stelth__sub_800F47D4(self) != 0) {
                VObj_800F4A90 *t = self->target;
                if (is_locally_controlled__10TObjPlayerFPv(t) != 0 && get_item_field_6__10TObjPlayerFPv(t) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(t, get_field_d8__10TObjPlayerFPv());
                    get_hand_joint_position__10TObjPlayerFPvi(t, self->f3F8);
                    spawn_particle_effect(self->f3F8, 0x1D0);
                }
            } else if (near != 0 && calc_boss4_scale__10TObjPlayerFi(self) <= lbl_805DA8A0) {
                TObjEneDD__sub_800BA438(self, self->target);
            }
        }
    }
    play_sound_effect(0x3AA37, self->pos, 0, 0);
}

#pragma push
#pragma fp_contract on
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (get_random_float__8TObjFishFv(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x390), f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x3C)) >= TObjEneMe3Stelth__data_805DA844) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3Stelth__data_805DA834) {
        return 0;
    }
    temp_f31_2 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f31 = (M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60))) + temp_f31_2;
    return (temp_f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) == 0;
}
#pragma pop

u8 TObjEneMe3Stelth__sub_800F4CC8(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DA81C;
    Sub_800F4CC8 *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3Stelth__data_805DA840;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = lbl_805DA8A4;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    check_enemy_body_collisions(arg0, arg1, TObjEneMe3Stelth__data_805DA840, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, lbl_804976E4, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}

f32 TObjEneMe3Stelth__sub_800F4D68(Obj_800F4D68 *self) {
    Vec_800F4D68 v;
    Node_800F4D68 *node;
    v.x = TObjEneMe3Stelth__data_805DA840;
    v.y = TObjEneMe3Stelth__data_805DA840;
    v.z = TObjEneMe3Stelth__data_805DA840;
    push_matrix_from(lbl_8058D490);
    TObjPlayer__sub_803D7B68(self->ff8, self->fc0);
    node = self->node;
    TObjPlayer__sub_803D7CA4(node);
    TObjPlayer__sub_803D7CA4(node->child);
    TCameraCtrl__sub_803D8934(0, &v, &v);
    pop_matrix();
    return v.y;
}

}
