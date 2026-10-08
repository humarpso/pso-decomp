#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;

extern "C" {
s32 update_attack_target__11TBoss6Type2FPv(void* a0);
s32 choose_random_motion__11TBoss6Type2FPv();
int send_action_packet__11TBoss6Type2FPvc(void*, void*);
void TBoss6Type2__sub_802BE648(u8 *arg0);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
void TBoss6Type2__sub_802BE6A0(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
extern s32 lbl_805D6758;
extern u8 lbl_805D675C;
extern const f32 lbl_805DE3F8;
extern f32 lbl_805DE4DC;
extern const f32 lbl_805DE4F0;
void TBoss6Type2__sub_802BF424(u8 *arg0);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK destroy_part__11TBoss6Type2Fii(void *, M2C_UNK);
M2C_UNK copy_anim_state__11TBoss6Type2FPv(void *);
s32 set_action_state__11TBoss6Type2FPvPv(void * a0, s32 a1);
extern const f32 lbl_805DE4E0;
extern const f32 lbl_805DE4E4;
void update_charge_timer__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK destroy_part__11TBoss6Type2Fii(void *, M2C_UNK);
M2C_UNK copy_anim_state__11TBoss6Type2FPv(void *);
s32 set_action_state__11TBoss6Type2FPvPv(void * a0, s32 a1);
M2C_UNK spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 check_target__11TBoss6Type2FPv(void *);
s32 is_target_valid__11TBoss6Type2FPv(void *);
extern const f32 lbl_805DE4E0;
extern const f32 lbl_805DE4E4;
void TBoss6Type2__sub_802BEC28(u8 *arg0);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
void spawn_rocks_around_players__11TBoss6Type2FPv(void *);
void select_next_state__11TBoss6Type2FPv(void *arg0);
void update_rock_spawn_state__11TBoss6Type2FPv(T2_802BE6D4 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 spawn_particle_slot__11TBoss6Type2FPvi(void *, s32);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
s32 is_target_valid__11TBoss6Type2FPv(void *);
M2C_UNK spawn_flow_soul__11TBoss6Type2Fiii(void *, void *, int, f32);
M2C_UNK create__14TBoss6EffHyouiFPvPvPv(int, int, int);
extern const f32 lbl_805DE404;
extern const f32 lbl_805DE4E8;
extern const f32 lbl_805DE4EC;
void start_flow_soul_effect__11TBoss6Type2FPv(Obj_802BE9AC *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
M2C_UNK create__14TBoss6EffHyouiFPvPvPv(int, int, int);
extern s32 lbl_805D6780;
extern u8 lbl_805D6784;
extern const f32 lbl_805DE400;
extern const f32 lbl_805DE4E8;
void TBoss6Type2__sub_802BEB78(u8 *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
s32 spawn_particle_slot__11TBoss6Type2FPvi(void *, s32);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
M2C_UNK create__14TBoss6EffHyouiFPvPvPv(int, int, int);
extern s32 lbl_805D6778;
extern u8 lbl_805D677C;
extern const f32 lbl_805DE400;
extern const f32 lbl_805DE4E8;
void spawn_death_soul__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BA598(void *, s32, s32);
M2C_UNK trigger_screen_pos__11TBoss6Type2FPv(void *);
s32 set_action_state__11TBoss6Type2FPvPv(void * a0, s32 a1);
void update_death_sequence__11TBoss6Type2FPv(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BF3F4(void* p);
void check_state_0x460_eq4__11TBoss6Type2FPv(void* p);
void init_attack_timers__11TBoss6Type2FPv(u8 *arg0);
void init_speed_from_ratio__11TBoss6Type2FPv(void *arg0);
void init_timer__11TBoss6Type2FPv(void *arg0);
void select_action__11TBoss6Type2FPv(void *arg0);
void select_next_state__11TBoss6Type2FPv(void *arg0);
void tick_timer_0x460__11TBoss6Type2FPv(void *arg0);
void update_attack_sequence__11TBoss6Type2FPv(u8 *arg0);
void update_attack_timer__11TBoss6Type2FPv(u8 *arg0);
void update_state_34__11TBoss6Type2FPv(void* p);
void update_timer__11TBoss6Type2FPv(u8 *arg0);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void update_zako_timer__11TBoss6Type2FPv(void *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK destroy_part__11TBoss6Type2Fii(void *, M2C_UNK);
s32 spawn_particle_slot__11TBoss6Type2FPvi(void *, s32);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 TBoss6Type2__sub_802BAA74();
M2C_UNK TBoss6Type2__sub_802BAD04(void *);
int drop_random_rocks__11TBoss6Type2Fii(void*, void*);
u16 TBoss6Type2__sub_802BB694();
M2C_UNK TBoss6Type2__sub_802BB768(void *);
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 choose_random_motion__11TBoss6Type2FPv();
s32 set_action_state__11TBoss6Type2FPvPv(void * a0 = 0, s32 a1 = 0);
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
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
u32 get_player_by_client_id(int);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
s32 check_target__11TBoss6Type2FPv(void *);
s32 get_phase__11TBoss6Type2FPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
s32 is_target_valid__11TBoss6Type2FPv(void *);
M2C_UNK reset_attack_counter__11TBoss6Type2FPv(void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_attack_target__11TBoss6Type2FPv(void* a0 = 0);
s32 update_zako__11TBoss6Type2FPv(void *);

void select_action__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0x23));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0x1B));
        return;
    }
    send_action_packet__11TBoss6Type2FPvc((void*)(arg0), (void*)(0));
}
void update_zako_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv((void *)(arg0), (s32)(0x22));
    }
}

