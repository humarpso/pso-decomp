#include "types.h"
#include "pso/boss/TBoss6Type1.h"

extern "C" {

struct RecoveredGlobal_802B2A94_lbl_80470C98 { s32 value; u8 remaining[0x8]; };

typedef char RecoveredGlobal_802B2A94_lbl_80470C98_size[sizeof(RecoveredGlobal_802B2A94_lbl_80470C98) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B2724_lbl_804DF4C4 { s32 value; u8 remaining[0x8]; };

typedef char RecoveredGlobal_802B2724_lbl_804DF4C4_size[sizeof(RecoveredGlobal_802B2724_lbl_804DF4C4) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B2724_lbl_804DF4D0 { s32 value; u8 remaining[0xC]; };

typedef char RecoveredGlobal_802B2724_lbl_804DF4D0_size[sizeof(RecoveredGlobal_802B2724_lbl_804DF4D0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802B2400_lbl_80470CA4 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B2CB4_lbl_80470C74 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B24B4_lbl_80470CB0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802B2D68_lbl_80470C80 {
    s32 value;
    u8 remaining[0x8];
};

typedef char RecoveredGlobal_802B2400_lbl_80470CA4_size[sizeof(RecoveredGlobal_802B2400_lbl_80470CA4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802B24B4_lbl_80470CB0_size[sizeof(RecoveredGlobal_802B24B4_lbl_80470CB0) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802B2CB4_lbl_80470C74_size[sizeof(RecoveredGlobal_802B2CB4_lbl_80470C74) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802B2D68_lbl_80470C80_size[sizeof(RecoveredGlobal_802B2D68_lbl_80470C80) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B3BEC_lbl_80470CE0 {
    s32 value;
    u8 remaining[0x8];
};

struct Vec_802B4898 { f32 x, y, z; };

struct Boss_802B4898 {
    u8 pad0[0x38];
    Vec_802B4898 pos;
    u8 pad44[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    u8 pad64[0x4D4 - 0x64];
    f32 f4D4, f4D8;
    u8 pad4DC[0x4E8 - 0x4DC];
    f32 f4E8;
};

struct Vec_802B49A4 { f32 x, y, z; };

struct Params_802B49A4 {
    u8 pad[0xC];
    Vec_802B49A4 pos;
    s32 a;
    s32 b;
    s32 c;
    Vec_802B49A4 rot;
    s32 d;
    s32 e;
};

typedef char RecoveredGlobal_802B3BEC_lbl_80470CE0_size[sizeof(RecoveredGlobal_802B3BEC_lbl_80470CE0) == 0xC ? 1 : -1];

void VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
void toggle_particle_effect__10TObjPlayerFv();
s32 create__10TObjMapCsnFl(void *);
void end_effect_render__13TParticleCtrlFv();
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(s32, void *, s32, s32);
s32 set_state_2__14TBoss6PlotFalzFv(s32);
s32 reset_state__14TBoss6PlotFalzFv(s32);
s32 activate_warp__14TBoss6PlotFalzFv(s32);
s32 free_child__14TBoss6PlotFalzFv(s32);
void update_camera_target__14TBoss6PlotFalzFv();
void TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 is_normal_difficulty();
void init_charge_attack__11TBoss6Type1FPv(u8 *arg0);
void reset_effects__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B245C(void *arg0);
void TBoss6Type1__sub_802B24B4(u8 *arg0);
void init_work__11TBoss6Type1FPv(u8 *arg0);
void init_charge__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2724(u8 *arg0);
void update_hit_timer__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2A94(u8 *arg0);
void TBoss6Type1__sub_802B2CB4(u8 *arg0);
void TBoss6Type1__sub_802B2D68(u8 *arg0);
void init_state__11TBoss6Type1FPv(u8 *arg0);
void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2F00(u8 *arg0);
void TBoss6Type1__sub_802B3178(void* p);
void TBoss6Type1__sub_802B31E4(u8 *arg0);
void TBoss6Type1__sub_802B343C(void *arg0);
void TBoss6Type1__sub_802B3564(void *arg0);
void TBoss6Type1__sub_802B381C(void *arg0);
void TBoss6Type1__sub_802B3B94(void *arg0);
void release_object__11TBoss6Type1FPv(void* p);
s32 TBoss6Type1__sub_802B4A9C(void *);
s32 TBoss6Type1__sub_802B4B04(void *);
int release_effect_slot__11TBoss6Type1Fl(void*, void*);
int spawn_effect_slot__11TBoss6Type1Fl(void*, void*);
s32 rotate_around_center__11TBoss6Type1Fll(void *, int, int);
s32 interpolate_pos_to_target__11TBoss6Type1Fll(void *, s32, s32);
s32 ease_toward_target__11TBoss6Type1Fll(void *, s32, s32);
s32 TBoss6Type1__sub_802B5140(void *, s32, s32);
s32 count_matches__11TBoss6Type1Fll(void *, s32, s32);
int clamp_to_arena_radius__11TBoss6Type1FPvPvf(void*, void*);
s32 TBoss6Type1__sub_802B5598(void *, void *);
s32 calc_grid_cell_position__11TBoss6Type1FPvPv(void *, void *);
s32 is_timer_expired__11TBoss6Type1Fv();
s32 is_field3F8_over_0x20__11TBoss6Type1Fv(void *);
s32 is_field4b0_delta_reached__11TBoss6Type1Fv();
s32 is_ready__11TBoss6Type1Fv(void *);
s32 check_field4b0_threshold__11TBoss6Type1Fv(void *);
int is_time_up__11TBoss6Type1Fv(void *);
s32 set_flag_on_threshold__11TBoss6Type1Fv(void *);
s32 TBoss6Type1__sub_802B6060(void *);
int TBoss6Type1__sub_802B626C(void*);
s32 reset_param__11TBoss6Type1Fv(void *);
s32 decrease_field_clamped_min__11TBoss6Type1Fv(void *);
s32 increase_field_clamped_max__11TBoss6Type1Fv(void *);
int TBoss6Type1__sub_802B6504(void*);
void spawn_grav_ball__11TBoss6Type1FPv(void *);
s32 TBoss6Type1__sub_802B6944(void *);
s32 damage_players_in_range__11TBoss6Type1FPv();
s32 TBoss6Type1__sub_802B6C30(void *);
s32 TBoss6Type1__sub_802B715C();
s32 TBoss6Type1__sub_802B73AC();
s32 update_beam_attack__11TBoss6Type1FPv();
int latch_phase_counter__11TBoss6Type1Fv(void*);
void draw_part_motions__11TBoss6Type1Fv(void *);
s32 set_motion_set__11TBoss6Type1Fl(void *, s32);
s32 set_action_state__11TBoss6Type1FPvi(void *, int);
s32 TBoss6Type1__sub_802B8A70(void *);
s32 TBoss6Type1__sub_802B8BB4(void *);
int TBoss6Type1__sub_802B8E1C(void*);
void do_attack__11TBoss6Type1Fv(void *);
int send_flow_action_if_idle__11TBoss6Type1FPvc(void*, void*);
s32 rand(void);
s32 set_matrix_identity(s32);
s32 rotate_vector_by_matrix(s32, void *, void *);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(Vec_802B4898 *);

extern const f32 TBoss6Type1__data_805DE2D0;
extern s32 lbl_80470C74[];
extern RecoveredGlobal_802B2D68_lbl_80470C80 lbl_80470C80;
extern s32 lbl_80470C8C[];
extern RecoveredGlobal_802B2A94_lbl_80470C98 lbl_80470C98;
extern s32 lbl_80470CA4[];
extern RecoveredGlobal_802B24B4_lbl_80470CB0 lbl_80470CB0;
extern RecoveredGlobal_802B3BEC_lbl_80470CE0 lbl_80470CE0;
extern u8 lbl_80471020[];
extern u8 lbl_8047102C[];
extern RecoveredGlobal_802B2724_lbl_804DF4C4 lbl_804DF4C4;
extern RecoveredGlobal_802B2724_lbl_804DF4D0 lbl_804DF4D0;
extern const f32 lbl_805DE2A8;
extern const f32 lbl_805DE2AC;
extern const f32 lbl_805DE2B0;
extern const f32 lbl_805DE2B4;
extern const f32 lbl_805DE2B8;
extern const f32 lbl_805DE2BC;
extern const f32 lbl_805DE2C0;
extern const f32 lbl_805DE2C4;

void TBoss6Type1::enter_flag800_state() {
    if (*(s32 *)((s8 *)this + 0x30) & 0x800) {
        send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)(0x28));
        return;
    }
    send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)(1));
}

void TBoss6Type1::update_attack_countdown() {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    ease_toward_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r3 = *(s32 *)((s8 *)this + 0x40C) - 2;
    temp_r0 = *(s32 *)((s8 *)this + 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        set_motion_set__11TBoss6Type1Fl(this, 6);
    } else if (temp_r0 == temp_r3b) {
        *(s32 *)((s8 *)this + 0x438) = 1;
    }
    temp_r0_2 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1Fv((void*)(this));
        *(s32 *)((s8 *)this + 0x414) = 0;
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(1));
    }
}

void init_charge_attack__11TBoss6Type1FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x3C;
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
}

void TBoss6Type1::update_countdown_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == (s32) ((f32) *(s32 *)((s8 *)arg0 + 0x40C) - lbl_805DE2A8)) {
        release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(3));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x27));
    }
}

