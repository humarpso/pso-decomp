#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800E0950 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_800E0950_lbl_80495484 { M2C_UNK value; u8 remaining[0x9C]; };
typedef char RecoveredGlobal_800E0950_lbl_80495484_size[sizeof(RecoveredGlobal_800E0950_lbl_80495484) == 0xA0 ? 1 : -1];

extern "C" {
void TObjEnePanarms__sub_800E0930(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
void TObjEnePanarms__sub_800E0CB0(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
void TObjEnePanarms__sub_800E1090(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
void TObjEnePanarms__sub_800E0E88(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
void TObjEnePanarms__sub_800E08D8(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
extern const float TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800DFFE0(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
extern const float TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800E01AC(u8 *arg0);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const float TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800E0344(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int, f32);
M2C_UNK spawn_ground_effect__10TObjPlayerFPvi(void *, int);
M2C_UNK spawn_dead_spot_default__10TObjPlayerFii(void *, int);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, s32);
extern RecoveredGlobal_800E0950_lbl_80495484 lbl_80495484;
extern f32 lbl_805D528C;
extern u8 lbl_805D5290;
extern const f32 TObjEnePanarms__data_805DA544;
extern const f32 lbl_805DA558;
extern const f32 lbl_805DA55C;
void TObjEnePanarms__sub_800E0950(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DA580;
void TObjEnePanarms__sub_800E152C(u8 *arg0);
}

extern "C" {

void TObjEnePanarms__sub_800E092C(void);
void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0);
void handle_split_flag__14TObjEnePanarmsFPv(void *arg0);
void init_action__14TObjEnePanarmsFPv(void* a0);
void init_attack_state2__14TObjEnePanarmsFPv(void* a0);
void init_split__14TObjEnePanarmsFPv(void *arg0);
void start_action__14TObjEnePanarmsFPv(void *arg0);
void update_attack__14TObjEnePanarmsFPv(u8 *arg0);
void update_hit_state__14TObjEnePanarmsFPv(void *arg0);
void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK TObjEnePanarms__sub_800E1608(void *, s32);
M2C_UNK TObjEnePanarms__sub_800E1B50();
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, s32);
M2C_UNK TObjEnePanarms__sub_800E2DE4(void *, M2C_UNK);
void TObjEnePanarms__sub_800E2EF0(void*, s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) || (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(0xA));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4) - 0x800, 0x200);
}

extern s32 lbl_8043CDA0[];
extern const f64 TObjEnePanarms__data_8043CDD0;
extern const f32 TObjEnePanarms__data_805DA544;

void TObjEnePanarms__sub_800DFFE0(u8 *arg0) {
    u8 *temp_r7;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 0) {
        temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
        M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x384) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (*(const f32 *)&TObjEnePanarms__data_805DA524);
        M2C_FIELD(arg0, s32 *, 0x3B4) = 0xC;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(3));
    }
}

void TObjEnePanarms__sub_800E01AC(u8 *arg0) {
    u8 *temp_r7;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 0) {
        temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
        M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x384) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (*(const f32 *)&TObjEnePanarms__data_805DA524);
        M2C_FIELD(arg0, s32 *, 0x3B4) = 0x96;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(2));
    }
}

void TObjEnePanarms__sub_800E0344(u8 *arg0) {
    u8 *temp_r7;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 1) {
        temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
        M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x384) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (*(const f32 *)&TObjEnePanarms__data_805DA524);
        M2C_FIELD(arg0, s32 *, 0x3B4) = 0x96;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
        TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2D)))))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        set_field_b8__14TObjEnePanarmsFPvs((void*)((void *) (arg0)), (int)((int) (2)));
    }
}

