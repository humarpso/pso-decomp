#include "types.h"
#include "pso/boss/TBoss6Type2.h"

struct T2_802BE6D4 { u8 pad0[0x45C]; s32 f45C; s32 f460; };

struct Vec_802BE9AC { f32 x, y, z; };

struct Obj_802BE9AC {
    u8 pad0[0x38];
    Vec_802BE9AC pos;
    u8 pad44[0x45C - 0x44];
    s32 t45C;
    s32 t460;
    u8 pad464[0x55C - 0x464];
    u16 client;
};

extern "C" {
s32 update_attack_target__11TBoss6Type2Fv(void* a0);
s32 choose_random_motion__11TBoss6Type2Fv();
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
void TBoss6Type2__sub_802BE648(u8 *arg0);
s32 TBoss6Type2__sub_802BB768(void *);
void TBoss6Type2__sub_802BE6A0(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss6Type2__sub_802BB768(void *);
extern s32 lbl_805D6758;
extern u8 lbl_805D675C;
extern const f32 lbl_805DE3F8;
extern f32 lbl_805DE4DC;
extern const f32 lbl_805DE4F0;
s32 play_persistent_sound(int, void *, void *, int, int);
s32 destroy_part__11TBoss6Type2Fl(void *, s32);
s32 copy_anim_state__11TBoss6Type2Fv(void *);
s32 set_action_state__11TBoss6Type2FPv(void * a0, s32 a1);
extern const f32 lbl_805DE4E0;
extern const f32 lbl_805DE4E4;
void update_charge_timer__11TBoss6Type2FPv(u8 *arg0);
s32 destroy_part__11TBoss6Type2Fl(void *, s32);
s32 copy_anim_state__11TBoss6Type2Fv(void *);
s32 set_action_state__11TBoss6Type2FPv(void * a0, s32 a1);
s32 spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 check_target__11TBoss6Type2Fv(void *);
s32 is_target_valid__11TBoss6Type2Fv(void *);
extern const f32 lbl_805DE4E0;
extern const f32 lbl_805DE4E4;
void TBoss6Type2__sub_802BEC28(u8 *arg0);
s32 set_shake_preset__11TCameraCtrlFl(s32);
void spawn_rocks_around_players__11TBoss6Type2Fv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
s32 play_sound_effect(int, void *, int, int);
s32 spawn_particle_slot__11TBoss6Type2Fl(void *, s32);
s32 TBoss6Type2__sub_802BB768(void *);
s32 is_target_valid__11TBoss6Type2Fv(void *);
s32 spawn_flow_soul__11TBoss6Type2Fiii(void *, void *, int, f32);
s32 create__14TBoss6EffHyouiFPvPv(int, int, int);
extern const f32 lbl_805DE404;
extern const f32 lbl_805DE4E8;
extern const f32 lbl_805DE4EC;
s32 play_sound_effect(int, void *, int, int);
s32 TBoss6Type2__sub_802BB768(void *);
void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 create__14TBoss6EffHyouiFPvPv(int, int, int);
extern s32 lbl_805D6780;
extern u8 lbl_805D6784;
extern const f32 lbl_805DE400;
extern const f32 lbl_805DE4E8;
void TBoss6Type2__sub_802BEB78(u8 *arg0);
s32 play_sound_effect(int, void *, int, int);
s32 spawn_particle_slot__11TBoss6Type2Fl(void *, s32);
s32 TBoss6Type2__sub_802BB768(void *);
void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 create__14TBoss6EffHyouiFPvPv(int, int, int);
extern s32 lbl_805D6778;
extern u8 lbl_805D677C;
extern const f32 lbl_805DE400;
extern const f32 lbl_805DE4E8;
s32 set_shake_preset__11TCameraCtrlFl(s32);
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 TBoss6Type2__sub_802BA598(void *, s32, s32);
s32 trigger_screen_pos__11TBoss6Type2Fv(void *);
s32 set_action_state__11TBoss6Type2FPv(void * a0, s32 a1);
void update_death_sequence__11TBoss6Type2FPv(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BF3F4(void* p);
void init_attack_timers__11TBoss6Type2FPv(u8 *arg0);
void update_attack_timer__11TBoss6Type2FPv(u8 *arg0);
s32 play_sound_effect(int, void *, int, int);
s32 destroy_part__11TBoss6Type2Fl(void *, s32);
s32 spawn_particle_slot__11TBoss6Type2Fl(void *, s32);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 TBoss6Type2__sub_802BAD04(void *);
int drop_random_rocks__11TBoss6Type2Fll(void*, void*);
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB768(void *);
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 choose_random_motion__11TBoss6Type2Fv();
s32 set_action_state__11TBoss6Type2FPv(void * a0 = 0, s32 a1 = 0);
int send_state_action_packet__11TBoss6Type2FPv(void*);
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
void TBoss6Type2__sub_802BF904(void* p);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
void check_state_0x460_eq0__11TBoss6Type2Fv(void* p);
s32 check_target__11TBoss6Type2Fv(void *);
s32 get_phase__11TBoss6Type2Fv();
u16 is_falz_ready__11TBoss6Type2Fv(void *);
s32 is_phase_complete__11TBoss6Type2Fv(void *);
s32 is_target_valid__11TBoss6Type2Fv(void *);
s32 reset_attack_counter__11TBoss6Type2Fv(void *);
s32 set_shake_preset__11TCameraCtrlFl(s32);
s32 update_action_state__11TBoss6Type2Fv(void *);
s32 update_attack_target__11TBoss6Type2Fv(void* a0 = 0);
s32 update_zako__11TBoss6Type2Fv(void *);

void TBoss6Type2::select_action() {
    if (*(s32 *)((s8 *)this + 0x30) & 0x800) {
        send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0x23));
        return;
    }
    if ((s32) *(s32 *)((s8 *)this + 0x418) != 0) {
        send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0x1B));
        return;
    }
    send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(0));
}
void TBoss6Type2::update_zako_timer() {
    s32 temp_r0;

    if (((s32) *(s32 *)((s8 *)this + 0x504) == 0) && (((TBoss6Type2 *)this)->turn_toward_target_position() == 0)) {
        *(s32 *)((s8 *)this + 0x504) = 1;
    }
    update_zako__11TBoss6Type2Fv(this);
    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv((void *)(this), (s32)(0x22));
    }
}

