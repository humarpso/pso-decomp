#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p);
int is_idle__11TBoss6Type1FPv(void* p);
int read_be16_field2__11TBoss6Type1FPv(void* p);
void step_and_send_60__11TBoss6Type1FPv(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);

int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* get_mag_mine_ptr__11TBoss6Type1FPv(void* p) { return (char*)p + 0x388; }
int is_idle__11TBoss6Type1FPv(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int read_be16_field2__11TBoss6Type1FPv(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void step_and_send_60__11TBoss6Type1FPv(void* p) { read_be16_field2__11TBoss6Type1FPv(p); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
#else
#if PSO_CLASS_PACKAGE == 0x802B20C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_flag800_state__11TBoss6Type1FPv(void *arg0);
void update_attack_countdown__11TBoss6Type1FPv(void *arg0);
void init_charge_attack__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
M2C_UNK latch_phase_counter__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);

void enter_flag800_state__11TBoss6Type1FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss6Type1__sub_802B9204(arg0, 0x28);
        return;
    }
    TBoss6Type1__sub_802B9204(arg0, 1);
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
        latch_phase_counter__11TBoss6Type1FPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void init_charge_attack__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    TBoss3Volopt__sub_8022675C(0x4003A811, arg0 + 0x38, 0, 1);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_ready__11TBoss6Type1FPv(void *arg0);
void set_phase_555__11TBoss6Type1FPv(void* p);
void update_countdown__11TBoss6Type1FPv(void *arg0);
void update_state__11TBoss6Type1FPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AC17C();
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
s32 TBoss6Type1__sub_802B5D9C();
int TBoss6Type1__sub_802B6504(void*);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B8E1C(void *);
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *);

void update_if_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) || (TBoss6Type1__sub_802B5D9C() != 0)) {
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

void set_phase_555__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 555; *(int*)((char*)p + 0x410) = 555; TBoss6Type1__sub_802B6504(p); TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); TBoss6Type1__sub_802B4BA8(p, (void*)3); }

void update_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

void update_state__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
        if (TBoss6PlotFalz__sub_802AC17C() != 0) {
            TBoss6Type1__sub_802B8E1C(arg0);
            return;
        }
        if (is_field3F8_over_0x20__11TBoss6Type1FPv(arg0) != 0) {
            TBoss6Type1__sub_802B9204(arg0, 0x25);
            return;
        }
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B245C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B245C(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

void TBoss6Type1__sub_802B245C(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x14 - (M2C_FIELD(arg0, u8 *, 0x41C) & 1));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2510
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_timer__11TBoss6Type1FPv(void *arg0);
void init_work__11TBoss6Type1FPv(u8 *arg0);
void tick_attack_sequence__11TBoss6Type1FPv(void *arg0);
void init_charge__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, int);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B5100(void *, s32, s32);
M2C_UNK latch_phase_counter__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B82B8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);

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
        TBoss6Type1__sub_802B865C(arg0, 0x23);
    }
}

extern M2C_UNK lbl_80470CA4[];

