#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct RecoveredGlobal_802B2A94_lbl_80470C98 { M2C_UNK value; u8 remaining[0x8]; };

typedef char RecoveredGlobal_802B2A94_lbl_80470C98_size[sizeof(RecoveredGlobal_802B2A94_lbl_80470C98) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B2724_lbl_804DF4C4 { M2C_UNK value; u8 remaining[0x8]; };

typedef char RecoveredGlobal_802B2724_lbl_804DF4C4_size[sizeof(RecoveredGlobal_802B2724_lbl_804DF4C4) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B2724_lbl_804DF4D0 { M2C_UNK value; u8 remaining[0xC]; };

typedef char RecoveredGlobal_802B2724_lbl_804DF4D0_size[sizeof(RecoveredGlobal_802B2724_lbl_804DF4D0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802B2400_lbl_80470CA4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B2CB4_lbl_80470C74 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802B24B4_lbl_80470CB0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802B2D68_lbl_80470C80 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef char RecoveredGlobal_802B2400_lbl_80470CA4_size[sizeof(RecoveredGlobal_802B2400_lbl_80470CA4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802B24B4_lbl_80470CB0_size[sizeof(RecoveredGlobal_802B24B4_lbl_80470CB0) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802B2CB4_lbl_80470C74_size[sizeof(RecoveredGlobal_802B2CB4_lbl_80470C74) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_802B2D68_lbl_80470C80_size[sizeof(RecoveredGlobal_802B2D68_lbl_80470C80) == 0xC ? 1 : -1];

struct RecoveredGlobal_802B3BEC_lbl_80470CE0 {
    M2C_UNK value;
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
s32 create__10TObjMapCsnFi(void *);
void end_effect_render__13TParticleCtrlFv();
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_state_2__14TBoss6PlotFalzFPv(s32);
M2C_UNK reset_state__14TBoss6PlotFalzFPv(s32);
M2C_UNK activate_warp__14TBoss6PlotFalzFPv(s32);
M2C_UNK free_child__14TBoss6PlotFalzFPv(s32);
void update_camera_target__14TBoss6PlotFalzFv();
void TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 TBoss6PlotFalz__sub_802AC17C();
void enter_flag800_state__11TBoss6Type1FPv(void *arg0);
void update_attack_countdown__11TBoss6Type1FPv(void *arg0);
void init_charge_attack__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2208(u8 *arg0);
void update_if_ready__11TBoss6Type1FPv(void *arg0);
void set_phase_555__11TBoss6Type1FPv(void* p);
void update_countdown__11TBoss6Type1FPv(void *arg0);
void update_state__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B2400(u8 *arg0);
void TBoss6Type1__sub_802B245C(void *arg0);
void TBoss6Type1__sub_802B24B4(u8 *arg0);
void update_attack_timer__11TBoss6Type1FPv(void *arg0);
void init_work__11TBoss6Type1FPv(u8 *arg0);
void tick_attack_sequence__11TBoss6Type1FPv(void *arg0);
void init_charge__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2724(u8 *arg0);
void update_if_idle__11TBoss6Type1FPv(void* p);
void enter_release_state__11TBoss6Type1FPv(u8 *arg0);
void tick_state_410_timer__11TBoss6Type1FPv(void *arg0);
void init_move_attack__11TBoss6Type1FPv(u8 *arg0);
void update_hit_timer__11TBoss6Type1FPv(u8 *arg0);
void update_attack_state__11TBoss6Type1FPv(void *arg0);
void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2A94(u8 *arg0);
void init_params__11TBoss6Type1FPv(void *arg0);
void update_phase__11TBoss6Type1FPv(void *arg0);
void trigger_falz_phase__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B2CB4(u8 *arg0);
void tick_flee_countdown__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B2D68(u8 *arg0);
void update_timer_transition__11TBoss6Type1FPv(void *arg0);
void init_state__11TBoss6Type1FPv(u8 *arg0);
void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B2F00(u8 *arg0);
void init_hp_and_state__11TBoss6Type1FPv(void* p);
void update_charge__11TBoss6Type1FPv(u8 *arg0);
void start_action_if_idle__11TBoss6Type1FPv(void* p);
void set_phase_90__11TBoss6Type1FPv(void* p);
void update_timer__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B3178(void* p);
void TBoss6Type1__sub_802B31E4(u8 *arg0);
void update_attack_timer2__11TBoss6Type1FPv(void *arg0);
void init_dice_state__11TBoss6Type1FPv(void* p);
void TBoss6Type1__sub_802B343C(void *arg0);
void init_action_timer__11TBoss6Type1FPv(u8 *arg0);
void TBoss6Type1__sub_802B3564(void *arg0);
void init_attack_timer__11TBoss6Type1FPv(u8 *arg0);
void update_timer_state__11TBoss6Type1FPv(void *arg0);
void set_phase_timer_3E__11TBoss6Type1FPv(u8 *arg0);
void update_action_timer__11TBoss6Type1FPv(void *arg0);
void init_hp_state__11TBoss6Type1FPv(void* p);
void TBoss6Type1__sub_802B381C(void *arg0);
void init_state_90__11TBoss6Type1FPv(void* p);
void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0);
void start_attack__11TBoss6Type1FPv(u8 *arg0);
void tick_countdown__11TBoss6Type1FPv(void *arg0);
void init_attack_timers__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B3B94(void *arg0);
void TBoss6Type1__sub_802B3BEC(u8 *arg0);
void TBoss6Type1__sub_802B4898(Boss_802B4898 *o);
void render__11TBoss6Type1Fv(void* p);
void release_object__11TBoss6Type1FPv(void* p);
void TBoss6Type1__sub_802B49A4(u8 *arg0);
M2C_UNK TBoss6Type1__sub_802B4A9C(void *);
M2C_UNK TBoss6Type1__sub_802B4B04(void *);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4D5C(void *, int, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5140(void *, M2C_UNK, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
int TBoss6Type1__sub_802B54F0(void*, void*);
M2C_UNK TBoss6Type1__sub_802B5598(void *, void *);
M2C_UNK TBoss6Type1__sub_802B5648(void *, void *);
s32 TBoss6Type1__sub_802B5D9C();
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *);
s32 TBoss6Type1__sub_802B5E48();
s32 is_ready__11TBoss6Type1FPv(void *);
s32 TBoss6Type1__sub_802B5ED8(void *);
int is_time_up__11TBoss6Type1FPv(void *);
M2C_UNK set_flag_on_threshold__11TBoss6Type1FPv(void *);
s32 TBoss6Type1__sub_802B6060(void *);
int TBoss6Type1__sub_802B626C(void*);
M2C_UNK reset_param__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B64B4(void *);
M2C_UNK TBoss6Type1__sub_802B64DC(void *);
int TBoss6Type1__sub_802B6504(void*);
void TBoss6Type1__sub_802B683C(void *);
M2C_UNK TBoss6Type1__sub_802B6944(void *);
M2C_UNK TBoss6Type1__sub_802B6B34();
M2C_UNK TBoss6Type1__sub_802B6C30(void *);
M2C_UNK TBoss6Type1__sub_802B715C();
M2C_UNK TBoss6Type1__sub_802B73AC();
M2C_UNK TBoss6Type1__sub_802B7530();
int latch_phase_counter__11TBoss6Type1FPv(void*);
void TBoss6Type1__sub_802B81A4(void *);
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, int);
M2C_UNK TBoss6Type1__sub_802B8A70(void *);
M2C_UNK TBoss6Type1__sub_802B8BB4(void *);
int TBoss6Type1__sub_802B8E1C(void*);
void do_attack__11TBoss6Type1FPv(void *);
int TBoss6Type1__sub_802B9204(void*, void*);
s32 rand(void);
M2C_UNK TObjPlayer__sub_803D8CD4(s32);
M2C_UNK rotate_vector_by_matrix(s32, void *, void *);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(Vec_802B4898 *);

extern const f32 TBoss6Type1__data_805DE2D0;
extern M2C_UNK lbl_80470C74[];
extern RecoveredGlobal_802B2D68_lbl_80470C80 lbl_80470C80;
extern M2C_UNK lbl_80470C8C[];
extern RecoveredGlobal_802B2A94_lbl_80470C98 lbl_80470C98;
extern M2C_UNK lbl_80470CA4[];
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

void enter_flag800_state__11TBoss6Type1FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x28));
        return;
    }
    TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(1));
}

void update_attack_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    TBoss6Type1__sub_802B5100(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40C) - 2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == temp_r3b) {
        M2C_FIELD(arg0, s32 *, 0x438) = 1;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1FPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(1));
    }
}