void TBoss6Type1::update_if_ready() {
    if (((s32) *(s32 *)((s8 *)this + 0x410) == 0) || (is_timer_expired__11TBoss6Type1Fv() != 0)) {
        TBoss6Type1__sub_802B8E1C((void*)(this));
    }
}

void TBoss6Type1::set_phase_555() { *(int*)((char*)this + 0x40c) = 555; *(int*)((char*)this + 0x410) = 555; TBoss6Type1__sub_802B6504(this); release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)0)); release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)1)); spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)3)); }

void TBoss6Type1::update_countdown() {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(0x27));
    }
}

void TBoss6Type1::update_state() {
    if ((s32) *(s32 *)((s8 *)this + 0x410) == 0) {
        if (is_normal_difficulty() != 0) {
            TBoss6Type1__sub_802B8E1C((void*)(this));
            return;
        }
        if (is_field3F8_over_0x20__11TBoss6Type1Fv(this) != 0) {
            send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)(0x25));
            return;
        }
        TBoss6Type1__sub_802B8E1C((void*)(this));
    }
}

void reset_effects__11TBoss6Type1FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &(*(RecoveredGlobal_802B2400_lbl_80470CA4 *)&lbl_80470CA4).value);
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(1));
}

void TBoss6Type1__sub_802B245C(void *arg0) {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(arg0, *(s32 *)((s8 *)arg0 + 0x410), *(s32 *)((s8 *)arg0 + 0x40C));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x14 - (*(u8 *)((s8 *)arg0 + 0x41C) & 1)));
    }
}

