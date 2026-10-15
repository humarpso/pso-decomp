#include "types.h"

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
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
void reset_photon_effect__10TObjPlayerFPv(void *);
void init_collision_body_parts(void *, void *, int);
extern s32 TContainerAncient01R__name;
extern const f32 lbl_805DBD5C;
}

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
u32 get_bml_motion(int, int);
s32 get_bml_model(int, int);
s32 TContainerAncient01__sub_8018A688(void *);
void check_open_trigger__19TContainerAncient01FPv(void *);
s32 submit_cursor_candidate(void *, int, f32);
s32 run_task__7TObjectFv(void *);
extern s32 TContainerAncient01R__bml_resource;
extern const f32 TContainerAncient01__data_805DBD10;
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD50;
extern const f32 lbl_805DBD54;
extern const f32 lbl_805DBD58;
void update_state_machine__19TContainerAncient01FPv(u8 *arg0);
f32 xyz_distance_squared(void *, void *, void *);
extern const f32 TContainerAncient01__data_805DBD44;
s32 is_within_range__19TContainerAncient01Fii(s32 arg0, s32 arg1);
void advance_animation_playback(void *);
void trigger_spawn__19TContainerAncient01FPvPvPv(void *, void *, void *);
unsigned int __cvt_fp2unsigned(f32);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void update_spawning__19TContainerAncient01FPv(u8 *arg0);
s32 send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
extern f32 TContainerAncient01__data_805DBD14;
f32 save_and_send_state__19TContainerAncient01FPv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 TContainerAncient01__data_805DBD44;
extern const f32 lbl_805DBD48;
void init_positions__19TContainerAncient01FPv(u8 *arg0);
void request_box_item_drop(void *, void *, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
void trigger_spawn__19TContainerAncient01FPvPvPv(void *, void *, void *);
s32 is_global_state_in_table__19TContainerAncient01Fv();
void set_flag8__6TLobbyFPv(void *);
extern s32 TContainerAncient01__open_effect_table[];
void open_container__19TContainerAncient01FPv(Obj_8018AB44 *arg0);
s32 obj_testFlags30(void *, s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);

extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range);

u8 *get_player_by_client_id(int);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern s32 lbl_805D586C;
extern const f32 lbl_805DBD38;
s32 TContainerAncient01__sub_8018BE90(void);
int get_table_entry__19TContainerAncient01Fi(int a0);
void init_table_entries__20TContainerAncient01RFv(void);

void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2);
int spawn_particle_effect(void*, void*);
void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2);
void advance_animation_playback(void *);
void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B48C(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 TContainerAncient01__data_805DBD44;
extern const f32 lbl_805DBD48;
void init_state_vectors__19TContainerAncient01FPv(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
void advance_animation_playback(void *);
u8 *get_player_by_client_id(int);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD38;
void update_wait_for_player__19TContainerAncient01FPv(Obj_8018B510 *arg0);
void request_box_item_drop(void *, void *, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2);
s32 is_global_state_in_table__19TContainerAncient01Fv();
void set_flag8__6TLobbyFPv(void *);
extern s32 TContainerAncient01__effect_id_table[];
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0);
s32 obj_testFlags30(void *, s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
u8 *get_player_by_client_id(int);
extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void advance_animation_playback(void *);
void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2);
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void reset_state__19TContainerAncient01FPv(void* a0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_sound_effect(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B284(Obj_8018B284 *self);

}

extern "C" {

int TContainerAncient01__sub_8018ACC0(void);
f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2);
void draw__19TContainerAncient01FPv(u8 *arg0);
void reset_hp__19TContainerAncient01FPv(void* a0);
void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2);
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
s32 set_global_param__8TObjFishFi(s32);

void *TContainerAncient01R__create(void *arg0);
void TContainerAncient01R__sub_8018AF74(void);
void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1);
void *TContainerAncient01R__ct(Obj_8018B030 *, void *, void *);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_motion_object__10TObjPlayerFPvs(void *, s32);

    extern const float TContainerAncient01__data_805DBD1C;

