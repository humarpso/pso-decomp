#include "types.h"
#include "dolphin/mtx.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Stack_800DFC18
{
  s32 sp8;
  s32 spC;
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 sp24;
};

struct RecoveredGlobal_800DFC18_lbl_8043CDA8
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_800DFC18_lbl_8043CDB8
{
  M2C_UNK value;
  u8 remaining[0xC];
};

typedef struct RecoveredGlobal_800DFC18_lbl_8043CDA8 RecoveredGlobal_800DFC18_lbl_8043CDA8;

typedef struct RecoveredGlobal_800DFC18_lbl_8043CDB8 RecoveredGlobal_800DFC18_lbl_8043CDB8;

typedef struct Stack_800DFC18 Stack_800DFC18;

typedef char RecoveredGlobal_800DFC18_lbl_8043CDA8_size[((sizeof(RecoveredGlobal_800DFC18_lbl_8043CDA8)) == 0x10) ? (1) : (-1)];

typedef char RecoveredGlobal_800DFC18_lbl_8043CDB8_size[((sizeof(RecoveredGlobal_800DFC18_lbl_8043CDB8)) == 0x10) ? (1) : (-1)];

struct Stack_800E0950 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_800E0950_lbl_80495484 { M2C_UNK value; u8 remaining[0x9C]; };

typedef char RecoveredGlobal_800E0950_lbl_80495484_size[sizeof(RecoveredGlobal_800E0950_lbl_80495484) == 0xA0 ? 1 : -1];

struct Obj_800E0B9C { u8 pad0[0x38]; u8 f38[0x78]; u32 fB0; u8 padB4[0x380 - 0xB4]; s32 f380; s32 f384; s32 f388; };

typedef struct { f32 x, y, z; } Vec_800E0A44;

struct Vec_800E0048 { f32 x, y, z; };

struct Vec_800E0ED0 { f32 x, y, z; };

struct Base_800E1D38_800E158C { char pad[0x18]; };

struct VObj_800E1D38_800E158C : Base_800E1D38_800E158C {
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
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
};

typedef struct { f32 x, y, z; } Vec_800E1A44;

struct Hit_800E1608 { s32 a; f32 b; };

struct VBase_18_b27ba1 { char pad[0x18]; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual M2C_UNK m21(void *, Hit_800E1608 *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Prm_800E1608 { u8 pad[0x1c]; s32 x1c; s32 x20; };

typedef struct { f32 x, y, z; } Vec_800E18B0;

struct M2CCopy_800E18B0 { u8 bytes[0xc]; };

struct Obj_800E1E74 { u8 pad[0x30]; u32 flags; u8 pad2[0x378 - 0x34]; s32 state; };

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    s32 f18;
};

struct Obj_800E20D0 { u8 pad[0x3EC]; VObj_14_aa9368 fades[2]; };

struct Vec_800E2200 { f32 x, y, z; };

struct Tgt_800E2200 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Panarms_800E2200 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0xC0 - 0x44];
    f32 fC0;
    u8 padc4[0x2FC - 0xC4];
    Vec_800E2200 pos;
    u8 pad308[0x378 - 0x308];
    s32 state;
    u8 *f37C;
    u8 pad380[4];
    s32 f384;
    s32 f388;
    Vec_800E2200 f38C;
    u8 pad398[0x3A0 - 0x398];
    Tgt_800E2200 *target;
    u8 pad3a4[0x3C8 - 0x3A4];
    Vec_800E2200 diff;
    s32 angle;
    f32 dist;
    u8 pad3dc[0x45C - 0x3DC];
    s32 counter;
    void dummy();
};

typedef void (Panarms_800E2200::*Fn_800E2200)();

struct Ent_800E2200 { u8 pad[0xC]; Fn_800E2200 fn; };

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_800E24A4 { u8 pad0[0x18]; void *vt; u8 pad1[0x37C - 0x1C]; s32 f37C; u8 pad2[0x3DC - 0x380]; s32 f3DC; u8 pad3[0x3EC - 0x3E0]; u8 f3EC[0x1C * 4]; };

struct O_800E2FB4 { u8 pad[0x378]; s32 state; };

struct Vec_800E06DC { f32 x, y, z; };

