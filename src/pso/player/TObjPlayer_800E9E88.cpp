#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800EA678_lbl_8043D230 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800EA678_lbl_8043D23C {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef s32 M2C_UNK;
struct Vec_800EA364 { f32 x, y, z; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, int);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
extern const f32 lbl_805DA678;
extern const f32 lbl_805DA730;
void TObjPlayer__sub_800EA120(u8 *arg0);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const RecoveredGlobal_800EA678_lbl_8043D230 lbl_8043D230;
extern const RecoveredGlobal_800EA678_lbl_8043D23C lbl_8043D23C;
extern const f32 lbl_805DA678;
extern const float lbl_805DA67C;
extern const float lbl_805DA6B4;
extern const f32 lbl_805DA708;
extern const f32 lbl_805DA73C;
extern const f32 lbl_805DA740;
extern const f32 lbl_805DA744;
extern const f32 lbl_805DA748;
extern const f32 lbl_805DA74C;
void TObjPlayer__sub_800EA678(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 find_nearest_visible_player(void *, void *, f32);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, int);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const float lbl_805DA67C;
extern const float lbl_805DA6B4;
extern const f32 lbl_805DA6DC;
extern const f32 lbl_805DA6E0;
extern const f32 lbl_805DA6E4;
extern const f32 lbl_805DA718;
extern const f32 lbl_805DA720;
extern const f32 lbl_805DA738;
void TObjPlayer__sub_800EA56C(u8 *arg0);
u16 find_nearest_visible_player(void *, void *, f32);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const RecoveredGlobal_800EA678_lbl_8043D230 lbl_8043D230;
extern const RecoveredGlobal_800EA678_lbl_8043D23C lbl_8043D23C;
extern const f32 lbl_805DA670;
extern const f32 lbl_805DA678;
extern const float lbl_805DA67C;
extern const f32 lbl_805DA6DC;
extern const f32 lbl_805DA708;
extern const f32 lbl_805DA73C;
extern const f32 lbl_805DA740;
extern const f32 lbl_805DA748;
extern const f32 lbl_805DA750;
void TObjPlayer__sub_800EA820(u8 *arg0);
u16 find_nearest_visible_player(void *, void *, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnLookAt(void *, void *);
s32 TObjEneSlimeOne__sub_800EAD84(void *);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const float lbl_805DA6B4;
extern const f32 lbl_805DA6E0;
extern const f32 lbl_805DA720;
extern const f32 lbl_805DA734;
void TObjPlayer__sub_800EA364(u8 *arg0);
}

extern "C" {

void enter_appear_state__10TObjPlayerFPv(u8 *arg0);
void enter_slime_state__10TObjPlayerFPv(u8 *arg0);
void init_slime_display__10TObjPlayerFPv(void* a0);
void init_slime_state__10TObjPlayerFPv(void *arg0);
void update_dive_timer__10TObjPlayerFPv(u8 *arg0);
void update_slime_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(s32);
s32 is_timer_active__15TObjEneSlimeOneFPv(void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, int);
M2C_UNK set_random_timer__15TObjEneSlimeOneFPvii(void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DA678;

void init_slime_state__10TObjPlayerFPv(void *arg0) {
    set_random_timer__15TObjEneSlimeOneFPvii(arg0, 0x1E, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(arg0) > lbl_805DA678) {
        M2C_FIELD(arg0, s32 *, 0x3C4) = M2C_FIELD(arg0, s32 *, 0x3C4) * 0xFFFFFFFF;
    }
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(1));
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(2));
}

void TObjPlayer__sub_800EA120(u8 *arg0) {
  unsigned int new_var;
  *((s32 *) (((s8 *) arg0) + 0x3CC)) = 0xFFFF;
  *((s32 *) (((s8 *) arg0) + 0x39C)) = (s32) ((((s32) (lbl_805DA730 * calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)))) + 4) << 0x10);
  *((s32 *) (((s8 *) arg0) + 0x390)) = 0x7FFFFFFF;
  *((s32 *) (((s8 *) arg0) + 0x3C4)) = 0x400;
  new_var = 1;
  if (calc_boss4_scale__10TObjPlayerFi((void *)((s32) arg0)) > (*(const f32 *)&lbl_805DA678))
  {
    *((s32 *) (((s8 *) arg0) + 0x3C4)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C4))) * (-new_var));
  }
  TObjEneSlimeOne__sub_800EC7F4((void*)((int) (*((s32 *) (((s8 *) arg0) + 0x388)))), (void*)((int) new_var));
  set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(2));
}

