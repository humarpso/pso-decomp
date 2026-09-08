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
}

extern "C" {

void enter_appear_state__10TObjPlayerFPv(u8 *arg0);
void enter_slime_state__10TObjPlayerFPv(u8 *arg0);
void init_slime_display__10TObjPlayerFPv(void* a0);
void init_slime_state__10TObjPlayerFPv(void *arg0);
void update_dive_timer__10TObjPlayerFPv(u8 *arg0);
void update_slime_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
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
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 3);
    }
}

void enter_appear_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 0x14;
    TBoss3Volopt__sub_8022675C(0x4003AD1D, arg0 + 0x38, 0, 0);
    TObjEneSlimeOne__sub_800EC7F4((void*)(M2C_FIELD(arg0, s32 *, 0x388)), (void*)(0xA));
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(1));
}

void update_slime_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xCD);
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
    TBoss3Volopt__sub_8022675C(0x4003AD1D, arg0 + 0x38, 0, 0);
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(arg0), (int)(1));
}

    extern const float lbl_805DA67C;
    extern const float lbl_805DA6B4;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800EA678_lbl_8043D230_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D230) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800EA678_lbl_8043D23C_size[sizeof(RecoveredGlobal_800EA678_lbl_8043D23C) == 0xC ? 1 : -1];
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

}