f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
u16 find_nearest_visible_player(void *, Vec_800E0A44 *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);
u8 * dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 get_camera_mode__11TCameraCtrlFv();
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
u32 csnLookAt(void *, void *);
s32 check_demo_mode__10TObjPlayerFv(void);
M2C_UNK spawn_particle_effect(void *, int, f32);
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
M2C_UNK update_obstruction_fade(int, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK spawn_ground_effect__10TObjPlayerFPvi(void *, int);
M2C_UNK spawn_dead_spot_default__10TObjPlayerFii(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0);
void TObjEnePanarms__sub_800DFC18(void);
void update_action_timer__14TObjEnePanarmsFPv(void *arg0);
void init_attack_state__14TObjEnePanarmsFPv(void *arg0);
void TObjEnePanarms__sub_800DFE08(u8 *arg0);
void TObjEnePanarms__sub_800DFEDC(u8 *arg0);
void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0);
void TObjEnePanarms__sub_800DFFE0(u8 *arg0);
void TObjEnePanarms__sub_800E0048(u8 *arg0);
void TObjEnePanarms__sub_800E01AC(u8 *arg0);
void TObjEnePanarms__sub_800E0344(u8 *arg0);
void update_attack__14TObjEnePanarmsFPv(u8 *arg0);
void init_attack_state2__14TObjEnePanarmsFPv(void* a0);
void init_action__14TObjEnePanarmsFPv(void* a0);
void TObjEnePanarms__sub_800E08D8(u8 *arg0);
void TObjEnePanarms__sub_800E092C(void);
void TObjEnePanarms__sub_800E0930(u8 *arg0);
void TObjEnePanarms__sub_800E0950(u8 *arg0);
void TObjEnePanarms__sub_800E0A44(u8 *arg0);
void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0);
void TObjEnePanarms__sub_800E0B9C(Obj_800E0B9C *arg0);
void update_hit_state__14TObjEnePanarmsFPv(void *arg0);
void TObjEnePanarms__sub_800E0CB0(u8 *arg0);
void TObjEnePanarms__sub_800E0E88(u8 *arg0);
void TObjEnePanarms__sub_800E0ED0(u8 *arg0);
void TObjEnePanarms__sub_800E1090(u8 *arg0);
void start_action__14TObjEnePanarmsFPv(void *arg0);
void handle_split_flag__14TObjEnePanarmsFPv(void *arg0);
void init_split__14TObjEnePanarmsFPv(void *arg0);
void TObjEnePanarms__sub_800E152C(u8 *arg0);
void reset_state__14TObjEnePanarmsFPv(void* a0);
void TObjEnePanarms__sub_800E15B4(u8 *arg0);
void TObjEnePanarms__sub_800E1608(u8 *arg0, s32 arg1);
s32 TObjEnePanarms__sub_800E18B0(u8 *arg0, Vec_800E18B0 *arg1);
void TObjEnePanarms__sub_800E1A44(u8 *arg0);
void TObjEnePanarms__sub_800E1B50(u8 *arg0);
void TObjEnePanarms__sub_800E1B78(u8 *arg0, u8 *arg1, s32 *arg2);
void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
void TObjEnePanarms__sub_800E1D38(void *arg0);
void reset_split__14TObjEnePanarmsFPv(void *arg0);
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void init_state__14TObjEnePanarmsFi(s32 arg0);
void TObjEnePanarms__sub_800E1E14(u8 *arg0);
void TObjEnePanarms__sub_800E1E64(void* p);
void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self);
void TObjEnePanarms__sub_800E1ED0(u8 *arg0);
void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0);
void draw__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800E20D0(u8 *arg0);
Obj_800E24A4 * fn_800E24A4(Obj_800E24A4 *arg0, s16 arg1);
s32 TObjEnePanBARA__ct(s32, s32, s32, s32);
s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1);
void TObjEnePanarms__sub_800E2DE4(void *arg0, s32 arg1);
u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0);
u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0);
u8 TObjEnePanarms__sub_800E2E54(void *arg0);
u8 TObjEnePanarms__sub_800E2E68(void *arg0);
u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0);
void TObjEnePanarms__sub_800E2EF0(void*, s32, s32);
int TObjEnePanarms__sub_800E2F6C(u8 *arg0, s32 arg1, f32 farg0);
s32 TObjEnePanarms__sub_800E2FB4(O_800E2FB4 *self);
int clear_render_callback__8TObjFishFv(void);
int TObjFish__sub_800E3074(void*);
void init_state_1__8TObjFishFPv(s32);
M2C_UNK draw_blob_shadow(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 TObjControl__ct(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv();
void update_prev_position__10TObjPlayerFPv(void *);
void __dt__9TObjEnemyFv(void *, s32);
f32 horizontal_distance_squared(void *, void *);
s32 angle_difference_abs(s32, s32);
s32 angle_diff_s16(s32, s32);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
s32 approach_angle_limited(s32, s32, M2C_UNK);
int draw__16TObjEneRe7BeruraFPv(void*);
void advance_animation_playback(void *);
u8 * find_entity_by_id(u16);
s32 update_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
s32 project_actor_to_ground(void *, void *, int);
void submit_cursor_candidate(void *, s32);
u8 * get_player_by_client_id(s32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void minimap_render_dot(void *, s32, s32, s32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create__9TTecJelinFiiii(void *, void *, void *, s32);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
M2C_UNK create_instance__9TTecZaruaFiiii(void *, void *, void *, s32);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
void __destroy_arr(void *, void *, s32, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 vec3_add_to(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
f32 vector_length(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(int, void *);
M2C_UNK normalize_vector(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *, f32);
int set_global_param__8TObjFishFi(void*);
int set_global_state__16TObjEneRe7BeruraFi(void*);

extern const f64 TObjEnePanarms__data_8043CDD0;
extern u8 *TObjEnePanarms__data_805D5278;
extern const f32 TObjEnePanarms__data_805DA524;
extern const f32 TObjEnePanarms__data_805DA52C;
extern const f32 TObjEnePanarms__data_805DA530;
extern const f32 TObjEnePanarms__data_805DA544;
extern const f32 TObjEnePanarms__data_805DA550;
extern const f32 TObjEnePanarms__data_805DA560;
extern u8 TObjPlayer__sub_800D7C58[];
extern Vec_800E1A44 lbl_8043CD40[];
extern s32 lbl_8043CD58[];
extern Vec_800E1A44 lbl_8043CD60[];
extern s32 lbl_8043CD78[];
extern Hit_800E1608 lbl_8043CD88[];
extern Hit_800E1608 lbl_8043CD90[];
extern s32 lbl_8043CDA0[];
extern RecoveredGlobal_800DFC18_lbl_8043CDA8 lbl_8043CDA8;
extern RecoveredGlobal_800DFC18_lbl_8043CDB8 lbl_8043CDB8;
extern RecoveredGlobal_800E0950_lbl_80495484 lbl_80495484;
extern Ent_800E2200 lbl_8049575C[];
extern s32 lbl_8049591C[];
extern s32 lbl_80495924[];
extern s32 lbl_8049592C[];
extern u8 lbl_80495934[];
extern s8 lbl_805D5288;
extern s8 lbl_805D5289;
extern f32 lbl_805D528C;
extern u8 lbl_805D5290;
extern s32 lbl_805D5660;
extern const f32 lbl_805DA520;
extern const f32 lbl_805DA528;
extern const f32 lbl_805DA534;
extern const f32 lbl_805DA53C;
extern const f32 lbl_805DA540;
extern const f32 lbl_805DA554;
extern const f32 lbl_805DA558;
extern const f32 lbl_805DA55C;
extern const f32 lbl_805DA564;
extern const f32 lbl_805DA570;
extern const f32 lbl_805DA580;
extern const f32 lbl_805DA584;
extern const f32 lbl_805DA588;
extern const f32 lbl_805DA58C;
extern const f32 lbl_805DA590;
extern const f32 lbl_805DA594;
extern const f32 lbl_805DA598;
extern const f32 lbl_805DA59C;
extern s32 some_id_805c6f74;
extern s32 tl_04;

int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
void TObjEnePanarms__sub_800DFC18(void) {
  s8 *new_var;
  Stack_800DFC18 stack;
  s32 temp_r8;
  u8 *temp_r5;
  u8 *temp_r5_2;
  stack.sp18 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 0));
  stack.sp1C = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 4));
  stack.sp20 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 8));
  stack.sp24 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 0xC));
  temp_r8 = *((s32 *) ((new_var = (s8 *) TObjEnePanarms__data_805D5278) + 0x430));
  stack.sp8 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 0));
  stack.sp18 = temp_r8;
  stack.spC = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 4));
  stack.sp10 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 8));
  stack.sp14 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 0xC));
  stack.sp8 = temp_r8;
  temp_r5 = (u8 *) (*((u8 **) (new_var + 0x42C)));
  spawn_npc_enemy__6TLobbyFsiiiff((int) 0x24, (int) (*((s32 *) (((s8 *) temp_r5) + 0x18))), (int) (*((s32 *) (((s8 *) temp_r5) + 0x1C))), (void *) (&stack.sp18), (f32) lbl_805DA520, (f32) TObjEnePanarms__data_805DA524);
  temp_r5_2 = (u8 *) (*((u8 **) (((s8 *) TObjEnePanarms__data_805D5278) + 0x42C)));
  spawn_npc_enemy__6TLobbyFsiiiff((int) 0x25, (int) (*((s32 *) (((s8 *) temp_r5_2) + 0x28))), (int) (*((s32 *) (((s8 *) temp_r5_2) + 0x2C))), (void *) (&stack.sp8), (f32) lbl_805DA520, (f32) TObjEnePanarms__data_805DA524);
}
extern int fold_flush_0;
#pragma pop