void TBoss6Type2__sub_802BE648(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x1D) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *) (arg0)), (void*)((int) (choose_random_motion__11TBoss6Type2FPv())));
            return;
        }
        update_attack_target__11TBoss6Type2FPv((void*)(arg0));
    }
}

void TBoss6Type2__sub_802BE6A0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x460) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x504) = 0;
    TBoss6Type2__sub_802BB768(arg0);
}

void update_rock_spawn_state__11TBoss6Type2FPv(T2_802BE6D4 *arg0) {
    s32 d = arg0->f45C - arg0->f460;
    if (arg0->f460 >= 0x1E && d % 30 == 0) {
        spawn_rocks_around_players__11TBoss6Type2FPv(arg0);
        set_shake_preset__11TCameraCtrlFi((M2C_UNK)(1));
    }
    select_next_state__11TBoss6Type2FPv(arg0);
}

void tick_timer_0x460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv((void *)(arg0), (s32)(0x22));
    }
}
void select_next_state__11TBoss6Type2FPv(void *arg0) {
    u16 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (get_phase__11TBoss6Type2FPv() == 0xD) {
            if (is_phase_complete__11TBoss6Type2FPv(arg0) != 0) {
                send_action_packet__11TBoss6Type2FPvc((void*)((void *)(arg0)), (void*)(0x1A));
                return;
            }
            if (M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
                temp_r3 = is_falz_ready__11TBoss6Type2FPv(arg0);
                if (temp_r3 != 0xFFFF) {
                    M2C_FIELD(arg0, u16 *, 0x464) = temp_r3;
                    send_action_packet__11TBoss6Type2FPvc((void*)((void *)(arg0)), (void*)(0x19));
                    return;
                }
            }
            goto block_7;
        }
block_7:
        if (TBoss6Type2__sub_802BA9E4(arg0) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *)(arg0)), (void*)(0xD));
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            send_action_packet__11TBoss6Type2FPvc((void*)((void *)(arg0)), (void*)(0xE));
            return;
        }
        update_attack_target__11TBoss6Type2FPv((void*)(arg0));
    }
}

extern s32 lbl_805D6790;
extern u8 lbl_805D6794;
extern f32 lbl_805DE408;
extern f32 lbl_805DE4DC;

void init_speed_from_ratio__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6794 == 0) {
        lbl_805D6794 = 1;
        lbl_805D6790 = (s32) (lbl_805DE4DC / lbl_805DE408);
    }
    temp_r0 = lbl_805D6790;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
}

#pragma push
#pragma opt_common_subs off
void update_charge_timer__11TBoss6Type2FPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x41C) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x460) / (f32) M2C_FIELD(arg0, s32 *, 0x45C));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x41C);
    if (temp_f1 < lbl_805DE4E0) {
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E0;
    } else if (temp_f1 > lbl_805DE4E4) {
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E4;
    }
    play_persistent_sound((int)(0x4006A30B), (void *)((s32) arg0), (void *)(0U), (int)(0), (int)(0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x418) = 0;
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E0;
        copy_anim_state__11TBoss6Type2FPv((void *) (arg0));
        destroy_part__11TBoss6Type2Fii((void *)((void *) (arg0)), (M2C_UNK)((int) (7)));
        set_action_state__11TBoss6Type2FPvPv((void *)((void *) (arg0)), (s32)((int) (0)));
    }
}
#pragma pop