extern "C" void call_vt5_and_get_default_scale__19TContainerAncient01FPv();
extern "C" void TContainerAncient01__sub_8018BE68();
extern "C" void TContainerAncient01__sub_8018BE6C();
extern "C" void TContainerAncient01__sub_8018BE74();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A78();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_80011010();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014884();
extern "C" void TObjPlayer__sub_80014888();
extern "C" void TObjPlayer__sub_8001488C();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
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
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
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
    (void *)0x0, (void *)0x0, (void *)&dt__20TContainerAncient01RFPvs, (void *)&update_state_machine__19TContainerAncient01FPv,
    (void *)&draw__19TContainerAncient01FPv, (void *)&render_shadows__7TObjectFv, (void *)&set_target_value__19TContainerAncient01FPvPvi, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&is_within_range__19TContainerAncient01Fii, (void *)&TContainerAncient01__sub_8018ACC0, (void *)&save_and_send_state__19TContainerAncient01FPv, (void *)&check_item_type_range__19TContainerAncient01FPviPv,
    (void *)&call_vt5_and_get_default_scale__19TContainerAncient01FPv, (void *)&TContainerAncient01__sub_8018BE68, (void *)&TContainerAncient01__sub_8018BE6C, (void *)&TContainerAncient01__sub_8018BE74,
    (void *)&TObjPlayer__sub_80011010, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjPlayer__sub_8001488C, (void *)&TObjPlayer__sub_80014888, (void *)&TObjPlayer__sub_80014884,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_80010A78, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC,
};
#define TContainerAncient01__collision_body_parts (*(RecoveredGlobal_8018A9D8_TContainerAncient01__data_804B6DC0 *)TContainerAncient01__collision_body_parts)
#define __vt__20TContainerAncient01R ((s32 *)__vt__20TContainerAncient01R)

void TContainerAncient01__sub_8018A584(Obj_8018A584 *self, f32 range) {
    u16 i;
    Player_8018A584 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018A584 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (get_field_3e4__10TObjPlayerFPv(pl) == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
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

void reset_hp__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

s32 TContainerAncient01__sub_8018A688(void *arg0) {
    Obj_8018A688 *self = (Obj_8018A688 *)arg0;
    u32 period;
    f32 t;
    u32 rem;

    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->x2b4) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
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
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x354, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->x2b4) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x348, (void *)0x7E);
    }
    period = __cvt_fp2unsigned(lbl_805DBD30 / self->x370);
    t = self->x2b4;
    rem = (u32)t % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && rem == 0) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x354, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->x2b4 && rem == 0) {
        trigger_spawn__19TContainerAncient01FPvPvPv(self, self->x348, (void *)0x7E);
    }
    TContainerAncient01__sub_8018A584((Obj_8018A584 *)self, self->x344);
    if (self->x340 <= self->x2b4) {
        reset_hp__19TContainerAncient01FPv(self);
    }
}

void update_spawning__19TContainerAncient01FPv(u8 *arg0) {
  advance_animation_playback(arg0);
  if ((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) % 15) == 0)
  {
    trigger_spawn__19TContainerAncient01FPvPvPv(arg0, arg0 + 0x348, (void *) 0x7D);
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

void check_open_trigger__19TContainerAncient01FPv(void *arg0) {
    Obj_8018A914 *self = (Obj_8018A914 *)arg0;
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
void init_positions__19TContainerAncient01FPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) (TContainerAncient01__data_805DBD3C + (*(f32 *)((s8 *)arg0 + 0x68) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    *(f32 *)((s8 *)arg0 + 0x340) = (f32) (lbl_805DBD40 + (*(f32 *)((s8 *)arg0 + 0x6C) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    *(f32 *)((s8 *)arg0 + 0x344) = (f32) (TContainerAncient01__data_805DBD44 + (*(f32 *)((s8 *)arg0 + 0x70) - (*(const f32 *)&TContainerAncient01__data_805DBD10)));
    *(s32 *)((s8 *)arg0 + 0x370) = (s32) (*(s32 *)((s8 *)arg0 + 0x8C) + 4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x348, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x34C) = (f32) (*(f32 *)((s8 *)arg0 + 0x34C) + *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4));
    VecCopy__FP3VecPC3Vec(arg0 + 0x354, arg0 + 0x348);
    *(f32 *)((s8 *)arg0 + 0x358) = (f32) ((lbl_805DBD48 * *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4)) + *(f32 *)((s8 *)arg0 + 0x358));
    *(s32 *)((s8 *)arg0 + 0x360) = 0;
    *(f32 *)((s8 *)arg0 + 0x364) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    *(f32 *)((s8 *)arg0 + 0x368) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    *(f32 *)((s8 *)arg0 + 0x36C) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD10);
    *(s16 *)((s8 *)arg0 + 0x32C) = (s16) *(s32 *)((s8 *)arg0 + 0x64);
    if ((s16) *(s16 *)((s8 *)arg0 + 0x32C) < 1) {
        *(s16 *)((s8 *)arg0 + 0x32C) = 1;
    }
    *(s16 *)((s8 *)arg0 + 0x338) = 0;
}
#pragma pop

void set_target_value__19TContainerAncient01FPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    s16 temp_r4;
    *(s16 *)((s8 *)arg0 + 0x338) = (s16) *arg1;
    if (arg2 != 0) {
        temp_r4 = *(s16 *)((s8 *)arg0 + 0x338);
        if ((*(s16 *)((s8 *)arg0 + 0x32C) - temp_r4) <= 0) {
            reset_hp__19TContainerAncient01FPv((void*)(arg0));
            open_container__19TContainerAncient01FPv((Obj_8018AB44 *)(arg0));
            *(s32 *)((s8 *)arg0 + 0x360) = 1;
        }
    } else if ((*(s16 *)((s8 *)arg0 + 0x32C) - *(s16 *)((s8 *)arg0 + 0x338)) <= 0) {
        *(s32 *)((s8 *)arg0 + 0x360) = 1;
    }
}