void update_action_timer__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), 0x888);
    if (angle_difference_abs(temp_r3, M2C_FIELD(arg0, s32 *, 0x60)) == 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_b8__14TObjEnePanarmsFPvs)(arg0, 0);
    }
}

void init_attack_state__14TObjEnePanarmsFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    if (((s32 (*)(s32, s32, void *))angle_difference_abs)(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), temp_r5) < 0x2000) {
        if (angle_diff_s16(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4)) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) - 0x2000);
        } else {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) + 0x2000);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    ((M2C_UNK (*)(void *, M2C_UNK))set_field_b8__14TObjEnePanarmsFPvs)(arg0, 2);
}

void TObjEnePanarms__sub_800DFE08(u8 *arg0) {
    s32 temp_r0;
    s32 var_r5;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_b8__14TObjEnePanarmsFPvs)((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
    }
    if (lbl_805DA528 == (f32) M2C_FIELD(arg0, s32 *, 0x3B4)) {
        var_r5 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x33), s32 *, 0x18);
        if ((var_r5 < 0) || (var_r5 > 0xE)) {
            var_r5 = 0;
        }
        create__9TTecRestaFPvPvPv((void *) (arg0), (void *) (arg0 + 0x38), (int) (var_r5));
        ((s32 (*)(void *, void *, int, int))play_sound_effect)((void *) (((s32 (*)(void *, int))copy_target_state__14TObjEnePanarmsFPvPv)((void *) (arg0), (int) (0x4003BC31))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        ((s32 (*)(void *, int))TObjEnePanarms__sub_800E1C98)((void *) (arg0), (int) (2));
    }
}

