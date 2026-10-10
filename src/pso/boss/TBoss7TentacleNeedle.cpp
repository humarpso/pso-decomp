#include "types.h"
#include "pso/TBoss7Tentacle.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Ten_802F08A8;
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK emit_hit_effect__18TBoss7PhotonBulletFPvPv(u32, void *);
u32 get_state__11TBoss7JointFv(void);
void update_extend_amount__14TBoss7TentacleFPv(u8 *arg0);
void switch_state__14TBoss7TentacleFPv(void *arg0);
M2C_UNK TBoss7Tentacle__sub_802F0608(void *, f32);
void TBoss7Tentacle__sub_802F09FC(u8 *arg0);
void TBoss7Tentacle__sub_802F0A2C(u8 *arg0);
void TBoss7Tentacle__sub_802F0A44(u8 *arg0);
f32 sin_table_lookup(s32);
M2C_UNK set_matrix_identity(int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
M2C_UNK transform_point_by_current_matrix(void *, void *);
void push_matrix(void);
void pop_matrix(void);
extern int TBoss7Tentacle__target_angle_table[];
extern s32 boss7_tentacle_angle_table[];
extern const f64 lbl_804740D8[];
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;
extern const f32 lbl_805DEC34;
extern const f32 lbl_805DEC3C;
extern const f32 lbl_805DEC40;
extern const f32 lbl_805DEC44;
void run_task__14TBoss7TentacleFv(u8 *arg0);
}

