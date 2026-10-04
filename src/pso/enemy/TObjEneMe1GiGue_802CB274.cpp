#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct { f32 x, y, z; } Vec_802CB378;
extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK calc_velocity_toward_destination(void *, void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32, s32);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C(void *);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(void *, void *, s32, s32);
s32 check_vector_bit__15TObjEneMe1GiGueFii(void *, void *);
M2C_UNK TObjEneMe1GiGue__sub_802CB5A0(void *, M2C_UNK);
extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 lbl_805DE670;
extern const f32 TObjEneMe1GiGue__data_805DE674;
extern const f32 TObjEneMe1GiGue__data_805DE678;
void TObjEneMe1GiGue__sub_802CB378(u8 *arg0);
}

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CB5A0(void *, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *, s32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, s32, s32);

}

struct Base410 { char pad[0x14]; };
struct VObj410 : Base410 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5(); virtual void m6();
};

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8E80(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3FC);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (((VObj410 *)(arg0 + 0x3FC))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A345), arg0 + 0x38, 0, 0);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        return;
    }
}
void TObjEneMe1GiGue__sub_802CB378(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x390), (void *) (arg0 + 0x50));
        ((void (*)(void *, Vec_802CB378, Vec_802CB378, f32))calc_velocity_toward_destination)(arg0, M2C_FIELD(arg0, Vec_802CB378 *, 0x38), M2C_FIELD(arg0, Vec_802CB378 *, 0x390), M2C_FIELD(arg0, f32 *, 0x3E4));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        TBoss3VoloptMonitor__sub_8004292C((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) M2C_FIELD(arg0, f32 *, 0x43C);
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x44) | 1);
        M2C_FIELD(arg0, f32 *, 0x3EC) += -2.3f;
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x3EC);
        if (temp_f3 <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x3EC) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
            M2C_FIELD(arg0, f32 *, 0x30C) = 0.0f;
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) != 8) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                play_sound_effect((void *)TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A345), arg0 + 0x38, 0, 0);
            }
        } else if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 7) {
            if (temp_f3 <= (lbl_805DE670 * (TObjEneMe1GiGue__data_805DE674 + (TObjEneMe1GiGue__data_805DE678 / M2C_FIELD(arg0, f32 *, 0xCC))))) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 8;
            }
        } else {
            temp_r0_2 = (s32) M2C_FIELD(arg0, f32 *, 0xC0);
            if (((temp_r0_2 == 0x14) || (temp_r0_2 == 0x28)) && (check_vector_bit__15TObjEneMe1GiGueFii((void *) (arg0), (void *) (arg0 + 0x38)) != 0)) {
                spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF0));
            }
        }
        play_persistent_sound(TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A819), arg0, arg0 + 0x38, 0, 0);
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        break;
    case -1:
        ((void (*)(void *, s32))update_if_active__15TObjEneMe1GiGueFPv)(arg0, 1);
        break;
    }
    apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneMe1GiGue__data_805DE660));
}

}