void TObjEnePanarms__sub_800DFEDC(u8 *arg0) {
    u8 *temp_r7;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 1) {
        temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x37C));
        M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x384) = 1;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, s32 *, 0x3B4) = 6;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        ((M2C_UNK (*)(void *, M2C_UNK))set_field_b8__14TObjEnePanarmsFPvs)((void *)(arg0), (M2C_UNK)(0));
    }
}

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) || (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(0xA));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4) - 0x800, 0x200);
}

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

void TObjEnePanarms__sub_800E0048(u8 *arg0) {
    Vec_800E0048 v;
    if (((s32 (*)(void))check_can_attack__14TObjEnePanarmsFPv)() != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 0x10);
        return;
    }
    if (--M2C_FIELD(arg0, s32 *, 0x3B4) < 0 || ((s32 (*)(s32))is_phase_12__14TObjEnePanarmsFPv)(M2C_FIELD(arg0, s32 *, 0x3A0)) == 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x3C8);
    if (vector_length(&v) <= TObjEnePanarms__data_805DA52C) {
        v.x = TObjEnePanarms__data_805DA530;
        v.z = TObjEnePanarms__data_805DA524;
    } else {
        normalize_vector(&v);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32)(TObjEnePanarms__data_8043CDD0 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(v.x, v.z)), 0x888);
    if (M2C_FIELD(arg0, s32 *, 0x3B4) < 0x87) {
        f32 t = M2C_FIELD(arg0, f32 *, 0x3B0) + lbl_805DA534;
        M2C_FIELD(arg0, f32 *, 0x3B0) = t;
        if (t > 1.25f) {
            M2C_FIELD(arg0, f32 *, 0x3B0) = 1.25f;
        }
        v.x *= M2C_FIELD(arg0, f32 *, 0x3B0);
        v.z *= M2C_FIELD(arg0, f32 *, 0x3B0);
        ((M2C_UNK (*)(void *, void *))TObjEnePanarms__sub_800E18B0)(arg0, &v);
    }
    if (M2C_FIELD(arg0, f32 *, 0x3D8) < lbl_805DA53C) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xE);
        return;
    }
    ((M2C_UNK (*)(void *))TObjEnePanarms__sub_800E15B4)(arg0);
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

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E0214(u8 *arg0) {
    s32 temp_r0;

    if (((s32 (*)(int))TObjEnePanarms__sub_800E2E68)((int) (M2C_FIELD(arg0, s32 *, 0x3A0))) != 0) {
        TObjEnePanarms__sub_800E1C98((void *) (arg0), (int) (0xF));
        return;
    }
    if (((s32 (*)(void *))check_can_attack__14TObjEnePanarmsFPv)((void *) (arg0)) != 0) {
        TObjEnePanarms__sub_800E1C98((void *) (arg0), (int) (0x10));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (((temp_r0 < 0) && (((s32 (*)(int))TObjEnePanarms__sub_800E2E54)((int) (M2C_FIELD(arg0, s32 *, 0x3A0))) == 0)) || (TObjEnePanarms__sub_800DFB44((int) (M2C_FIELD(arg0, s32 *, 0x3A0))) != 0)) {
        TObjEnePanarms__sub_800E1C98((void *) (arg0), (int) (2));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) ((s32) ((lbl_805DA540 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x3B4) << 0xC))) + (f32) M2C_FIELD(arg0, s32 *, 0x3D4))), 0x1111);
    if (!(M2C_FIELD(arg0, s32 *, 0x3B4) & 0x3F)) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC2D), arg0 + 0x38, 0, 0);
    }
    TObjEnePanarms__sub_800E15B4(arg0);
}
extern int fold_flush_1;
#pragma pop

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
        play_sound_effect((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2D)))))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
        set_field_b8__14TObjEnePanarmsFPvs((void*)((void *) (arg0)), (int)((int) (2)));
    }
}

void update_attack__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    u8 *temp_r3;

    temp_r3 = find_entity_by_id((u16) M2C_FIELD(arg0, s32 *, 0x3B8));
    if ((temp_r3 == NULL) || (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x02000800)) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(2));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        ((M2C_UNK (*)(void *, s32))TObjEnePanarms__sub_800E1608)(arg0, M2C_FIELD(arg0, s32 *, 0x3B8));
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEnePanarms__data_805DA544) {
        temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), lbl_8043CDA0[M2C_FIELD(arg0, s32 *, 0x380)] + (s32) (TObjEnePanarms__data_8043CDD0 * get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3)), 0x200);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(0xA));
    }
}

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