extern "C" {

struct RecoveredGlobal_802EFB1C_lbl_80541918 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802EFB1C_lbl_80541918;

struct VBase_18_9935f6 { char pad[0x18]; };

struct VObj_18_9935f6 : VBase_18_9935f6 {
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
    virtual M2C_UNK m20(s32, f32);
    virtual M2C_UNK m21(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual s32 m25(s32, M2C_UNK, f32);
};

typedef struct Hit_802EF99C { s32 a; f32 f; } Hit_802EF99C;

typedef struct Obj_802EF99C { u8 pad0[0x44]; s32 flags[12]; } Obj_802EF99C;

struct Cnt_802EF898 { u8 pad[4]; u32 n; };

struct Ten_802EF898 { u8 pad[0x74]; f32 t; Cnt_802EF898 *c; };

typedef char RecoveredGlobal_802EFB1C_lbl_80541918_size[sizeof(RecoveredGlobal_802EFB1C_lbl_80541918) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802EFEA8_lbl_80541918 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_802EFEA8_lbl_80541918_size[sizeof(RecoveredGlobal_802EFEA8_lbl_80541918) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802EFEC4_lbl_80541918 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef char RecoveredGlobal_802EFEC4_lbl_80541918_size[sizeof(RecoveredGlobal_802EFEC4_lbl_80541918) == 0x10 ? 1 : -1];

struct V_802F0A5C { f32 x, y, z; };

struct Ten_802F0A5C { u8 pad0[0x50]; V_802F0A5C v[14]; u32 w[14]; };

struct V_802EFF24 { f32 x, y, z; };

struct Node_802EFF24 { u8 pad0[8]; V_802EFF24 pos; u8 pad14[8]; s32 ang; u8 pad20[0x18]; };

struct Tent_802EFF24 { u8 pad0[0x50]; V_802EFF24 pos[14]; s32 ang[14]; };

struct Cnt_802F08A8 { u8 pad[4]; u32 n; };

struct Ten_802F08A8 { u8 pad0[0x20]; Cnt_802F08A8 *c; u8 pad1[0x134 - 0x24]; f32 t; f32 d; };

struct Ten_802F0A5C;

typedef struct Anim_802F0BE8 { u8 pad0[4]; u32 n; } Anim_802F0BE8;

void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, s32);
int queue_destruction__7TObjectFv(void*);
int disallow_rendering__7TObjectFv(void*);
s32 calc_random_scaled__10TObjPlayerFv(void);
M2C_UNK attach_particle_model(int, int, int, int, int, f32);
s32 spawn_particle_effect(void *, int);
f32 horizontal_distance_squared(void *, void *);
u8 * get_player_by_client_id(u16);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 notify_fish_obj__10TObjPlayerFPv(int);
s32 queue_boss_effect__10TObjPlayerFPv(int);
s32 TObjPlayer__sub_802E80A0();
void draw_effect__10TObjPlayerFv(void *);
void restart_particle_effect__14TBoss7TentacleFPv(u8 *arg0);
s32 advance_anim_time_wrapped__14TBoss7TentacleFPvf(void *p, f32 d);
s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);
void TBoss7Tentacle__sub_802EF954(void* p);
void damage_nearby_players__14TBoss7TentacleFPv(u8 *arg0);
void update_retract_state__14TBoss7TentacleFPv(u8 *arg0);
void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0);
void render__20TBoss7TentacleNeedleFv(void *arg0);
void run_task__20TBoss7TentacleNeedleFv(void *arg0);
void * __dt__20TBoss7TentacleNeedleFv(void *arg0, s16 arg1);
void fn_802EFEA8(void);
void TObjPlayer__sub_802EFEC4(void);
void render__14TBoss7TentacleFv(u8 *arg0);
void update_extend_amount__14TBoss7TentacleFPv(u8 *arg0);
void switch_state__14TBoss7TentacleFPv(void *arg0);
u8 TBoss7Tentacle__sub_802F0904(u8 *arg0);
void TBoss7Tentacle__sub_802F0918(void* p);
void reset_state__14TBoss7TentacleFPv(void* a0);
void setup_state__14TBoss7TentacleFPv(void* a0);
void TBoss7Tentacle__sub_802F09B4(void* p);
void TBoss7Tentacle__sub_802F09C8(void* a0);
void TBoss7Tentacle__sub_802F09EC(void* p);
void TBoss7Tentacle__sub_802F09FC(u8 *arg0);
void TBoss7Tentacle__sub_802F0A14(u8 *arg0);
void TBoss7Tentacle__sub_802F0A2C(u8 *arg0);
void TBoss7Tentacle__sub_802F0A44(u8 *arg0);
void init_segments__14TBoss7TentacleFPv(Ten_802F0A5C *o);
void TBoss7Tentacle__sub_802F0AD0(void* a0);
void TBoss7Tentacle__sub_802F0AF0(u8 *arg0);
void start_attack_at_position__14TBoss7TentacleFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void TBoss7Tentacle__sub_802F0B58(u8 *arg0);
void TBoss7Tentacle__sub_802F0B70(void* p);
void TBoss7Tentacle__sub_802F0B80(void* p);
void TObjPlayer__sub_802F0D2C(void);
s32 rand(void);
M2C_UNK rotate_matrix_zyx(int, int, int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
void rotate_matrix_by_node_angles(void *, int);
void push_matrix(void);
void pop_matrix(void);
M2C_UNK scale_current_matrix(void *);
void post_translate_matrix(void *);
M2C_UNK draw_chunk_object(void *);
void draw_model_motion(void *, void *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);

extern int TBoss7Tentacle__target_angle_table[];
extern V_802F0A5C TBoss7Tentacle__segment_offsets[];
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;
extern M2C_UNK __vt__14TBoss7Tentacle[];
extern M2C_UNK __vt__20TBoss7TentacleNeedle[];
extern M2C_UNK lbl_80474070[];
extern Node_802EFF24 lbl_80541528[];
extern u32 TBoss7Tentacle__needle_offsets[];
extern RecoveredGlobal_802EFB1C_lbl_80541918 boss7_tentacle_needle_target_state;
extern s32 lbl_805D3FD8;
extern s32 lbl_805D6948;
extern const f32 lbl_805DEC08;
extern const f32 lbl_805DEC0C;
extern const f32 lbl_805DEC10;
extern const f32 lbl_805DEC14;
extern const f32 lbl_805DEC18;
extern const f32 lbl_805DEC1C;
extern const f32 lbl_805DEC28;
extern const f32 lbl_805DEC34;
extern const f32 lbl_805DEC38;
extern const float lbl_805DEC48;
extern const float lbl_805DEC5C;
extern const f32 lbl_805DEC60;

struct Ten_802F01D0 { u8 pad0[0x50]; V_802F0A5C v[14]; };

extern "C" {
void advance_path_position__14TBoss7TentacleFPv(Ten_802F08A8 *o);
extern V_802F0A5C TBoss7Tentacle__segment_offsets[];
}

void restart_particle_effect__14TBoss7TentacleFPv(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r3;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x40)))) != 0U)
  {
    queue_destruction__7TObjectFv((void*)(*((void **) (((s8 *) arg0) + 0x40))));
    *((u32 *) (((s8 *) arg0) + 0x40)) = 0U;
  }
  temp_r31 = spawn_particle_effect((void *) (arg0 + 0x1C), (int) 0x215);
  temp_r3 = temp_r31;
  if (temp_r3 != 0)
  {
    temp_r31 = TObjPlayer__sub_802E80A0();
    attach_particle_model((int) temp_r3, (int) queue_boss_effect__10TObjPlayerFPv((int) 4), (int) temp_r31, (int) 0, (int) 0, (f32) (*(f32 *)&TBoss7Tentacle__data_805DEC00));
  }
  play_sound_effect((int) 0x3A809, (void *) (arg0 + 0x1C), (int) 0, (int) 0);
}