void start_flow_soul_effect__11TBoss6Type2FPv(Obj_802BE9AC *arg0) {
    static s32 dur = (s32)(lbl_805DE4E8 / lbl_805DE404);
    Vec_802BE9AC v;
    u32 pl;
    s32 d = dur;
    arg0->t45C = d;
    arg0->t460 = d;
    play_sound_effect(0x68A25, &arg0->pos, 0, 1);
    spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(7));
    TBoss6Type2__sub_802BB768(arg0);
    if (arg0->client != 0xFFFF) {
        pl = get_player_by_client_id(arg0->client);
        if (pl != 0) {
            VecCopy__FP3VecPC3Vec(&v, (void *)(pl + 0x38));
            v.y += lbl_805DE4EC;
            ((M2C_UNK (*)(void *, void *, int))spawn_flow_soul__11TBoss6Type2Fiii)(arg0, &v, arg0->t45C);
            spawn_particle_effect((void *)(pl + 0x38), 0x36);
        }
        create__14TBoss6EffHyouiFPvPvPv(arg0->client, 1, arg0->t45C);
        if (is_target_valid__11TBoss6Type2FPv(arg0) == 0) {
            play_sound_effect(0x40069E13, &arg0->pos, 0, 1);
        }
    }
}

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;

    play_persistent_sound((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        if (check_target__11TBoss6Type2FPv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2FPv((void *) (arg0)) == 0) {
                play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = get_player_by_client_id((int) (M2C_FIELD(arg0, u16 *, 0x55C)));
            if (temp_r3 != 0U) {
                spawn_particle_effect((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        set_action_state__11TBoss6Type2FPvPv((void *)((void *) (arg0)), (s32)((int) (0x1B)));
    }
}

void TBoss6Type2__sub_802BEB78(u8 *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6784 == 0) {
        lbl_805D6784 = 1;
        lbl_805D6780 = (s32) (lbl_805DE4E8 / lbl_805DE400);
    }
    temp_r0 = lbl_805D6780;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    play_sound_effect(0x68A25, arg0 + 0x38, 0, 1);
    TBoss6Type2__sub_802BB768(arg0);
    if (M2C_FIELD(arg0, u16 *, 0x464) != 0xFFFF) {
        ((void (*)(void *, void *, u32, s32))create_flow_soul__11TBoss6Type2FPvPvPvPv)(arg0, arg0 + 0x620, M2C_FIELD(arg0, u16 *, 0x464), M2C_FIELD(arg0, s32 *, 0x45C));
        create__14TBoss6EffHyouiFPvPvPv(M2C_FIELD(arg0, u16 *, 0x464), 0, M2C_FIELD(arg0, s32 *, 0x45C));
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TBoss6Type2__sub_802BEC28(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u32 temp_r3;
    M2C_FIELD(arg0, f32 *, 0x41C) = (f32) (lbl_805DE4E4 - ((f32) M2C_FIELD(arg0, s32 *, 0x460) / (f32) M2C_FIELD(arg0, s32 *, 0x45C)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x41C);
    if (temp_f1 < lbl_805DE4E0) {
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E0;
    } else if (temp_f1 > lbl_805DE4E4) {
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E4;
    }
    play_persistent_sound((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x418) = 1;
        M2C_FIELD(arg0, f32 *, 0x41C) = (f32) lbl_805DE4E4;
        if (check_target__11TBoss6Type2FPv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2FPv((void *) (arg0)) == 0) {
                play_sound_effect((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = get_player_by_client_id((int) ((s32) M2C_FIELD(arg0, u16 *, 0x55C)));
            if (temp_r3 != 0U) {
                spawn_particle_effect((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        copy_anim_state__11TBoss6Type2FPv((void *) (arg0));
        destroy_part__11TBoss6Type2Fii((void *)((void *) (arg0)), (M2C_UNK)((int) (6)));
        set_action_state__11TBoss6Type2FPvPv((void *)((void *) (arg0)), (s32)((int) (0x1B)));
    }
}
#pragma pop

void spawn_death_soul__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D677C == 0) {
        lbl_805D677C = 1;
        lbl_805D6778 = (s32) (lbl_805DE4E8 / lbl_805DE400);
    }
    temp_r0 = lbl_805D6778;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    play_sound_effect(0x68A25, arg0 + 0x38, 0, 1);
    spawn_particle_slot__11TBoss6Type2FPvi(arg0, 6);
    TBoss6Type2__sub_802BB768(arg0);
    if (M2C_FIELD(arg0, u16 *, 0x464) != 0xFFFF) {
        ((void (*)(void *, void *, u32, s32))create_flow_soul__11TBoss6Type2FPvPvPvPv)(arg0, arg0 + 0x620, M2C_FIELD(arg0, u16 *, 0x464), M2C_FIELD(arg0, s32 *, 0x45C));
        create__14TBoss6EffHyouiFPvPvPv(M2C_FIELD(arg0, u16 *, 0x464), 0, M2C_FIELD(arg0, s32 *, 0x45C));
    }
}

void check_state_0x460_eq4__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 4) { drop_random_rocks__11TBoss6Type2Fii(p, (void*)0); } }

extern s32 lbl_805D6760;
extern u8 lbl_805D6764;
extern f32 lbl_805DE3FC;
extern f32 lbl_805DE4DC;

void init_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6764 == 0) {
        lbl_805D6764 = 1;
        lbl_805D6760 = (s32) (lbl_805DE4DC / lbl_805DE3FC);
    }
    temp_r0 = lbl_805D6760;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
}

void update_attack_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x3C)) {
        play_sound_effect((int)(0x69C0F), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460);
    switch (temp_r0) {
    case 0xA0:
        spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(8));
        spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(9));
        spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(0xA));
        break;
    case 0x50:
        destroy_part__11TBoss6Type2Fii(arg0, 8);
        destroy_part__11TBoss6Type2Fii(arg0, 9);
        destroy_part__11TBoss6Type2Fii(arg0, 0xA);
        break;
    case 0x82:
        spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(0xB));
        spawn_particle_slot__11TBoss6Type2FPvi((void *)(arg0), (s32)(0xC));
        break;
    case 0x49:
        destroy_part__11TBoss6Type2Fii(arg0, 0xB);
        destroy_part__11TBoss6Type2Fii(arg0, 0xC);
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0x36) {
        set_shake_preset__11TCameraCtrlFi(1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        reset_attack_counter__11TBoss6Type2FPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
            set_action_state__11TBoss6Type2FPvPv((void *)(arg0), (s32)(0x1B));
            return;
        }
        set_action_state__11TBoss6Type2FPvPv((void *)(arg0), (s32)(0));
    }
}