void TObjEnePanarms__sub_800E06DC(u8 *arg0) {
    Vec_800E06DC sp8;
    f32 v;
    u8 *p;

    p = find_entity_by_id((u16) M2C_FIELD(arg0, s32 *, 0x3B8));
    if (p == NULL || (M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3B4)--;
    VecCopy__FP3VecPC3Vec(&sp8, p + 0x38);
    subtract_vector(&sp8, arg0 + 0x38);
    sp8.y = TObjEnePanarms__data_805DA524;
    if (vector_length(&sp8) <= TObjEnePanarms__data_805DA52C) {
        sp8.x = TObjEnePanarms__data_805DA530;
        sp8.z = TObjEnePanarms__data_805DA524;
    } else {
        normalize_vector(&sp8);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEnePanarms__data_8043CDD0 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(sp8.x, sp8.z)), 0x101);
    if (M2C_FIELD(arg0, s32 *, 0x3B4) > 0) {
        M2C_FIELD(arg0, f32 *, 0x3B0) = v = M2C_FIELD(arg0, f32 *, 0x3B0) + lbl_805DA534;
        if (v > 1.25f) {
            M2C_FIELD(arg0, f32 *, 0x3B0) = 1.25f;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3B0) = v = M2C_FIELD(arg0, f32 *, 0x3B0) - 0.075f;
        if (v < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x3B0) = 0.0f;
        }
    }
    sp8.x *= M2C_FIELD(arg0, f32 *, 0x3B0);
    sp8.z *= M2C_FIELD(arg0, f32 *, 0x3B0);
    ((M2C_UNK (*)(void *, void *))TObjEnePanarms__sub_800E18B0)(arg0, &sp8);
    if (TObjEnePanarms__data_805DA524 == M2C_FIELD(arg0, f32 *, 0x3B0)) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xA);
        return;
    }
    if (horizontal_distance_squared(p + 0x38, arg0 + 0x38) < lbl_805DA554) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xB);
        return;
    }
    if (((s32 (*)(void *))is_below_half_hp__14TObjEnePanarmsFPv)(arg0) != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xC);
        return;
    }
    if (((s32 (*)(void *))check_can_attack__14TObjEnePanarmsFPv)(arg0) != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 0x10);
        return;
    }
    ((M2C_UNK (*)(void *))TObjEnePanarms__sub_800E15B4)(arg0);
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
        spawn_particle_effect((void *) (&stack.sp8), (int) (0xF3), (f32) (temp_f1));
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

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E0A44(u8 *arg0) {
    Vec_800E0A44 v;
    s16 var_r30;
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    refresh_lobby_state__10TObjPlayerFPv();
    var_r30 = 7;
    M2C_FIELD(arg0, s32 *, 0xB0) &= ~1;
    if (find_nearest_visible_player(arg0, &v, TObjEnePanarms__data_805DA560) != 0xFFFF) {
        if (v.x * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60)) + v.z * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60)) < TObjEnePanarms__data_805DA524) {
            var_r30 = 6;
        }
    }
    set_field_b8__14TObjEnePanarmsFPvs(arg0, var_r30);
    if (lbl_805D5289 == 0) {
        lbl_8049592C[0] = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B836);
        lbl_8049592C[1] = copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BB35);
        lbl_805D5289 = 1;
    }
    play_sound_effect(lbl_8049592C[M2C_FIELD(arg0, s32 *, 0x380)], arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0xA4;
}
extern int fold_flush_2;
#pragma pop

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x374)));
    }
}

void TObjEnePanarms__sub_800E0B9C(Obj_800E0B9C *arg0) {
    arg0->f384 = 1;
    arg0->f388 = 1;
    if (lbl_805D5288 == 0) {
        lbl_80495924[0] = ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x4003BC34)));
        s32 t = ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x4003BC33)));
        lbl_805D5288 = 1;
        lbl_80495924[1] = t;
    }
    play_sound_effect((M2C_UNK)(lbl_80495924[arg0->f380]), (void *)(arg0->f38), (M2C_UNK)(0), (M2C_UNK)(0));
    arg0->fB0 &= 0xFFFFFFFE;
    set_field_b8__14TObjEnePanarmsFPvs((void*)(arg0), (int)(5));
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