void TBoss6Type2__sub_802BE648(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 0x1D) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *) (arg0)), (void*)((int) (choose_random_motion__11TBoss6Type2Fv())));
            return;
        }
        update_attack_target__11TBoss6Type2Fv((void*)(arg0));
    }
}

void TBoss6Type2__sub_802BE6A0(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x45C) = 0x4B;
    *(s32 *)((s8 *)arg0 + 0x460) = 0x4B;
    *(s32 *)((s8 *)arg0 + 0x504) = 0;
    TBoss6Type2__sub_802BB768(arg0);
}

void TBoss6Type2::update_rock_spawn_state() {
    T2_802BE6D4 *arg0 = (T2_802BE6D4 *)this;
    s32 d = arg0->f45C - arg0->f460;
    if (arg0->f460 >= 0x1E && d % 30 == 0) {
        spawn_rocks_around_players__11TBoss6Type2Fv(arg0);
        set_shake_preset__11TCameraCtrlFl((s32)(1));
    }
    select_next_state();
}

void TBoss6Type2::tick_timer_0x460() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x460) - 1;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv((void *)(this), (s32)(0x22));
    }
}
void TBoss6Type2::select_next_state() {
    u16 temp_r3;

    if ((s32) *(s32 *)((s8 *)this + 0x460) == 0) {
        if (get_phase__11TBoss6Type2Fv() == 0xD) {
            if (is_phase_complete__11TBoss6Type2Fv(this) != 0) {
                send_action_packet__11TBoss6Type2FPvc((void*)((void *)(this)), (void*)(0x1A));
                return;
            }
            if (*(u16 *)((s8 *)this + 0x55C) == 0xFFFF) {
                temp_r3 = is_falz_ready__11TBoss6Type2Fv(this);
                if (temp_r3 != 0xFFFF) {
                    *(u16 *)((s8 *)this + 0x464) = temp_r3;
                    send_action_packet__11TBoss6Type2FPvc((void*)((void *)(this)), (void*)(0x19));
                    return;
                }
            }
            goto block_7;
        }
block_7:
        if (TBoss6Type2__sub_802BA9E4(this) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *)(this)), (void*)(0xD));
            return;
        }
        if (TBoss6Type2__sub_802BA944(this) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *)(this)), (void*)(0xE));
            return;
        }
        update_attack_target__11TBoss6Type2Fv((void*)(this));
    }
}

