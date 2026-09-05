#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 update_attack_target__11TBoss6Type2FPv(void* a0);
s32 TBoss6Type2__sub_802BC23C();
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BE648(u8 *arg0);
}

extern "C" {

int TBoss6Type2__sub_802BE6A0(void);
int TBoss6Type2__sub_802BE6D4(void);
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
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802B9BBC(void *, M2C_UNK);
s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 TBoss6Type2__sub_802BAA74();
M2C_UNK TBoss6Type2__sub_802BAD04(void *);
int TBoss6Type2__sub_802BAFEC(void*, void*);
u16 TBoss6Type2__sub_802BB694();
M2C_UNK TBoss6Type2__sub_802BB768(void *);
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 TBoss6Type2__sub_802BC23C();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BF904(void* p);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
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
        TBoss6Type2__sub_802BDDF8((void*)(arg0), (void*)(0x23));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        TBoss6Type2__sub_802BDDF8((void*)(arg0), (void*)(0x1B));
        return;
    }
    TBoss6Type2__sub_802BDDF8((void*)(arg0), (void*)(0));
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
        TBoss6Type2__sub_802BD014((void *)(arg0), (s32)(0x22));
    }
}

void TBoss6Type2__sub_802BE648(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x1D) {
            TBoss6Type2__sub_802BDDF8((void*)((void *) (arg0)), (void*)((int) (TBoss6Type2__sub_802BC23C())));
            return;
        }
        update_attack_target__11TBoss6Type2FPv((void*)(arg0));
    }
}

int TBoss6Type2__sub_802BE6A0(void) { return 0; }
int TBoss6Type2__sub_802BE6D4(void) { return 0; }

void tick_timer_0x460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014((void *)(arg0), (s32)(0x22));
    }
}
void select_next_state__11TBoss6Type2FPv(void *arg0) {
    u16 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (get_phase__11TBoss6Type2FPv() == 0xD) {
            if (is_phase_complete__11TBoss6Type2FPv(arg0) != 0) {
                TBoss6Type2__sub_802BDDF8((void*)((void *)(arg0)), (void*)(0x1A));
                return;
            }
            if (M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
                temp_r3 = is_falz_ready__11TBoss6Type2FPv(arg0);
                if (temp_r3 != 0xFFFF) {
                    M2C_FIELD(arg0, u16 *, 0x464) = temp_r3;
                    TBoss6Type2__sub_802BDDF8((void*)((void *)(arg0)), (void*)(0x19));
                    return;
                }
            }
            goto block_7;
        }
block_7:
        if (TBoss6Type2__sub_802BA9E4(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8((void*)((void *)(arg0)), (void*)(0xD));
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8((void*)((void *)(arg0)), (void*)(0xE));
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

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;

    TOTrapAncient01__sub_80226578((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        if (check_target__11TBoss6Type2FPv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2FPv((void *) (arg0)) == 0) {
                TBoss3Volopt__sub_8022675C((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, u16 *, 0x55C)));
            if (temp_r3 != 0U) {
                TObjEneDellBiter__sub_80087350((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        TBoss6Type2__sub_802BD014((void *)((void *) (arg0)), (s32)((int) (0x1B)));
    }
}

void check_state_0x460_eq4__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 4) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

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
        TBoss3Volopt__sub_8022675C((int)(0x69C0F), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460);
    switch (temp_r0) {
    case 0xA0:
        TBoss6Type2__sub_802B9C00((void *)(arg0), (s32)(8));
        TBoss6Type2__sub_802B9C00((void *)(arg0), (s32)(9));
        TBoss6Type2__sub_802B9C00((void *)(arg0), (s32)(0xA));
        break;
    case 0x50:
        TBoss6Type2__sub_802B9BBC(arg0, 8);
        TBoss6Type2__sub_802B9BBC(arg0, 9);
        TBoss6Type2__sub_802B9BBC(arg0, 0xA);
        break;
    case 0x82:
        TBoss6Type2__sub_802B9C00((void *)(arg0), (s32)(0xB));
        TBoss6Type2__sub_802B9C00((void *)(arg0), (s32)(0xC));
        break;
    case 0x49:
        TBoss6Type2__sub_802B9BBC(arg0, 0xB);
        TBoss6Type2__sub_802B9BBC(arg0, 0xC);
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
            TBoss6Type2__sub_802BD014((void *)(arg0), (s32)(0x1B));
            return;
        }
        TBoss6Type2__sub_802BD014((void *)(arg0), (s32)(0));
    }
}

void update_state_34__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 34) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

void init_attack_timers__11TBoss6Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x460) = 0xB4;
    TBoss3Volopt__sub_8022675C((int)(0x4006970E), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0((void *)(arg0));
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

void TBoss6Type2__sub_802BF3F4(void* p) { if (*(int*)((char*)p + 0x460) == 45) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

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

void update_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 7)) {
        TBoss3Volopt__sub_8022675C((int) (0x4006A604), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014((void *)((void *) (arg0)), (s32)((int) (0x22)));
    }
}

}

void update_when_timer_zero__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 0) { TBoss6Type2__sub_802BDDF8((void*)(p), (void*)(*(void**)((char*)p + 0x47c))); } }

}