extern const f32 TContainerAncient01__data_805DBD10;
extern f32 TContainerAncient01__data_805DBD14;

void open_container__19TContainerAncient01FPv(Obj_8018AB44 *arg0) {
    if (arg0->f360 == 0) {
        arg0->f360 = 1;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        trigger_spawn__19TContainerAncient01FPvPvPv((void *)(arg0), (void *)(arg0->pos), (void *)(TContainerAncient01__open_effect_table[0]));
        trigger_spawn__19TContainerAncient01FPvPvPv((void *)(arg0), (void *)(arg0->pos), (void *)(TContainerAncient01__open_effect_table[1]));
        if (is_global_state_in_table__19TContainerAncient01Fv() == 0) {
            request_box_item_drop(arg0, arg0->pos, 1);
        }
        set_flag8__6TLobbyFPv(arg0);
    }
}

f32 save_and_send_state__19TContainerAncient01FPv(u8 *arg0) {
    s16 sp8;
    if ((u16) *(u16 *)((s8 *)arg0 + 0x1C) >= 0x1000U) {
        *(s16 *)((s8 *)arg0 + 0x338) = (s16) (*(s16 *)((s8 *)arg0 + 0x338) + 1);
        if (((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) && (access_object_saved_state((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
            sp8 = *(s16 *)((s8 *)arg0 + 0x338);
            access_object_saved_state((void *) (arg0), (void *) (&sp8), (int) (0));
            send_object_state_update((void *) (arg0), (void *) (&sp8));
        }
    }
    return (*(const f32 *)&TContainerAncient01__data_805DBD14);
}

f32 check_item_type_range__19TContainerAncient01FPviPv(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_r4;
    struct VObj_8018AC68_8018A584 *o = (struct VObj_8018AC68_8018A584 *)arg0;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01__sub_8018ACC0(void) { return 1; }

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

s32 is_within_range__19TContainerAncient01Fii(s32 arg0, s32 arg1) {
    return xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38), (void *) (arg0)) < TContainerAncient01__data_805DBD44;
}

void draw__19TContainerAncient01FPv(u8 *arg0) {
    if (((VObj8018AD04_8018A584 *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x360) != 0) {
            scale_current_matrix(arg0 + 0x364);
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_ginja_object(*(s32 *)((s8 *)arg0 + 0x34));
        } else {
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0x34), *(s32 *)((s8 *)arg0 + 0xF8), *(f32 *)((s8 *)arg0 + 0xC0));
        }
        pop_matrix();
    }
}
void update_state_machine__19TContainerAncient01FPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x360) == 0) {
            temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
            switch (temp_r0) {
            case 0:
                ((s32 (*)(void *))check_open_trigger__19TContainerAncient01FPv)((void *) (arg0));
                break;
            case 1:
                update_spawning__19TContainerAncient01FPv((u8 *)((void *) (arg0)));
                break;
            case 2:
                TContainerAncient01__sub_8018A688((void *) (arg0));
                break;
            default:
                *(s16 *)((s8 *)arg0 + 0x326) = 0;
                *(s16 *)((s8 *)arg0 + 0xB8) = (s16) *(s16 *)((s8 *)arg0 + 0x326);
                *(f32 *)((s8 *)arg0 + 0x2B4) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
                ((s32 (*)(void *))check_open_trigger__19TContainerAncient01FPv)((void *) (arg0));
                break;
            }
            temp_f1 = *(f32 *)((s8 *)arg0 + 0x2B4);
            *(f32 *)((s8 *)arg0 + 0x2B4) = (f32) (temp_f1 + (*(const f32 *)&TContainerAncient01__data_805DBD10));
            submit_cursor_candidate((void *) (arg0), (int) (-1), (f32) (temp_f1));
        } else {
            temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x368);
            if (temp_f1_2 <= lbl_805DBD50) {
                *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - lbl_805DBD54);
                if (*(f32 *)((s8 *)arg0 + 0x3C) <= (lbl_805DBD58 * *(f32 *)((s8 *)arg0 + 0x368))) {
                    queue_destruction__7TObjectFv(arg0);
                }
            } else {
                *(f32 *)((s8 *)arg0 + 0x368) = (f32) (temp_f1_2 - lbl_805DBD54);
            }
        }
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xF8) == get_bml_motion((int) (TContainerAncient01R__bml_resource), (int) (0))) {
        *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) (TContainerAncient01R__bml_resource), (int) (0));
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xF8) == get_bml_motion((int) (TContainerAncient01R__bml_resource), (int) (1))) {
        *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) (TContainerAncient01R__bml_resource), (int) (1));
    }
    run_task__7TObjectFv((void *) (arg0));
}

