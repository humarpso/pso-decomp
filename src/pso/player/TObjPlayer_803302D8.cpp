#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct T_8033053C { u8 pad[4]; };
typedef void (T_8033053C::*Fn_8033053C)();
struct Ent_8033053C { u8 pad[0x18]; Fn_8033053C fn; };

extern "C" {
void toggle_particle_effect__10TObjPlayerFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void update_camera_target__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6PlotFalz__sub_802AC040(f32, f32, f32, f32);
void TObjFish__sub_8032FE50(void *);
s32 pop_matrix(void);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF82C;
void TObjPlayer__sub_8033040C(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
s32 TBoss6PlotFalz__sub_802ABA9C();
M2C_UNK TBoss6Type2__sub_8032E834(void *);
M2C_UNK TBoss6Type2__sub_8032E8DC(void *);
M2C_UNK update_rotation_ramp__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_8032FD78(void *);
M2C_UNK sync_hp_apply_damage__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_8032FFC0(void *);
M2C_UNK TBoss6Rock__sub_80353B7C(void *, f32);
extern Ent_8033053C lbl_804EF028[];
extern const f32 lbl_805DF838;
extern const f32 lbl_805DF854;
}

extern "C" {

void TObjPlayer__sub_8033051C(void* p);
void save_position__10TObjPlayerFi(s32 arg0);
void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
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
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
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
    pop_matrix();
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
    play_persistent_sound(var_r3, arg0, arg0 + 0x38, 0, 0);
}

void TObjPlayer__sub_8033051C(void* p) { TObjPlayer__sub_8033040C((u8 *)(p)); }

void TBoss6Type2__sub_8033053C(u8 *arg0) {
    M2C_UNK var_r4;

    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if (TBoss6PlotFalz__sub_802ABA9C() == 0) {
            M2C_FIELD(arg0, s32 *, 0x378) = 0;
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        VecCopy__FP3VecPC3Vec((s32) (arg0 + 0x44), (s32) (arg0 + 0x38));
        {
            Fn_8033053C fn = lbl_804EF028[M2C_FIELD(arg0, s32 *, 0x380)].fn;
            if (fn) {
                (((T_8033053C *)arg0)->*fn)();
            }
        }
        update_rotation_ramp__11TBoss6Type2FPv((void *) (arg0));
        TBoss6Type2__sub_8032FFC0((void *) (arg0));
        save_position__10TObjPlayerFi((s32) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
            update_collisions__10TObjPlayerFPv((void *) (arg0));
            submit_cursor_candidate((void *) (arg0), (int) (-1));
        }
        TBoss6Rock__sub_80353B7C((void *) (arg0 + 0x38), (f32) (lbl_805DF838));
        var_r4 = 0xFF7F5126;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) != 0) {
            var_r4 = -0x5DB4;
        }
        TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (var_r4), (int) (1), (int) (1), (f32) (lbl_805DF854));
        TBoss6Type2__sub_8032FD78((void *) (arg0));
        sync_hp_apply_damage__11TBoss6Type2FPv((void *) (arg0));
        spawn_trap_by_stat__10TObjPlayerFPv(arg0);
        TBoss6Type2__sub_8032E8DC((void *) (arg0));
        TBoss6Type2__sub_8032E834((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    }
}

}