void TBoss6Type1__sub_802B24B4(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470CB0.value);
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(1));
}

void TBoss6Type1::update_attack_timer() {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    ease_toward_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r3 = *(s32 *)((s8 *)this + 0x40C) - 2;
    temp_r0 = *(s32 *)((s8 *)this + 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        set_motion_set__11TBoss6Type1Fl(this, 6);
    } else if (temp_r0 == temp_r3b) {
        *(s32 *)((s8 *)this + 0x438) = 0;
    }
    temp_r0_2 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(0x23));
    }
}

void init_work__11TBoss6Type1FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470CA4));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x39403)), (void*)((void *)(arg0 + 0x584)), (void*)((int)(0)), (void*)((int)(1)));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
    release_effect_slot__11TBoss6Type1Fl((void*)((void *)(arg0)), (void*)((int)(0)));
    spawn_effect_slot__11TBoss6Type1Fl((void*)((void *)(arg0)), (void*)((int)(1)));
}

void TBoss6Type1::tick_attack_sequence() {
    s32 temp_r0;
    s32 temp_r0_2;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410);
    if (temp_r0 == 0x23) {
        set_motion_set__11TBoss6Type1Fl(this, 6);
    } else if (temp_r0 == 0x19) {
        *(s32 *)((s8 *)this + 0x438) = 1;
    }
    temp_r0_2 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1Fv((void*)(this));
        *(s32 *)((s8 *)this + 0x414) = 0;
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(1));
    }
}

void init_charge__11TBoss6Type1FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x3C;
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
    release_effect_slot__11TBoss6Type1Fl((void*)((void *)(arg0)), (void*)((int)(0)));
    spawn_effect_slot__11TBoss6Type1Fl((void*)((void *)(arg0)), (void*)((int)(1)));
}

