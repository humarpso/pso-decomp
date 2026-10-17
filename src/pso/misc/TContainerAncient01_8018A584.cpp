#include "types.h"
extern "C" void has_flag_0x800__13TUnk_804806E8Fv();
extern "C" void test_flag30_512__13TUnk_804806E8Fv();
extern "C" void test_flag_1000__13TUnk_804806E8Fv();
extern "C" void test_flag_256__13TUnk_804806E8Fv();
#include "pso/system/vector.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/misc/TContainerAncient01R.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Base_8018AC68_8018A584 { char pad[0x18]; };
struct VObj_8018AC68_8018A584 : Base_8018AC68_8018A584 {
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
    virtual void m20(s32, f32);
};
struct VBase8018AD04_8018A584 { char pad[0x18]; };
struct VObj8018AD04_8018A584 : VBase8018AD04_8018A584 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018A9D8_TContainerAncient01__data_804B6DC0 { s32 value; u8 remaining[0x28]; };

struct Obj_8018AB44 { u8 pad0[0x38]; u8 pos[0x328]; s32 f360; };

struct Atk_8018A584 { s32 type; f32 power; s32 kind; f32 base; };

struct VBase_8018A584 { u8 pad[0x18]; };

struct Player_8018A584 : VBase_8018A584 {
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
    virtual void m21(void *, Atk_8018A584 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Obj_8018A584 { u8 pad[0x38]; f32 pos[3]; };

struct Obj_8018A688 {
    u8 pad[0x2B4];
    f32 x2b4;
    u8 pad2b8[0x340 - 0x2B8];
    f32 x340;
    f32 x344;
    u8 x348[0xC];
    u8 x354[0x370 - 0x354];
    u32 x370;
};
struct Player_8018A914 { u8 pad[0x38]; f32 pos[3]; };
struct Obj_8018A914 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 xb8;
    u8 padba[0x2B4 - 0xBA];
    f32 x2b4;
    u8 pad2b8[0x326 - 0x2B8];
    s16 state;
    u8 pad328[0x33C - 0x328];
    f32 x33c;
};
struct RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0 {
    s32 value;
    u8 remaining[0x28];
};

struct Obj_8018B510 { u8 pad0[0x38]; u8 pos[0x7C]; s16 fB4[3]; u8 pad1[0x1FA]; f32 f2B4; u8 pad2[0x6E]; s16 state; u8 pad3[0x10]; f32 f338; };

struct Obj_8018B700 { u8 pad0[0x38]; u8 pos[0x324]; s32 f35C; };

struct Atk_8018B180 { s32 type; f32 power; s32 kind; f32 base; };

struct VBase_8018B180 { u8 pad[0x18]; };

struct Player_8018B180 : VBase_8018B180 {
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
    virtual void m21(void *, Atk_8018B180 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Obj_8018B180 { u8 pad[0x38]; f32 pos[3]; };

struct Obj_8018B180;
struct Obj_8018B284 {
    u8 pad0[0x38];
    u8 pos[0x2B4 - 0x38];
    f32 f2B4;
    u8 pad2B8[0x33C - 0x2B8];
    f32 f33C;
    f32 f340;
    u8 f344[0xC];
    u8 f350[0x36C - 0x350];
    u32 f36C;
};

struct Vec_8018B030 { f32 x, y, z; };
struct Coll_8018B030 { f32 x; f32 y; };
struct Res_8018B030 { u8 pad[0x430]; s32 x430; };

struct VBase_8018B030 { u8 pad[0x18]; };
struct Obj_8018B030 : VBase_8018B030 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(void *);
    u8 pad1c[0x24 - 0x1C];
    s32 x24;
    u8 pad28[0x30 - 0x28];
    u32 flags;
    s32 x34;
    Vec_8018B030 pos;
    u8 pad44[0x74 - 0x44];
    Vec_8018B030 pos74;
    u8 pad80[0xB8 - 0x80];
    s16 anim;
    u8 padba[0xD8 - 0xBA];
    void *animTbl;
    s32 xdc;
    u8 pade0[0x2FC - 0xE0];
    Vec_8018B030 pos2fc;
    u8 pad308[0x326 - 0x308];
    s16 state;
};

extern "C" {
void construct_actor_base__10TObjPlayerFPvPv(void *, void *, void *);
s32 TObjFish__sub_8001EDB0(int, int);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, int);
extern s32 TContainerAncient01R__name;
extern const f32 lbl_805DBD5C;
void queue_destruction__7TObjectFv(void *);
u32 get_bml_motion(int, int);
s32 get_bml_model(int, int);
s32 submit_cursor_candidate(void *, int, f32);
s32 run_task__7TObjectFv(void *);
extern s32 TContainerAncient01R__bml_resource;
extern const f32 TContainerAncient01__data_805DBD10;
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD50;
extern const f32 lbl_805DBD54;
extern const f32 lbl_805DBD58;
void run_task__20TContainerAncient01RFv(u8 *arg0);
f32 xyz_distance_squared(void *, void *, void *);
extern const f32 TContainerAncient01__data_805DBD44;
s32 is_within_range__19TContainerAncient01Fii(s32 arg0, s32 arg1);
void advance_animation_playback(void *);
unsigned int __cvt_fp2unsigned(f32);
extern const f32 TContainerAncient01__data_805DBD34;
extern f32 TContainerAncient01__data_805DBD14;
f32 receive_physical_attack__20TContainerAncient01RFPvf(u8 *arg0);
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 lbl_805DBD48;
extern s32 TContainerAncient01__open_effect_table[];
s32 obj_testFlags30(void *, s32);
s32 get_current_floor();
f32 horizontal_distance_squared(void *, void *);

extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range);

u8 *get_player_by_client_id(int);
s32 play_sound_effect(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern s32 lbl_805D586C;
extern const f32 lbl_805DBD38;
s32 TContainerAncient01__sub_8018BE90(void);

void *spawn_particle_effect(void *pos, s32 id);
extern s32 TContainerAncient01__effect_id_table[];
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);

int calc_distance_accuracy_penalty__20TContainerAncient01RFPvPvPvf(void);
f32 receive_direct_attack__20TContainerAncient01RFPvPvPvll(void *arg0, s32 arg1, s32 *arg2);
void render__20TContainerAncient01RFv(u8 *arg0);
void vfunc_6__20TContainerAncient01RFPsl(void *arg0, s16 *arg1, s32 arg2);
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
void draw_ginja_object(void *child);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();

void *TContainerAncient01R__create(void *arg0);
void TContainerAncient01R__sub_8018AF74(void);
void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1);
void *TContainerAncient01R__ct(Obj_8018B030 *, void *, void *);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