extern void *tl_05;

void *TContainerAncient01R__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x374);
    if (o != NULL) {
        o = TContainerAncient01R__ct((Obj_8018B030 *)o, tl_05, arg0);
    }
    return o;
}

void TContainerAncient01R__sub_8018AF74(void) { TContainerAncient01R__bml_resource = 0; }

void init_table_entries__20TContainerAncient01RFv(void) {
    TContainerAncient01R__bml_resource = TContainerAncient01__sub_8018BE90();
    TContainerAncient01__open_effect_table[0] = get_table_entry__19TContainerAncient01Fi(0);
    TContainerAncient01__open_effect_table[1] = get_table_entry__19TContainerAncient01Fi(1);
}

void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TContainerAncient01R;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TContainerAncient01R__ct(Obj_8018B030 *self, void *arg1, void *arg2) {
    Coll_8018B030 *c;

    construct_actor_base__10TObjPlayerFPvPv(self, arg1, arg2);
    *(void **)((u8 *)self + 0x18) = (void *)__vt__20TContainerAncient01R;
    *(s32 *)self = TContainerAncient01R__name;
    self->m5(arg2);
    self->x34 = get_bml_model(TContainerAncient01R__bml_resource, 0);
    self->x24 = TObjFish__sub_8001EDB0(TContainerAncient01R__bml_resource, 0);
    self->animTbl = (void *)TContainerAncient01__anim_table;
    set_field_d8__10TObjPlayerFPvi(self, self->animTbl);
    self->xdc = ((Res_8018B030 *)TContainerAncient01R__bml_resource)->x430;
    self->anim = 0;
    set_animation__10TObjPlayerFPvs(self, self->anim);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->anim);
    self->flags |= 0x60000000;
    init_collision_body_parts(self, (void *)&TContainerAncient01__collision_body_parts, 1);
    reset_photon_effect__10TObjPlayerFPv(self);
    VecCopy__FP3VecPC3Vec(&self->pos74, &self->pos);
    c = (Coll_8018B030 *)&TContainerAncient01__collision_body_parts;
    self->pos74.y = c->y * lbl_805DBD5C + self->pos74.y;
    VecCopy__FP3VecPC3Vec(&self->pos2fc, &self->pos74);
    self->state = 0;
    init_positions__19TContainerAncient01FPv((u8 *)self);
    return self;
}
#pragma pop

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void reset_state__19TContainerAncient01FPv(void* a0);

    extern const float TContainerAncient01__data_805DBD1C;

void spawn_effect__19TContainerAncient01FPvPvPv(void* p, void* a1, void* a2) { spawn_particle_effect(a1, a2); }