void TObjEnePanarms__sub_800E0ED0(u8 *arg0) {
    Vec_800E0ED0 sp8;
    f32 dist;
    f32 v;
    if (((s32 (*)(void *))check_can_attack__14TObjEnePanarmsFPv)(arg0) != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 0x10);
        return;
    }
    if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x38C);
    subtract_vector(&sp8, arg0 + 0x38);
    sp8.y = (*(const f32 *)&TObjEnePanarms__data_805DA524);
    dist = vector_length(&sp8);
    if (dist <= TObjEnePanarms__data_805DA52C) {
        sp8.x = TObjEnePanarms__data_805DA530;
        sp8.z = (*(const f32 *)&TObjEnePanarms__data_805DA524);
    } else {
        normalize_vector(&sp8);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x37C), s32 *, 0x18) & 0x01C00000) {
        f32 t = sp8.x;
        sp8.x = sp8.z;
        sp8.z = -t;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEnePanarms__data_8043CDD0 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(sp8.x, sp8.z)), 0x208);
    if (dist > lbl_805DA564) {
        M2C_FIELD(arg0, f32 *, 0x3B0) = v = M2C_FIELD(arg0, f32 *, 0x3B0) + TObjEnePanarms__data_805DA550;
        if (v > 0.6f) {
            M2C_FIELD(arg0, f32 *, 0x3B0) = 0.6f;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3B0) = v = M2C_FIELD(arg0, f32 *, 0x3B0) - TObjEnePanarms__data_805DA550;
        if (v < 0.3f) {
            M2C_FIELD(arg0, f32 *, 0x3B0) = 0.3f;
        }
    }
    sp8.x *= M2C_FIELD(arg0, f32 *, 0x3B0);
    sp8.z *= M2C_FIELD(arg0, f32 *, 0x3B0);
    ((M2C_UNK (*)(void *, void *))TObjEnePanarms__sub_800E18B0)(arg0, &sp8);
    if (horizontal_distance_squared(arg0 + 0x38C, arg0 + 0x38) < lbl_805DA570) {
        TObjEnePanarms__sub_800E1C98(arg0, 4);
    }
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
        ((M2C_UNK (*)(void))TObjEnePanarms__sub_800E1B50)();
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
    ((M2C_UNK (*)(void *, M2C_UNK))TObjEnePanarms__sub_800E2DE4)(arg0, 0x10);
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
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_state__14TObjEnePanarmsFPv(void* a0) { *(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) = (*(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) & 0xfffffffe); *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524; *(int*)((char*)a0 + 0x384) = 0; *(int*)((char*)a0 + 0x388) = 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjEnePanarms__sub_800E15B4(u8 *arg0) {
    Vec position;
    if (!(M2C_FIELD(arg0, s32 *, 0x45C) & 7)) {
        VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x3A4));
        position.y += TObjEnePanarms__data_805DA544;
        ((s32 (*)(void *, int))spawn_particle_effect)((void *) (&position.x), (int) (0xF3));
    }
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjEnePanarms__sub_800E1608(u8 *arg0, s32 arg1) {
    u8 *t;
    f32 sc;
    s32 lv;
    t = get_player_by_client_id(arg1);
    if (t != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x380) == 0) {
            Hit_800E1608 tmp = lbl_8043CD88[0];
            tmp.b = M2C_FIELD(arg0, f32 *, 0x464);
            {
                Hit_800E1608 h = tmp;
                ((VObj_18_b27ba1 *)t)->m21(arg0, &h, 0, -1, -1);
            }
            return;
        }
        sc = calc_boss4_scale__10TObjPlayerFi(arg0);
        if (sc <= M2C_FIELD(arg0, f32 *, 0x468)) {
            lv = ((Prm_800E1608 * (*)(s32))dispatch_shared_handler_a__6TLobbyFPv)(0x33)->x1c;
            if (lv < 0 || lv > 0xE) {
                lv = 0;
            }
            create__9TTecJelinFiiii(arg0, arg0 + 0x2FC, t + 0x2FC, lv);
            return;
        }
        if (sc <= M2C_FIELD(arg0, f32 *, 0x468) + M2C_FIELD(arg0, f32 *, 0x46C)) {
            lv = ((Prm_800E1608 * (*)(s32))dispatch_shared_handler_a__6TLobbyFPv)(0x33)->x20;
            if (lv < 0 || lv > 0xE) {
                lv = 0;
            }
            create_instance__9TTecZaruaFiiii(arg0, arg0 + 0x2FC, t + 0x2FC, lv);
            return;
        }
        {
            Hit_800E1608 h2 = lbl_8043CD90[0];
            ((VObj_18_b27ba1 *)t)->m21(arg0, &h2, 0, -1, -1);
        }
    }
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
s32 TObjEnePanarms__sub_800E18B0(u8 *arg0, Vec_800E18B0 *arg1) {
    Vec_800E18B0 dir;
    Vec_800E18B0 t;
    Vec_800E18B0 p;
    s32 i;
    s32 ang;
    f32 s;
    f32 c;
    f32 nx;
    *(M2CCopy_800E18B0 *)&dir = *(M2CCopy_800E18B0 *)arg1;
    dir.y = (*(const f32 *)&TObjEnePanarms__data_805DA524);
    if ((*(const f32 *)&TObjEnePanarms__data_805DA524) == vector_length(&dir)) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&t, arg0 + 0x38);
    vec3_add_to(&t, arg1);
    if (horizontal_distance_squared(&t, arg0 + 0x50) > lbl_805DA584) {
        return 0;
    }
    for (i = 1; i < 16; i++) {
        VecCopy__FP3VecPC3Vec(&p, arg0 + 0x38);
        vec3_add_to(&p, &dir);
        p.y += lbl_805DA588;
        if (project_actor_to_ground(arg0, &p, 0) != 0 && csnLookAt(arg0 + 0x38, &p) == 0) {
            VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &p);
            update_collisions__10TObjPlayerFPv(arg0);
            return 1;
        }
        ang = i << 12;
        if (i & 1) {
            ang *= -1;
        }
        s = sin_table_lookup(ang);
        c = cos_table_lookup(ang);
        nx = c * dir.x - s * dir.z;
        dir.x = nx;
        dir.z = s * nx + c * dir.z;
    }
    return 0;
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
void TObjEnePanarms__sub_800E1A44(u8 *arg0) {
    f32 x;
    f32 z;
    f32 s;
    f32 c;
    x = lbl_8043CD60[M2C_FIELD(arg0, s32 *, 0x380)].x;
    z = lbl_8043CD60[M2C_FIELD(arg0, s32 *, 0x380)].z;
    s = sin_table_lookup(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    c = cos_table_lookup(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    VecCopy__FP3VecPC3Vec(arg0 + 0x38C, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
    M2C_FIELD(arg0, f32 *, 0x38C) += x * c + z * s;
    M2C_FIELD(arg0, f32 *, 0x394) += -x * s + z * c;
    M2C_FIELD(arg0, s32 *, 0x398) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x398) += lbl_8043CD78[M2C_FIELD(arg0, s32 *, 0x380)];
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjEnePanarms__sub_800E1B50(u8 *arg0) {
    TObjEnePanarms__sub_800E1B78(arg0, arg0 + 0x38, (s32 *)(arg0 + 0x60));
}
extern int fold_flush_8;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma fp_contract on
void TObjEnePanarms__sub_800E1B78(u8 *arg0, u8 *arg1, s32 *arg2) {
    f32 x;
    f32 z;
    f32 s;
    f32 c;

    x = lbl_8043CD40[M2C_FIELD(arg0, s32 *, 0x380)].x;
    z = lbl_8043CD40[M2C_FIELD(arg0, s32 *, 0x380)].z;
    s = sin_table_lookup(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    c = cos_table_lookup(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
    M2C_FIELD(arg1, f32 *, 0) += x * c + z * s;
    M2C_FIELD(arg1, f32 *, 8) += -x * s + z * c;
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60) - lbl_8043CD58[M2C_FIELD(arg0, s32 *, 0x380)];
    }
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x39C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A0) = arg2;
}
extern int fold_flush_10;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TObjEnePanarms__sub_800E1D38(void *arg0) {
    struct VObj_800E1D38_800E158C *o = (struct VObj_800E1D38_800E158C *)arg0;
    o->m61();
}
extern int fold_flush_11;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_split__14TObjEnePanarmsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)((void*)(arg0), 0);
    }
}
extern int fold_flush_12;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TObjEnePanarms__sub_800E1D94(void* p) { return ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)(p, 5); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int do_action_2__14TObjEnePanarmsFPv(void* p) { return ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)(p, 2); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void init_state__14TObjEnePanarmsFi(s32 arg0) {
    TObjEnePanarms__sub_800E1A44((u8 *)(arg0));
    ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)((void*)(arg0), 3);
}
extern int fold_flush_13;
#pragma pop