s32 advance_anim_time_wrapped__14TBoss7TentacleFPvf(void *p, f32 d) {
    Ten_802EF898 *o = (Ten_802EF898 *)p;
    f32 lim = (f32)o->c->n - TBoss7Tentacle__data_805DEC00;
    o->t += d;
    if (lim <= o->t) {
        o->t -= lim;
    }
}

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0) {
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f4 < ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u32 *, 4) - TBoss7Tentacle__data_805DEC00)) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f4 + farg0);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    return 1;
}

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf((void *)(p), TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }

void damage_nearby_players__14TBoss7TentacleFPv(u8 *arg0) {
    s32 i;
    u8 *p;
    advance_anim_time_wrapped__14TBoss7TentacleFPvf((void *)(arg0), lbl_805DEC08);
    for (i = 0; (u16)i != 12; i++) {
        p = get_player_by_client_id((u16)i);
        if (p != NULL && horizontal_distance_squared(p + 0x38, arg0 + 0x1C) < lbl_805DEC0C) {
            if (*(s32 *)(arg0 + 0x3C) == 0 && ((VObj_18_9935f6 *)p)->m25(*(s32 *)(arg0 + 0x10), 0, lbl_805DEC10) != 0) {
                ((VObj_18_9935f6 *)p)->m20(*(s32 *)(arg0 + 0x10), TBoss7Tentacle__data_805DEC00);
            }
            if (obj_testFlags30(p, 0x801) == 0) {
                Hit_802EF99C b;
                b.a = 15;
                b.f = lbl_805DEC0C;
                Hit_802EF99C a = b;
                ((VObj_18_9935f6 *)p)->m21(*(s32 *)(arg0 + 0x10), &a, 0, -1, -1);
                if (((Obj_802EF99C *)arg0)->flags[(u16)i] == 0) {
                    spawn_particle_effect(p + 0x2FC, 0x214);
                    ((Obj_802EF99C *)arg0)->flags[(u16)i] = 1;
                }
            }
        }
    }
    if (*(s32 *)(arg0 + 0x3C) == 0x3C) {
        *(s32 *)(arg0 + 0x38) = 3;
        *(s32 *)(arg0 + 0x3C) = 0;
        *(s32 *)(arg0 + 0x78) = *(s32 *)((u8 *)&boss7_tentacle_needle_target_state + 8);
        *(f32 *)(arg0 + 0x74) = TBoss7Tentacle__data_805DEC04;
    } else {
        *(s32 *)(arg0 + 0x3C) += 1;
    }
}

void update_retract_state__14TBoss7TentacleFPv(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x74);
    if ((lbl_805DEC14 < temp_f1) && (temp_f1 <= lbl_805DEC18)) {
        restart_particle_effect__14TBoss7TentacleFPv((u8 *)(arg0));
    }
    if (advance_toward_limit__14TBoss7TentacleFPvf(arg0, TBoss7Tentacle__data_805DEC00) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 2;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(&boss7_tentacle_needle_target_state.value, s32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    }
}

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 == 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805DEC1C;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1);
}

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    draw_effect__10TObjPlayerFv(arg0);
    set_global_flag__10TObjPlayerFv();
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 28));
    rotate_matrix_by_node_angles((void *)((char *)arg0 + 40), 1);
    draw_model_motion((*(void * *)&lbl_805D6948), M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

void run_task__20TBoss7TentacleNeedleFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r0) {
    case 0:
        ((M2C_UNK (*)(void))advance_needle_timer__20TBoss7TentacleNeedleFPv)();
        return;
    case 1:
        ((M2C_UNK (*)(void))update_retract_state__14TBoss7TentacleFPv)();
        return;
    case 2:
        ((M2C_UNK (*)(void))damage_nearby_players__14TBoss7TentacleFPv)();
        return;
    case 3:
        ((M2C_UNK (*)(void))TBoss7Tentacle__sub_802EF954)();
        return;
    }
}