void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range) {
    u16 i;
    Player_8018B180 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018B180 *)get_player_by_client_id(i);
        if (pl != NULL) {
            if (get_field_3e4__10TObjPlayerFPv(pl) == get_current_floor() && obj_testFlags30(pl, 1) == 0 &&
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

void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__sub_8018B284(Obj_8018B284 *self) {
    u32 period;
    u32 phase;
    f32 t;
    advance_animation_playback(self);
    if (TContainerAncient01__data_805DBD20 == self->f2B4) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
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
        spawn_effect__19TContainerAncient01FPvPvPv(self, self->f350, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->f2B4) {
        spawn_effect__19TContainerAncient01FPvPvPv(self, self->f344, (void *)0x7E);
    }
    period = (u32)(lbl_805DBD30 / (f32)self->f36C);
    phase = (u32)(t = self->f2B4) % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && phase == 0) {
        spawn_effect__19TContainerAncient01FPvPvPv(self, self->f350, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->f2B4 && phase == 0) {
        spawn_effect__19TContainerAncient01FPvPvPv(self, self->f344, (void *)0x7E);
    }
    TContainerAncient01__sub_8018B180((Obj_8018B180 *)self, self->f340);
    if (self->f33C <= self->f2B4) {
        reset_state__19TContainerAncient01FPv(self);
    }
}

void TContainerAncient01__sub_8018B48C(u8 *arg0) {
  advance_animation_playback(arg0);
  if (((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) & 0xFFFFFFFF) % 15) == 0)
  {
    spawn_effect__19TContainerAncient01FPvPvPv((void*)(arg0), (void*)(arg0 + 0x344), (void*)((void *) 0x7D));
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];

void update_wait_for_player__19TContainerAncient01FPv(Obj_8018B510 *arg0) {
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

void init_state_vectors__19TContainerAncient01FPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x338) = (f32) (TContainerAncient01__data_805DBD3C + (*(f32 *)((s8 *)arg0 + 0x68) - TContainerAncient01__data_805DBD10));
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) (lbl_805DBD40 + (*(f32 *)((s8 *)arg0 + 0x6C) - TContainerAncient01__data_805DBD10));
    *(f32 *)((s8 *)arg0 + 0x340) = (f32) (TContainerAncient01__data_805DBD44 + (*(f32 *)((s8 *)arg0 + 0x70) - TContainerAncient01__data_805DBD10));
    *(s32 *)((s8 *)arg0 + 0x36C) = (s32) (*(s32 *)((s8 *)arg0 + 0x8C) + 4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x344, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x348) = (f32) (*(f32 *)((s8 *)arg0 + 0x348) + *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4));
    VecCopy__FP3VecPC3Vec(arg0 + 0x350, arg0 + 0x344);
    *(f32 *)((s8 *)arg0 + 0x354) = (f32) ((lbl_805DBD48 * *(f32 *)((s8 *)(&TContainerAncient01__collision_body_parts.value) + 4)) + *(f32 *)((s8 *)arg0 + 0x354));
    *(s32 *)((s8 *)arg0 + 0x35C) = 0;
    *(f32 *)((s8 *)arg0 + 0x360) = (f32) TContainerAncient01__data_805DBD10;
    *(f32 *)((s8 *)arg0 + 0x364) = (f32) TContainerAncient01__data_805DBD10;
    *(f32 *)((s8 *)arg0 + 0x368) = (f32) TContainerAncient01__data_805DBD10;
}
#pragma pop

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700((Obj_8018B700 *)(arg0));
            *(s32 *)((s8 *)arg0 + 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        *(s32 *)((s8 *)arg0 + 0x35C) = 1;
    }
}
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0) {
    if (arg0->f35C == 0) {
        arg0->f35C = 1;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        spawn_effect__19TContainerAncient01FPvPvPv((void*)(arg0), (void*)(arg0->pos), (void*)(TContainerAncient01__effect_id_table[0]));
        spawn_effect__19TContainerAncient01FPvPvPv((void*)(arg0), (void*)(arg0->pos), (void*)(TContainerAncient01__effect_id_table[1]));
        if (is_global_state_in_table__19TContainerAncient01Fv() == 0) {
            request_box_item_drop(arg0, arg0->pos, 1);
        }
        set_flag8__6TLobbyFPv(arg0);
    }
}

}
