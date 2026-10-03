#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800163F8 { char pad[0x18]; };
struct VObj_800163F8 : Base_800163F8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual s32 m25();
};

struct Stack_80018780
{
  M2C_UNK sp8;
  u8 trailing_storage[0x8];
};

#include <stddef.h>
struct Stack_8001806C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8001806C_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_8001806C_lbl_8058D490_size[sizeof(RecoveredGlobal_8001806C_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_18_cc39a7 { char pad[0x18]; };
struct VObj_18_cc39a7 : VBase_18_cc39a7 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32 m17(M2C_UNK);
};

struct Vec_80018660 { f32 x, y, z; };

struct Obj_80018660 { u8 pad[0x38]; Vec_80018660 pos; u8 pad44[0x1c]; s32 angle; u8 pad64[0x238]; Vec_80018660 dest; };

struct Vec_80018570 { f32 x, y, z; };

struct Obj_80018570 { u8 pad[0x38]; Vec_80018570 pos; u8 pad44[0x1c]; s32 angle; u8 pad64[0x238]; Vec_80018570 dest; };

struct Vec_800180E8 { f32 x, y, z; };

struct Obj_800180E8 { u8 pad[0x308]; f32 vx; f32 vy; f32 vz; };

typedef struct Obj_80017804 {
    u8 pad0[0x38];
    Vec_800180E8 pos;
    u8 pad44[0x290 - 0x44];
    Vec_800180E8 home;
    Vec_800180E8 dest;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800180E8 cur;
    f32 vx;
    f32 vy;
    f32 vz;
} Obj_80017804;

typedef struct Obj_80017ABC {
    u8 pad0[0x38];
    Vec_800180E8 pos;
    u8 pad44[0x290 - 0x44];
    Vec_800180E8 home;
    Vec_800180E8 dest;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800180E8 cur;
} Obj_80017ABC;

typedef struct Vec_80018428 { f32 x, y, z; } Vec_80018428;

typedef s32 M2C_UNK;
struct Vec_800182A0 { f32 x, y, z; };

struct Sub_800182A0 { u8 pad[0xC]; f32 fC; };

struct Obj_800182A0 {
    u8 pad0[0x3C];
    f32 f3C;
    u8 pad40[0xA4 - 0x40];
    Sub_800182A0 *fA4;
    u8 padA8[0x29C - 0xA8];
    Vec_800182A0 f29C;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800182A0 pos;
};

struct Obj_800182A0;
struct Vec_800182A0;

struct Vec_80017E6C
{
  f32 x;
  f32 y;
  f32 z;
};

struct Plane_80017E6C
{
  u8 pad0[0xC];
  f32 fC;
  f32 f10;
  f32 f14;
};

struct Hit_80017E6C
{
  s32 f0;
  Plane_80017E6C *plane;
};

struct Obj_80017E6C
{
  u8 pad0[0x38];
  Vec_80017E6C pos;
  Vec_80017E6C prev;
  u8 pad50[0x2FC - 0x50];
  Vec_80017E6C cur;
  Vec_80017E6C vel;
};

struct Vec_80017BA8 { f32 x, y, z; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjPlayer__data_805D7D44;
extern const f32 lbl_805D7DB8;
extern const f32 lbl_805D7DBC;

f32 TObjPlayer__sub_800186E8(s32, u32, void *);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(u32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
extern const f32 lbl_805D7DC8;
f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
void enemy_set_heading_velocity(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss6Type1__sub_803D9370(void *a, void *b);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK angle_difference_abs(s32, s32);
extern const f64 TObjPlayer__data_804340B8;
void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss6Type1__sub_803D9370(void *a, void *b);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
M2C_UNK angle_difference_abs(s32, s32);
extern const f64 TObjPlayer__data_804340B8;
void TObjPlayer__sub_80018570(Obj_80018570 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss6Type1__sub_803D9370(void *a, void *b);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D80;
extern const f64 TObjPlayer__data_804340B8;
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
void TObjPlayer__sub_800180E8(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed);
void TObjPlayer__sub_800180E8(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f32 horizontal_distance_squared(void *, void *);
f32 TObjPlayer__sub_80017804(Obj_80017804 *arg0, Vec_800180E8 *arg1, f32 farg0);
void TObjPlayer__sub_800180E8(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed);
s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
f32 horizontal_distance_squared(void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
f32 TObjPlayer__sub_80017ABC(Obj_80017ABC *arg0, Vec_800180E8 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
f32 TCameraCtrl__sub_803D8D00(void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
void TBoss6Type1__sub_803D9370(void *a, void *b);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D80;
s32 TObjPlayer__sub_800181DC(u8 *arg0, Vec_800180E8 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u32 csnLookAt(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
void TBoss6Type1__sub_803D9370(void *a, void *b);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern const f64 TObjPlayer__data_804340B8;
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 lbl_805D7DC0;
extern const f32 lbl_805D7DC4;
s32 check_path_obstructed(u8 *arg0, Vec_80018428 *arg1);
s32 check_path_obstructed(u8 *arg0, Vec_80018428 *arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u32 csnVector(void *, void *, s32);
s32 project_actor_to_ground(s32, s32, s32);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
void TBoss6Type1__sub_803D9370(void *a, void *b);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern const f64 TObjPlayer__data_804340B8;
extern Vec_800182A0 lbl_8050BEE0;
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
M2C_UNK select_enemy_destination(Obj_800182A0 *self, Vec_800182A0 *arg1, int flags);
void enemy_set_heading_velocity(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK select_enemy_destination(Obj_800182A0 *self, Vec_800182A0 *arg1, int flags);
s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
void TBoss6Type1__sub_803D9370(void *a, void *b);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern const f64 TObjPlayer__data_804340B8;
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D80;
f32 TObjPlayer__sub_800178C8(u8 *arg0, s32 arg1, Vec_800180E8 arg2, f32 farg0, f32 farg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f32 newton_sqrtf(f32);
u32 csnVecterUnder(void *, int);
u32 csnVector(void *, void *, s32);
M2C_UNK clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 project_actor_to_ground(s32, s32, s32);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D70;
extern const f32 TObjPlayer__data_805D7D74;
void move_with_wall_slide(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void move_with_wall_slide(u8 *arg0);
void enemy_set_heading_velocity(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK select_enemy_destination(Obj_800182A0 *self, Vec_800182A0 *arg1, int flags);
void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D44;
extern const f32 lbl_805D7DB8;
extern const f32 lbl_805D7DBC;
f32 enemy_wander_home(u8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK spawn_confusion_feedback_effect(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800101B0(void *, M2C_UNK);
M2C_UNK show_miss_for_collider__10TObjPlayerFi(void *, s32);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 add_status_effect_timer__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK);
M2C_UNK angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 project_actor_to_ground(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (((VObj_800163F8 *)arg0)->m25() != 0) {
        return 1;
    }
    show_miss_for_collider__10TObjPlayerFi(arg0, arg2);
    return 0;
}

s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if (obj_testFlags30(arg0, 0x10) != 0) {
        temp_ret = add_status_effect_timer__10TObjPlayerFPvii(arg0, 1, -1);
        if (temp_ret > 0) {
            obj_clearFlags30(arg0, 0x3C);
            obj_setFlags30(arg0, 0x10);
            if ((temp_ret % 45) == 0) {
                spawn_confusion_feedback_effect(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

s32 update_action_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if ((obj_testFlags30(arg0, 8) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U)) {
        temp_ret = add_status_effect_timer__10TObjPlayerFPvii(arg0, 1, -1);
        if (temp_ret > 0) {
            if ((temp_ret % 45) == 0) {
                TObjPlayer__sub_800101B0(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_7;
    }
block_7:
    return 0;
}

f32 enemy_move_toward(u8 *arg0, s32 arg1, Vec_800180E8 arg2, s32 arg3, f32 farg0) {
    if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < TObjPlayer__data_805D7D80 || ((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
        if (((M2C_UNK (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, arg2, arg3) != 0) {
            ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, *(Vec_800180E8 *)(arg0 + 0x2FC));
        }
    }
    enemy_turn_toward_dest((Obj_80018660 *)arg0, arg1);
    enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), farg0);
    move_with_wall_slide((u8 *)(arg0));
    return horizontal_distance_squared(&arg2, arg0 + 0x38);
}

f32 TObjPlayer__sub_80017804(Obj_80017804 *arg0, Vec_800180E8 *arg1, f32 farg0) {
    VecCopy__FP3VecPC3Vec((s32) &arg0->dest, (s32) arg1);
    VecCopy__FP3VecPC3Vec((s32) &arg0->home, (s32) &arg0->cur);
    ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) TObjPlayer__sub_800180E8)(arg0, arg0->home, arg0->dest, farg0);
    arg0->pos.x += arg0->vx;
    arg0->pos.z += arg0->vz;
    return horizontal_distance_squared(arg1, &arg0->pos);
}

f32 TObjPlayer__sub_800178C8(u8 *arg0, s32 arg1, Vec_800180E8 arg2, f32 farg0, f32 farg1) {
    f32 d0;
    f32 d1;
    f32 d2;
    s32 a;
    Vec_800180E8 d;
    d0 = horizontal_distance_squared(arg0 + 0x2FC, arg0 + 0x290);
    d1 = horizontal_distance_squared(arg0 + 0x290, arg0 + 0x29C);
    d2 = horizontal_distance_squared(arg0 + 0x2FC, arg0 + 0x29C);
    if (farg1 * farg1 <= d0 || d1 < TObjPlayer__data_805D7D80 || d2 < TObjPlayer__data_805D7D80 || ((VObj_18_cc39a7 *)(arg0))->m17(0x96) != 0) {
        VecCopy__FP3VecPC3Vec((s32)&d, (s32)&arg2);
        TBoss6Type1__sub_803D9370(&d, arg0 + 0x2FC);
        a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
        d.z = farg1;
        d.x = d.y = TObjPlayer__data_805D7D24;
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *)a);
        rotate_vector_by_matrix(0, &d, &d);
        pop_matrix();
        TBoss4Zako__sub_803D8910(&d, arg0 + 0x2FC);
        if (((M2C_UNK (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, d, 1) != 0) {
            ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, *(Vec_800180E8 *)(arg0 + 0x2FC));
        }
    }
    enemy_turn_toward_dest((Obj_80018660 *)arg0, arg1);
    enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), farg0);
    move_with_wall_slide((u8 *)(arg0));
    return horizontal_distance_squared(&arg2, arg0 + 0x2FC);
}

f32 TObjPlayer__sub_80017ABC(Obj_80017ABC *arg0, Vec_800180E8 arg1, f32 farg0) {
    if (TObjPlayer__sub_800181DC((u8 *)((u8 *) arg0), (Vec_800180E8)(arg1)) != 0) {
        ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, arg0->cur);
        ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) TObjPlayer__sub_800180E8)(arg0, arg0->home, arg0->dest, farg0);
        move_with_wall_slide((u8 *)(arg0));
        return horizontal_distance_squared(&arg1, &arg0->pos);
    }
    return TObjPlayer__data_805D7D24;
}

struct Obj_80018660;
f32 enemy_wander_home(u8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    Vec_80017BA8 v;
    f32 var_f31;
    s32 ang;
    var_f31 = horizontal_distance_squared((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x29C));
    if ((var_f31 < (farg0 * farg0)) || (((VObj_18_cc39a7 *)(arg0))->m17(0x96) != 0)) {
        v.x = v.y = TObjPlayer__data_805D7D24;
        v.z = TObjPlayer__data_805D7D44;
        ang = (s32) (lbl_805D7DB8 * (lbl_805D7DBC * calc_boss4_scale__10TObjPlayerFi(arg0)));
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *) ang);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        v.x *= farg1;
        v.z *= farg2;
        TBoss4Zako__sub_803D8910(&v, arg0 + 0x50);
        {
            Vec_80017BA8 c = v;
            select_enemy_destination((Obj_800182A0 *) arg0, (Vec_800182A0 *) &c, 1);
        }
        M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = TObjPlayer__data_805D7D24;
        M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    } else {
        enemy_turn_toward_dest((Obj_80018660 *) arg0, arg1);
        enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), farg0);
        move_with_wall_slide(arg0);
        var_f31 = horizontal_distance_squared((void *) (arg0 + 0x29C), (void *) (arg0 + 0x2FC));
        M2C_FIELD(arg0, s32 *, 0x2AC) = M2C_FIELD(arg0, s32 *, 0x2AC) + 1;
    }
    return var_f31;
}

f32 TObjPlayer__sub_80017D68(Obj_80017ABC *arg0, Vec_800180E8 arg1, s32 arg2, f32 farg0) {
    if (((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
        if (((M2C_UNK (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, arg1, arg2) != 0) {
            ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, arg0->cur);
        }
    }
    ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) TObjPlayer__sub_800180E8)(arg0, arg0->home, arg0->dest, farg0);
    move_with_wall_slide((u8 *)(arg0));
    return horizontal_distance_squared(&arg1, &arg0->pos);
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
typedef struct Hit_80017E6C Hit_80017E6C;
typedef struct Obj_80017E6C Obj_80017E6C;
typedef struct Plane_80017E6C Plane_80017E6C;
typedef struct Vec_80017E6C Vec_80017E6C;
void move_with_wall_slide(u8 *arg0) {
  Obj_80017E6C *self = (Obj_80017E6C *) arg0;
  Vec_80017E6C next;
  Vec_80017E6C dir;
  Vec_80017E6C nrm;
  Hit_80017E6C *hit;
  Plane_80017E6C *pl;
  f32 len;
  f32 new_var;
  f32 xx;
  f32 zz;
  VecCopy__FP3VecPC3Vec((s32) (&self->prev), (s32) (&self->pos));
  VecCopy__FP3VecPC3Vec((s32) (&next), (s32) (&self->cur));
  TBoss4Zako__sub_803D8910(&next, &self->vel);
  VecCopy__FP3VecPC3Vec((s32) (&dir), (s32) (&self->vel));
  clamp_velocity__15TObjBoss2TunnelFPv(&dir);
  next.x = (TObjPlayer__data_805D7D74 * dir.x) + next.x;
  next.z = (TObjPlayer__data_805D7D74 * dir.z) + next.z;
  hit = (Hit_80017E6C *) csnVector(&self->cur, &next, 0x8FE0);
  if (hit != 0)
  {
    pl = hit->plane;
    nrm.x = pl->f14;
    nrm.z = -pl->fC;
    clamp_velocity__15TObjBoss2TunnelFPv(&nrm);
    xx = self->vel.x * self->vel.x;
    zz = self->vel.z * self->vel.z;
    len = newton_sqrtf(xx + zz);
    if (((self->vel.x * (new_var = nrm.x)) + (self->vel.z * nrm.z)) >= TObjPlayer__data_805D7D24)
    {
      self->vel.x = new_var * len;
      self->vel.z = nrm.z * len;
    }
    else
    {
      self->vel.x = (-new_var) * len;
      self->vel.z = (-nrm.z) * len;
    }
    VecCopy__FP3VecPC3Vec((s32) (&next), (s32) (&self->cur));
    TBoss4Zako__sub_803D8910(&next, &self->vel);
    VecCopy__FP3VecPC3Vec((s32) (&dir), (s32) (&self->vel));
    clamp_velocity__15TObjBoss2TunnelFPv(&dir);
    next.x = (TObjPlayer__data_805D7D74 * dir.x) + next.x;
    next.z = (TObjPlayer__data_805D7D74 * dir.z) + next.z;
    if (csnVector(&self->cur, &next, 0x8FE0) != 0)
    {
      return;
    }
  }
  VecCopy__FP3VecPC3Vec((s32) (&next), (s32) (&self->cur));
  TBoss4Zako__sub_803D8910(&next, &self->vel);
  next.y = next.y + TObjPlayer__data_805D7D70;
  if ((csnVecterUnder(&next, 0xE0) == 0) && (project_actor_to_ground((s32) self, (s32) (&next), 0) != 0))
  {
    VecCopy__FP3VecPC3Vec((s32) (&self->pos), (s32) (&next));
  }
}
#pragma pop

void enemy_set_heading_velocity(u8 *arg0, s32 arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8001806C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001806C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001806C, sp10) == 0x8) ? 1 : -1];
    Stack_8001806C stack;
    stack.sp10 = farg0;
    stack.spC = TObjPlayer__data_805D7D24;
    stack.sp8 = TObjPlayer__data_805D7D24;
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (void *) (arg1));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    M2C_FIELD(arg0, f32 *, 0x308) = stack.sp8;
    M2C_FIELD(arg0, f32 *, 0x310) = stack.sp10;
}

struct RecoveredGlobal_8001806C_lbl_8058D490;
void TObjPlayer__sub_800180E8(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed) {
    Vec_800180E8 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)dest);
    TBoss6Type1__sub_803D9370(&d, pos);
    if (d.x * d.x + d.z * d.z < TObjPlayer__data_805D7D80) {
        self->vz = TObjPlayer__data_805D7D24;
        self->vx = TObjPlayer__data_805D7D24;
    } else {
        a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
        d.z = speed;
        d.x = d.y = TObjPlayer__data_805D7D24;
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *)a);
        rotate_vector_by_matrix(0, &d, &d);
        pop_matrix();
        self->vx = d.x;
        self->vz = d.z;
    }
}

s32 TObjPlayer__sub_800181DC(u8 *arg0, Vec_800180E8 arg1) {
    Vec_800180E8 d;
    VecCopy__FP3VecPC3Vec((s32) &d, (s32) &arg1);
    TBoss6Type1__sub_803D9370(&d, arg0 + 0x2FC);
    push_matrix_from(&lbl_8058D490);
    rotate_matrix_y(0, (void *) 0x8000);
    rotate_vector_by_matrix(0, &d, &d);
    pop_matrix();
    if (TObjPlayer__data_805D7D80 < TCameraCtrl__sub_803D8D00(&d)) {
        TNpcPlayer__sub_803D97B4(&d);
        TBoss4Zako__sub_803D8910(&d, arg0 + 0x2FC);
        return ((s32 (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, d, 1);
    }
    return 0;
}

struct Vec_80018428;
M2C_UNK select_enemy_destination(Obj_800182A0 *self, Vec_800182A0 *arg1, int flags) {
    Vec_800182A0 d;
    s32 a;
    if (project_actor_to_ground((s32)self, (s32)arg1, 0) != 0) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&d, arg1);
        if (!(flags & 1)) {
            d.y = self->pos.y;
        } else {
            d.y += self->pos.y - self->f3C;
        }
        if (self->fA4 != NULL) {
            TBoss6Type1__sub_803D9370(&d, &self->pos);
            a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
            lbl_8050BEE0.x = lbl_8050BEE0.y = TObjPlayer__data_805D7D24;
            lbl_8050BEE0.z = self->fA4->fC;
            push_matrix_from(&lbl_8058D490);
            rotate_matrix_y(0, (void *)a);
            rotate_vector_by_matrix(0, &lbl_8050BEE0, &lbl_8050BEE0);
            pop_matrix();
            TBoss4Zako__sub_803D8910(&d, &lbl_8050BEE0);
            TBoss4Zako__sub_803D8910(&d, &self->pos);
        }
        if (!(flags & 2) && check_path_obstructed((u8 *)self, (Vec_80018428 *)&d) != 0) {
            return 0;
        }
        if (!(flags & 4) && csnVector(&self->pos, &d, -1) != 0) {
            return 0;
        }
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&self->f29C, arg1);
    return 1;
    }
    return 0;
}

s32 check_path_obstructed(u8 *arg0, Vec_80018428 *arg1) {
    Vec_80018428 d;
    s32 a;
    ((M2C_UNK (*)(void *, void *)) VecCopy__FP3VecPC3Vec)(&d, arg1);
    TBoss6Type1__sub_803D9370(&d, arg0 + 0x2FC);
    if (lbl_805D7DC0 < (d.x * d.x) + (d.z * d.z)) {
        a = (s32) (TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
        d.y = d.x = TObjPlayer__data_805D7D24;
        d.z = lbl_805D7DC4;
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *) a);
        rotate_vector_by_matrix(0, &d, &d);
        pop_matrix();
        TBoss4Zako__sub_803D8910(&d, arg0 + 0x2FC);
    } else {
        ((M2C_UNK (*)(void *, void *)) VecCopy__FP3VecPC3Vec)(&d, arg1);
    }
    if (csnLookAt(arg0 + 0x2FC, &d) != 0) {
        return 1;
    }
    return 0;
}

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (project_actor_to_ground(arg0, arg1, 0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x38);
        return 1;
    }
    return 0;
}

extern const f64 TObjPlayer__data_804340B8;

void TObjPlayer__sub_80018570(Obj_80018570 *self) {
    Vec_80018570 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)&self->dest);
    TBoss6Type1__sub_803D9370(&d, &self->pos);
    a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
    self->angle = lerp_angle_half__10TObjPlayerFUsUs(self->angle, a);
    angle_difference_abs(self->angle, a);
}

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}
typedef struct Stack_80018780 Stack_80018780;

void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn) {
    Vec_80018660 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)&self->dest);
    TBoss6Type1__sub_803D9370(&d, &self->pos);
    a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
    self->angle = approach_angle_limited(self->angle, a, turn);
    angle_difference_abs(self->angle, a);
}

f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2) {
  Stack_80018780 stack;
  f32 var_f31;
  s32 temp_r31;
  s32 temp_r3;
  var_f31 = lbl_805D7DC8;
  if (arg1 < 0x1000U)
  {
    temp_r3 = get_player_by_client_id((u32) arg1);
    if ((temp_r3 != 0) && (!((*((s32 *) (((s8 *) temp_r3) + 0x30))) & 0x800)))
    {
      ;
      if (get_field_3e4__10TObjPlayerFPv((void *) temp_r3) == get_current_floor())
      {
        var_f31 = TObjPlayer__sub_800186E8(arg0, (u32) temp_r3, &stack.sp8);
        if (arg2 != 0U)
        {
          VecCopy__FP3VecPC3Vec((s32)((void *) arg2), (s32)((void *) (&stack.sp8)));
        }
      }
    }
  }
  return var_f31;
}

}