void init_work__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, lbl_80470CA4);
    TBoss3Volopt__sub_8022675C((int)(0x39403), (void *)(arg0 + 0x584), (int)(0), (int)(1));
    TBoss3Volopt__sub_8022675C((int)(0x4003A811), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    TBoss6Type1__sub_802B4B64((void *)(arg0), (int)(0));
    TBoss6Type1__sub_802B4BA8((void *)(arg0), (int)(1));
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
        latch_phase_counter__11TBoss6Type1FPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x414) = 0;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void init_charge__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    TBoss3Volopt__sub_8022675C((int)(0x4003A811), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    TBoss6Type1__sub_802B4B64((void *)(arg0), (int)(0));
    TBoss6Type1__sub_802B4BA8((void *)(arg0), (int)(1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B27D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_idle__11TBoss6Type1FPv(void* p);
void enter_release_state__11TBoss6Type1FPv(u8 *arg0);
void tick_state_410_timer__11TBoss6Type1FPv(void *arg0);
void init_move_attack__11TBoss6Type1FPv(u8 *arg0);
void update_hit_timer__11TBoss6Type1FPv(u8 *arg0);
void update_attack_state__11TBoss6Type1FPv(void *arg0);
void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK activate_warp__14TBoss6PlotFalzFPv(s32);
M2C_UNK TBoss6Type1__sub_802B49A4(void *);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
s32 TBoss6Type1__sub_802B5E48();
M2C_UNK TBoss6Type1__sub_802B6B34();
M2C_UNK latch_phase_counter__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
int TBoss6Type1__sub_802B8E1C(void*);
M2C_UNK TBoss6Type1__sub_802B9204(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK free_child__14TBoss6PlotFalzFPv(s32);
M2C_UNK release_object__11TBoss6Type1FPv();
M2C_UNK reset_state__14TBoss6PlotFalzFPv(s32);
M2C_UNK set_state_2__14TBoss6PlotFalzFPv(s32);

void update_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B8E1C(p); } }

void enter_release_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x5A;
    release_object__11TBoss6Type1FPv();
    TBoss3Volopt__sub_8022675C(0x4003B515, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    activate_warp__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    reset_state__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    if (TBoss6Type1__sub_802B529C(arg0, 0x1F, 4) == 0) {
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void tick_state_410_timer__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x20);
    }
}

void init_move_attack__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    TBoss6Type1__sub_802B6B34();
    TBoss3Volopt__sub_8022675C(0x40039C19, arg0 + 0x38, 0, 0);
}

void update_hit_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r3;

    TOTrapAncient01__sub_80226578(0x40032614, arg0, 0, 0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3C) {
        TBoss3Volopt__sub_8022675C(0x39403, arg0 + 0x38, 0, 1);
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
            TBoss6Type1__sub_802B9204(arg0, 0x20);
            return;
        }
        TBoss6Type1__sub_802B9204(arg0, 0x1F);
    }
}

void advance_plot_to_state2__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x12C;
    free_child__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    set_state_2__14TBoss6PlotFalzFPv(M2C_FIELD(arg0, s32 *, 0x3F8));
    TBoss6Type1__sub_802B49A4(arg0);
    TBoss3Volopt__sub_8022675C(0x40039C13, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
    latch_phase_counter__11TBoss6Type1FPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2BB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__11TBoss6Type1FPv(void *arg0);
void update_phase__11TBoss6Type1FPv(void *arg0);
void trigger_falz_phase__11TBoss6Type1FPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AC17C();
void TBoss6Type1__sub_802B4B64(void *, int);
void TBoss6Type1__sub_802B4BA8(void *, int);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
void TBoss6Type1__sub_802B683C(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B8E1C(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK lbl_80470C8C[];

void init_params__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B683C(arg0);
    M2C_FIELD(arg0, u32 *, 0x40C) = 300;
    M2C_FIELD(arg0, u32 *, 0x410) = 300;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1056), lbl_80470C8C);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

void update_phase__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if ((temp_r0 < 0) && (TBoss6PlotFalz__sub_802AC17C() == 0)) {
        TBoss6Type1__sub_802B865C(arg0, 0x1D);
    }
}

void trigger_falz_phase__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) && (TBoss6PlotFalz__sub_802AC17C() != 0)) {
        TBoss6Type1__sub_802B8E1C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_flee_countdown__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

void tick_flee_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0xF - (M2C_FIELD(arg0, u8 *, 0x41C) & 1));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2DC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer_transition__11TBoss6Type1FPv(void *arg0);
void init_state__11TBoss6Type1FPv(u8 *arg0);
void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B865C(void *, int);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);

void update_timer_transition__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x1B));
    }
}

extern M2C_UNK lbl_80470C74[];

void init_state__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, lbl_80470C74);
    TBoss3Volopt__sub_8022675C(0x39403, arg0 + 0x584, 0, 1);
    TBoss3Volopt__sub_8022675C(0x4003A811, arg0 + 0x38, 0, 1);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
}

