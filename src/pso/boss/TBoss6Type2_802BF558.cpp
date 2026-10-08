#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct S_802BF6CC {
    u8 pad0[0x374];
    s32 f374;
    u8 pad378[0x45C - 0x378];
    s32 f45C;
    s32 f460;
    u8 pad464[0x504 - 0x464];
    s32 f504;
} S_802BF6CC;

extern "C" {
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 set_action_state__11TBoss6Type2FPvPv(void * a0, s32 a1);
void TBoss6Type2__sub_802BF834(u8 *arg0);
int send_state_action_packet__11TBoss6Type2FPv(void*);
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
void send_state_action__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
extern s32 lbl_805D6750;
extern u8 lbl_805D6754;
extern const f32 lbl_805DE3F4;
extern const f32 lbl_805DE4DC;
void init_timer_and_play_sound__11TBoss6Type2FPv(u8 *arg0);
s32 spawn_particle_slot__11TBoss6Type2FPvi(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
void reset_timers_and_spawn_particle__11TBoss6Type2FPv(S_802BF6CC *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BF904(void* p);
void TBoss6Type2__sub_802BFA1C(u8 *arg0);
void TBoss6Type2__sub_802BFBE4(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void init_attack_params__11TBoss6Type2FPv(void *arg0);
void pick_next_zako__11TBoss6Type2FPv(void *arg0);
void reset_state_timers__11TBoss6Type2FPv(void *arg0);
void select_attack_state__11TBoss6Type2FPv(void *arg0);
void start_death_sequence__11TBoss6Type2FPv(u8 *arg0);
void tick_action_timer__11TBoss6Type2FPv(void *arg0);
void tick_timer_460__11TBoss6Type2FPv(void *arg0);
void update_zako_phase__11TBoss6Type2FPv(void *arg0);
void update_zako_spawn_timer__11TBoss6Type2FPv(void *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK destroy_part__11TBoss6Type2Fii(int, int);
s32 spawn_particle_slot__11TBoss6Type2FPvi(void *, s32);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 set_action_state__11TBoss6Type2FPvPv(void * a0 = 0, s32 a1 = 0);
s32 choose_next_index__11TBoss6Type2FPv(void *);
s32 pick_random_other_index__11TBoss6Type2FPv(void *);
int send_state_action_packet__11TBoss6Type2FPv(void*);
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
s32 get_phase__11TBoss6Type2FPv(void *);
s16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);
s32 update_action_state__11TBoss6Type2FPv(void *);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
s32 update_zako__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void start_death_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r31;
    u8 *var_r3;

    var_r3 = arg0;
    temp_r31 = var_r3;
    temp_r0 = M2C_FIELD(var_r3, s32 *, 0x4C8);
    M2C_FIELD(var_r3, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(var_r3, s32 *, 0x460) = temp_r0;
    temp_r0_2 = M2C_FIELD(var_r3, s32 *, 0x47C);
    switch (temp_r0_2) {
    case 15:
        var_r3 = (unsigned char *) ((void *)0x68522);
        break;
    case 16:
        var_r3 = (unsigned char *) ((void *)0x68521);
        break;
    case 17:
        var_r3 = (unsigned char *) ((void *)0x68523);
        break;
    }
    play_sound_effect((int) (var_r3), (void *) (temp_r31 + 0x38), (int) (0), (int) (1));
    destroy_part__11TBoss6Type2Fii((int) (temp_r31), (int) (0xD));
}

}

void update_zako_spawn_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv(arg0, 0x22);
    }
}

void send_state_action__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
        switch (temp_r0) {
        case 6:
            M2C_FIELD(arg0, s32 *, 0x46C) = 0;
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xC));
            return;
        case 9:
            M2C_FIELD(arg0, s32 *, 0x46C) = 1;
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xC));
            return;
        default:
            send_state_action_packet__11TBoss6Type2FPv((void*)(arg0));
            break;
        }
    }
}