void init_charge_attack__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B2208(u8 *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x40C) - lbl_805DE2A8)) {
        TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(3));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x27));
    }
}

void update_if_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) || (TBoss6Type1__sub_802B5D9C() != 0)) {
        TBoss6Type1__sub_802B8E1C((void*)(arg0));
    }
}

void set_phase_555__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 555; *(int*)((char*)p + 0x410) = 555; TBoss6Type1__sub_802B6504(p); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)3)); }

void update_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x27));
    }
}

void update_state__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6PlotFalz__sub_802AC17C() != 0) {
            TBoss6Type1__sub_802B8E1C((void*)(arg0));
            return;
        }
        if (is_field3F8_over_0x20__11TBoss6Type1FPv(arg0) != 0) {
            TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x25));
            return;
        }
        TBoss6Type1__sub_802B8E1C((void*)(arg0));
    }
}

void TBoss6Type1__sub_802B2400(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &(*(RecoveredGlobal_802B2400_lbl_80470CA4 *)&lbl_80470CA4).value);
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(1));
}

void TBoss6Type1__sub_802B245C(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x14 - (M2C_FIELD(arg0, u8 *, 0x41C) & 1)));
    }
}

void TBoss6Type1__sub_802B24B4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470CB0.value);
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(1));
}

void update_attack_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3b;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    TBoss6Type1__sub_802B5100(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40C) - 2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r3b = temp_r3 - 0xA;
    if (temp_r0 == temp_r3) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == temp_r3b) {
        M2C_FIELD(arg0, s32 *, 0x438) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x23));
    }
}