extern "C" void receive_weapon_special_attack__20TContainerAncient01RFPvPv();
extern "C" void apply_knockback_from_attacker__20TContainerAncient01RFPUc();
extern "C" void try_start_action__20TContainerAncient01RFll();
extern "C" void roll_physical_accuracy__20TContainerAncient01RFPvlf();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_74__13TUnk_804806E8Fl();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void vfunc_28__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__13TUnk_804806E8Fl();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void vfunc_65__13TUnk_804806E8Fll();
extern "C" void vfunc_63__13TUnk_804806E8Fv();
extern "C" void vfunc_62__13TUnk_804806E8Fv();
extern "C" void vfunc_61__13TUnk_804806E8Fv();
extern "C" void vfunc_60__13TUnk_804806E8Fv();
extern "C" void vfunc_59__13TUnk_804806E8Fv();
extern "C" void vfunc_58__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__13TUnk_804806E8Fv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void vfunc_18__13TUnk_804806E8FPUc();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void add_actor_exp__13TUnk_804806E8Fl();
extern "C" void apply_action_hold_status__13TUnk_804806E8Ff();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__13TUnk_804806E8Fv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void clear_all_status_effects__13TUnk_804806E8Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index__13TUnk_804806E8Fv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame__13TUnk_804806E8Fl();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80444F98[];
extern "C" u8 lbl_80444FAC[];
extern "C" u8 lbl_80444FC4[];
extern "C" u8 lbl_80444FDC[];
extern "C" u8 lbl_80444FF4[];
extern "C" u8 lbl_8044500C[];
extern "C" u8 lbl_80445020[];
extern "C" u8 lbl_80445034[];
extern "C" u8 lbl_80445048[];
extern "C" u8 lbl_8044505C[];
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void trigger_switch_attack__10TObjPlayerFi(s32 arg0);
extern "C" void update_action_hold_status__13TUnk_804806E8Fv();
extern "C" s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
extern "C" void update_actor_ground_y__13TUnk_804806E8Fv();
extern "C" s32 update_attack_stat_status(u8 *arg0);
extern "C" s32 update_defense_stat_status(u8 *arg0);
extern "C" void update_flag30_timer__13TUnk_804806E8Fv();
extern "C" void update_movement_status__13TUnk_804806E8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__13TUnk_804806E8Fv();
extern void *fe_obj_h_s_konte_model_names[3];
extern void *fe_obj_h_s_konte_motion_names[3];
extern void *bm_obj_geenest_model_names[3];
extern void *bm_obj_geenest_motion_names[3];
void *fe_obj_h_s_konte_model_names[3] = {
    (void *)&lbl_80444F98, (void *)&lbl_80444FAC, (void *)0x0,
};
void *fe_obj_h_s_konte_motion_names[3] = {
    (void *)&lbl_80444FC4, (void *)&lbl_80444FDC, (void *)0x0,
};
void *TContainerAncient01__resource_descriptor[4] = {
    (void *)&lbl_80444FF4, (void *)&fe_obj_h_s_konte_model_names, (void *)&fe_obj_h_s_konte_motion_names, (void *)0x20002,
};
void *bm_obj_geenest_model_names[3] = {
    (void *)&lbl_8044500C, (void *)&lbl_80445020, (void *)0x0,
};
void *bm_obj_geenest_motion_names[3] = {
    (void *)&lbl_80445034, (void *)&lbl_80445048, (void *)0x0,
};
void *TContainerAncient01__resource_descriptor_2[4] = {
    (void *)&lbl_8044505C, (void *)&bm_obj_geenest_model_names, (void *)&bm_obj_geenest_motion_names, (void *)0x20002,
};
void *TContainerAncient01__collision_body_parts[11] = {
    (void *)0x0, (void *)0x41000000, (void *)0x0, (void *)0x41200000,
    (void *)0x41200000, (void *)0x0, (void *)0x38003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TContainerAncient01__anim_table[12] = {
    (void *)0x10000, (void *)0x0, (void *)0x3f800000, (void *)0x1,
    (void *)0x10000, (void *)0x0, (void *)0x40c00000, (void *)0x1,
    (void *)0x20000, (void *)0x1, (void *)0x3f800000, (void *)0x4,
};
void *__vt__20TContainerAncient01R[79] = {
    (void *)0x0, (void *)0x0, (void *)&dt__20TContainerAncient01RFPvs, (void *)&run_task__20TContainerAncient01RFv,
    (void *)&render__20TContainerAncient01RFv, (void *)&render_shadows__7TObjectFv, (void *)&vfunc_6__20TContainerAncient01RFPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&is_within_range__19TContainerAncient01Fii, (void *)&calc_distance_accuracy_penalty__20TContainerAncient01RFPvPvPvf, (void *)&receive_physical_attack__20TContainerAncient01RFPvf, (void *)&receive_direct_attack__20TContainerAncient01RFPvPvPvll,
    (void *)&receive_weapon_special_attack__20TContainerAncient01RFPvPv, (void *)&apply_knockback_from_attacker__20TContainerAncient01RFPUc, (void *)&try_start_action__20TContainerAncient01RFll, (void *)&roll_physical_accuracy__20TContainerAncient01RFPvlf,
    (void *)&vfunc_28__13TUnk_804806E8Fv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_804806E8Fv,
    (void *)&test_flag30_512__13TUnk_804806E8Fv, (void *)&has_flag_0x800__13TUnk_804806E8Fv, (void *)&test_flag_1000__13TUnk_804806E8Fv, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__13TUnk_804806E8Fv, (void *)&vfunc_59__13TUnk_804806E8Fv,
    (void *)&vfunc_60__13TUnk_804806E8Fv, (void *)&vfunc_61__13TUnk_804806E8Fv, (void *)&vfunc_62__13TUnk_804806E8Fv, (void *)&vfunc_63__13TUnk_804806E8Fv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__13TUnk_804806E8Fv, (void *)&enemy_spawn_jellen_effect__13TUnk_804806E8Fv, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect__13TUnk_804806E8Fv, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__13TUnk_804806E8Fl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl,
};
#define TContainerAncient01__collision_body_parts (*(RecoveredGlobal_8018A9D8_TContainerAncient01__data_804B6DC0 *)TContainerAncient01__collision_body_parts)
#define __vt__20TContainerAncient01R ((s32 *)__vt__20TContainerAncient01R)

void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range) {
    u16 i;
    Player_8018A584 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018A584 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (((TObjPlayer *)pl)->get_field_3e4() == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
                horizontal_distance_squared(self->pos, pl->pos) < range) {
                Atk_8018A584 atk;
                atk.type = 0xF;
                atk.base = lbl_805DBD18;
                atk.kind = 0xF;
                *(s32 *)&atk.power = *(s32 *)&atk.base;
                pl->m21(self, &atk, 0, -1, -1);
            }
        }
    }
}