void update_state_34__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 34) { drop_random_rocks__11TBoss6Type2Fii(p, (void*)0); } }

void init_attack_timers__11TBoss6Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x460) = 0xB4;
    play_sound_effect((int)(0x4006970E), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0((void *)(arg0));
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

void update_death_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 d;
    s32 t;
    TBoss6Type2__sub_802BA598(arg0, M2C_FIELD(arg0, s32 *, 0x460), M2C_FIELD(arg0, s32 *, 0x45C));
    d = M2C_FIELD(arg0, s32 *, 0x45C);
    s32 d16 = d - 0x16;
    if (M2C_FIELD(arg0, s32 *, 0x460) == d - 7) {
        play_sound_effect(0x4006A601, arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x460) == d16) {
        play_sound_effect(0x40069E03, arg0 + 0x38, 0, 1);
    }
    trigger_screen_pos__11TBoss6Type2FPv(arg0);
    switch (M2C_FIELD(arg0, s32 *, 0x460)) {
    case 0x2D:
    case 0x37:
    case 0x41:
        spawn_particle_effect_with_flags(arg0 + 0x38, 0x221, 0x40);
        spawn_particle_effect_with_flags(arg0 + 0x38, 0x22F, 0x40);
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x460) == 0x41) {
        set_shake_preset__11TCameraCtrlFi(1);
    }
    t = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = t;
    if (t < 0) {
        if (M2C_FIELD(arg0, s32 *, 0x418) != 0) {
            set_action_state__11TBoss6Type2FPvPv(arg0, 0x1C);
        } else {
            set_action_state__11TBoss6Type2FPvPv(arg0, 0);
        }
    }
}

void TBoss6Type2__sub_802BF3F4(void* p) { if (*(int*)((char*)p + 0x460) == 45) { drop_random_rocks__11TBoss6Type2Fii(p, (void*)0); } }

#include "types.h"
extern "C" {
void TBoss6Type2__sub_802BE738(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_802BE738(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D4);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
}

void TBoss6Type2__sub_802BF424(u8 *arg0) {
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

void update_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 7)) {
        play_sound_effect((int) (0x4006A604), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type2FPvPv((void *)((void *) (arg0)), (s32)((int) (0x22)));
    }
}

}

void update_when_timer_zero__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 0) { send_action_packet__11TBoss6Type2FPvc((void*)(p), (void*)(*(void**)((char*)p + 0x47c))); } }

}