void TObjEnePanarms__sub_800E1E14(u8 *arg0) {
    u8 *temp_r5;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (M2C_FIELD(arg0, u8 **, 0x39C) + 0x38));
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x39C);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r5, s32 *, 0x60);
    ((M2C_UNK (*)(void *, int, int))TObjEnePanarms__sub_800E1C98)((void *) (arg0), (int) (1), (int) (temp_r5));
}

void TObjEnePanarms__sub_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self) {
    switch (self->state) {
    case 0:
    case 1:
    case 5:
    case 6:
        break;
    default:
        self->flags &= ~0x200;
        ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)(self, 6);
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E1ED0(u8 *arg0) {
    s32 st = M2C_FIELD(arg0, s32 *, 0x378);
    switch (st) {
    case 7:
    case 8:
        return;
    default:
        if (st == 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60) + lbl_8049591C[M2C_FIELD(arg0, s32 *, 0x380)];
            VecCopy__FP3VecPC3Vec(arg0 + 0x38, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
            M2C_FIELD(arg0, f32 *, 0x38) += lbl_805DA588 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            M2C_FIELD(arg0, f32 *, 0x40) += lbl_805DA588 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        }
        ((int (*)(void*, int))TObjEnePanarms__sub_800E1C98)(arg0, 7);
        break;
    }
}
extern int fold_flush_14;
#pragma pop

void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0) {
    struct { u8 b[0x10]; } sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;
    s32 temp_r0;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3A4), (void *) (arg0 + 0x3E0));
    if (((s32 (*)(void *, void *, void *))project_actor_to_ground)((void *) (arg0), (void *) (arg0 + 0x3A4), (void *) (&sp10)) != 0) {
        push_matrix();
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3A8);
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (temp_f1 + lbl_805DA58C);
        post_translate_matrix((void *) (arg0 + 0x3A4), (f32) (temp_f1));
        direction_to_rotation_xz((void *) (&sp10), (void *) (&spC), (void *) (&sp8));
        rotate_matrix_z((int) (0), (int) (sp8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        rotate_matrix_x((int) (0), (void *) (spC + 0x4000));
        scale_matrix((int) (0), (f32) (lbl_805DA590), (f32) (lbl_805DA590), (f32) (TObjEnePanarms__data_805DA530));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x378);
        if ((temp_r0 != 7) && (temp_r0 != 8)) {
            draw_blob_shadow((int) (0));
        }
        pop_matrix();
    }
}

void draw__14TObjEnePanarmsFPv(void* p) { ((int (*)(void*))push_matrix)(p); ((int (*)(void*))post_translate_matrix)((char*)p + 0x38); ((int (*)(void*, void*))rotate_matrix_y)((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x3dc)); draw__16TObjEneRe7BeruraFPv(p); ((int (*)(void*))clear_render_callback__8TObjFishFv)(*(void**)((char*)p + 0x3dc)); ((int (*)(void))pop_matrix)(); }