void init_work__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470CA4));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x39403)), (void*)((void *)(arg0 + 0x584)), (void*)((int)(0)), (void*)((int)(1)));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
    TBoss6Type1__sub_802B4B64((void*)((void *)(arg0)), (void*)((int)(0)));
    TBoss6Type1__sub_802B4BA8((void*)((void *)(arg0)), (void*)((int)(1)));
}

void tick_attack_sequence__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r0 == 0x23) {
        TBoss6Type1__sub_802B82B8(arg0, 6);
    } else if (temp_r0 == 0x19) {
        M2C_FIELD(arg0, s32 *, 0x438) = 1;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1FPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(1));
    }
}

void init_charge__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
    TBoss6Type1__sub_802B4B64((void*)((void *)(arg0)), (void*)((int)(0)));
    TBoss6Type1__sub_802B4BA8((void*)((void *)(arg0)), (void*)((int)(1)));
}

void TBoss6Type1__sub_802B2724(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r0 == 0x4A) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_804DF4C4.value);
    } else if (temp_r0 == 0x3B) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_804DF4D0.value);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r4 <= 0x4A) {
        if (temp_r4 > 0x3B) {
            TBoss6Type1__sub_802B4EAC(arg0, temp_r4 - 0x3B, 0xF);
        } else {
            TBoss6Type1__sub_802B4EAC(arg0, temp_r4, M2C_FIELD(arg0, s32 *, 0x40C));
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x27));
    }
}

void update_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B8E1C((void*)(p)); } }

void enter_release_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    ((M2C_UNK (*)(void))release_object__11TBoss6Type1FPv)();
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003B515), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
    activate_warp__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    reset_state__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    if (TBoss6Type1__sub_802B529C(arg0, 0x1F, 4) == 0) {
        ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x68A24), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    }
}

void tick_state_410_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x20));
    }
}

void init_move_attack__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    TBoss6Type1__sub_802B6B34();
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C19), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
}

void update_hit_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r3;

    play_persistent_sound((int)(0x40032614), (void *)(arg0), (void *)(0), (int)(0), (int)(0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3C) {
        ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x39403), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x410);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x410) = (s32) (temp_r3 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x410) = 0;
}