void TContainerAncient01R::reset_hp() { *(short *)&this->mode = 0; *(short *)&this->m_b8 = *(short *)&this->mode; *(float *)&this->m_2b4 = TContainerAncient01__data_805DBD1C; }

s32 TContainerAncient01R::sub_8018A688() {
    Obj_8018A688 *self = (Obj_8018A688 *)this;
    u32 period;
    f32 t;
    u32 rem;

    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->x2b4) {
        switch (TOKeyMachine01::get_global_state()) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            play_sound_effect(0x4BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        case 0x22:
            play_sound_effect(0x4004BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        case 0x23:
            play_sound_effect(0x4004BC1C, (u8 *)self + 0x38, 0, 0);
            break;
        default:
            play_sound_effect(0x4004BC16, (u8 *)self + 0x38, 0, 0);
            break;
        }
    }
    if (TContainerAncient01__data_805DBD20 == self->x2b4 || lbl_805DBD24 == self->x2b4 || lbl_805DBD28 == self->x2b4) {
        TContainerAncient01::trigger_spawn(self, self->x354, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->x2b4) {
        TContainerAncient01::trigger_spawn(self, self->x348, (void *)0x7E);
    }
    period = __cvt_fp2unsigned(lbl_805DBD30 / self->x370);
    t = self->x2b4;
    rem = (u32)t % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && rem == 0) {
        TContainerAncient01::trigger_spawn(self, self->x354, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->x2b4 && rem == 0) {
        TContainerAncient01::trigger_spawn(self, self->x348, (void *)0x7E);
    }
    TContainerAncient01__sub_8018A584((Obj_8018A584 *)self, self->x344);
    if (self->x340 <= self->x2b4) {
        ((TContainerAncient01R *)self)->reset_hp();
    }
}

void TContainerAncient01R::update_spawning() {
    u8 *arg0 = (u8 *)this;
  advance_animation_playback(arg0);
  if ((__cvt_fp2unsigned(this->m_2b4) % 15) == 0)
  {
    TContainerAncient01::trigger_spawn(arg0, arg0 + 0x348, (void *) 0x7D);
  }
  if (TContainerAncient01__data_805DBD34 <= (this->m_2b4))
  {
    this->mode = 2;
    this->m_b8 = (s16) (this->mode);
    this->m_2b4 = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

void TContainerAncient01R::check_open_trigger() {
    Obj_8018A914 *self = (Obj_8018A914 *)this;
    s32 hit;
    u16 i;
    Player_8018A914 *pl;
    f32 range;

    advance_animation_playback(self);
    hit = 0;
    if (self->x33c <= self->x2b4) {
        hit = 1;
    } else {
        range = lbl_805DBD38;
        for (i = 0; i < lbl_805D586C; i++) {
            pl = ((Player_8018A914 *(*)(s32))get_player_by_client_id)(i);
            if (pl != NULL && horizontal_distance_squared(self->pos, pl->pos) < range) {
                hit = 1;
            }
        }
    }
    if (hit != 0) {
        self->state = 1;
        self->xb8 = self->state;
        self->x2b4 = TContainerAncient01__data_805DBD1C;
    }
}

#pragma push
#pragma fp_contract on
void TContainerAncient01::init_positions() {
    u8 *arg0 = (u8 *)this;
    this->m_33c = (f32) (TContainerAncient01__data_805DBD3C + (this->scale - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    *(f32 *)&this->unk_340 = (f32) (lbl_805DBD40 + (this->target_scale - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    this->m_344 = (f32) (TContainerAncient01__data_805DBD44 + (*(f32 *)&this->m_70 - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    *(s32 *)((s8 *)arg0 + 0x370) = (s32) (*(s32 *)&this->m_8c + 4);
    VecCopy((Vec *)&this->unk_348, (const Vec *)&this->position);
    this->m_34c = (f32) (this->m_34c + *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4));
    VecCopy((Vec *)&this->m_354, (const Vec *)&this->unk_348);
    *(f32 *)&this->unk_358 = (f32) ((lbl_805DBD48 * *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4)) + *(f32 *)&this->unk_358);
    *(s32 *)&this->m_360 = 0;
    *(f32 *)&this->unk_364 = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    this->m_368 = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    *(f32 *)&this->unk_36C = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    this->hp = (s16) this->rotation_z;
    if ((s16) this->hp < 1) {
        this->hp = 1;
    }
    this->m_338 = 0;
}
#pragma pop

void TContainerAncient01R::vfunc_6(s16 *arg1, s32 arg2) {
    s16 temp_r4;
    this->m_338 = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = this->m_338;
        if ((this->hp - temp_r4) <= 0) {
            ((TContainerAncient01R *)this)->reset_hp();
            ((TContainerAncient01R *)this)->open_container();
            this->m_360 = 1;
        }
    } else if ((this->hp - this->m_338) <= 0) {
        this->m_360 = 1;
    }
}

void TContainerAncient01R::open_container() {
    Obj_8018AB44 *arg0 = (Obj_8018AB44 *)this;
    if (arg0->f360 == 0) {
        arg0->f360 = 1;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 1);
        TContainerAncient01::trigger_spawn((void *)(arg0), (void *)(arg0->pos), (void *)(TContainerAncient01__open_effect_table[0]));
        TContainerAncient01::trigger_spawn((void *)(arg0), (void *)(arg0->pos), (void *)(TContainerAncient01__open_effect_table[1]));
        if (TContainerAncient01::is_global_state_in_table() == 0) {
            ((TUnk_804806E8 *)arg0)->request_box_item_drop(arg0->pos, 1);
        }
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
    }
}

f32 TContainerAncient01R::receive_physical_attack(void *, f32) {
    u8 *arg0 = (u8 *)this;
    s16 sp8;
    if ((u16) this->m_1c >= 0x1000U) {
        this->m_338 = (s16) (this->m_338 + 1);
        if (((u32) *(u32 *)&this->m_80 != 0U) && (((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *) (&sp8), (int) (1)) != 0)) {
            sp8 = this->m_338;
            ((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *) (&sp8), (int) (0));
            ((TUnk_804AF8A0 *)arg0)->send_object_state_update((void *) (&sp8));
        }
    }
    return (*(const f32 *)&TContainerAncient01__data_805DBD14);
}

f32 TContainerAncient01R::receive_direct_attack(void *arg1, void *arg2_arg, void *, s32, s32) {
    s32 *arg2 = (s32 *)arg2_arg;
    s32 temp_r4;
    struct VObj_8018AC68_8018A584 *o = (struct VObj_8018AC68_8018A584 *)this;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01R::calc_distance_accuracy_penalty(void *, void *, void *, float) { return 1; }

extern const f32 lbl_805DBD4C;

s32 is_within_range__19TContainerAncient01Fii(s32 arg0, s32 arg1) {
    return xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38), (void *) (arg0)) < TContainerAncient01__data_805DBD44;
}

void TContainerAncient01R::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj8018AD04_8018A584 *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        if ((s32) this->m_360 != 0) {
            scale_current_matrix((u8 *)&this->unk_364);
        }
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_ginja_object((void *)(*(s32 *)&this->model));
        } else {
            draw_ginja_model_with_motion(*(s32 *)&this->model, *(s32 *)&this->unknownF8, this->m_c0);
        }
        pop_matrix();
    }
}
void TContainerAncient01R::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    if (TObjPlayer::check_demo_mode() == 0) {
        if ((s32) this->m_360 == 0) {
            temp_r0 = this->mode;
            switch (temp_r0) {
            case 0:
                ((TContainerAncient01R *)arg0)->check_open_trigger();
                break;
            case 1:
                ((TContainerAncient01R *)arg0)->update_spawning();
                break;
            case 2:
                ((TContainerAncient01R *)arg0)->sub_8018A688();
                break;
            default:
                this->mode = 0;
                this->m_b8 = (s16) this->mode;
                this->m_2b4 = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
                ((TContainerAncient01R *)arg0)->check_open_trigger();
                break;
            }
            temp_f1 = this->m_2b4;
            this->m_2b4 = (f32) (temp_f1 + (*(const f32 *)&TContainerAncient01__data_805DBD10));
            submit_cursor_candidate((void *) (arg0), (int) (-1), (f32) (temp_f1));
        } else {
            temp_f1_2 = this->m_368;
            if (temp_f1_2 <= lbl_805DBD50) {
                *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - lbl_805DBD54);
                if (*(f32 *)((s8 *)arg0 + 0x3C) <= (lbl_805DBD58 * this->m_368)) {
                    queue_destruction__7TObjectFv(arg0);
                }
            } else {
                this->m_368 = (f32) (temp_f1_2 - lbl_805DBD54);
            }
        }
    }
    if ((u32) this->unknownF8 == get_bml_motion((int) (TContainerAncient01R__bml_resource), (int) (0))) {
        *(s32 *)&this->model = get_bml_model((int) (TContainerAncient01R__bml_resource), (int) (0));
    }
    if ((u32) this->unknownF8 == get_bml_motion((int) (TContainerAncient01R__bml_resource), (int) (1))) {
        *(s32 *)&this->model = get_bml_model((int) (TContainerAncient01R__bml_resource), (int) (1));
    }
    run_task__7TObjectFv((void *) (arg0));
}