void TObjEnePanarms__sub_800E20D0(u8 *arg0) {
    s32 temp_r4;
    s32 var_r31;
    VObj_14_aa9368 *temp_r31;
    s32 var_r30;
    if ((((VObj_18_26a62c *)(arg0))->m8(TObjEnePanarms__data_805DA560, lbl_805DA594) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEnePanarms__data_805DA524;
        M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEnePanarms__data_805DA524;
        return;
    }
    var_r31 = 0;
    if (is_split_screen() != 0) {
        var_r31 = get_camera_mode__11TCameraCtrlFv();
    }
    toggle_particle_effect__10TObjPlayerFv();
    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x01000000 | 1;
    temp_r31 = &((Obj_800E20D0 *) arg0)->fades[var_r31];
    update_obstruction_fade((int) (temp_r31), (int) (temp_r4));
    if (updateFromCamera__15RenderFadeStateFPCf((int) (temp_r31), (void *) (arg0 + 0x2FC)) != 0) {
        temp_r31->m6();
        var_r30 = 1;
        if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) != 0) {
            var_r30 = 0;
        }
        if (var_r30 != 0) {
            draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
        }
        temp_r31->m7();
    } else {
        draw__14TObjEnePanarmsFPv((void*)((void *) (arg0)));
    }
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    ((M2C_UNK (*)(void *))update_linked_effect__14TObjEnePanarmsFPv)((void *) (arg0));
}

void TObjEnePanarms__sub_800E2200(Panarms_800E2200 *self) {
    Fn_800E2200 fn;
    Vec_800E2200 a;
    f32 s;

    if (self->state != 0 && check_demo_mode__10TObjPlayerFv() != 0) {
        ((void (*)(void *, s32))TObjEnePanarms__sub_800E1C98)(self, 0);
    }
    self->diff.x = self->target->x - self->x;
    self->diff.y = TObjEnePanarms__data_805DA524;
    self->diff.z = self->target->z - self->z;
    self->angle = ((const f64 *)&TObjEnePanarms__data_8043CDD0)[0] * ((f32 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(self->diff.x, self->diff.z);
    self->dist = vector_length(&self->diff);
    self->counter++;
    fn = lbl_8049575C[self->state].fn;
    if (fn == 0) {
        return;
    }
    (self->*fn)();
    if (self->f384 != 0) {
        self->flags &= ~0x02000000;
    } else {
        self->flags |= 0x02000000;
    }
    update_prev_position__10TObjPlayerFPv(self);
    if (self->state == 0) {
        return;
    }
    if (self->f384 != 0) {
        if (self->state != 7) {
            submit_cursor_candidate(self, -1);
        }
        advance_animation_playback(self);
        switch (self->state) {
        case 7:
            break;
        case 1:
            s = self->fC0 / lbl_805DA598;
            ((void (*)(void *, void *, s32, f32))TObjEnePanarms__sub_800E1B78)(self, &a, 0, self->fC0);
            ((void (*)(void *, void *))subtract_vector)(&a, &self->pos);
            a.x *= s;
            a.z *= s;
            ((void (*)(void *, void *))vec3_add_to)(&a, &self->pos);
            minimap_render_dot(&a, -0x5DB4, 1, 0);
            break;
        case 5:
            {
            s = self->fC0 / lbl_805DA59C;
            Vec_800E2200 b = self->pos;
            ((void (*)(void *, void *))subtract_vector)(&b, &self->f38C);
            b.x *= s;
            b.z *= s;
            ((void (*)(void *, void *))vec3_add_to)(&b, &self->f38C);
            minimap_render_dot(&b, -0x5DB4, 1, 0);
            }
            break;
        default:
            minimap_render_dot(&self->pos, -0x5DB4, 1, 0);
            break;
        }
    }
    if (self->f388 == 0) {
        *(u32 *)(self->f37C + 0x18) &= ~1;
    }
}

Obj_800E24A4 *fn_800E24A4(Obj_800E24A4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_80495934;
        free_collision_body_parts(arg0);
        arg0->f37C = 0;
        init_state_1__8TObjFishFPv(arg0->f3DC);
        __destroy_arr(arg0->f3EC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x470);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEnePanBARA__ct(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

void TObjEnePanarms__sub_800E2DE4(void *arg0, s32 arg1) {
  s32 *new_var;
  int new_var2;
  new_var2 = ~arg1;
  new_var = (s32 *) (((s8 *) arg0) + 0xB0);
  *new_var = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) & new_var2);
}

u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xC);
}

u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 TObjEnePanarms__sub_800E2E54(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xD);
}

u8 TObjEnePanarms__sub_800E2E68(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xE);
}

u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x3BC) / 2))) {
        var_r31 = 1;
    }
    return var_r31;
}

int TObjEnePanarms__sub_800E2F6C(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

s32 TObjEnePanarms__sub_800E2FB4(O_800E2FB4 *self) {
    return self->state == 9 || self->state == 11;
}

int clear_render_callback__8TObjFishFv(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

}