void update_dive_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        spawn_particle_effect(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 3);
    }
}

void enter_appear_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 0x14;
    play_sound_effect(0x4003AD1D, arg0 + 0x38, 0, 0);
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(0xA));
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(1));
}

void update_slime_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        spawn_particle_effect(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 6);
    }
}

void enter_slime_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 8;
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(9));
    play_sound_effect(0x4003AD1D, arg0 + 0x38, 0, 0);
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(1));
}

    extern const float lbl_805DA67C;
    extern const float lbl_805DA6B4;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800EA678_lbl_8043D230_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D230) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800EA678_lbl_8043D23C_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D23C) == 0xC ? 1 : -1];

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800EA364(u8 *arg0) {
    Vec_800EA364 sp8;
    f32 s;
    f32 c;
    f32 t;
    f32 d;
    s32 i;
    s32 ang;
    M2C_FIELD(arg0, s32 *, 0x60) += 0x100;
    if (M2C_FIELD(arg0, f32 *, 0x398) > lbl_805DA6B4) {
        M2C_FIELD(arg0, s32 *, 0x39C) += 0xC00;
        d = 0.25f * (0.5f * (0.5f + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x39C))));
        t = M2C_FIELD(arg0, f32 *, 0x3B4) + d;
        M2C_FIELD(arg0, f32 *, 0x3B4) = t;
        if (t > 2.5f) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = 2.5f;
        }
    } else {
        t = M2C_FIELD(arg0, f32 *, 0x3B4) - lbl_805DA734;
        M2C_FIELD(arg0, f32 *, 0x3B4) = t;
        if (t < lbl_805DA6B4) {
            M2C_FIELD(arg0, f32 *, 0x3B4) = lbl_805DA6B4;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x398) -= M2C_FIELD(arg0, f32 *, 0x3B4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    for (i = 1; i < 15; i++) {
        M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3B8);
        M2C_FIELD(arg0, f32 *, 0x3C) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3BC);
        M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x3B4) * M2C_FIELD(arg0, f32 *, 0x3C0);
        if (TObjEneSlimeOne__sub_800EAD84(arg0) != 0 && csnLookAt(arg0 + 0x44, arg0 + 0x38) == 0) {
            break;
        }
        ang = i << 12;
        if (i & 1) {
            ang *= -1;
        }
        s = TBoss8Dragon__sub_803D64C0(ang);
        c = TBoss8Dragon__sub_803D64DC(ang);
        M2C_FIELD(arg0, f32 *, 0x3B8) = c * M2C_FIELD(arg0, f32 *, 0x3B8) - s * M2C_FIELD(arg0, f32 *, 0x3C0);
        M2C_FIELD(arg0, f32 *, 0x3C0) = s * M2C_FIELD(arg0, f32 *, 0x3B8) + c * M2C_FIELD(arg0, f32 *, 0x3C0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x44);
    }
    if (M2C_FIELD(arg0, f32 *, 0x398) <= lbl_805DA6B4 && lbl_805DA6B4 == M2C_FIELD(arg0, f32 *, 0x3B4)) {
        if (find_nearest_visible_player(arg0, &sp8, lbl_805DA720) != 0xFFFF && TBoss6Kakusan__sub_803D8BD8(&sp8) > lbl_805DA6E0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 4);
        } else {
            TObjEneSlimeOne__sub_800EAE78(arg0, 3);
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800EA56C(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) (*(const f32 *)&lbl_805DA6B4);
    if (find_nearest_visible_player(arg0, arg0 + 0x3B8, lbl_805DA6DC) == 0xFFFF) {
        TObjEneSlimeOne__sub_800EAE78((void *) (arg0), (int) (2));
        return;
    }
    temp_r31 = (s32) (lbl_805DA738 * calc_boss4_scale__10TObjPlayerFi((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) ((lbl_805DA6E0 * TBoss8Dragon__sub_803D64C0((int) (temp_r31))) + M2C_FIELD(arg0, f32 *, 0x3B8));
    M2C_FIELD(arg0, f32 *, 0x3C0) = (f32) ((lbl_805DA6E0 * TBoss8Dragon__sub_803D64DC(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x3C0));
    if (TBoss6Kakusan__sub_803D8BD8(arg0 + 0x3B8) <= lbl_805DA718) {
        TObjEneSlimeOne__sub_800EAE78((void *) (arg0), (int) (2));
        return;
    }
    TNpcPlayer__sub_803D97B4((void *) (arg0 + 0x3B8));
    temp_f1 = (lbl_805DA6E4 * calc_boss4_scale__10TObjPlayerFi((void *) (arg0))) + lbl_805DA720;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    TObjEneSlimeOne__sub_800EC7F4((void *) M2C_FIELD(arg0, s32 *, 0x388), (void *) 8);
    set_display_mode__15TObjEneSlimeOneFPvi((void *) (arg0), (int) (1));
}
#pragma pop

void TObjPlayer__sub_800EA678(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&lbl_805DA67C);
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) (lbl_805DA708 * ((*(const f32 *)&lbl_805DA67C) - M2C_FIELD(arg0, f32 *, 0x398)));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 0) - M2C_FIELD(&lbl_8043D230.value, f32 *, 0))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 4) - M2C_FIELD(&lbl_8043D230.value, f32 *, 4))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 8) - M2C_FIELD(&lbl_8043D230.value, f32 *, 8))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1 > lbl_805DA740) {
        var_f31 = ((*(const f32 *)&lbl_805DA67C) - temp_f1) / lbl_805DA73C;
    }
    temp_f1_2 = var_f31 * (lbl_805DA744 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x390) << 0xA));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&lbl_805DA67C) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B0) * ((*(const f32 *)&lbl_805DA67C) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (M2C_FIELD(arg0, s32 *, 0x390) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1_3 >= (*(const f32 *)&lbl_805DA678)) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (lbl_805DA748 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x398) + lbl_805DA74C;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1_4;
    if (temp_f1_4 < (*(const f32 *)&lbl_805DA6B4)) {
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (M2C_UNK)(0));
    }
}
#pragma pop