extern void *tl_05;

void *TContainerAncient01R__create(void *parent) {
    void *o = __nw__7TObjectFUl(0x374);
    if (o != NULL) {
        o = TContainerAncient01R__ct((Obj_8018B030 *)o, tl_05, parent);
    }
    return o;
}

void TContainerAncient01R__sub_8018AF74(void) { TContainerAncient01R__bml_resource = 0; }

void TContainerAncient01R::init_table_entries() {
    TContainerAncient01R__bml_resource = TContainerAncient01__sub_8018BE90();
    TContainerAncient01__open_effect_table[0] = TContainerAncient01::get_table_entry(0);
    TContainerAncient01__open_effect_table[1] = TContainerAncient01::get_table_entry(1);
}

void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TContainerAncient01R;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804806E8 *)arg0)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TContainerAncient01R__ct(Obj_8018B030 *self, void *arg1, void *parent) {
    Coll_8018B030 *c;

    construct_actor_base__10TObjPlayerFPvPv(self, arg1, parent);
    *(void **)((u8 *)self + 0x18) = (void *)__vt__20TContainerAncient01R;
    *(s32 *)self = TContainerAncient01R__name;
    self->m5(parent);
    self->x34 = get_bml_model(TContainerAncient01R__bml_resource, 0);
    self->x24 = TObjFish__sub_8001EDB0(TContainerAncient01R__bml_resource, 0);
    self->animTbl = (void *)TContainerAncient01__anim_table;
    ((TObjPlayer *)self)->set_field_d8((s32)(self->animTbl));
    self->xdc = ((Res_8018B030 *)TContainerAncient01R__bml_resource)->x430;
    self->anim = 0;
    set_animation__10TObjPlayerFPvs(self, self->anim);
    ((TObjMotion *)self)->set_field_b8(self->anim);
    self->flags |= 0x60000000;
    init_collision_body_parts(self, (void *)&TContainerAncient01__collision_body_parts, 1);
    ((TObjPlayer *)self)->reset_photon_effect();
    VecCopy((Vec *)&self->pos74, (const Vec *)&self->pos);
    c = (Coll_8018B030 *)&TContainerAncient01__collision_body_parts;
    self->pos74.y = c->y * lbl_805DBD5C + self->pos74.y;
    VecCopy((Vec *)&self->pos2fc, (const Vec *)&self->pos74);
    self->state = 0;
    ((TContainerAncient01 *)self)->init_positions();
    return self;
}
#pragma pop