void update_attack_state__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6Type1__sub_802B5E48() != 0) {
            TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x20));
            return;
        }
        TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x1F));
    }
}

void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x12C;
    free_child__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    set_state_2__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    ((M2C_UNK (*)(void *))TBoss6Type1__sub_802B49A4)(arg0);
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C13), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
    latch_phase_counter__11TBoss6Type1FPv((void*)(arg0));
}

void TBoss6Type1__sub_802B2A94(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x40C) - lbl_805DE2AC)) {
        M2C_FIELD(arg0, s32 *, 0x438) = 0;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 <= lbl_805DE2B0) && (temp_f1 > lbl_805DE2B4)) {
        TBoss6Type1__sub_802B82B8((void *)(arg0), (M2C_UNK)(1));
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
        if (temp_r0 == 0x46) {
            TBoss6Type1__sub_802B82B8((void *)(arg0), (M2C_UNK)(7));
        } else if (temp_r0 == 0xF) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470C98.value);
        }
    }
    play_persistent_sound((int)(0x4003B012), (void *)((s32) arg0), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x1E));
    }
}

void init_params__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B683C(arg0);
    M2C_FIELD(arg0, u32 *, 0x40C) = 300;
    M2C_FIELD(arg0, u32 *, 0x410) = 300;
    VecCopy__FP3VecPC3Vec((void *)((void *)((char *)arg0 + 1056)), (void *)(lbl_80470C8C));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

void update_phase__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if ((temp_r0 < 0) && (TBoss6PlotFalz__sub_802AC17C() == 0)) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x1D));
    }
}

void trigger_falz_phase__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) && (TBoss6PlotFalz__sub_802AC17C() != 0)) {
        TBoss6Type1__sub_802B8E1C((void*)(arg0));
    }
}

void TBoss6Type1__sub_802B2CB4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &(*(RecoveredGlobal_802B2CB4_lbl_80470C74 *)&lbl_80470C74).value);
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(1));
}

void tick_flee_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0xF - (M2C_FIELD(arg0, u8 *, 0x41C) & 1)));
    }
}

void TBoss6Type1__sub_802B2D68(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470C80.value);
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)((s32) arg0), (void*)(1));
}

void update_timer_transition__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)((void *)(arg0)), (int)((int)(0x1B)));
    }
}

void init_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470C74));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x39403), (void*)(arg0 + 0x584), (void*)(0), (void*)(1));
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
}

void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    play_persistent_sound((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)((void *)(arg0)), (int)((int)(0x27)));
    }
}

void TBoss6Type1__sub_802B2F00(u8 *arg0) {
    if ((((f32) M2C_FIELD(arg0, s32 *, 0x410) / (f32) M2C_FIELD(arg0, s32 *, 0x40C)) < lbl_805DE2B8) && (TBoss6Type1__sub_802B5ED8(arg0) != 0)) {
        do_attack__11TBoss6Type1FPv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6Type1__sub_802B6060(arg0) != 0) {
            TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x1A));
            return;
        }
        TBoss6Type1__sub_802B9204((void*)(arg0), (void*)(0x22));
    }
}

void init_hp_and_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 300; *(int*)((char*)p + 0x410) = 300; TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void update_charge__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x410)), (s32)(M2C_FIELD(arg0, s32 *, 0x40C)));
    play_persistent_sound((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x27));
    }
}

void start_action_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B9204((void*)(p), (void*)((void*)25)); } }

void set_phase_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; latch_phase_counter__11TBoss6Type1FPv((void*)((void*)(p))); TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void update_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) - 0xF;
    if (temp_r0 >= temp_r4) {
        TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(temp_r0 - temp_r4), (s32)(0xF));
    }
    set_flag_on_threshold__11TBoss6Type1FPv(arg0);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        latch_phase_counter__11TBoss6Type1FPv((void*)((void*)(arg0)));
        M2C_FIELD(arg0, s32 *, 0x414) = 1;
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(1));
    }
}