void init_slime_display__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x398) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a4) = lbl_805DA6B4; set_display_mode__15TObjEneSlimeOneFPvi((void*)(a0), (int)(0)); TObjEneSlimeOne__sub_800EC7F4((void*)((void*)(*(int*)((char*)a0 + 0x388))), (void*)((void*)7)); }
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800EA820(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f31;
    var_f31 = (*(const f32 *)&lbl_805DA67C);
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) (lbl_805DA708 * ((*(const f32 *)&lbl_805DA67C) - M2C_FIELD(arg0, f32 *, 0x398)));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 0) - M2C_FIELD(&lbl_8043D230.value, f32 *, 0))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 4) - M2C_FIELD(&lbl_8043D230.value, f32 *, 4))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x398) * (M2C_FIELD(&lbl_8043D23C.value, f32 *, 8) - M2C_FIELD(&lbl_8043D230.value, f32 *, 8))) + M2C_FIELD(&lbl_8043D230.value, f32 *, 8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1 > lbl_805DA740) {
        var_f31 = ((*(const f32 *)&lbl_805DA67C) - temp_f1) / lbl_805DA73C;
    }
    temp_f1_2 = var_f31 * (lbl_805DA670 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x390) << 0xC));
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3A8) * ((*(const f32 *)&lbl_805DA67C) + temp_f1_2));
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B0) * ((*(const f32 *)&lbl_805DA67C) - temp_f1_2));
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (M2C_FIELD(arg0, s32 *, 0x390) + 1);
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1_3 >= (*(const f32 *)&lbl_805DA678)) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (*(const f32 *)&lbl_805DA67C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) (lbl_805DA748 * temp_f1_3);
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 0x398) + lbl_805DA750;
    M2C_FIELD(arg0, f32 *, 0x398) = temp_f1_4;
    if (temp_f1_4 > (*(const f32 *)&lbl_805DA67C)) {
        if (find_nearest_visible_player(arg0, 0, lbl_805DA6DC) != 0xFFFF) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 3);
        } else {
            TObjEneSlimeOne__sub_800EAE78(arg0, 2);
        }
    }
}
#pragma pop

}