void reset_timers_and_spawn_particle__11TBoss6Type2FPv(S_802BF6CC *arg0) {
    arg0->f45C = 0x4B;
    arg0->f460 = 0x4B;
    arg0->f504 = 0;
    TBoss6Type2__sub_802BB7C0(arg0);
    switch (arg0->f374) {
    case 9:
    case 10:
    case 11:
        spawn_particle_slot__11TBoss6Type2FPvi(arg0, 0xD);
        break;
    }
}

void update_zako_phase__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv(arg0, 0xC);
    }
}
void init_attack_params__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x45C) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x460) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x504) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x46C) = 1;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    }
    TBoss6Type2__sub_802BB7C0(arg0);
    switch ((s32) M2C_FIELD(arg0, s32 *, 0x374)) {
    case 5:
        spawn_particle_slot__11TBoss6Type2FPvi(arg0, 0xD);
        break;
    }
}

void TBoss6Type2__sub_802BF834(u8 *arg0) {
    s32 temp_r0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x1E)) && ((u16) M2C_FIELD(arg0, u16 *, 0x466) != 0xFFFF)) {
        play_sound_effect((int) (0x4006A10A), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        play_sound_effect((int) (0x69E27), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        spawn_particle_effect_with_flags((void *) (arg0 + 0x62C), (int) (0x223), (int) (0x40));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv((void *)((void *) (arg0)), (s32)((int) (0x22)));
    }
}

void check_state_0x460_eq0__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 0) { send_state_action_packet__11TBoss6Type2FPv(p); } }
void TBoss6Type2__sub_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
void tick_action_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv(arg0, 0x22);
    }
}
void pick_next_zako__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        M2C_FIELD(arg0, u16 *, 0x466) = TBoss6Type2__sub_802BB694();
        if (M2C_FIELD(arg0, u16 *, 0x466) == 0xFFFF) {
            update_action_state__11TBoss6Type2FPv(arg0);
            return;
        }
        send_action_packet__11TBoss6Type2FPvc((void*)((void*)(arg0)), (void*)((void*)(3)));
    }
}

#include "types.h"
extern "C" {

void init_timer_and_play_sound__11TBoss6Type2FPv(u8 *arg0) {
  if (((s8) lbl_805D6754) == 0)
  {
    lbl_805D6754 = 1;
    lbl_805D6750 = (s32) (lbl_805DE4DC / lbl_805DE3F4);
  }
  *((0, (s32 *) (((s8 *) arg0) + 0x460))) = (*((s32 *) (((s8 *) arg0) + 0x45C)) = (s32) lbl_805D6750);
  play_sound_effect((int) 0x69126, (void *) (arg0 + 0x38), (int) 0, (int) 1);
}

void TBoss6Type2__sub_802BFA1C(u8 *arg0) {
    s32 temp_r0;

    play_persistent_sound((int) (0x4006A612), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        set_action_state__11TBoss6Type2FPvPv((void *) (arg0), (int) (2));
    }
}

}

void reset_state_timers__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4EC);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    TBoss6Type2__sub_802BB768();
}
void tick_timer_460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv(arg0, 0x22);
    }
}
void select_attack_state__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (TBoss6Type2__sub_802BA9E4() != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xD));
            return;
        }
        if ((get_phase__11TBoss6Type2FPv(arg0) == 0xD) && (is_ready_to_attack__11TBoss6Type2FPv(arg0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x464) = is_falz_ready__11TBoss6Type2FPv(arg0);
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0x18));
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xE));
            return;
        }
        if (get_phase__11TBoss6Type2FPv(arg0) == 0xD) {
            M2C_FIELD(arg0, s32 *, 0x428) = pick_random_other_index__11TBoss6Type2FPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x430) = choose_next_index__11TBoss6Type2FPv(arg0);
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(1));
            return;
        }
        send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(2));
    }
}

void TBoss6Type2__sub_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