void TContainerAncient01::spawn_effect(void* p, void* a1, void* a2) { spawn_particle_effect(a1, (s32)a2); }

void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range) {
    u16 i;
    Player_8018B180 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018B180 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (((TObjPlayer *)pl)->get_field_3e4() == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
                horizontal_distance_squared(self->pos, pl->pos) < range) {
                Atk_8018B180 atk;
                atk.type = 0xF;
                atk.base = lbl_805DBD18;
                atk.kind = 0xF;
                *(s32 *)&atk.power = *(s32 *)&atk.base;
                pl->m21(self, &atk, 0, -1, -1);
            }
        }
    }
}

void TContainerAncient01::reset_state() { *(short *)&this->mode = 0; *(short *)&this->m_b8 = *(short *)&this->mode; *(float *)&this->m_2b4 = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01::sub_8018B284() {
    Obj_8018B284 *self = (Obj_8018B284 *)this;
    u32 period;
    u32 phase;
    f32 t;
    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->f2B4) {
        switch (TOKeyMachine01::get_global_state()) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            play_sound_effect(0x4BC1C, self->pos, 0, 0);
            break;
        case 0x22:
            play_sound_effect(0x4004BC1C, self->pos, 0, 0);
            break;
        case 0x23:
            play_sound_effect(0x4004BC1C, self->pos, 0, 0);
            break;
        default:
            play_sound_effect(0x4004BC16, self->pos, 0, 0);
            break;
        }
    }
    if (TContainerAncient01__data_805DBD20 == self->f2B4 || lbl_805DBD24 == self->f2B4 || lbl_805DBD28 == self->f2B4) {
        TContainerAncient01::spawn_effect(self, self->f350, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->f2B4) {
        TContainerAncient01::spawn_effect(self, self->f344, (void *)0x7E);
    }
    period = (u32)(lbl_805DBD30 / (f32)self->f36C);
    phase = (u32)(t = self->f2B4) % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && phase == 0) {
        TContainerAncient01::spawn_effect(self, self->f350, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->f2B4 && phase == 0) {
        TContainerAncient01::spawn_effect(self, self->f344, (void *)0x7E);
    }
    TContainerAncient01__sub_8018B180((Obj_8018B180 *)self, self->f340);
    if (self->f33C <= self->f2B4) {
        ((TContainerAncient01 *)self)->reset_state();
    }
}

