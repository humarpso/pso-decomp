#include "types.h"
#include "pso/boss/TBoss6Type2.h"

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
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 set_action_state__11TBoss6Type2FPv(void * a0, s32 a1);
void TBoss6Type2__sub_802BF834(u8 *arg0);
int send_state_action_packet__11TBoss6Type2FPv(void*);
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
void send_state_action__11TBoss6Type2FPv(u8 *arg0);
s32 play_sound_effect(int, void *, int, int);
extern s32 lbl_805D6750;
extern u8 lbl_805D6754;
extern const f32 lbl_805DE3F4;
extern const f32 lbl_805DE4DC;
s32 spawn_particle_slot__11TBoss6Type2Fl(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
}

extern "C" {

void TBoss6Type2__sub_802BF904(void* p);
void TBoss6Type2__sub_802BFA1C(u8 *arg0);
void TBoss6Type2__sub_802BFBE4(void* p);
s32 play_sound_effect(int, void *, int, int);
s32 destroy_part__11TBoss6Type2Fl(int, int);
s32 spawn_particle_slot__11TBoss6Type2Fl(void *, s32);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 set_action_state__11TBoss6Type2FPv(void * a0 = 0, s32 a1 = 0);
s32 choose_next_index__11TBoss6Type2Fv(void *);
s32 pick_random_other_index__11TBoss6Type2Fv(void *);
int send_state_action_packet__11TBoss6Type2FPv(void*);
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 get_phase__11TBoss6Type2Fv(void *);
s16 is_falz_ready__11TBoss6Type2Fv(void *);
s32 is_ready_to_attack__11TBoss6Type2Fv(void *);
s32 update_action_state__11TBoss6Type2Fv(void *);
void update_when_timer_zero__11TBoss6Type2Fv(void* p);
s32 update_zako__11TBoss6Type2Fv(void *);

#include "types.h"
extern "C" {

void TBoss6Type2::start_death_sequence(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r31;
    u8 *var_r3;

    var_r3 = arg0;
    temp_r31 = var_r3;
    temp_r0 = *(s32 *)((s8 *)var_r3 + 0x4C8);
    *(s32 *)((s8 *)var_r3 + 0x45C) = temp_r0;
    *(s32 *)((s8 *)var_r3 + 0x460) = temp_r0;
    temp_r0_2 = *(s32 *)((s8 *)var_r3 + 0x47C);
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
    destroy_part__11TBoss6Type2Fl((int) (temp_r31), (int) (0xD));
}

}

void TBoss6Type2::update_zako_spawn_timer() {
    s32 temp_r0;

    if (((s32) *(s32 *)((s8 *)this + 0x504) == 0) && (((TBoss6Type2 *)this)->turn_toward_target_position() == 0)) {
        *(s32 *)((s8 *)this + 0x504) = 1;
    }
    update_zako__11TBoss6Type2Fv(this);
    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv(this, 0x22);
    }
}

void send_state_action__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == 0) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x374);
        switch (temp_r0) {
        case 6:
            *(s32 *)((s8 *)arg0 + 0x46C) = 0;
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xC));
            return;
        case 9:
            *(s32 *)((s8 *)arg0 + 0x46C) = 1;
            send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0xC));
            return;
        default:
            send_state_action_packet__11TBoss6Type2FPv((void*)(arg0));
            break;
        }
    }
}

void TBoss6Type2::reset_timers_and_spawn_particle() {
    S_802BF6CC *arg0 = (S_802BF6CC *)this;
    arg0->f45C = 0x4B;
    arg0->f460 = 0x4B;
    arg0->f504 = 0;
    TBoss6Type2__sub_802BB7C0(arg0);
    switch (arg0->f374) {
    case 9:
    case 10:
    case 11:
        spawn_particle_slot__11TBoss6Type2Fl(arg0, 0xD);
        break;
    }
}