void update_attack__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    u8 *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4((u16) M2C_FIELD(arg0, s32 *, 0x3B8));
    if ((temp_r3 == NULL) || (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x02000800)) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(2));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TObjEnePanarms__sub_800E1608(arg0, M2C_FIELD(arg0, s32 *, 0x3B8));
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEnePanarms__data_805DA544) {
        temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), lbl_8043CDA0[M2C_FIELD(arg0, s32 *, 0x380)] + (s32) (TObjEnePanarms__data_8043CDD0 * get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3)), 0x200);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(0xA));
    }
}

    extern const float TObjEnePanarms__data_805DA524;
void init_attack_state2__14TObjEnePanarmsFPv(void* a0) {
    int *r7 = *(int**)((char*)a0 + 0x37c);
    r7[6] = r7[6] | 0x1;
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0x3b4) = 12;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(a0), (int)(3));
}

    extern const float TObjEnePanarms__data_805DA524;
void init_action__14TObjEnePanarmsFPv(void* a0) {
    void* t = *(void**)((char*)a0 + 0x37c);
    *(int*)((char*)t + 0x18) = (*(int*)((char*)t + 0x18) | 0x1);
    TObjEnePanarms__sub_800E2EF0((void*)(a0), (s32)(0xf), (s32)(0x1e));
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(a0), (int)(2));
}

void TObjEnePanarms__sub_800E08D8(u8 *arg0) {
    u8 *temp_r7;
    temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
    M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(2));
}

void TObjEnePanarms__sub_800E092C(void) {  }

void TObjEnePanarms__sub_800E0930(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x37C);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
}

void TObjEnePanarms__sub_800E0950(u8 *arg0) {
    Stack_800E0950 stack;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3B4) - 1);
    if ((s8) lbl_805D5290 == 0) {
        lbl_805D5290 = 1;
        lbl_805D528C = M2C_FIELD(&lbl_80495484.value, f32 *, 0x68);
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f2 >= lbl_805DA558) && (temp_f2 < (lbl_805DA558 + lbl_805D528C))) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x3A4));
        temp_f1 = stack.spC;
        stack.spC = temp_f1 + TObjEnePanarms__data_805DA544;
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp8), (int) (0xF3), (f32) (temp_f1));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4);
    if (temp_r0 <= 0x78) {
        if (temp_r0 == 0x78) {
            spawn_ground_effect__10TObjPlayerFPvi((void *) (arg0 + 0x3A4), (int) (0x78));
            spawn_dead_spot_default__10TObjPlayerFii((void *) (arg0 + 0x3A4), (int) (6));
        }
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DA55C);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3B4) < 0) {
            TObjEnePanarms__sub_800E1C98((void *)((void *) (arg0)), (s32)((int) (8)));
        }
    }
}

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x374)));
    }
}

void update_hit_state__14TObjEnePanarmsFPv(void *arg0) {
    if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(2));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(0));
    }
}

void TObjEnePanarms__sub_800E0CB0(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r5;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (M2C_FIELD(arg0, u8 **, 0x39C) + 0x38));
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x39C));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r5, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    set_field_b8__14TObjEnePanarmsFPvs((void*)((void *) (arg0)), (int)((int) (8)));
}

void TObjEnePanarms__sub_800E0E88(u8 *arg0) {
    u8 *temp_r6;
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x16;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(1));
}

void TObjEnePanarms__sub_800E1090(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(1));
}

void start_action__14TObjEnePanarmsFPv(void *arg0) {
    void *temp_r4;

    TObjEnePanarms__sub_800E2EF0((void*)(arg0), (s32)(0xF), (s32)(0x3C));
    temp_r4 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 1) {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    }
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(0));
}

void handle_split_flag__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1B50();
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(2));
    }
}

void init_split__14TObjEnePanarmsFPv(void *arg0) {
    s16 temp_r5;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x39C), s16 *, 0x32C);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) ((s32) (temp_r5 + 1) / 2);
    M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    TObjEnePanarms__sub_800E2DE4(arg0, 0x10);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(9));
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjEnePanarms__sub_800E152C(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (M2C_FIELD(arg0, s32 *, 0x39C) + 0x38));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + lbl_805DA580);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DA580);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
}
#pragma pop

}
