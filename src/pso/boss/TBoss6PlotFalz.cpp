#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802AB684 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802AB684_lbl_8047059C { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802AB684_lbl_8047059C_size[sizeof(RecoveredGlobal_802AB684_lbl_8047059C) == 0xC ? 1 : -1];

struct Vec_802AB3E0 { f32 x, y, z; };

struct Player_802AB3E0 { u8 pad[0x38]; Vec_802AB3E0 pos; };

struct Vec_802AB6CC { f32 x, y, z; };

extern "C" {
void fn_803594B4(void *, s32, f32);
extern const f32 TBoss6PlotFalz__data_805DE098;
extern const f32 TBoss6PlotFalz__data_805DE09C;
void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
extern RecoveredGlobal_802AB684_lbl_8047059C lbl_8047059C;
extern const f32 TBoss6PlotFalz__data_805DE098;
void TBoss6PlotFalz__sub_802AB684(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Player_802AB3E0 *get_player_data__10TObjPlayerFi(int);
int spawn_particle_effect(void *, int);
int play_sound_effect(int, int, int, int);
int is_state_1f__14TBoss6PlotFalzFUi(Player_802AB3E0 *);
int TBoss6Thanks__sub_8035D270();
extern s32 lbl_805D586C;
extern const f32 lbl_805DE094;
void TBoss6PlotFalz__sub_802AB3E0(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TCameraCtrl__sub_80068958();
s32 angle_diff_s16(s32, s32);
M2C_UNK get_camera_no__11TCameraCtrlFv();
u8 *get_player_by_client_id(u16);
M2C_UNK vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
M2C_UNK vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
extern const f64 lbl_804705E0[];
extern u8 *lbl_805D4DF0;
extern const f32 TBoss6PlotFalz__data_805DE098;
extern const f32 lbl_805DE0A4;
extern const f32 lbl_805DE0A8;
s32 TBoss6PlotFalz__sub_802AB6CC(void *arg0, f32 r);
}

extern "C" {

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
}

void TBoss6PlotFalz__sub_802AB3E0(void) {
    Vec_802AB3E0 v;
    Player_802AB3E0 *p;
    s32 i;
    f32 k;
    if (TBoss6Thanks__sub_8035D270() != 0) {
        play_sound_effect(0x40033231, 0, 0, 0);
        k = lbl_805DE094;
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (is_state_1f__14TBoss6PlotFalzFUi(p) != 0) {
                VecCopy__FP3VecPC3Vec((void *)(&v), (void *)(&p->pos));
                v.y += k;
                spawn_particle_effect(&v, 0x29);
            }
        }
    }
}

void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    if ((temp_r3 != NULL) && !(var_f1 <= TBoss6PlotFalz__data_805DE098)) {
        if (var_f1 > TBoss6PlotFalz__data_805DE09C) {
            var_f1 = TBoss6PlotFalz__data_805DE09C;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}
void TBoss6PlotFalz__sub_802AB684(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802AB684, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802AB684, spC) == 0x4) ? 1 : -1];
    Stack_802AB684 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0));
    subtract_vector((void *) (&stack.sp8), (void *) (&lbl_8047059C.value));
    stack.spC = TBoss6PlotFalz__data_805DE098;
    vector_length((void *) (&stack.sp8));
}
#define VLEN(v) (((f32 (*)(void *))vector_length)(v))
s32 TBoss6PlotFalz__sub_802AB6CC(void *arg0, f32 r) {
    Vec_802AB6CC c;
    Vec_802AB6CC pl;
    Vec_802AB6CC p = *(Vec_802AB6CC *)arg0;
    Vec_802AB6CC d1;
    Vec_802AB6CC d2;
    Vec_802AB6CC d3;
    Vec_802AB6CC a;
    Vec_802AB6CC b;
    Vec_802AB6CC dir;
    u8 *player;
    f32 l2;
    f32 l3;
    s32 ang1;
    s32 ang2;
    s32 ang3;
    s32 s1;
    s32 s2;
    p.y = TBoss6PlotFalz__data_805DE098;
    get_camera_no__11TCameraCtrlFv();
    player = get_player_by_client_id(TCameraCtrl__sub_80068958());
    if (player == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&pl, player + 0x38);
    VecCopy__FP3VecPC3Vec(&c, lbl_805D4DF0 + 0x178);
    VecCopy__FP3VecPC3Vec(&d1, &p);
    subtract_vector(&d1, &pl);
    d1.y = TBoss6PlotFalz__data_805DE098;
    if (VLEN(&d1) < r) {
        return 1;
    }
    VecCopy__FP3VecPC3Vec(&d2, &p);
    subtract_vector(&d2, &c);
    d2.y = TBoss6PlotFalz__data_805DE098;
    l2 = VLEN(&d2);
    if (l2 < r) {
        return 1;
    }
    if (l2 > lbl_805DE0A8) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&d3, &pl);
    subtract_vector(&d3, &c);
    d3.y = TBoss6PlotFalz__data_805DE098;
    l3 = VLEN(&d3);
    if (l3 <= lbl_805DE0A4 || l3 > lbl_805DE0A8) {
        return 0;
    }
    if (l3 < l2 - r) {
        return 0;
    }
    if (vec3_dot(&d2, &d3) <= TBoss6PlotFalz__data_805DE098) {
        return 0;
    }
    dir.x = -d2.z;
    dir.y = TBoss6PlotFalz__data_805DE098;
    dir.z = d2.x;
    normalize_vector(&dir);
    dir.x *= r;
    dir.z *= r;
    VecCopy__FP3VecPC3Vec(&a, &p);
    vec3_add_to(&a, &dir);
    VecCopy__FP3VecPC3Vec(&b, &p);
    subtract_vector(&b, &dir);
    ang1 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(a.x - c.x, a.z - c.z));
    ang2 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - c.x, b.z - c.z));
    ang3 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(pl.x - c.x, pl.z - c.z));
    s1 = angle_diff_s16(ang1, ang3);
    s2 = angle_diff_s16(ang3, ang2);
    if ((s1 >= 0 && s2 >= 0) || (s1 <= 0 && s2 <= 0)) {
        if (l3 < l2 + r) {
            return 0;
        }
        return 1;
    }
    return 0;
}

}