void TBoss6Type1__sub_802B2724(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410);
    if (temp_r0 == 0x4A) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_804DF4C4.value);
    } else if (temp_r0 == 0x3B) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_804DF4D0.value);
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x410);
    if (temp_r4 <= 0x4A) {
        if (temp_r4 > 0x3B) {
            interpolate_pos_to_target__11TBoss6Type1Fll(arg0, temp_r4 - 0x3B, 0xF);
        } else {
            interpolate_pos_to_target__11TBoss6Type1Fll(arg0, temp_r4, *(s32 *)((s8 *)arg0 + 0x40C));
        }
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x27));
    }
}

void TBoss6Type1::update_if_idle() { if (*(int*)((char*)this + 0x410) == 0) { TBoss6Type1__sub_802B8E1C((void*)(this)); } }

void TBoss6Type1::enter_release_state() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x5A;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x5A;
    ((s32 (*)(void))release_object__11TBoss6Type1FPv)();
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003B515), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
    activate_warp__14TBoss6PlotFalzFv(*(s32 *)((s8 *)arg0 + 0x3F8));
    reset_state__14TBoss6PlotFalzFv(*(s32 *)((s8 *)arg0 + 0x3F8));
    if (count_matches__11TBoss6Type1Fll(arg0, 0x1F, 4) == 0) {
        ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x68A24), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    }
}

void TBoss6Type1::tick_state_410_timer() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(0x20));
    }
}

void TBoss6Type1::init_move_attack() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    damage_players_in_range__11TBoss6Type1FPv();
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C19), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
}

void update_hit_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r3;

    play_persistent_sound((int)(0x40032614), (void *)(arg0), (void *)(0), (int)(0), (int)(0));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == 0x3C) {
        ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x39403), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    }
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x410);
    if (temp_r3 > 0) {
        *(s32 *)((s8 *)arg0 + 0x410) = (s32) (temp_r3 - 1);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x410) = 0;
}

void TBoss6Type1::update_attack_state() {
    if ((s32) *(s32 *)((s8 *)this + 0x410) == 0) {
        if (is_field4b0_delta_reached__11TBoss6Type1Fv() != 0) {
            send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)(0x20));
            return;
        }
        send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)(0x1F));
    }
}

void TBoss6Type1::advance_plot_to_state2() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x12C;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x12C;
    free_child__14TBoss6PlotFalzFv(*(s32 *)((s8 *)arg0 + 0x3F8));
    set_state_2__14TBoss6PlotFalzFv(*(s32 *)((s8 *)arg0 + 0x3F8));
    spawn_map_csn();
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C13), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
    latch_phase_counter__11TBoss6Type1Fv((void*)(arg0));
}

void TBoss6Type1__sub_802B2A94(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    interpolate_pos_to_target__11TBoss6Type1Fll(arg0, *(s32 *)((s8 *)arg0 + 0x410), *(s32 *)((s8 *)arg0 + 0x40C));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == (s32) ((f32) *(s32 *)((s8 *)arg0 + 0x40C) - lbl_805DE2AC)) {
        *(s32 *)((s8 *)arg0 + 0x438) = 0;
    }
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x3C);
    if ((temp_f1 <= lbl_805DE2B0) && (temp_f1 > lbl_805DE2B4)) {
        set_motion_set__11TBoss6Type1Fl((void *)(arg0), (s32)(1));
    } else {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x410);
        if (temp_r0 == 0x46) {
            set_motion_set__11TBoss6Type1Fl((void *)(arg0), (s32)(7));
        } else if (temp_r0 == 0xF) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470C98.value);
        }
    }
    play_persistent_sound((int)(0x4003B012), (void *)((s32) arg0), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x1E));
    }
}

void TBoss6Type1::init_params() {
    spawn_grav_ball__11TBoss6Type1FPv(this);
    *(u32 *)((s8 *)this + 0x40C) = 300;
    *(u32 *)((s8 *)this + 0x410) = 300;
    VecCopy__FP3VecPC3Vec((void *)((void *)((char *)this + 1056)), (void *)(lbl_80470C8C));
    spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)(1));
}