void *__dt__20TBoss7TentacleNeedleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss7TentacleNeedle;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void fn_802EFEA8(void) {
    M2C_FIELD(&(*(RecoveredGlobal_802EFEA8_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 0) = 0;
    lbl_805D6948 = 0;
    M2C_FIELD(&(*(RecoveredGlobal_802EFEA8_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 4) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_802EFEA8_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 8) = 0;
}

void TObjPlayer__sub_802EFEC4(void) {
    lbl_805D6948 = queue_boss_effect__10TObjPlayerFPv((int) (5));
    M2C_FIELD(&(*(RecoveredGlobal_802EFEC4_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 0) = notify_fish_obj__10TObjPlayerFPv((int) (0x13));
    M2C_FIELD(&(*(RecoveredGlobal_802EFEC4_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 4) = notify_fish_obj__10TObjPlayerFPv((int) (0x14));
    M2C_FIELD(&(*(RecoveredGlobal_802EFEC4_lbl_80541918 *)&boss7_tentacle_needle_target_state).value, s32 *, 8) = notify_fish_obj__10TObjPlayerFPv((int) (0x12));
}

}
TBoss7Tentacle::~TBoss7Tentacle() {}

extern "C" {
void render__14TBoss7TentacleFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r7;
    u8 *temp_r8;
    ((M2C_UNK (*)(void))draw_effect__10TObjPlayerFv)();
    ((M2C_UNK (*)(void))push_matrix)();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    switch (temp_r0) {
    case 0:
        ((M2C_UNK (*)(void))set_global_flag__10TObjPlayerFv)();
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x13C)));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        ((M2C_UNK (*)(void *, int, f32))draw_model_motion)((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (f32) (M2C_FIELD(arg0, f32 *, 0x134)));
        ((M2C_UNK (*)(void))clear_global_state__10TObjPlayerFv)();
        break;
    case 1:
    case 4:
    case 5:
        ((M2C_UNK (*)(void))set_global_flag__10TObjPlayerFv)();
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        rotate_matrix_zyx((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x140)), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (0));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        ((M2C_UNK (*)(void *, int, f32))draw_model_motion)((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (f32) (M2C_FIELD(arg0, f32 *, 0x134)));
        ((M2C_UNK (*)(void))clear_global_state__10TObjPlayerFv)();
        break;
    case 2:
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        rotate_matrix_zyx((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x140)), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (0));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_chunk_object((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)));
        break;
    case 3:
        ((M2C_UNK (*)(void *))post_translate_matrix)((void *) ((u8 *)(arg0) + 0x40));
        scale_current_matrix((void *) (lbl_80474070));
        rotate_matrix_zyx((int) (0), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (M2C_FIELD(arg0, s32 *, 0x140)));
        for (var_ctr = 0; var_ctr < 14; var_ctr++) {
            lbl_80541528[var_ctr].pos.x = ((Tent_802EFF24 *)arg0)->pos[var_ctr].x;
            lbl_80541528[var_ctr].pos.y = ((Tent_802EFF24 *)arg0)->pos[var_ctr].y;
            lbl_80541528[var_ctr].pos.z = ((Tent_802EFF24 *)arg0)->pos[var_ctr].z;
            lbl_80541528[var_ctr].ang = ((Tent_802EFF24 *)arg0)->ang[var_ctr];
        }
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_chunk_object((void *) (lbl_80541528));
        break;
    }
    ((M2C_UNK (*)(void))pop_matrix)();
}

#pragma push
#pragma opt_common_subs off
void update_extend_amount__14TBoss7TentacleFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 2) {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805DEC34);
        if (M2C_FIELD(arg0, f32 *, 0x2C) < (*(const f32 *)&TBoss7Tentacle__data_805DEC04)) {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (*(const f32 *)&TBoss7Tentacle__data_805DEC04);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + lbl_805DEC38);
        if (M2C_FIELD(arg0, f32 *, 0x2C) > (*(const f32 *)&TBoss7Tentacle__data_805DEC00)) {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (*(const f32 *)&TBoss7Tentacle__data_805DEC00);
        }
    }
}
extern int fold_flush_0;
#pragma pop