extern s32 lbl_805D6790;
extern u8 lbl_805D6794;
extern f32 lbl_805DE408;
extern f32 lbl_805DE4DC;

void TBoss6Type2::init_speed_from_ratio() {
    s32 temp_r0;
    if ((s8) lbl_805D6794 == 0) {
        lbl_805D6794 = 1;
        lbl_805D6790 = (s32) (lbl_805DE4DC / lbl_805DE408);
    }
    temp_r0 = lbl_805D6790;
    *(s32 *)((s8 *)this + 0x45C) = temp_r0;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    *(s32 *)((s8 *)this + 0x420) = (s32) (*(s32 *)((s8 *)this + 0x420) + 1);
}

#pragma push
#pragma opt_common_subs off
void update_charge_timer__11TBoss6Type2FPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    *(f32 *)((s8 *)arg0 + 0x41C) = (f32) ((f32) *(s32 *)((s8 *)arg0 + 0x460) / (f32) *(s32 *)((s8 *)arg0 + 0x45C));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x41C);
    if (temp_f1 < lbl_805DE4E0) {
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E0;
    } else if (temp_f1 > lbl_805DE4E4) {
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E4;
    }
    play_persistent_sound((int)(0x4006A30B), (void *)((s32) arg0), (void *)(0U), (int)(0), (int)(0));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x418) = 0;
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E0;
        copy_anim_state__11TBoss6Type2Fv((void *) (arg0));
        destroy_part__11TBoss6Type2Fl((void *)((void *) (arg0)), (s32)((int) (7)));
        set_action_state__11TBoss6Type2FPv((void *)((void *) (arg0)), (s32)((int) (0)));
    }
}
#pragma pop