void TBoss6Type1::update_phase() {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if ((temp_r0 < 0) && (is_normal_difficulty() == 0)) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(0x1D));
    }
}

void TBoss6Type1::trigger_falz_phase() {
    if (((s32) *(s32 *)((s8 *)this + 0x410) == 0) && (is_normal_difficulty() != 0)) {
        TBoss6Type1__sub_802B8E1C((void*)(this));
    }
}

void TBoss6Type1__sub_802B2CB4(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &(*(RecoveredGlobal_802B2CB4_lbl_80470C74 *)&lbl_80470C74).value);
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(1));
}

void TBoss6Type1::tick_flee_countdown() {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(0xF - (*(u8 *)((s8 *)this + 0x41C) & 1)));
    }
}

void TBoss6Type1__sub_802B2D68(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470C80.value);
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)((s32) arg0), (void*)(1));
}

void TBoss6Type1::update_timer_transition() {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)((void *)(this)), (int)((int)(0x1B)));
    }
}

void init_state__11TBoss6Type1FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470C74));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x39403), (void*)(arg0 + 0x584), (void*)(0), (void*)(1));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
}

void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    play_persistent_sound((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)((void *)(arg0)), (int)((int)(0x27)));
    }
}

void TBoss6Type1__sub_802B2F00(u8 *arg0) {
    if ((((f32) *(s32 *)((s8 *)arg0 + 0x410) / (f32) *(s32 *)((s8 *)arg0 + 0x40C)) < lbl_805DE2B8) && (check_field4b0_threshold__11TBoss6Type1Fv(arg0) != 0)) {
        do_attack__11TBoss6Type1Fv(arg0);
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == 0) {
        if (TBoss6Type1__sub_802B6060(arg0) != 0) {
            send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(arg0), (void*)(0x1A));
            return;
        }
        send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(arg0), (void*)(0x22));
    }
}

void TBoss6Type1::init_hp_and_state() { *(int*)((char*)this + 0x40c) = 300; *(int*)((char*)this + 0x410) = 300; spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)0)); release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)1)); }

void TBoss6Type1::update_charge() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll((void *)(arg0), (s32)(*(s32 *)((s8 *)arg0 + 0x410)), (s32)(*(s32 *)((s8 *)arg0 + 0x40C)));
    play_persistent_sound((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x27));
    }
}

void TBoss6Type1::start_action_if_idle() { if (*(int*)((char*)this + 0x410) == 0) { send_flow_action_if_idle__11TBoss6Type1FPvc((void*)(this), (void*)((void*)25)); } }

void TBoss6Type1::set_phase_90() { *(int*)((char*)this + 0x40c) = 90; *(int*)((char*)this + 0x410) = 90; latch_phase_counter__11TBoss6Type1Fv((void*)((void*)(this))); spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)0)); release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)1)); }

void TBoss6Type1::update_timer() {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = *(s32 *)((s8 *)this + 0x410);
    temp_r4 = *(s32 *)((s8 *)this + 0x40C) - 0xF;
    if (temp_r0 >= temp_r4) {
        interpolate_pos_to_target__11TBoss6Type1Fll((void *)(this), (s32)(temp_r0 - temp_r4), (s32)(0xF));
    }
    set_flag_on_threshold__11TBoss6Type1Fv(this);
    temp_r0_2 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1Fv((void*)((void*)(this)));
        *(s32 *)((s8 *)this + 0x414) = 1;
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(1));
    }
}

void TBoss6Type1__sub_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; clamp_to_arena_radius__11TBoss6Type1FPvPvf(p, (char*)p + 0x420); ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((void*)231170), (void*)((void*)0), (void*)((void*)0), (void*)((void*)0)); spawn_effect_slot__11TBoss6Type1Fl((void*)(p), (void*)((void*)0)); release_effect_slot__11TBoss6Type1Fl((void*)(p), (void*)((void*)1)); }