void TBoss6Type2::update_zako_phase() {
    s32 temp_r0;

    if (((s32) *(s32 *)((s8 *)this + 0x504) == 0) && (((TBoss6Type2 *)this)->turn_toward_target_position() == 0)) {
        *(s32 *)((s8 *)this + 0x504) = 1;
    }
    update_zako__11TBoss6Type2Fv(this);
    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv(this, 0xC);
    }
}
void TBoss6Type2::init_attack_params() {
    s32 temp_r0;

    *(s32 *)((s8 *)this + 0x45C) = 0x4B;
    *(s32 *)((s8 *)this + 0x460) = 0x4B;
    *(s32 *)((s8 *)this + 0x504) = 0;
    temp_r0 = *(s32 *)((s8 *)this + 0x374);
    switch (temp_r0) {
    case 4:
        *(s32 *)((s8 *)this + 0x46C) = 0;
        break;
    case 5:
        *(s32 *)((s8 *)this + 0x46C) = 1;
        break;
    default:
        *(s32 *)((s8 *)this + 0x46C) = 0;
        break;
    }
    TBoss6Type2__sub_802BB7C0(this);
    switch ((s32) *(s32 *)((s8 *)this + 0x374)) {
    case 5:
        spawn_particle_slot__11TBoss6Type2Fl(this, 0xD);
        break;
    }
}

void TBoss6Type2__sub_802BF834(u8 *arg0) {
    s32 temp_r0;
    if (((s32) *(s32 *)((s8 *)arg0 + 0x460) == (s32) (*(s32 *)((s8 *)arg0 + 0x45C) - 0x1E)) && ((u16) *(u16 *)((s8 *)arg0 + 0x466) != 0xFFFF)) {
        play_sound_effect((int) (0x4006A10A), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        play_sound_effect((int) (0x69E27), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        spawn_particle_effect_with_flags((void *) (arg0 + 0x62C), (int) (0x223), (int) (0x40));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv((void *)((void *) (arg0)), (s32)((int) (0x22)));
    }
}

void TBoss6Type2::check_state_0x460_eq0() { if (*(int*)((char*)this + 0x460) == 0) { send_state_action_packet__11TBoss6Type2FPv(this); } }
void TBoss6Type2__sub_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
void TBoss6Type2::tick_action_timer() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv(this, 0x22);
    }
}
void TBoss6Type2::pick_next_zako() {
    if ((s32) *(s32 *)((s8 *)this + 0x460) == 0) {
        *(u16 *)((s8 *)this + 0x466) = TBoss6Type2__sub_802BB694();
        if (*(u16 *)((s8 *)this + 0x466) == 0xFFFF) {
            update_action_state__11TBoss6Type2Fv(this);
            return;
        }
        send_action_packet__11TBoss6Type2FPvc((void*)((void*)(this)), (void*)((void*)(3)));
    }
}

#include "types.h"
extern "C" {

void TBoss6Type2::init_timer_and_play_sound() {
    u8 *arg0 = (u8 *)this;
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
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        set_action_state__11TBoss6Type2FPv((void *) (arg0), (int) (2));
    }
}

}

void TBoss6Type2::reset_state_timers() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x4EC);
    *(s32 *)((s8 *)this + 0x45C) = temp_r0;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    TBoss6Type2__sub_802BB768();
}
void TBoss6Type2::tick_timer_460() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv(this, 0x22);
    }
}
void TBoss6Type2::select_attack_state() {
    if ((s32) *(s32 *)((s8 *)this + 0x460) == 0) {
        if (TBoss6Type2__sub_802BA9E4() != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0xD));
            return;
        }
        if ((get_phase__11TBoss6Type2Fv(this) == 0xD) && (is_ready_to_attack__11TBoss6Type2Fv(this) != 0)) {
            *(s16 *)((s8 *)this + 0x464) = is_falz_ready__11TBoss6Type2Fv(this);
            send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0x18));
            return;
        }
        if (TBoss6Type2__sub_802BA944(this) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0xE));
            return;
        }
        if (get_phase__11TBoss6Type2Fv(this) == 0xD) {
            *(s32 *)((s8 *)this + 0x428) = pick_random_other_index__11TBoss6Type2Fv(this);
            *(s32 *)((s8 *)this + 0x430) = choose_next_index__11TBoss6Type2Fv(this);
            send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(1));
            return;
        }
        send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(2));
    }
}

void TBoss6Type2__sub_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