void switch_state__14TBoss7TentacleFPv(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x34);
    if (state != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        switch (state) {
        case 0:
            TBoss7Tentacle__sub_802F09EC((void*)(arg0));
            break;
        case 1:
            TBoss7Tentacle__sub_802F09C8((void*)(arg0));
            break;
        case 4:
            TBoss7Tentacle__sub_802F09B4((void*)(arg0));
            break;
        case 2:
            setup_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 3:
            reset_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 5:
            TBoss7Tentacle__sub_802F0918((void*)(arg0));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
}

void run_task__14TBoss7TentacleFv(u8 *arg0) {
    switch_state__14TBoss7TentacleFPv(arg0);
    switch (M2C_FIELD(arg0, s32 *, 0x30)) {
    case 0:
        advance_path_position__14TBoss7TentacleFPv((Ten_802F08A8 *)arg0);
        M2C_FIELD(arg0, s32 *, 0x148) = M2C_FIELD(arg0, s32 *, 0x148) + M2C_FIELD(arg0, s32 *, 0x144);
        M2C_FIELD(arg0, s32 *, 0x13C) = (s32)(lbl_805DEC3C * (TBoss7Tentacle__data_805DEC00 + sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x148))));
        if (!(M2C_FIELD(arg0, s32 *, 0x4C) & 1)) {
            M2C_FIELD(arg0, s32 *, 0x13C) = -M2C_FIELD(arg0, s32 *, 0x13C);
        }
        break;
    case 1:
        advance_path_position__14TBoss7TentacleFPv((Ten_802F08A8 *)arg0);
        M2C_FIELD(arg0, s32 *, 0x140) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x140), 0x4000, 0x280);
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x13C) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x13C), 0, 0x80);
        if (M2C_FIELD(arg0, s32 *, 0x13C) == 0) {
            TBoss7Tentacle__sub_802F09FC(arg0);
        }
        break;
    case 3: {
        V_802F0A5C p;
        V_802F0A5C v;
        f32 len;
        s32 i;
        v.x = TBoss7Tentacle__data_805DEC04;
        v.y = TBoss7Tentacle__data_805DEC04;
        v.z = TBoss7Tentacle__data_805DEC04;
        push_matrix();
        set_matrix_identity(0);
        concat_matrix__10TObjPlayerFUiUi(0, M2C_FIELD(arg0, s32 *, 0x130));
        transform_point_by_current_matrix(&v, arg0 + 0x40);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x14C);
        subtract_vector(&v, arg0 + 0x40);
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        M2C_FIELD(arg0, s32 *, 0x13C) = (s32)(lbl_804740D8[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)) + 0x8000;
        VecCopy__FP3VecPC3Vec(&p, arg0 + 0x14C);
        switch (M2C_FIELD(arg0, s32 *, 0x38)) {
        case 0:
            M2C_FIELD(arg0, f32 *, 0x160) -= lbl_805DEC34;
            if (M2C_FIELD(arg0, f32 *, 0x160) <= lbl_805DEC34) {
                M2C_FIELD(arg0, f32 *, 0x160) = lbl_805DEC34;
                M2C_FIELD(arg0, s32 *, 0x164) = 0;
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
            }
            for (i = 2; i < 12; i++) {
                ((Ten_802F01D0 *)arg0)->v[i].x = M2C_FIELD(arg0, f32 *, 0x160) * TBoss7Tentacle__segment_offsets[i].x;
            }
            M2C_FIELD(arg0, s32 *, 0x100) = 0x4000;
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x158) += lbl_805DEC40;
            if (M2C_FIELD(arg0, f32 *, 0x158) > len) {
                M2C_FIELD(arg0, f32 *, 0x158) = len;
                M2C_FIELD(arg0, s32 *, 0x164) = 0;
                M2C_FIELD(arg0, s32 *, 0x38) = 2;
                {
                    u32 st = get_state__11TBoss7JointFv();
                    if (st != 0U) {
                        emit_hit_effect__18TBoss7PhotonBulletFPvPv(st, &p);
                    }
                }
                play_sound_effect(0x3A809, &p, 0, 0);
            }
            if (M2C_FIELD(arg0, f32 *, 0x158) >= lbl_805DEC44 * len) {
                M2C_FIELD(arg0, f32 *, 0x15C) = TBoss7Tentacle__data_805DEC00;
            } else {
                M2C_FIELD(arg0, f32 *, 0x15C) = M2C_FIELD(arg0, f32 *, 0x158) / (lbl_805DEC44 * len);
            }
            M2C_FIELD(arg0, s32 *, 0x140) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x140), boss7_tentacle_angle_table[M2C_FIELD(arg0, s32 *, 0x4C)], 0x100);
            TBoss7Tentacle__sub_802F0608(arg0, len);
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x164) = M2C_FIELD(arg0, s32 *, 0x164) + 1;
            if (M2C_FIELD(arg0, s32 *, 0x164) > M2C_FIELD(arg0, s32 *, 0x168)) {
                M2C_FIELD(arg0, s32 *, 0x164) = 0;
                M2C_FIELD(arg0, f32 *, 0x160) = TBoss7Tentacle__data_805DEC00;
                M2C_FIELD(arg0, s32 *, 0x38) = 3;
            }
            break;
        case 3:
            M2C_FIELD(arg0, f32 *, 0x158) -= 8.0f;
            if (M2C_FIELD(arg0, f32 *, 0x158) < 20.0f) {
                M2C_FIELD(arg0, f32 *, 0x158) = 20.0f;
                M2C_FIELD(arg0, s32 *, 0x38) = 2;
                TBoss7Tentacle__sub_802F0A2C(arg0);
            }
            if (M2C_FIELD(arg0, f32 *, 0x158) >= lbl_805DEC44 * len) {
                M2C_FIELD(arg0, f32 *, 0x15C) = TBoss7Tentacle__data_805DEC00;
            } else {
                M2C_FIELD(arg0, f32 *, 0x15C) = M2C_FIELD(arg0, f32 *, 0x158) / (lbl_805DEC44 * len);
            }
            M2C_FIELD(arg0, s32 *, 0x140) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x140), 0, 0x100);
            TBoss7Tentacle__sub_802F0608(arg0, len);
            break;
        }
        break;
    }
    case 4:
        advance_path_position__14TBoss7TentacleFPv((Ten_802F08A8 *)arg0);
        M2C_FIELD(arg0, s32 *, 0x13C) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x13C), TBoss7Tentacle__target_angle_table[M2C_FIELD(arg0, s32 *, 0x4C)], 0x80);
        break;
    case 5:
        advance_path_position__14TBoss7TentacleFPv((Ten_802F08A8 *)arg0);
        M2C_FIELD(arg0, s32 *, 0x140) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x140), 0, 0x280);
        if (M2C_FIELD(arg0, s32 *, 0x140) == 0) {
            TBoss7Tentacle__sub_802F0A44(arg0);
        }
        break;
    }
    update_extend_amount__14TBoss7TentacleFPv(arg0);
}