void TBoss6Type1__sub_802B31E4(u8 *arg0) {
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    temp_r5 = *(s32 *)((s8 *)arg0 + 0x4A0);
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x49C);
    temp_r6 = *(s32 *)((s8 *)arg0 + 0x410);
    temp_r0 = temp_r5 + 0x1E;
    temp_r0 = temp_r4 + temp_r0;
    temp_r0 -= temp_r4;
    temp_r3 = temp_r0 - temp_r5;
    if (temp_r6 == temp_r0) {
        set_motion_set__11TBoss6Type1Fl((void *) (arg0), 0x11);
    } else if (temp_r6 == temp_r3) {
        release_effect_slot__11TBoss6Type1Fl((void *) (arg0), (void *) (2));
        set_motion_set__11TBoss6Type1Fl((void *) (arg0), 0x13);
    }
    rotate_around_center__11TBoss6Type1Fll((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x410)), (int) (*(s32 *)((s8 *)arg0 + 0x40C)));
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x410);
    if ((temp_r3 <= (s32) *(s32 *)((s8 *)arg0 + 0x4A0)) && (temp_r3 >= 0x1E)) {
        increase_field_clamped_max__11TBoss6Type1Fv((void *) (arg0));
        TBoss6Type1__sub_802B6C30((void *) (arg0));
    } else {
        decrease_field_clamped_min__11TBoss6Type1Fv((void *) (arg0));
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) >= 0x1E) {
        var_r3 = 0x4003B50C;
        if (*(f32 *)((s8 *)arg0 + 0x4DC) > lbl_805DE2BC) {
            var_r3 = 0x4003AD0D;
        }
        play_persistent_sound((int) (var_r3), (void *) (arg0), (void *) (arg0 + 0x5CC), (int) (0), (int) (1));
    }
    if (*(f32 *)((s8 *)arg0 + 0x4DC) > lbl_805DE2BC) {
        TBoss6Type1__sub_802B4B04((void *) (arg0));
    } else {
        TBoss6Type1__sub_802B4A9C((void *) (arg0));
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        reset_param__11TBoss6Type1Fv((void *) (arg0));
        set_action_state__11TBoss6Type1FPvi((void *) (arg0), (int) (1));
    }
}

void TBoss6Type1::update_attack_timer2() {
    s32 temp_r0;

    TBoss6Type1__sub_802B715C();
    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        set_action_state__11TBoss6Type1FPvi((void *)(this), (int)(1));
    }
}

void TBoss6Type1::init_dice_state() { *(int*)((char*)this + 0x40c) = 62; *(int*)((char*)this + 0x410) = 62; release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)0)); spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)1)); }

void TBoss6Type1__sub_802B343C(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B73AC();
    interpolate_pos_to_target__11TBoss6Type1Fll(arg0, *(s32 *)((s8 *)arg0 + 0x410), *(s32 *)((s8 *)arg0 + 0x40C));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x374);
        switch (temp_r4) {
        case 11:
            set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x1C));
            return;
        case 16:
            set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(0x24));
            return;
        default:
            set_action_state__11TBoss6Type1FPvi((void *)(arg0), (int)(temp_r4 - 1));
            break;
        }
    }
}

void TBoss6Type1::init_action_timer() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3E;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x374);
    if ((temp_r0 == 0xB) || (temp_r0 == 0x10)) {
        *(s32 *)((s8 *)arg0 + 0x40C) = (s32) (*(s32 *)((s8 *)arg0 + 0x40C) + 0x1E);
    }
    *(s32 *)((s8 *)arg0 + 0x410) = (s32) *(s32 *)((s8 *)arg0 + 0x40C);
    calc_grid_cell_position__11TBoss6Type1FPvPv(arg0, arg0 + 0x420);
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C21), (void*)(arg0 + 0x5E4), (void*)(0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B3564(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    update_beam_attack__11TBoss6Type1FPv();
    interpolate_pos_to_target__11TBoss6Type1Fll(arg0, *(s32 *)((s8 *)arg0 + 0x410), *(s32 *)((s8 *)arg0 + 0x40C));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x374);
        if (temp_r4 == 8) {
            ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(arg0, 1);
            return;
        }
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(arg0, temp_r4 - 1);
    }
}

void TBoss6Type1::init_attack_timer() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3E;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 8) {
        *(s32 *)((s8 *)arg0 + 0x40C) = (s32) (*(s32 *)((s8 *)arg0 + 0x40C) + 0x1E);
    }
    *(s32 *)((s8 *)arg0 + 0x410) = (s32) *(s32 *)((s8 *)arg0 + 0x40C);
    TBoss6Type1__sub_802B5598(arg0, arg0 + 0x420);
    play_sound_effect(0x4003BF07, arg0 + 0x5E4, 0, 0);
    ((s32 (*)(void *, s32))release_effect_slot__11TBoss6Type1Fl)(arg0, 0);
    ((s32 (*)(void *, s32))spawn_effect_slot__11TBoss6Type1Fl)(arg0, 1);
}