void TBoss6Type2::start_flow_soul_effect() {
    Obj_802BE9AC *arg0 = (Obj_802BE9AC *)this;
    static s32 dur = (s32)(lbl_805DE4E8 / lbl_805DE404);
    Vec_802BE9AC v;
    u32 pl;
    s32 d = dur;
    arg0->t45C = d;
    arg0->t460 = d;
    play_sound_effect(0x68A25, &arg0->pos, 0, 1);
    spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(7));
    TBoss6Type2__sub_802BB768(arg0);
    if (arg0->client != 0xFFFF) {
        pl = get_player_by_client_id(arg0->client);
        if (pl != 0) {
            VecCopy__FP3VecPC3Vec(&v, (void *)(pl + 0x38));
            v.y += lbl_805DE4EC;
            ((s32 (*)(void *, void *, int))spawn_flow_soul__11TBoss6Type2Fiii)(arg0, &v, arg0->t45C);
            spawn_particle_effect((void *)(pl + 0x38), 0x36);
        }
        create__14TBoss6EffHyouiFPvPv(arg0->client, 1, arg0->t45C);
        if (is_target_valid__11TBoss6Type2Fv(arg0) == 0) {
            play_sound_effect(0x40069E13, &arg0->pos, 0, 1);
        }
    }
}

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;

    play_persistent_sound((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        if (check_target__11TBoss6Type2Fv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2Fv((void *) (arg0)) == 0) {
                play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = get_player_by_client_id((int) (*(u16 *)((s8 *)arg0 + 0x55C)));
            if (temp_r3 != 0U) {
                spawn_particle_effect((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        set_action_state__11TBoss6Type2FPv((void *)((void *) (arg0)), (s32)((int) (0x1B)));
    }
}

void TBoss6Type2__sub_802BEB78(u8 *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6784 == 0) {
        lbl_805D6784 = 1;
        lbl_805D6780 = (s32) (lbl_805DE4E8 / lbl_805DE400);
    }
    temp_r0 = lbl_805D6780;
    *(s32 *)((s8 *)arg0 + 0x45C) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    play_sound_effect(0x68A25, arg0 + 0x38, 0, 1);
    TBoss6Type2__sub_802BB768(arg0);
    if (*(u16 *)((s8 *)arg0 + 0x464) != 0xFFFF) {
        ((void (*)(void *, void *, u32, s32))create_flow_soul__11TBoss6Type2FPvPvPvPv)(arg0, arg0 + 0x620, *(u16 *)((s8 *)arg0 + 0x464), *(s32 *)((s8 *)arg0 + 0x45C));
        create__14TBoss6EffHyouiFPvPv(*(u16 *)((s8 *)arg0 + 0x464), 0, *(s32 *)((s8 *)arg0 + 0x45C));
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TBoss6Type2__sub_802BEC28(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u32 temp_r3;
    *(f32 *)((s8 *)arg0 + 0x41C) = (f32) (lbl_805DE4E4 - ((f32) *(s32 *)((s8 *)arg0 + 0x460) / (f32) *(s32 *)((s8 *)arg0 + 0x45C)));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x41C);
    if (temp_f1 < lbl_805DE4E0) {
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E0;
    } else if (temp_f1 > lbl_805DE4E4) {
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E4;
    }
    play_persistent_sound((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x418) = 1;
        *(f32 *)((s8 *)arg0 + 0x41C) = (f32) lbl_805DE4E4;
        if (check_target__11TBoss6Type2Fv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2Fv((void *) (arg0)) == 0) {
                play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = get_player_by_client_id((int) ((s32) *(u16 *)((s8 *)arg0 + 0x55C)));
            if (temp_r3 != 0U) {
                spawn_particle_effect((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        copy_anim_state__11TBoss6Type2Fv((void *) (arg0));
        destroy_part__11TBoss6Type2Fl((void *)((void *) (arg0)), (s32)((int) (6)));
        set_action_state__11TBoss6Type2FPv((void *)((void *) (arg0)), (s32)((int) (0x1B)));
    }
}
#pragma pop

void TBoss6Type2::spawn_death_soul() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    if ((s8) lbl_805D677C == 0) {
        lbl_805D677C = 1;
        lbl_805D6778 = (s32) (lbl_805DE4E8 / lbl_805DE400);
    }
    temp_r0 = lbl_805D6778;
    *(s32 *)((s8 *)arg0 + 0x45C) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0x420) = 0;
    play_sound_effect(0x68A25, arg0 + 0x38, 0, 1);
    spawn_particle_slot__11TBoss6Type2Fl(arg0, 6);
    TBoss6Type2__sub_802BB768(arg0);
    if (*(u16 *)((s8 *)arg0 + 0x464) != 0xFFFF) {
        ((void (*)(void *, void *, u32, s32))create_flow_soul__11TBoss6Type2FPvPvPvPv)(arg0, arg0 + 0x620, *(u16 *)((s8 *)arg0 + 0x464), *(s32 *)((s8 *)arg0 + 0x45C));
        create__14TBoss6EffHyouiFPvPv(*(u16 *)((s8 *)arg0 + 0x464), 0, *(s32 *)((s8 *)arg0 + 0x45C));
    }
}

void TBoss6Type2::check_state_0x460_eq4() { if (*(int*)((char*)this + 0x460) == 4) { drop_random_rocks__11TBoss6Type2Fll(this, (void*)0); } }

extern s32 lbl_805D6760;
extern u8 lbl_805D6764;
extern f32 lbl_805DE3FC;
extern f32 lbl_805DE4DC;

void TBoss6Type2::init_timer() {
    s32 temp_r0;
    if ((s8) lbl_805D6764 == 0) {
        lbl_805D6764 = 1;
        lbl_805D6760 = (s32) (lbl_805DE4DC / lbl_805DE3FC);
    }
    temp_r0 = lbl_805D6760;
    *(s32 *)((s8 *)this + 0x45C) = temp_r0;
    *(s32 *)((s8 *)this + 0x460) = temp_r0;
    *(s32 *)((s8 *)this + 0x470) = (s32) (*(s32 *)((s8 *)this + 0x470) + 1);
}

void TBoss6Type2::update_attack_sequence() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == (s32) (*(s32 *)((s8 *)arg0 + 0x45C) - 0x3C)) {
        play_sound_effect((int)(0x69C0F), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == (s32) (*(s32 *)((s8 *)arg0 + 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460);
    switch (temp_r0) {
    case 0xA0:
        spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(8));
        spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(9));
        spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(0xA));
        break;
    case 0x50:
        destroy_part__11TBoss6Type2Fl(arg0, 8);
        destroy_part__11TBoss6Type2Fl(arg0, 9);
        destroy_part__11TBoss6Type2Fl(arg0, 0xA);
        break;
    case 0x82:
        spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(0xB));
        spawn_particle_slot__11TBoss6Type2Fl((void *)(arg0), (s32)(0xC));
        break;
    case 0x49:
        destroy_part__11TBoss6Type2Fl(arg0, 0xB);
        destroy_part__11TBoss6Type2Fl(arg0, 0xC);
        break;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == 0x36) {
        set_shake_preset__11TCameraCtrlFl(1);
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        reset_attack_counter__11TBoss6Type2Fv(arg0);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x418) != 0) {
            set_action_state__11TBoss6Type2FPv((void *)(arg0), (s32)(0x1B));
            return;
        }
        set_action_state__11TBoss6Type2FPv((void *)(arg0), (s32)(0));
    }
}

void TBoss6Type2::update_state_34() { if (*(int*)((char*)this + 0x460) == 34) { drop_random_rocks__11TBoss6Type2Fll(this, (void*)0); } }

void init_attack_timers__11TBoss6Type2FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x45C) = 0xB4;
    *(s32 *)((s8 *)arg0 + 0x460) = 0xB4;
    play_sound_effect((int)(0x4006970E), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0((void *)(arg0));
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

void update_death_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 d;
    s32 t;
    TBoss6Type2__sub_802BA598(arg0, *(s32 *)((s8 *)arg0 + 0x460), *(s32 *)((s8 *)arg0 + 0x45C));
    d = *(s32 *)((s8 *)arg0 + 0x45C);
    s32 d16 = d - 0x16;
    if (*(s32 *)((s8 *)arg0 + 0x460) == d - 7) {
        play_sound_effect(0x4006A601, arg0 + 0x38, 0, 0);
    }
    if (*(s32 *)((s8 *)arg0 + 0x460) == d16) {
        play_sound_effect(0x40069E03, arg0 + 0x38, 0, 1);
    }
    trigger_screen_pos__11TBoss6Type2Fv(arg0);
    switch (*(s32 *)((s8 *)arg0 + 0x460)) {
    case 0x2D:
    case 0x37:
    case 0x41:
        spawn_particle_effect_with_flags(arg0 + 0x38, 0x221, 0x40);
        spawn_particle_effect_with_flags(arg0 + 0x38, 0x22F, 0x40);
        break;
    }
    if (*(s32 *)((s8 *)arg0 + 0x460) == 0x41) {
        set_shake_preset__11TCameraCtrlFl(1);
    }
    t = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = t;
    if (t < 0) {
        if (*(s32 *)((s8 *)arg0 + 0x418) != 0) {
            set_action_state__11TBoss6Type2FPv(arg0, 0x1C);
        } else {
            set_action_state__11TBoss6Type2FPv(arg0, 0);
        }
    }
}