void TContainerAncient01::sub_8018B48C() {
    u8 *arg0 = (u8 *)this;
  advance_animation_playback(arg0);
  if (((__cvt_fp2unsigned(this->m_2b4) & 0xFFFFFFFF) % 15) == 0)
  {
    TContainerAncient01::spawn_effect((void*)(arg0), (void*)(arg0 + 0x344), (void*)((void *) 0x7D));
  }
  if (TContainerAncient01__data_805DBD34 <= (this->m_2b4))
  {
    this->mode = 2;
    this->m_b8 = (s16) (this->mode);
    this->m_2b4 = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];

void TContainerAncient01::update_wait_for_player() {
    Obj_8018B510 *arg0 = (Obj_8018B510 *)this;
    s32 flag;
    u16 i;
    u8 *p;
    f32 c;
    advance_animation_playback(arg0);
    flag = 0;
    if (arg0->f338 <= arg0->f2B4) {
        flag = 1;
    } else {
        c = lbl_805DBD38;
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && horizontal_distance_squared(arg0->pos, p + 0x38) < c) {
                flag = 1;
            }
        }
    }
    if (flag != 0) {
        arg0->state = 1;
        arg0->fB4[2] = arg0->state;
        arg0->f2B4 = (*(const f32 *)&TContainerAncient01__data_805DBD1C);
    }
}