void TBoss6Type1::update_timer_state() {
    s32 temp_r0;
    s32 temp_r4;

    update_beam_attack__11TBoss6Type1FPv();
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = *(s32 *)((s8 *)this + 0x374);
        if (temp_r4 == 5) {
            ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(this, 1);
            return;
        }
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(this, temp_r4 - 1);
    }
}

void TBoss6Type1::set_phase_timer_3E() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3E;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 5) {
        *(s32 *)((s8 *)arg0 + 0x40C) = (s32) (*(s32 *)((s8 *)arg0 + 0x40C) + 0x1E);
    }
    *(s32 *)((s8 *)arg0 + 0x410) = (s32) *(s32 *)((s8 *)arg0 + 0x40C);
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x3E;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x3E;
    play_sound_effect(0x4003BF07, arg0 + 0x5E4, 0, 0);
    ((s32 (*)(void *, s32))spawn_effect_slot__11TBoss6Type1Fl)(arg0, 0);
    ((s32 (*)(void *, s32))release_effect_slot__11TBoss6Type1Fl)(arg0, 1);
}

void TBoss6Type1::update_action_timer() {
    s32 temp_r0;
    s32 temp_r0_2;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410);
    switch (temp_r0) {
    case 0x48:
    case 0x3E:
    case 0x52:
        TBoss6Type1__sub_802B6944(this);
        break;
    }
    temp_r0_2 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(this, 1);
    }
}

void TBoss6Type1::init_hp_state() { *(int*)((char*)this + 0x40c) = 90; *(int*)((char*)this + 0x410) = 90; release_effect_slot__11TBoss6Type1Fl(this, (void*)0); spawn_effect_slot__11TBoss6Type1Fl(this, (void*)1); }

void TBoss6Type1__sub_802B381C(void *arg0) {
    s32 temp_r0;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == 0x3E) {
        ((s32 (*)(void))TBoss6Type1__sub_802B6944)();
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(arg0, 1);
    }
}

void TBoss6Type1::init_state_90() { *(int*)((char*)this + 0x40c) = 90; *(int*)((char*)this + 0x410) = 90; spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)0)); release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)((void*)1)); }

void TBoss6Type1::update_attack_countdown_reset() {
    s32 temp_r0;

    interpolate_pos_to_target__11TBoss6Type1Fll(this, *(s32 *)((s8 *)this + 0x410), *(s32 *)((s8 *)this + 0x40C));
    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(this, 1);
    }
}

void TBoss6Type1::start_attack() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x414) == 0) {
        *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
        *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    } else {
        *(s32 *)((s8 *)arg0 + 0x40C) = 0x1E;
        *(s32 *)((s8 *)arg0 + 0x410) = 0x1E;
    }
    play_sound_effect(0x40039706, arg0 + 0x38, 0, 0);
    release_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(0));
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
    if (count_matches__11TBoss6Type1Fll(arg0, 0x19, 4) > 0) {
        ((s32 (*)(void *))latch_phase_counter__11TBoss6Type1Fv)(arg0);
        play_sound_effect(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void TBoss6Type1::tick_countdown() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x410) - 1;
    *(s32 *)((s8 *)this + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(this, 0x27);
    }
}