void advance_path_position__14TBoss7TentacleFPv(Ten_802F08A8 *o) {
    f32 lim = (f32)(o->c->n - 1);
    o->t = o->t + o->d;
    if (o->t >= lim) {
        o->t = o->t - lim;
    }
}

u8 TBoss7Tentacle__sub_802F0904(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x30) == 4);
}

void TBoss7Tentacle__sub_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

void reset_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = 0; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x38) = 0; init_segments__14TBoss7TentacleFPv((Ten_802F0A5C *)(a0)); *(float*)((char*)a0 + 0x158) = lbl_805DEC48; *(int*)((char*)a0 + 0x164) = 0; *(float*)((char*)a0 + 0x15c) = TBoss7Tentacle__data_805DEC04; *(float*)((char*)a0 + 0x160) = TBoss7Tentacle__data_805DEC00; }

void setup_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__target_angle_table[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 16384; *(int*)((char*)a0 + 0x38) = 0; }

void TBoss7Tentacle__sub_802F09B4(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

void TBoss7Tentacle__sub_802F09C8(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__target_angle_table[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 0; }

void TBoss7Tentacle__sub_802F09EC(void* p) { *(s32*)((char*)p + 0x140) = 0; *(s32*)((char*)p + 0x13c) = 0; }

void TBoss7Tentacle__sub_802F09FC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A2C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A44(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void init_segments__14TBoss7TentacleFPv(Ten_802F0A5C *o) {
    s32 i;
    for (i = 0; i < 14; i++) {
        VecCopy__FP3VecPC3Vec(&o->v[i], &TBoss7Tentacle__segment_offsets[i]);
        o->w[i] = TBoss7Tentacle__needle_offsets[i];
    }
}

void TBoss7Tentacle__sub_802F0AD0(void* a0) { *(float*)((char*)a0 + 0x138) = lbl_805DEC5C; *(int*)((char*)a0 + 0x144) = 3038; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x34) = 0; }

void TBoss7Tentacle__sub_802F0AF0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 5;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void start_attack_at_position__14TBoss7TentacleFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if ((var_r5 <= 0) || (var_r5 >= 0x258)) {
        var_r5 = 0x78;
    }
    M2C_FIELD(arg0, s32 *, 0x168) = var_r5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x14C, arg1);
    TBoss7Tentacle__sub_802F0A14((u8 *)(arg0));
}

