#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void update_camera_target__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6PlotFalz__sub_802AC040(f32, f32, f32, f32);
void TObjFish__sub_8032FE50(void *);
s32 TObjPlayer__sub_803D9B78(void);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF82C;
void TObjPlayer__sub_8033040C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8033051C(void* p);
void save_position__10TObjPlayerFi(s32 arg0);
void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);

void save_position__10TObjPlayerFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern const f32 lbl_805DF7FC;

void TObjPlayer__sub_8033040C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_r31;
    toggle_particle_effect__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3F8);
    var_r31 = 0;
    if (temp_f1 > lbl_805DF7FC) {
        TBoss6PlotFalz__sub_802AC008(temp_f1, M2C_FIELD(arg0, f32 *, 0x3FC));
        var_r31 = 1;
    } else {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x400);
        if (temp_f1_2 > lbl_805DF7FC) {
            TBoss6PlotFalz__sub_802AC040(temp_f1_2, lbl_805DF82C, lbl_805DF82C, lbl_805DF82C);
            var_r31 = 1;
        }
    }
    TObjFish__sub_8032FE50(arg0);
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK var_r3;

    var_r3 = 0x4006C919;
    if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7FC) {
        var_r3 = 0x6B015;
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7FC) {
            var_r3 = 0x6B518;
        }
    }
    TOTrapAncient01__sub_80226578(var_r3, arg0, arg0 + 0x38, 0, 0);
}

void TObjPlayer__sub_8033051C(void* p) { TObjPlayer__sub_8033040C((u8 *)(p)); }

}