void TBoss6Type1::choose_next_action() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x414) == 0) {
            if (is_ready__11TBoss6Type1Fv(arg0) != 0) {
                ((s32 (*)(void *, int))send_flow_action_if_idle__11TBoss6Type1FPvc)((void *) (arg0), (int) (0x17));
                return;
            }
            if (((s32 (*)(void *, int, int))count_matches__11TBoss6Type1Fll)((void *) (arg0), (int) (2), (int) (0x10)) == 0) {
                do_attack__11TBoss6Type1Fv(arg0);
                return;
            }
            if (((((s32 (*)(void *, int, int))count_matches__11TBoss6Type1Fll)((void *) (arg0), (int) (3), (int) (0xA)) + ((s32 (*)(void *, int, int))count_matches__11TBoss6Type1Fll)((void *) (arg0), (int) (5), (int) (0xA))) == 0) || ((lbl_805DE2C0 * (f32) rand()) < lbl_805DE2C4)) {
                TBoss6Type1__sub_802B8BB4((void *) (arg0));
                return;
            }
            do_attack__11TBoss6Type1Fv(arg0);
            return;
        }
        if (is_time_up__11TBoss6Type1Fv(arg0) != 0) {
            TBoss6Type1__sub_802B8A70((void *) (arg0));
            return;
        }
        TBoss6Type1__sub_802B8BB4((void *) (arg0));
    }
}

void TBoss6Type1::init_attack_timers() {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) *(s32 *)((s8 *)this + 0x414) == 0) {
        *(s32 *)((s8 *)this + 0x40C) = 0x5A;
        *(s32 *)((s8 *)this + 0x410) = 0x5A;
    } else if ((s32) *(s32 *)((s8 *)this + 0x4AC) != 0) {
        temp_r0 = *(s32 *)((s8 *)this + 0x4A8);
        *(s32 *)((s8 *)this + 0x40C) = temp_r0;
        *(s32 *)((s8 *)this + 0x410) = temp_r0;
    } else {
        temp_r0_2 = *(s32 *)((s8 *)this + 0x4A4);
        *(s32 *)((s8 *)this + 0x40C) = temp_r0_2;
        *(s32 *)((s8 *)this + 0x410) = temp_r0_2;
    }
    spawn_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)(0));
    release_effect_slot__11TBoss6Type1Fl((void*)(this), (void*)(1));
}

void TBoss6Type1__sub_802B3B94(void *arg0) {
    s32 temp_r0;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x410) < 0x1E) {
        TBoss6Type1__sub_802B5140(arg0, *(s32 *)((s8 *)arg0 + 0x410), 0x1E);
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x410) - 1;
    *(s32 *)((s8 *)arg0 + 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))set_action_state__11TBoss6Type1FPvi)(arg0, 1);
    }
}

void TBoss6Type1::init_effect_slot_1() {
    u8 *arg0 = (u8 *)this;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470CE0.value);
    *(s32 *)((s8 *)arg0 + 0x40C) = 0x5A;
    *(s32 *)((s8 *)arg0 + 0x410) = 0x5A;
    spawn_effect_slot__11TBoss6Type1Fl((void*)(arg0), (void*)(1));
}

void TBoss6Type1::draw_model() {
    Boss_802B4898 *o = (Boss_802B4898 *)this;
    toggle_particle_effect__10TObjPlayerFv();
    push_matrix();
    Vec_802B4898 v = o->pos;
    v.y = v.y + o->f4E8;
    post_translate_matrix(&v);
    rotate_matrix_y(0, o->f60);
    rotate_matrix_x(0, o->f5C);
    TBoss6PlotFalz__sub_802AC008(o->f4D4, o->f4D8);
    draw_part_motions__11TBoss6Type1Fv(o);
    update_camera_target__14TBoss6PlotFalzFv();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void TBoss6Type1::render() { draw_model(); TBoss6Type1__sub_802B626C(this); }

void release_object__11TBoss6Type1FPv(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }

void TBoss6Type1::spawn_map_csn() {
    u8 *arg0 = (u8 *)this;
    Params_802B49A4 prm;
    Vec_802B49A4 tmp;
    VecCopy__FP3VecPC3Vec(&prm.pos, arg0 + 0x38);
    push_matrix();
    set_matrix_identity(0);
    rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
    rotate_vector_by_matrix(0, lbl_80471020, &tmp);
    prm.pos.x += tmp.x;
    prm.pos.y = TBoss6Type1__data_805DE2D0;
    prm.pos.z += tmp.z;
    pop_matrix();
    prm.a = 0;
    prm.b = *(s32 *)((s8 *)arg0 + 0x60);
    prm.c = 0;
    VecCopy__FP3VecPC3Vec(&prm.rot, lbl_8047102C);
    prm.d = 2;
    prm.e = 0;
    *(s32 *)((s8 *)arg0 + 0x680) = create__10TObjMapCsnFl(&prm);
}

}