void tick_trap_countdown__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TOTrapAncient01__sub_80226578(0x40038F0F, arg0, arg0 + 0x38, 0, 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C((void *)(arg0), (int)(0x27));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B2FC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_hp_and_state__11TBoss6Type1FPv(void* p);
void update_charge__11TBoss6Type1FPv(u8 *arg0);
void start_action_if_idle__11TBoss6Type1FPv(void* p);
void set_phase_90__11TBoss6Type1FPv(void* p);
void update_timer__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B3178(void* p);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
int TBoss6Type1__sub_802B54F0(void*, void*);
int latch_phase_counter__11TBoss6Type1FPv(void*);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);
int TBoss6Type1__sub_802B9204(void*, void*);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_flag_on_threshold__11TBoss6Type1FPv(void *);

void init_hp_and_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 300; *(int*)((char*)p + 0x410) = 300; TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

void update_charge__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x410)), (s32)(M2C_FIELD(arg0, s32 *, 0x40C)));
    TOTrapAncient01__sub_80226578(0x40038F0F, arg0, arg0 + 0x38, 0, 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

void start_action_if_idle__11TBoss6Type1FPv(void* p) { if (*(int*)((char*)p + 0x410) == 0) { TBoss6Type1__sub_802B9204(p, (void*)25); } }

void set_phase_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; latch_phase_counter__11TBoss6Type1FPv((void*)(p)); TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

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
        latch_phase_counter__11TBoss6Type1FPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x414) = 1;
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