void TBoss6Type1__sub_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; TBoss6Type1__sub_802B54F0(p, (char*)p + 0x420); ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)((void*)231170), (void*)((void*)0), (void*)((void*)0), (void*)((void*)0)); TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void TBoss6Type1__sub_802B31E4(u8 *arg0) {
    M2C_UNK var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4A0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x49C);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x410);
    temp_r0 = temp_r5 + 0x1E;
    temp_r0 = temp_r4 + temp_r0;
    temp_r0 -= temp_r4;
    temp_r3 = temp_r0 - temp_r5;
    if (temp_r6 == temp_r0) {
        TBoss6Type1__sub_802B82B8((void *) (arg0), 0x11);
    } else if (temp_r6 == temp_r3) {
        TBoss6Type1__sub_802B4B64((void *) (arg0), (void *) (2));
        TBoss6Type1__sub_802B82B8((void *) (arg0), 0x13);
    }
    TBoss6Type1__sub_802B4D5C((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x410)), (int) (M2C_FIELD(arg0, s32 *, 0x40C)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x410);
    if ((temp_r3 <= (s32) M2C_FIELD(arg0, s32 *, 0x4A0)) && (temp_r3 >= 0x1E)) {
        TBoss6Type1__sub_802B64DC((void *) (arg0));
        TBoss6Type1__sub_802B6C30((void *) (arg0));
    } else {
        TBoss6Type1__sub_802B64B4((void *) (arg0));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) >= 0x1E) {
        var_r3 = 0x4003B50C;
        if (M2C_FIELD(arg0, f32 *, 0x4DC) > lbl_805DE2BC) {
            var_r3 = 0x4003AD0D;
        }
        play_persistent_sound((int) (var_r3), (void *) (arg0), (void *) (arg0 + 0x5CC), (int) (0), (int) (1));
    }
    if (M2C_FIELD(arg0, f32 *, 0x4DC) > lbl_805DE2BC) {
        TBoss6Type1__sub_802B4B04((void *) (arg0));
    } else {
        TBoss6Type1__sub_802B4A9C((void *) (arg0));
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        reset_param__11TBoss6Type1FPv((void *) (arg0));
        TBoss6Type1__sub_802B865C((void *) (arg0), (int) (1));
    }
}

void update_attack_timer2__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B715C();
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(1));
    }
}

void init_dice_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 62; *(int*)((char*)p + 0x410) = 62; TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)1)); }

void TBoss6Type1__sub_802B343C(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B73AC();
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        switch (temp_r4) {
        case 11:
            TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x1C));
            return;
        case 16:
            TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x24));
            return;
        default:
            TBoss6Type1__sub_802B865C((void *)(arg0), (int)(temp_r4 - 1));
            break;
        }
    }
}

void init_action_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 == 0xB) || (temp_r0 == 0x10)) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5648(arg0, arg0 + 0x420);
    ((int (*)(void*, void*, void*, void*))play_sound_effect)((void*)(0x40039C21), (void*)(arg0 + 0x5E4), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B3564(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 8) {
            ((M2C_UNK (*)(void *, s32))TBoss6Type1__sub_802B865C)(arg0, 1);
            return;
        }
        ((M2C_UNK (*)(void *, s32))TBoss6Type1__sub_802B865C)(arg0, temp_r4 - 1);
    }
}

void init_attack_timer__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5598(arg0, arg0 + 0x420);
    play_sound_effect(0x4003BF07, arg0 + 0x5E4, 0, 0);
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B4B64)(arg0, 0);
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B4BA8)(arg0, 1);
}

void update_timer_state__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 5) {
            ((M2C_UNK (*)(void *, s32))TBoss6Type1__sub_802B865C)(arg0, 1);
            return;
        }
        ((M2C_UNK (*)(void *, s32))TBoss6Type1__sub_802B865C)(arg0, temp_r4 - 1);
    }
}

void set_phase_timer_3E__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 5) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3E;
    play_sound_effect(0x4003BF07, arg0 + 0x5E4, 0, 0);
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B4BA8)(arg0, 0);
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B4B64)(arg0, 1);
}

void update_action_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410);
    switch (temp_r0) {
    case 0x48:
    case 0x3E:
    case 0x52:
        TBoss6Type1__sub_802B6944(arg0);
        break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    if (temp_r0_2 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B865C)(arg0, 1);
    }
}

void init_hp_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)1); }

