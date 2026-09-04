#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B245C(void *arg0);
void TBoss6Type1__sub_802B3178(void* p);
void TBoss6Type1__sub_802B343C(void *arg0);
void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0);
void enter_flag800_state__11TBoss6Type1FPv(void *arg0);
void enter_release_state__11TBoss6Type1FPv(u8 *arg0);
void init_action_timer__11TBoss6Type1FPv(u8 *arg0);
void init_charge__11TBoss6Type1FPv(u8 *arg0);
void init_charge_attack__11TBoss6Type1FPv(u8 *arg0);
void init_dice_state__11TBoss6Type1FPv(void* p);
void init_hp_and_state__11TBoss6Type1FPv(void* p);
void init_move_attack__11TBoss6Type1FPv(u8 *arg0);
void init_params__11TBoss6Type1FPv(void *arg0);
void init_state__11TBoss6Type1FPv(u8 *arg0);
void init_work__11TBoss6Type1FPv(u8 *arg0);
void set_phase_555__11TBoss6Type1FPv(void* p);
void set_phase_90__11TBoss6Type1FPv(void* p);
void start_action_if_idle__11TBoss6Type1FPv(void* p);
void tick_attack_sequence__11TBoss6Type1FPv(void *arg0);
void tick_flee_countdown__11TBoss6Type1FPv(void *arg0);
void tick_state_410_timer__11TBoss6Type1FPv(void *arg0);
void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0);
void trigger_falz_phase__11TBoss6Type1FPv(void *arg0);
void update_attack_countdown__11TBoss6Type1FPv(void *arg0);
void update_attack_state__11TBoss6Type1FPv(void *arg0);
void update_attack_timer2__11TBoss6Type1FPv(void *arg0);
void update_attack_timer__11TBoss6Type1FPv(void *arg0);
void update_charge__11TBoss6Type1FPv(u8 *arg0);
void update_countdown__11TBoss6Type1FPv(void *arg0);
void update_hit_timer__11TBoss6Type1FPv(u8 *arg0);
void update_if_idle__11TBoss6Type1FPv(void* p);
void update_if_ready__11TBoss6Type1FPv(void *arg0);
void update_phase__11TBoss6Type1FPv(void *arg0);
void update_state__11TBoss6Type1FPv(void *arg0);
void update_timer__11TBoss6Type1FPv(void *arg0);
void update_timer_transition__11TBoss6Type1FPv(void *arg0);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
s32 TBoss6PlotFalz__sub_802AC17C();
M2C_UNK TBoss6Type1__sub_802B49A4(void *);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
int TBoss6Type1__sub_802B54F0(void*, void*);
M2C_UNK TBoss6Type1__sub_802B5648(void *, void *);
s32 TBoss6Type1__sub_802B5D9C();
s32 TBoss6Type1__sub_802B5E48();
int TBoss6Type1__sub_802B6504(void*);
void TBoss6Type1__sub_802B683C(void *);
M2C_UNK TBoss6Type1__sub_802B6B34();
M2C_UNK TBoss6Type1__sub_802B715C();
M2C_UNK TBoss6Type1__sub_802B73AC();
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, int);
int TBoss6Type1__sub_802B8E1C(void*);
int TBoss6Type1__sub_802B9204(void*, void*);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK activate_warp__14TBoss6PlotFalzFPv(s32);
M2C_UNK free_child__14TBoss6PlotFalzFPv(s32);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *);
int latch_phase_counter__11TBoss6Type1FPv(void*);
M2C_UNK release_object__11TBoss6Type1FPv();
M2C_UNK reset_state__14TBoss6PlotFalzFPv(s32);
M2C_UNK set_flag_on_threshold__11TBoss6Type1FPv(void *);
M2C_UNK set_state_2__14TBoss6PlotFalzFPv(s32);

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
    TBoss3Volopt__sub_8022675C((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
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

void TBoss6Type1__sub_802B245C(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x14 - (M2C_FIELD(arg0, u8 *, 0x41C) & 1)));
    }
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

extern M2C_UNK lbl_80470CA4[];

void init_work__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470CA4));
    TBoss3Volopt__sub_8022675C((void*)((int)(0x39403)), (void*)((void *)(arg0 + 0x584)), (void*)((int)(0)), (void*)((int)(1)));
    TBoss3Volopt__sub_8022675C((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
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
    TBoss3Volopt__sub_8022675C((void*)((int)(0x4003A811)), (void*)((void *)(arg0 + 0x38)), (void*)((int)(0)), (void*)((int)(1)));
    TBoss6Type1__sub_802B4B64((void*)((void *)(arg0)), (void*)((int)(0)));
    TBoss6Type1__sub_802B4BA8((void*)((void *)(arg0)), (void*)((int)(1)));
}

void update_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B8E1C((void*)(p)); } }

void enter_release_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    release_object__11TBoss6Type1FPv();
    TBoss3Volopt__sub_8022675C((void*)(0x4003B515), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
    activate_warp__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    reset_state__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    if (TBoss6Type1__sub_802B529C(arg0, 0x1F, 4) == 0) {
        TBoss3Volopt__sub_8022675C((void*)(0x68A24), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
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
    TBoss3Volopt__sub_8022675C((void*)(0x40039C19), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
}

void update_hit_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r3;

    TOTrapAncient01__sub_80226578((int)(0x40032614), (void *)(arg0), (void *)(0), (int)(0), (int)(0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3C) {
        TBoss3Volopt__sub_8022675C((void*)(0x39403), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
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
    TBoss6Type1__sub_802B49A4(arg0);
    TBoss3Volopt__sub_8022675C((void*)(0x40039C13), (void*)(arg0 + 0x38), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
    latch_phase_counter__11TBoss6Type1FPv((void*)(arg0));
}

extern M2C_UNK lbl_80470C8C[];

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

void tick_flee_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0xF - (M2C_FIELD(arg0, u8 *, 0x41C) & 1)));
    }
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

extern M2C_UNK lbl_80470C74[];

void init_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x420), (void *)(lbl_80470C74));
    TBoss3Volopt__sub_8022675C((void*)(0x39403), (void*)(arg0 + 0x584), (void*)(0), (void*)(1));
    TBoss3Volopt__sub_8022675C((void*)(0x4003A811), (void*)(arg0 + 0x38), (void*)(0), (void*)(1));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4BA8((void*)(arg0), (void*)(1));
}

void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TOTrapAncient01__sub_80226578((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)((void *)(arg0)), (int)((int)(0x27)));
    }
}

void init_hp_and_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 300; *(int*)((char*)p + 0x410) = 300; TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

void update_charge__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x410)), (s32)(M2C_FIELD(arg0, s32 *, 0x40C)));
    TOTrapAncient01__sub_80226578((int)(0x40038F0F), (void *)(arg0), (void *)(arg0 + 0x38), (int)(0), (int)(0));
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

void TBoss6Type1__sub_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; TBoss6Type1__sub_802B54F0(p, (char*)p + 0x420); TBoss3Volopt__sub_8022675C((void*)((void*)231170), (void*)((void*)0), (void*)((void*)0), (void*)((void*)0)); TBoss6Type1__sub_802B4BA8((void*)(p), (void*)((void*)0)); TBoss6Type1__sub_802B4B64((void*)(p), (void*)((void*)1)); }

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
    TBoss3Volopt__sub_8022675C((void*)(0x40039C21), (void*)(arg0 + 0x5E4), (void*)(0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(0));
    TBoss6Type1__sub_802B4B64((void*)(arg0), (void*)(1));
}

}