void TBoss6Type1__sub_802B3178(void* p) { *(int*)((char*)p + 0x40c) = 123; *(int*)((char*)p + 0x410) = 123; TBoss6Type1__sub_802B54F0(p, (char*)p + 0x420); TBoss3Volopt__sub_8022675C((void*)231170, (void*)0, (void*)0, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B339C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_timer2__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B715C();
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void update_attack_timer2__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B715C();
    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B33F4
#include "types.h"

extern "C" {

void init_dice_state__11TBoss6Type1FPv(void* p);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);

void init_dice_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 62; *(int*)((char*)p + 0x410) = 62; TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B343C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B343C(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B73AC();
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

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
            TBoss6Type1__sub_802B865C(arg0, 0x1C);
            return;
        case 16:
            TBoss6Type1__sub_802B865C(arg0, 0x24);
            return;
        default:
            TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B34D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_action_timer__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B5648(void *, void *);

void init_action_timer__11TBoss6Type1FPv(u8 *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 == 0xB) || (temp_r0 == 0x10)) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5648(arg0, arg0 + 0x420);
    TBoss3Volopt__sub_8022675C(0x40039C21, arg0 + 0x5E4, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3564
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B3564(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B7530();
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

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
            TBoss6Type1__sub_802B865C(arg0, 1);
            return;
        }
        TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B35D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_attack_timer__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B5598(void *, void *);

void init_attack_timer__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    TBoss6Type1__sub_802B5598(arg0, arg0 + 0x420);
    TBoss3Volopt__sub_8022675C(0x4003BF07, arg0 + 0x5E4, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3664
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer_state__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B7530();
M2C_UNK TBoss6Type1__sub_802B865C(void *, s32);

void update_timer_state__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    TBoss6Type1__sub_802B7530();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x374);
        if (temp_r4 == 5) {
            TBoss6Type1__sub_802B865C(arg0, 1);
            return;
        }
        TBoss6Type1__sub_802B865C(arg0, temp_r4 - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B36C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_phase_timer_3E__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);

void set_phase_timer_3E__11TBoss6Type1FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 5) {
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) + 0x1E);
    }
    M2C_FIELD(arg0, s32 *, 0x410) = (s32) M2C_FIELD(arg0, s32 *, 0x40C);
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3E;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3E;
    TBoss3Volopt__sub_8022675C(0x4003BF07, arg0 + 0x5E4, 0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_timer__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B6944(void *);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

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
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B37D4
#include "types.h"

extern "C" {

void init_hp_state__11TBoss6Type1FPv(void* p);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);

void init_hp_state__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4B64(p, (void*)0); TBoss6Type1__sub_802B4BA8(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B381C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B381C(void *arg0);
M2C_UNK TBoss6Type1__sub_802B6944();
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void TBoss6Type1__sub_802B381C(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0x3E) {
        TBoss6Type1__sub_802B6944();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3870
#include "types.h"

extern "C" {

void init_state_90__11TBoss6Type1FPv(void* p);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B4BA8(void*, void*);

void init_state_90__11TBoss6Type1FPv(void* p) { *(int*)((char*)p + 0x40c) = 90; *(int*)((char*)p + 0x410) = 90; TBoss6Type1__sub_802B4BA8(p, (void*)0); TBoss6Type1__sub_802B4B64(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B38B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4EAC(void *, s32, s32);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void update_attack_countdown_reset__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    TBoss6Type1__sub_802B4EAC(arg0, M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, s32 *, 0x40C));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3908
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_attack__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
s32 TBoss6Type1__sub_802B529C(void *, M2C_UNK, M2C_UNK);
M2C_UNK latch_phase_counter__11TBoss6Type1FPv(void *);

void start_attack__11TBoss6Type1FPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    } else {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x410) = 0x1E;
    }
    TBoss3Volopt__sub_8022675C(0x40039706, arg0 + 0x38, 0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
    if (TBoss6Type1__sub_802B529C(arg0, 0x19, 4) > 0) {
        latch_phase_counter__11TBoss6Type1FPv(arg0);
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B39C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_countdown__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

void tick_countdown__11TBoss6Type1FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 0x27);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B3B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_attack_timers__11TBoss6Type1FPv(void *arg0);
void TBoss6Type1__sub_802B3B94(void *arg0);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B5140(void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B865C(void *, M2C_UNK);

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
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

void TBoss6Type1__sub_802B3B94(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x410) < 0x1E) {
        TBoss6Type1__sub_802B5140(arg0, M2C_FIELD(arg0, s32 *, 0x410), 0x1E);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x410) - 1;
    M2C_FIELD(arg0, s32 *, 0x410) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type1__sub_802B865C(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B4930
#include "types.h"

extern "C" {

void render__11TBoss6Type1Fv(void* p);

int TBoss6Type1__sub_802B4898(void*);
int TBoss6Type1__sub_802B626C(void*);

void render__11TBoss6Type1Fv(void* p) { TBoss6Type1__sub_802B4898(p); TBoss6Type1__sub_802B626C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B4964
#include "types.h"

extern "C" {

void release_object__11TBoss6Type1FPv(void* p);
int queue_destruction__7TObjectFv(void*);

void release_object__11TBoss6Type1FPv(void* p) { if (*(unsigned int*)((char*)p + 0x680) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x680)); *(int*)((char*)p + 0x680) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B4A70
#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);

int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B4B14
#include "types.h"

extern "C" {

int TBoss6Type1__sub_802B4B14(void* p);
int TBoss6Type1__sub_802B4A9C(void*);

int TBoss6Type1__sub_802B4B14(void* p) { return TBoss6Type1__sub_802B4A9C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B4CF4
#include "types.h"

extern "C" {

void TBoss6Type1__sub_802B4CF4(void* p);

int TBoss6Type1__sub_802B4B64(void*, void*);

void TBoss6Type1__sub_802B4CF4(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type1__sub_802B4B64(p, (void*)i); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B56E8
#include "types.h"

extern "C" {

int handle_6xa4_action__11TBoss6Type1FPv(void* p);
int TBoss6Type1__sub_802B570C(void*);

int handle_6xa4_action__11TBoss6Type1FPv(void* p) { return TBoss6Type1__sub_802B570C((char*)p + 0x1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B59A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B59A8(void);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);

extern const f32 TBoss6Type1__data_805DE2D0;

void TBoss6Type1__sub_802B59A8(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE2D0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B5AB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B5AB0(void);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);

extern const f32 TBoss6Type1__data_805DE32C;

void TBoss6Type1__sub_802B5AB0(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE32C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B5DFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AAC74(s32);
s32 calc_field4b0_delta__11TBoss6Type1FPv();
void reset_fields_4e0__11TBoss6Type1FPv(void* p);

void reset_fields_4e0__11TBoss6Type1FPv(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B5E88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AAC74(s32);
s32 calc_field4b0_delta__11TBoss6Type1FPv();
void reset_fields_4e0__11TBoss6Type1FPv(void* p);

s32 is_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) && (calc_field4b0_delta__11TBoss6Type1FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x48C))) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B6078
#include "types.h"

extern "C" {

void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1);

    extern const float TBoss6Type1__data_805DE344;
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1) { *(float*)((char*)a1 + 0x4) = TBoss6Type1__data_805DE344; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B621C
#include "types.h"

extern "C" {

void init_parts__11TBoss6Type1FPv(void* p);
int set_part_default_value__11TBoss6Type1FiPv(void*, void*);
int TBoss6Type1__sub_802B60E8(void*);

void init_parts__11TBoss6Type1FPv(void* p) { set_part_default_value__11TBoss6Type1FiPv(p, (char*)p + 0x5d8); set_part_default_value__11TBoss6Type1FiPv(p, (char*)p + 0x5e4); set_part_default_value__11TBoss6Type1FiPv(p, (char*)p + 0x5f0); TBoss6Type1__sub_802B60E8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B64A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_param__11TBoss6Type1FPv(void *arg0);

extern f32 TBoss6Type1__data_805DE2D0;

void reset_param__11TBoss6Type1FPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B7988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_parts_flags__11TBoss6Type1FPv(void *arg0);

M2C_UNK enable_parts__11TBoss6Type1FPv(void *);
M2C_UNK set_child_flags__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B7944();

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B7AE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__11TBoss6Type1FPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void update_position__11TBoss6Type1FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B85E8
#include "types.h"

extern "C" {

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q);

void copy_transform__11TBoss6Type1FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B8980
#include "types.h"

extern "C" {

void TBoss6Type1__vt61(void* p);

int TBoss6Type1__sub_802B865C(void*, void*);

void TBoss6Type1__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 40) { TBoss6Type1__sub_802B865C(p, (void*)40); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B89B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__vt60(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);

extern const f32 TBoss6Type1__data_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) TBoss6Type1__data_805DE2E4;
    TBoss3Volopt__sub_8022675C(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B8E80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void do_attack__11TBoss6Type1FPv(void *arg0);
M2C_UNK TBoss6Type1__sub_802B8EE0(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B909C(void *, M2C_UNK *);
M2C_UNK TBoss6Type1__sub_802B9178(void *, M2C_UNK, M2C_UNK *);

void do_attack__11TBoss6Type1FPv(void *arg0) {
    M2C_UNK sp8;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        TBoss6Type1__sub_802B909C(arg0, &sp8);
    } else {
        TBoss6Type1__sub_802B8EE0(arg0, &sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x438) = 1;
    TBoss6Type1__sub_802B9178(arg0, 2, &sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9260
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1);

void load_params__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x438) = (s32) (s8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x414) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    M2C_FIELD(arg0, u8 *, 0x41C) = (u8) M2C_FIELD(arg1, u8 *, 0xA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9284
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK TBoss6Type1__data_80471040;
extern f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) rand__11TOBoss4RockFv()));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B96DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__11TBoss6Type1Fi(s32 arg0);
s32 TBoss6Type1__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__11TBoss6Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x684);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80320AE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_zanzo__11TBoss6Type1FPvPvPv(void *arg0, void *arg1, void *arg2);
void *TBoss6Zanzo__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_zanzo__11TBoss6Type1FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6Zanzo__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80323DCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_grav_ball__11TBoss6Type1FPvPv(void *arg0, void *arg1);
void *TBoss6GravBall__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_grav_ball__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TBoss6GravBall__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#endif