void TBoss7Tentacle__sub_802F0B58(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }

void TBoss7Tentacle__sub_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

u8 *__ct__14TBoss7TentacleFv(u8 *arg0, void *arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    (*(M2C_UNK * *)((s8 *)(arg0) + (0x18))) = __vt__14TBoss7Tentacle;
    (*(s32 *)((s8 *)(arg0) + (0))) = lbl_805D3FD8;
    (*(s32 *)((s8 *)(arg0) + (0x1C))) = ((s32 (*)(s32))queue_boss_effect__10TObjPlayerFPv)(1);
    (*(Anim_802F0BE8 * *)((s8 *)(arg0) + (0x20))) = ((Anim_802F0BE8 * (*)(s32))notify_fish_obj__10TObjPlayerFPv)(0x11);
    (*(s32 *)((s8 *)(arg0) + (0x130))) = arg2;
    (*(s32 *)((s8 *)(arg0) + (0x4C))) = arg3;
    (*(s32 *)((s8 *)(arg0) + (0x30))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x34))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x38))) = 0;
    init_segments__14TBoss7TentacleFPv((Ten_802F0A5C *)arg0);
    (*(f32 *)((s8 *)(arg0) + (0x134))) = (f32)((*(Anim_802F0BE8 * *)((s8 *)(arg0) + (0x20)))->n - 1) * (lbl_805DEC28 * (f32)rand());
    (*(f32 *)((s8 *)(arg0) + (0x138))) = lbl_805DEC60;
    (*(s32 *)((s8 *)(arg0) + (0x13C))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x140))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x144))) = 0x5EF;
    (*(s32 *)((s8 *)(arg0) + (0x148))) = calc_random_scaled__10TObjPlayerFv();
    (*(f32 *)((s8 *)(arg0) + (0x158))) = TBoss7Tentacle__data_805DEC04;
    (*(f32 *)((s8 *)(arg0) + (0x15C))) = TBoss7Tentacle__data_805DEC04;
    (*(s32 *)((s8 *)(arg0) + (0x164))) = 0;
    (*(s32 *)((s8 *)(arg0) + (0x168))) = 0x78;
    (*(f32 *)((s8 *)(arg0) + (0x14C))) = TBoss7Tentacle__data_805DEC04;
    (*(f32 *)((s8 *)(arg0) + (0x150))) = TBoss7Tentacle__data_805DEC04;
    (*(f32 *)((s8 *)(arg0) + (0x154))) = TBoss7Tentacle__data_805DEC04;
    (*(s32 *)((s8 *)(arg0) + (0x3C))) = 0;
    (*(f32 *)((s8 *)(arg0) + (0x24))) = TBoss7Tentacle__data_805DEC00;
    (*(f32 *)((s8 *)(arg0) + (0x28))) = TBoss7Tentacle__data_805DEC00;
    (*(f32 *)((s8 *)(arg0) + (0x2C))) = TBoss7Tentacle__data_805DEC00;
    return arg0;
}

void TObjPlayer__sub_802F0D2C(void) {  }

}