void TBoss6Type2__sub_802BF3F4(void* p) { if (*(int*)((char*)p + 0x460) == 45) { drop_random_rocks__11TBoss6Type2Fll(p, (void*)0); } }

#include "types.h"
extern "C" {
void TBoss6Type2__sub_802BE738(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BE738(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x4D4);
    *(s32 *)((s8 *)arg0 + 0x45C) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    *(s32 *)((s8 *)arg0 + 0x420) = (s32) (*(s32 *)((s8 *)arg0 + 0x420) + 1);
}

void TBoss6Type2::init_timers_and_copy_pos() {
    u8 *arg0 = (u8 *)this;
  if (((s8) lbl_805D675C) == 0)
  {
    lbl_805D675C = 1;
    lbl_805D6758 = (s32) (lbl_805DE4F0 + ((*(const f32 *)&lbl_805DE4DC) / lbl_805DE3F8));
  }
  *((s32 *) (((s8 *) arg0) + 0x460)) = (*((s32 *) (((s8 *) arg0) + 0x45C)) = (s32) lbl_805D6758);
  VecCopy__FP3VecPC3Vec(arg0 + 0x50C, arg0 + 0x38);
  *((s32 *) (((s8 *) arg0) + 0x470)) = 0;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x418)))) == 0)
  {
    TBoss6Type2__sub_802BB768(arg0);
  }
}

void TBoss6Type2::update_timer() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x460) == (s32) (*(s32 *)((s8 *)arg0 + 0x45C) - 7)) {
        play_sound_effect((int) (0x4006A604), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x460) - 1;
    *(s32 *)((s8 *)arg0 + 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPv((void *)((void *) (arg0)), (s32)((int) (0x22)));
    }
}

}

void TBoss6Type2::update_when_timer_zero() { if (*(int*)((char*)this + 0x460) == 0) { send_action_packet__11TBoss6Type2FPvc((void*)(this), (void*)(*(void**)((char*)this + 0x47c))); } }

}