void TContainerAncient01::init_state_vectors() {
    *(f32 *)&this->m_338 = (f32) (TContainerAncient01__data_805DBD3C + (this->scale - TContainerAncient01__data_805DBD10));
    this->m_33c = (f32) (lbl_805DBD40 + (this->target_scale - TContainerAncient01__data_805DBD10));
    *(f32 *)&this->unk_340 = (f32) (TContainerAncient01__data_805DBD44 + (*(f32 *)&this->m_70 - TContainerAncient01__data_805DBD10));
    *(s32 *)&this->unk_36C = (s32) (*(s32 *)&this->m_8c + 4);
    VecCopy((Vec *)&this->m_344, (const Vec *)&this->position);
    *(f32 *)&this->unk_348 = (f32) (*(f32 *)&this->unk_348 + *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4));
    VecCopy((Vec *)&this->unk_350, (const Vec *)&this->m_344);
    this->m_354 = (f32) ((lbl_805DBD48 * *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4)) + this->m_354);
    *(s32 *)&this->m_35c = 0;
    *(f32 *)&this->m_360 = (f32) TContainerAncient01__data_805DBD10;
    *(f32 *)&this->unk_364 = (f32) TContainerAncient01__data_805DBD10;
    this->m_368 = (f32) TContainerAncient01__data_805DBD10;
}
#pragma pop

void TContainerAncient01::vfunc_6(s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            sub_8018B700();
            *(s32 *)&this->m_35c = 1;
        }
    } else if ((s16) *arg1 == 1) {
        *(s32 *)&this->m_35c = 1;
    }
}
void TContainerAncient01::sub_8018B700() {
    Obj_8018B700 *arg0 = (Obj_8018B700 *)this;
    if (arg0->f35C == 0) {
        arg0->f35C = 1;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 1);
        TContainerAncient01::spawn_effect((void*)(arg0), (void*)(arg0->pos), (void*)(TContainerAncient01__effect_id_table[0]));
        TContainerAncient01::spawn_effect((void*)(arg0), (void*)(arg0->pos), (void*)(TContainerAncient01__effect_id_table[1]));
        if (TContainerAncient01::is_global_state_in_table() == 0) {
            ((TUnk_804806E8 *)arg0)->request_box_item_drop(arg0->pos, 1);
        }
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
    }
}

}