void TBoss6Type1__sub_802B381C(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3E) {
        ((M2C_UNK (*)(void))TBoss6Type1__sub_802B6944)();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B865C)(arg0, 1);
    }
}

void init_state_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B865C)(arg0, 1);
    }
}

void start_attack__11TBoss6Type1FPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    } else {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    }
    play_sound_effect(0x40039706, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
    if (TBoss6Type1__sub_802B529C(arg0, 0x19, 4) > 0) {
        ((M2C_UNK (*)(void *))latch_phase_counter__11TBoss6Type1FPv)(arg0);
        play_sound_effect(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void tick_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B865C)(arg0, 0x27);
    }
}

void TBoss6Type1__sub_802B39F4(u8 *arg0) {
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
            if (is_ready__11TBoss6Type1FPv(arg0) != 0) {
                ((M2C_UNK (*)(void *, int))TBoss6Type1__sub_802B9204)((void *) (arg0), (int) (0x17));
                return;
            }
            if (((s32 (*)(void *, int, int))TBoss6Type1__sub_802B529C)((void *) (arg0), (int) (2), (int) (0x10)) == 0) {
                do_attack__11TBoss6Type1FPv(arg0);
                return;
            }
            if (((((s32 (*)(void *, int, int))TBoss6Type1__sub_802B529C)((void *) (arg0), (int) (3), (int) (0xA)) + ((s32 (*)(void *, int, int))TBoss6Type1__sub_802B529C)((void *) (arg0), (int) (5), (int) (0xA))) == 0) || ((lbl_805DE2C0 * (f32) rand()) < lbl_805DE2C4)) {
                TBoss6Type1__sub_802B8BB4((void *) (arg0));
                return;
            }
            do_attack__11TBoss6Type1FPv(arg0);
            return;
        }
        if (is_time_up__11TBoss6Type1FPv(arg0) != 0) {
            TBoss6Type1__sub_802B8A70((void *) (arg0));
            return;
        }
        TBoss6Type1__sub_802B8BB4((void *) (arg0));
    }
}

void init_attack_timers__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4A8);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4A4);
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x410) = temp_r0_2;
    }
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B3B94(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) < 0x1E) {
        TBoss6Type1__sub_802B5140(arg0, M2C_FIELD(arg0, s32 *, 0x410), 0x1E);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss6Type1__sub_802B865C)(arg0, 1);
    }
}

void TBoss6Type1__sub_802B3BEC(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, &lbl_80470CE0.value);
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
}

void TBoss6Type1__sub_802B4898(Boss_802B4898 *o) {
    toggle_particle_effect__10TObjPlayerFv();
    push_matrix();
    Vec_802B4898 v = o->pos;
    v.y = v.y + o->f4E8;
    post_translate_matrix(&v);
    rotate_matrix_y(0, o->f60);
    rotate_matrix_x(0, o->f5C);
    TBoss6PlotFalz__sub_802AC008(o->f4D4, o->f4D8);
    TBoss6Type1__sub_802B81A4(o);
    update_camera_target__14TBoss6PlotFalzFv();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void render__11TBoss6Type1Fv(void* p) { TBoss6Type1__sub_802B4898((Boss_802B4898 *)(p)); TBoss6Type1__sub_802B626C(p); }

void release_object__11TBoss6Type1FPv(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }

void TBoss6Type1__sub_802B49A4(u8 *arg0) {
    Params_802B49A4 prm;
    Vec_802B49A4 tmp;
    VecCopy__FP3VecPC3Vec(&prm.pos, arg0 + 0x38);
    push_matrix();
    TObjPlayer__sub_803D8CD4(0);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    rotate_vector_by_matrix(0, lbl_80471020, &tmp);
    prm.pos.x += tmp.x;
    prm.pos.y = TBoss6Type1__data_805DE2D0;
    prm.pos.z += tmp.z;
    pop_matrix();
    prm.a = 0;
    prm.b = M2C_FIELD(arg0, s32 *, 0x60);
    prm.c = 0;
    VecCopy__FP3VecPC3Vec(&prm.rot, lbl_8047102C);
    prm.d = 2;
    prm.e = 0;
    M2C_FIELD(arg0, s32 *, 0x680) = create__10TObjMapCsnFi(&prm);
}

}
