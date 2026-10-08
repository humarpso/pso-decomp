#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_nth_view_player_id__11TCameraCtrlFi(s32);
void request_follow_camera_offsets(void *, void *, s32);
s32 get_camera_no__11TCameraCtrlFv(void);
void matrix_mult_vec(int, void *, void *);
f32 vector_length(void *);
void set_position_vec3__10TObjPlayerFPvPv(int, void *);
void set_matrix_identity__10TObjPlayerFPv(int);
int rotate_matrix_y(void *, void *);
int push_matrix(void);
int pop_matrix(void);
extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B24;
extern const f32 lbl_805D8B28;
extern const f32 lbl_805D8B2C;
extern const f32 lbl_805D8B30;
extern const f32 lbl_805D8B34;
extern const f32 lbl_805D8B38;
extern const f32 lbl_805D8B3C;
extern const f32 lbl_805D8B40;
}

extern "C" {

struct RecoveredGlobal_80052C58_lbl_80486218 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef struct Vec_80052CDC {
    f32 x, y, z;
} Vec_80052CDC;

typedef struct Params_80052CDC {
    s32 owner;
    s16 a[3];
    s16 b;
    s16 c;
    u8 pad[0x14 - 0xE];
    Vec_80052CDC pos;
    u8 pad20[0x48 - 0x20];
} Params_80052CDC;

typedef struct Spot_80052CDC {
    Vec_80052CDC pos;
    u8 padc[0x18 - 0xC];
} Spot_80052CDC;

typedef struct Obj_80052CDC {
    u8 pad0[0x38C];
    s32 owner;
    u8 pad390[0x398 - 0x390];
    s32 timer;
    u8 pad39c[0x3A8 - 0x39C];
    s32 idx;
    u8 pad3ac[0x3C4 - 0x3AC];
    s32 max;
    s32 count;
    u8 pad3cc[0x3D0 - 0x3CC];
    s32 f3d0;
    u8 pad3d4[0x444 - 0x3D4];
    Spot_80052CDC spots[1];
} Obj_80052CDC;

struct Ent_8005294C { u8 b[0xC]; };

struct Obj_8005294C { u8 pad[0x484]; Ent_8005294C ents[1]; };

typedef struct { char pad[0x444]; struct { char b[0x18]; } arr[1]; } Foo;

typedef char RecoveredGlobal_80052C58_lbl_80486218_size[sizeof(RecoveredGlobal_80052C58_lbl_80486218) == 0xC ? 1 : -1];

typedef struct Vec_80053440 {
    f32 x, y, z;
} Vec_80053440;

typedef struct Obj_80053440 {
    u8 pad0[0x38];
    Vec_80053440 pos;
    u8 pad44[0x374 - 0x44];
    s32 state;
    u8 f378[0x3F8 - 0x378];
    void *a[4];
    void *b[4];
} Obj_80053440;

struct Boss_800535A8 {
    u8 pad0[0x32C];
    s16 hp;
    u8 pad32e[0x3A8 - 0x32E];
    s32 x3a8;
    u8 pad3ac[0x3D8 - 0x3AC];
    s32 x3d8;
};

struct Vec_80053914 { f32 x, y, z; };

struct O_80053914 {
    u8 pad0[0x38];
    Vec_80053914 pos;
};

struct Obj_80053CEC { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[4]; s32 f3b0; s32 f3b4; };

struct S_80053B48 { u8 pad0[0x3a0]; s32 f3a0; };

struct Obj_80053AD4 { u8 pad0[0x3B0]; s32 i3B0; s32 i3B4; f32 f3B8; f32 f3BC; f32 f3C0; };

typedef struct Vec_80053D4C {
    f32 x, y, z;
} Vec_80053D4C;

typedef struct Spot_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x18 - 0xC];
} Spot_80053D4C;

typedef struct Part_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x1C - 0xC];
    Vec_80053D4C local;
    u8 pad28[0x2C - 0x28];
} Part_80053D4C;

typedef struct Obj_80053D4C {
    u8 pad0[0x38];
    Vec_80053D4C pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x394 - 0x64];
    Part_80053D4C *parts;
    u8 pad398[0x438 - 0x398];
    Spot_80053D4C spots[3];
} Obj_80053D4C;

struct Vec_80053E40 { f32 x, y, z; };

struct XZ_80053E40 { f32 x, z; };

struct Obj_80053E40 {
    u8 pad0[0x38];
    Vec_80053E40 pos;
    u8 pad44[0x60 - 0x44];
    void *x60;
    u8 pad64[0x3D0 - 0x64];
    s32 count;
};

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct V_80054224 { f32 x, y, z; };

struct S_80054224 { u8 pad0[0x38]; V_80054224 pos; u8 pad44[0x39c - 0x44]; f32 f39c; };

struct Boss_800542B0 {
    u8 pad0[0x374];
    s32 state;
    u8 pad378[0x3D0 - 0x378];
    s32 f3d0;
    u8 pad3d4[0x3F8 - 0x3D4];
    void *items[13];
};

typedef void (Boss_800542B0::*Act_800542B0)();

struct Entry_800542B0 {
    u8 *f0;
    s32 f4;
    Act_800542B0 enter;
    Act_800542B0 a;
    Act_800542B0 b;
};

struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct Obj_80054738 {
    u8 pad0[0x32C];
    s16 x32c;
    u8 pad32e[0x33E - 0x32E];
    s16 x33e;
    u8 pad340[0x374 - 0x340];
    s32 x374;
    u8 pad378[0x38C - 0x378];
    s32 x38c;
    u8 pad390[0x3DC - 0x390];
    f32 x3dc;
    f32 x3e0;
    void m();
};

typedef void (Obj_80054738::*Act_80054738)();

struct Ent_80054738 { u8 pad[0x14]; Act_80054738 a; Act_80054738 b; };

typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

typedef char RecoveredGlobal_8005455C_lbl_80485EC8_size[sizeof(RecoveredGlobal_8005455C_lbl_80485EC8) == 0x1E0 ? 1 : -1];

struct S_80054938 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x3f8 - 0x398];
    void *parts[13];
    void *fx[3];
    u8 pad438[0x480 - 0x438];
    void *f480;
};

struct RecoveredGlobal_80054F6C_lbl_804FF2A0 {
    M2C_UNK value;
    u8 remaining[0x2FC];
};

typedef char RecoveredGlobal_80054F6C_lbl_804FF2A0_size[sizeof(RecoveredGlobal_80054F6C_lbl_804FF2A0) == 0x300 ? 1 : -1];

struct Vec_80052EF8 { f32 x, y, z; };

struct O_80052EF8 {
    u8 pad0[0x38];
    u8 f38[0x398 - 0x38];
    s32 f398;
    f32 f39c;
    s32 f3a0;
    s32 f3a4;
    s32 f3a8;
    s32 f3ac;
    u8 pad3b0[0x3CC - 0x3B0];
    s32 f3cc;
};

typedef struct Vec_800530C0 {
    f32 x, y, z;
} Vec_800530C0;

typedef struct Obj_800530C0 {
    u8 pad0[0x398];
    s32 timer;
    f32 f39c;
} Obj_800530C0;

struct Stack_80053670 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
};

f32 calc_boss4_scale__10TObjPlayerFi(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
O_80053914 * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 * dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 get_bml_motion(s32, s32);
M2C_UNK TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 get_field_3e0__12TBoss3VoloptFPv(void *);
void scroll_strips__11TBoss4Type2FPv(void *);
void fn_8004AA04(void *);
s32 TBoss4DarkFalz__sub_8004AF5C(s32, s16 *, s16 *);
void send_code_25_4__14TBoss4DarkFalzFPvi(void *, s32);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 is_field378_zero__14TBoss4DarkFalzFPv(s32);
void save_position__14TBoss4DarkFalzFi(void *);
void set_position_from__14TBoss4DarkFalzFPvPv(void *, void *);
void TBoss4DarkFalz__sub_8004D990(s32);
void create__16TObjDFBeamCursorFPvPv(void *, void *);
s32 create__16TObjDFTenchuFuruFPvPv(s32, s32);
s32 pick_weighted_random__11TBoss4Type2FiPvPv(s32, void *, void *);
s32 TBoss4Type3__sub_8005254C(u16);
void TBoss4Type2__sub_800525AC(u8 *arg0);
void TBoss4Type2__sub_800528B8(void *arg0);
void init_timer__11TBoss4Type2FPv(u8 *arg0);
void update_tech_charge__11TBoss4Type2FPv(u8 *arg0);
void update_scale_state__11TBoss4Type2FPv(void *arg0);
void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0);
void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0);
void update_state__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_80052C58(u8 *arg0);
void TBoss4Type2__sub_80052CA0(u8 *arg0);
void update_spawn_uro__14TBoss4DarkFalzFPv(Obj_80052CDC *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q);
void tick_state_398_timer__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_80052EE8(void);
void TBoss4Type2__sub_80052EEC(void* p);
void update_state_transition__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_8005307C(void* p);
void update_flag800_state__11TBoss4Type2FPv(void *arg0);
void check_state_if_idle__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_800531BC(void* p);
void fn_80053440(Obj_80053440 *arg0);
void TBoss4Type2__sub_80053504(u8 *arg0);
void check_state_transition__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_800535A8(Boss_800535A8 *arg0);
void TRaderMapCore__sub_80053670(u8 *arg0);
void pick_target_position__13TRaderMapCoreFPvPv(O_80053914 *self, Vec_80053914 *out);
void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1);
void TBoss4Type2__sub_80053AD4(Obj_80053AD4 *arg0);
void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b);
void apply_packed_state__11TBoss4Type2FPvUi(void *arg0, u32 arg1);
void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void send_state_to_target__11TBoss4Type2FPvi(Obj_80053CEC *self, s32 arg1);
void fn_80053D4C(Obj_80053D4C *arg0);
f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
void set_pos_from_scaled_offset__11TBoss4Type2FPvPvPv(S_80054224 *o, void *src, V_80054224 *in);
void set_state__11TBoss4Type2FPvi(Boss_800542B0 *arg0, s32 arg1);
u8 * TBoss4Type2__sub_80054384(void *self, s32 i, s32 j);
void draw_parts__8TObjFishFPv(u8 *arg0);
void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1);
void fn_8005455C(u8 *arg0);
void render_effects__10TObjPlayerFPv(void* p);
void snapshot_position__10TObjPlayerFPv(u8 *arg0);
void render_and_update_effects__10TObjPlayerFPv(void* p);
void request_state_3__11TBoss4Type2FPv(void *arg0);
void fn_800548E4(u8 *arg0);
S_80054938 * fn_80054938(S_80054938 *o, s16 flag);
s32 TBoss4Type1__ct(s32, s32, s32);
s32 create__11TBoss4Type1Fi(s32 arg0);
M2C_UNK TBoss4Type2__sub_80054DA8();
void create_all_tenchu_furu__11TBoss4Type2Fi(s32 arg0);
M2C_UNK TBoss4Type2__sub_80054FC0(void *, f32);
void TBoss4Type2__sub_80055300(void);
Vec_80053E40 * get_position_ptr__10TObjPlayerFPv(void *);
void * create__9TBoss4UroFi(Params_80052CDC *);
void request_destroy__11TBoss4Type2FUi(u32);
void spawn_particle_effect(void *, s32);
u32 create_particle_emitter(int, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
int toggle_particle_effect__10TObjPlayerFv(void*);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
void init_state_1__8TObjFishFPv(void *);
s32 TObjControl__ct(s32, s32);
void __dt__9TObjEnemyFv(void *, s32);
s32 angle_diff_s16(s32, s32);
void set_indexed_flags(void *, int, int);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
void free_collision_body_parts(void *);
s32 project_actor_to_ground(void *, void *, int);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
int end_effect_render__13TParticleCtrlFv(void);
s32 add_radar_scaled_marker(void *, s32, s16, s32, f32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create__11TTecRaBartaFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK create__10TTecRaFoieFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s16, s16);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(Vec_80053440 *, Vec_80053440 *);
void matrix_mult_vec(int, void *, void *);
f32 vector_length(void *);
void set_position_vec3__10TObjPlayerFPvPv(int, void *);
void set_matrix_identity__10TObjPlayerFPv(int);
int rotate_matrix_y(void *, void *);
void subtract_vector(Vec_80053D4C *, Vec_80053D4C *);
void normalize_vector(void *);
int push_matrix(void);
int pop_matrix(void);
int post_translate_matrix(void*);
M2C_UNK set_global_param__8TObjFishFi();
f32 xyz_distance(Vec_80053914 *, Vec_80053914 *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern Vec_800530C0 lbl_80437604;
extern Vec_800530C0 lbl_80437610;
extern const f64 lbl_80437620[];
extern const f64 lbl_80437630;
extern RecoveredGlobal_80052C58_lbl_80486218 lbl_80486218;
extern u8 lbl_80486224[];
extern RecoveredGlobal_80054F6C_lbl_804FF2A0 lbl_804FF2A0;
extern s32 lbl_805D586C;
extern const f32 lbl_805D8AF8;
extern const f32 lbl_805D8AFC;
extern const f32 lbl_805D8B00;
extern const f32 lbl_805D8B04;
extern f32 lbl_805D8B08;
extern const f32 lbl_805D8B0C;
extern const f32 lbl_805D8B10;
extern const f32 lbl_805D8B14;
extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B1C;
extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B24;
extern const f32 lbl_805D8B44;
extern const f32 lbl_805D8B48;
extern const f32 lbl_805D8B4C;
extern const f32 lbl_805D8B50;
extern const f32 lbl_805D8B54;
extern const f32 lbl_805D8B58;
extern const f32 lbl_805D8B5C;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B64;
extern const f32 lbl_805D8B68;
extern const f32 lbl_805D8B6C;
extern const f32 lbl_805D8B70;
extern const f32 lbl_805D8B74;
extern const f32 lbl_805D8B78;
extern const f32 lbl_805D8B7C;
extern const f32 lbl_805D8B80;
extern s32 tl_04;

#pragma push
#pragma fp_contract on
struct Cam_800531C8 { u8 pad[0x178]; Vec_80053E40 pos; };

extern "C" {
extern Vec_80053E40 lbl_804375EC;
extern Vec_80053E40 lbl_804375F8;
extern Cam_800531C8 *lbl_805D4DF0;
void update_follow_camera_offsets__10TObjPlayerFPv(Obj_80053E40 *o);
}

struct P2_80052E10 { s32 a, b; };
struct S_80052E10 {
    u8 pad0[0x374];
    s32 f374;
    u8 pad378[0x398 - 0x378];
    s32 f398;
    u8 pad39c[0x3a8 - 0x39c];
    s32 idx;
    u8 pad3ac[0x3c8 - 0x3ac];
    s32 f3c8;
    u8 pad3cc[4];
    s32 f3d0;
};
extern "C" void TBoss4Type2__sub_80052E10(S_80052E10 *o);
extern "C" void TBoss4Type2__sub_80052EF8(O_80052EF8 *o);
extern "C" void TBoss4Type2__sub_800530C0(Obj_800530C0 *arg0);
extern "C" u8 lbl_8043750C[];
extern "C" u8 lbl_80437514[];
extern "C" u8 lbl_80437520[];
extern "C" u8 lbl_8043752C[];
extern "C" u8 lbl_80437534[];
extern "C" u8 lbl_80437540[];
extern "C" u8 lbl_8043754C[];
extern "C" u8 lbl_80437558[];
extern "C" u8 lbl_80437560[];
extern "C" u8 lbl_80437568[];
extern "C" u8 lbl_80437570[];
void *lbl_80485AE0[10] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41c80000,
    (void *)0x40000000, (void *)0x41c80000, (void *)0x3f000000, (void *)0x3f000000,
    (void *)0x3f000000, (void *)0x3f000000,
};
void *lbl_80485B08[80] = {
    (void *)0xfb, (void *)0xfc, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__sub_800531BC, (void *)0x0, (void *)0xffffffff, (void *)&check_state_if_idle__11TBoss4Type2FPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_800530C0, (void *)0x0,
    (void *)0xffffffff, (void *)&update_flag800_state__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__sub_8005307C, (void *)0x0, (void *)0xffffffff, (void *)&update_state_transition__11TBoss4Type2FPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_80052EF8, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__sub_80052EEC, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__sub_80052EE8, (void *)0x0, (void *)0xffffffff, (void *)&tick_state_398_timer__11TBoss4Type2FPv,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_80052E10, (void *)0x0,
    (void *)0xffffffff, (void *)&update_spawn_uro__14TBoss4DarkFalzFPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__sub_80052E10, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_80052CA0,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_80052C58, (void *)0x0,
    (void *)0xffffffff, (void *)&update_state__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff,
    (void *)&update_attack_countdown__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff, (void *)&init_child_and_set_timer__11TBoss4Type2FPv,
    (void *)0x0, (void *)0xffffffff, (void *)&update_scale_state__11TBoss4Type2FPv, (void *)0x0,
    (void *)0xffffffff, (void *)&update_tech_charge__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff,
    (void *)&init_child_and_set_timer__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff, (void *)&update_scale_state__11TBoss4Type2FPv,
    (void *)0x0, (void *)0xffffffff, (void *)&update_tech_charge__11TBoss4Type2FPv, (void *)0x0,
    (void *)0xffffffff, (void *)&init_timer__11TBoss4Type2FPv, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__sub_800528B8, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__sub_800525AC,
};
Entry_800542B0 lbl_80485C48[11] = {
    { lbl_8043750C, 0, 0, 0, 0 },
    { lbl_80437514, 0, 0, 0, 0 },
    { lbl_80437520, 0, 0, 0, 0 },
    { lbl_8043752C, 1, 0, 0, 0 },
    { lbl_80437534, -1, 0, 0, 0 },
    { lbl_80437540, 2, 0, 0, 0 },
    { lbl_8043754C, 2, 0, 0, 0 },
    { lbl_80437558, 4, 0, 0, 0 },
    { lbl_80437560, 11, 0, 0, 0 },
    { lbl_80437568, 12, 0, 0, 0 },
    { lbl_80437570, 13, 0, 0, 0 },
};
void *lbl_80485E2C[33] = {
    (void *)0x43070000, (void *)0x41c80000, (void *)0x0, (void *)0x41f00000,
    (void *)0x0, (void *)0x0, (void *)0x801b, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41c80000, (void *)0x43070000, (void *)0x41f00000, (void *)0x0,
    (void *)0x0, (void *)0x801b, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xc3070000, (void *)0x41c80000,
    (void *)0x0, (void *)0x41f00000, (void *)0x0, (void *)0x0,
    (void *)0x801b, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_80485EB0[6] = {
    (void *)0x9, (void *)0x7, (void *)0x5, (void *)0x4,
    (void *)0x6, (void *)0x3,
};
void *lbl_80485EC8[120] = {
    (void *)0x0, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x4d, (void *)0x4c,
    (void *)0x1, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x15, (void *)0x15, (void *)0x15, (void *)0x14,
    (void *)0x2, (void *)0x3, (void *)0x50, (void *)0x4e,
    (void *)0x2a, (void *)0x4d, (void *)0x4d, (void *)0x14,
    (void *)0x0, (void *)0x4, (void *)0x50, (void *)0x4e,
    (void *)0x28, (void *)0x4d, (void *)0x4d, (void *)0x14,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x2c, (void *)0x4d, (void *)0x4d, (void *)0x14,
    (void *)0x2, (void *)0x6, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x2a, (void *)0x4d, (void *)0x14,
    (void *)0x0, (void *)0x7, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x28, (void *)0x4d, (void *)0x14,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x2c, (void *)0x4d, (void *)0x14,
    (void *)0x2, (void *)0x9, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x2a, (void *)0x14,
    (void *)0x0, (void *)0xa, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x28, (void *)0x14,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x2c, (void *)0x14,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x4d, (void *)0x0,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x4d, (void *)0x4,
    (void *)0x2, (void *)0xe, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x4d, (void *)0x43,
    (void *)0x2, (void *)0x0, (void *)0x50, (void *)0x4e,
    (void *)0x4d, (void *)0x4d, (void *)0x4d, (void *)0x3d,
};
void *lbl_804860A8[6] = {
    (void *)0x42960000, (void *)0x42700000, (void *)0x42700000, (void *)0x42700000,
    (void *)0x42200000, (void *)0x41f00000,
};
void *lbl_804860C0[39] = {
    (void *)0x0, (void *)0x0, (void *)0x42480000, (void *)0x0,
    (void *)0x0, (void *)0x42480000, (void *)0xc2480000, (void *)0x0,
    (void *)0x0, (void *)0xc2a00000, (void *)0x0, (void *)0x0,
    (void *)0x1a, (void *)0xc1700000, (void *)0x0, (void *)0x0,
    (void *)0x1a, (void *)0x0, (void *)0x40f00000, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xe, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x54, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xc2f00000,
};
void *lbl_8048615C[14] = {
    (void *)0x0, (void *)0xc000, (void *)0x8000, (void *)0x4000,
    (void *)0x3e800000, (void *)0x3e800000, (void *)0x3f000000, (void *)0x8,
    (void *)0x9, (void *)0xa, (void *)0x3f000000, (void *)0x3f000000,
    (void *)0x8, (void *)0x9,
};
void *lbl_80486194[12] = {
    (void *)0x42480000, (void *)0x41200000, (void *)0x0, (void *)0xc2480000,
    (void *)0x41200000, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x42480000, (void *)0x0, (void *)0x41200000, (void *)0xc2480000,
};
void *lbl_804861C4[12] = {
    (void *)0x0, (void *)0x0, (void *)0xc32f0000, (void *)0x432f0000,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x432f0000, (void *)0xc32f0000, (void *)0x0, (void *)0x0,
};
void *lbl_804861F4[3] = {
    (void *)0x2, (void *)0x5, (void *)0x8,
};
void *lbl_80486200[6] = {
    (void *)0x43020000, (void *)0x0, (void *)0x0, (void *)0x43020000,
    (void *)0xc3020000, (void *)0x0,
};
#define lbl_80485AE0 ((u8 *)lbl_80485AE0)
#define lbl_80485EB0 ((s32 *)lbl_80485EB0)
#define lbl_80485EC8 (*(RecoveredGlobal_80054530_lbl_80485EC8 *)lbl_80485EC8)
#define lbl_804860A8 ((f32 *)lbl_804860A8)
#define lbl_804860C0 ((XZ_80053E40 *)lbl_804860C0)
#define lbl_8048615C ((u8 * *)lbl_8048615C)
#define lbl_80486194 ((Vec_80053440 *)lbl_80486194)
#define lbl_804861C4 ((Vec_80052EF8 *)lbl_804861C4)

void TBoss4Type2__sub_800525AC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    s32 temp_r0_2;
    u32 temp_r3;
    u32 temp_r3_10;
    u32 temp_r3_11;
    u32 temp_r3_12;
    u32 temp_r3_13;
    u32 temp_r3_14;
    u32 temp_r3_15;
    u32 temp_r3_16;
    u32 temp_r3_17;
    u32 temp_r3_18;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 temp_r3_9;
    u8 *temp_r31;
    u8 *temp_r30;
    temp_r31 = (u8 *)(arg0 + 0x484);
    temp_r30 = (u8 *)(arg0 + 0x490);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398);
    if (temp_r0 == 6) {
        ((M2C_UNK (*)(void))create_all_tenchu_furu__11TBoss4Type2Fi)();
    } else if (temp_r0 == 1) {
        TBoss4Type2__sub_80054DA8();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0xD) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1 > lbl_805D8AF8) {
            temp_r3 = M2C_FIELD(arg0, u32 *, 0x41C);
            if (temp_r3 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3);
                M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
            }
            temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x424);
            if (temp_r3_2 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_2);
                M2C_FIELD(arg0, u32 *, 0x424) = 0U;
            }
        } else if (temp_f1 >= lbl_805D8AFC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) == 0) {
                temp_r3_3 = create_particle_emitter((int) (temp_r31), (int) (0x142));
                M2C_FIELD(arg0, u32 *, 0x41C) = temp_r3_3;
                if (temp_r3_3 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x41C), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0) {
                temp_r3_4 = create_particle_emitter((int) (temp_r30), (int) (0x142));
                M2C_FIELD(arg0, u32 *, 0x424) = temp_r3_4;
                if (temp_r3_4 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x424), 0x40U);
                }
            }
        }
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x41C);
        if (temp_r3_5 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_5, temp_r31);
        }
        temp_r3_6 = M2C_FIELD(arg0, u32 *, 0x424);
        if (temp_r3_6 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_6, temp_r30);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0xE) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1_2 > lbl_805D8B00) {
            temp_r3_7 = M2C_FIELD(arg0, u32 *, 0x41C);
            if (temp_r3_7 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_7);
                M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
            }
            temp_r3_8 = M2C_FIELD(arg0, u32 *, 0x420);
            if (temp_r3_8 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_8);
                M2C_FIELD(arg0, u32 *, 0x420) = 0U;
            }
            temp_r3_9 = M2C_FIELD(arg0, u32 *, 0x424);
            if (temp_r3_9 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_9);
                M2C_FIELD(arg0, u32 *, 0x424) = 0U;
            }
            temp_r3_10 = M2C_FIELD(arg0, u32 *, 0x428);
            if (temp_r3_10 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_10);
                M2C_FIELD(arg0, u32 *, 0x428) = 0U;
            }
        } else if (temp_f1_2 >= lbl_805D8B04) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) == 0) {
                temp_r3_11 = create_particle_emitter((int) (temp_r31), (int) (0x13A));
                M2C_FIELD(arg0, u32 *, 0x41C) = temp_r3_11;
                if (temp_r3_11 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x41C), 0x40U);
                }
                play_sound_effect((int) (0x40039717), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x420) == 0) {
                temp_r3_12 = create_particle_emitter((int) (temp_r31), (int) (0x13B));
                M2C_FIELD(arg0, u32 *, 0x420) = temp_r3_12;
                if (temp_r3_12 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x420), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0) {
                temp_r3_13 = create_particle_emitter((int) (temp_r30), (int) (0x13A));
                M2C_FIELD(arg0, u32 *, 0x424) = temp_r3_13;
                if (temp_r3_13 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x424), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x428) == 0) {
                temp_r3_14 = create_particle_emitter((int) (temp_r30), (int) (0x13B));
                M2C_FIELD(arg0, u32 *, 0x428) = temp_r3_14;
                if (temp_r3_14 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x428), 0x40U);
                }
            }
        }
        temp_r3_15 = M2C_FIELD(arg0, u32 *, 0x41C);
        if (temp_r3_15 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_15, temp_r31);
        }
        temp_r3_16 = M2C_FIELD(arg0, u32 *, 0x420);
        if (temp_r3_16 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_16, temp_r31);
        }
        temp_r3_17 = M2C_FIELD(arg0, u32 *, 0x424);
        if (temp_r3_17 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_17, temp_r30);
        }
        temp_r3_18 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_18 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_18, temp_r30);
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0_2;
    if (temp_r0_2 < 0) {
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)((void *) (arg0), (int) (1));
    }
}
extern int fold_flush_0;
#pragma pop

void TBoss4Type2__sub_800528B8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)() < lbl_805D8B08) {
            ((M2C_UNK (*)(void *))TBoss4Type2__sub_800535A8)((void *)(arg0));
            return;
        }
        ((M2C_UNK (*)(void *))TBoss4Type2__sub_80053504)((void *)((void *)(arg0)));
    }
}

void init_timer__11TBoss4Type2FPv(u8 *arg0) {
    TBoss4Type2__sub_80054FC0((void *) (arg0 + 0x38), (f32) (lbl_805D8B0C));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

void update_tech_charge__11TBoss4Type2FPv(u8 *arg0) {
    s32 idx;
    Ent_8005294C *ent;
    u32 r;
    idx = M2C_FIELD(arg0, s32 *, 0x374) - 8;
    ent = &((Obj_8005294C *)arg0)->ents[idx];
    if (M2C_FIELD(arg0, f32 *, 0x3E8) > lbl_805D8B10) {
        if (M2C_FIELD(arg0, u32 *, 0x418) != 0) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, u32 *, 0x418));
            M2C_FIELD(arg0, u32 *, 0x418) = 0;
        }
    } else if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B14 && M2C_FIELD(arg0, u32 *, 0x418) == 0) {
        if ((M2C_FIELD(arg0, u32 *, 0x418) = create_particle_emitter((int)ent, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)M2C_FIELD(arg0, u32 *, 0x418), 0x40);
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B14 && M2C_FIELD(arg0, f32 *, 0x3E8) <= lbl_805D8B10) {
        play_persistent_sound(0x4003B512, arg0, arg0 + 0x38, 0, 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x26) {
        if ((r = ((u32 (*)(void *, s32))spawn_particle_effect)(ent, 0xFD)) != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)r, 0x40);
        }
        play_sound_effect(0x4003A813, arg0 + 0x38, 0, 1);
        if (idx == 0) {
            create__11TTecRaBartaFPvPvPvPv(arg0, arg0 + 0x3B8, arg0 + 0x3B8, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x1C));
        } else {
            create__10TTecRaFoieFPvPvPvPv(arg0, arg0 + 0x3B8, arg0 + 0x3B8, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x18));
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)(arg0, 1);
    }
}

void update_scale_state__11TBoss4Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)() < lbl_80437620[0]) {
            ((M2C_UNK (*)(void *))TBoss4Type2__sub_80053504)((void *)((void *)(arg0)));
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        ((M2C_UNK (*)(void *, M2C_UNK *))pick_target_position__13TRaderMapCoreFPvPv)(arg0, &sp8);
        ((M2C_UNK (*)(void *, M2C_UNK *))set_map_position__13TRaderMapCoreFPvPv)(arg0, &sp8);
        ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)(arg0, var_r31);
    }
}

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0) {
    create__16TObjDFBeamCursorFPvPv(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}

void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x2D) {
        play_sound_effect((int)(0x4003AD11), (void *)(&((Foo *) arg0)->arr[M2C_FIELD(arg0, s32 *, 0x3A8)]), (int)(0), (int)(1));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)((void *)(arg0), (int)(1));
    }
}

void update_state__11TBoss4Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 1) {
            ((M2C_UNK (*)(void *))TBoss4Type2__sub_800535A8)((void *)(arg0));
            return;
        }
        ((M2C_UNK (*)(void *))TBoss4Type2__sub_80053504)((void *)((void *)(arg0)));
    }
}

void TBoss4Type2__sub_80052C58(u8 *arg0) {
    ((void (*)(void *, s32))TBoss4Type2__sub_80054530)(arg0, M2C_FIELD(&lbl_80486218.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3A8) * 4)));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

void TBoss4Type2__sub_80052CA0(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x3D0) = 5;
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)((void *)((void *)(arg0)), (int)((M2C_UNK)(7)));
    }
}

void update_spawn_uro__14TBoss4DarkFalzFPv(Obj_80052CDC *arg0) {
    Params_80052CDC p;
    Spot_80052CDC *s;
    s32 t;
    s = &arg0->spots[arg0->idx];
    t = arg0->timer;
    if (t < 0x106 && (t & 0x1F) == 0 && arg0->count < arg0->max) {
        TBoss4DarkFalz__sub_8004B4F0(p.a, TBoss4DarkFalz__data_804FF1E8);
        if (TBoss4DarkFalz__sub_8004AF5C(arg0->owner, p.a, &p.b) != 0) {
            p.owner = arg0->owner;
            p.c = 1;
            VecCopy__FP3VecPC3Vec(&p.pos, s);
            if (create__9TBoss4UroFi(&p) != NULL) {
                spawn_particle_effect(s, 0x7D);
                play_sound_effect(0x4003A810, s, 0, 1);
                arg0->count++;
            }
        }
    }
    TBoss4DarkFalz__sub_8004D990(arg0->owner);
    if (arg0->timer == 0x106) {
        play_sound_effect(0x4003AD0F, s, 0, 1);
    }
    if (--arg0->timer < 0) {
        arg0->f3d0 = 5;
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)(arg0, 7);
    }
}

void TBoss4Type2__sub_80052E10(S_80052E10 *o) {
    TBoss4Type2__sub_80054530((u8 *)o, ((s32 *)lbl_804861F4)[o->idx]);
    o->f3c8 = 0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((u8 *)lbl_804860C0 + 0x28, &((P2_80052E10 *)lbl_80486200)[o->idx]);
    o->f3d0 = 6;
    if (o->f374 == 5) {
        o->f398 = 0x12C;
    } else {
        o->f398 = 0x96;
    }
}

void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

void tick_state_398_timer__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)((void *)(arg0), (int)(4));
    }
}

void TBoss4Type2__sub_80052EE8(void) {  }

void TBoss4Type2__sub_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

void TBoss4Type2__sub_80052EF8(O_80052EF8 *o) {
    s32 t;

    o->f39c = ((f32 (*)(void *, f32))calc_wave_offset__11TBoss4Type2Ff)(o, lbl_805D8B18 - (f32)o->f398 / (f32)o->f3cc);
    {
        Vec_80052EF8 a = lbl_804861C4[o->f3a4];
        Vec_80052EF8 b = lbl_804861C4[o->f3a0];
        ((M2C_UNK (*)(void *, Vec_80052EF8 *, Vec_80052EF8 *))set_pos_from_scaled_offset__11TBoss4Type2FPvPvPv)(o, &a, &b);
    }
    ((M2C_UNK (*)(void *, s32, s32))calc_scaled_field__11TBoss4Type2FPvii)(o, ((s32 (*)(void *, s32, s32))TBoss4Type2__sub_80054384)(o, o->f3a4, o->f3ac), ((s32 (*)(void *, s32, s32))TBoss4Type2__sub_80054384)(o, o->f3a0, o->f3a8));
    ((M2C_UNK (*)(s32, void *, void *, s32, s32))play_persistent_sound)(0x4003A80D, o, o->f38, 0, 0);
    if (--o->f398 < 0) {
        o->f3a4 = o->f3a0;
        o->f3ac = o->f3a8;
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)(o, 1);
    }
}

void update_state_transition__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*))check_state_transition__11TBoss4Type2FPv)(p); } }

void TBoss4Type2__sub_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }

void update_flag800_state__11TBoss4Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)((void *)(arg0), (M2C_UNK)(4));
        return;
    }
    ((M2C_UNK (*)(void *))TBoss4Type2__sub_80053504)((void *)(arg0));
}

void TBoss4Type2__sub_800530C0(Obj_800530C0 *arg0) {
    arg0->f39c = ((f32 (*)(void *, f32))calc_wave_offset__11TBoss4Type2Ff)(arg0, lbl_805D8B18 - (f32)arg0->timer / lbl_805D8B1C);
    Vec_800530C0 a = lbl_80437604;
    Vec_800530C0 b = lbl_80437610;
    ((void (*)(void *, Vec_800530C0 *, Vec_800530C0 *))set_pos_from_scaled_offset__11TBoss4Type2FPvPvPv)(arg0, &a, &b);
    if (--arg0->timer < 0) {
        ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)(arg0, 1);
    }
}

void check_state_if_idle__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*))check_state_transition__11TBoss4Type2FPv)(p); } }

void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

#pragma push
#pragma fp_contract on
void update_follow_camera_offsets__10TObjPlayerFPv(Obj_80053E40 *o) {
    XZ_80053E40 pts[7];
    Vec_80053E40 in;
    Vec_80053E40 out;
    f32 best;
    s32 i;
    s32 j;
    f32 t;
    s32 cn;
    best = lbl_805D8B20;
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    set_position_vec3__10TObjPlayerFPvPv(0, &o->pos);
    rotate_matrix_y(0, o->x60);
    for (i = 0; i < o->count; i++) {
        in.x = lbl_804860C0[i].x;
        in.y = lbl_805D8B20;
        in.z = lbl_804860C0[i].z;
        matrix_mult_vec(0, &in, &out);
        pts[i].x = out.x;
        pts[i].z = out.z;
    }
    pop_matrix();
    {
        Vec_80053E40 cam = lbl_805D4DF0->pos;
        Vec_80053E40 d;
        for (j = 0; j < o->count; j++) {
            f32 r = lbl_805D8B24 + lbl_804860A8[j];
            f32 len;
            d.x = cam.x - pts[j].x;
            d.y = lbl_805D8B20;
            d.z = cam.z - pts[j].z;
            len = vector_length(&d);
            if (!(len >= r)) {
                r -= len;
                if (best < r) {
                    best = r;
                }
            }
        }
    }
    {
        Vec_80053E40 a = lbl_804375EC;
        Vec_80053E40 b = lbl_804375F8;
        if (best > lbl_805D8B28) {
            best = lbl_805D8B28;
        }
        t = best / 40.42f;
        if (t > lbl_805D8B20) {
            a.y = lbl_805D8B30 * t + lbl_805D8B2C;
            a.z = lbl_805D8B34;
            b.y = lbl_805D8B38;
            b.z = lbl_805D8B40 * t + lbl_805D8B3C;
        }
        cn = get_nth_view_player_id__11TCameraCtrlFi(get_camera_no__11TCameraCtrlFv());
        request_follow_camera_offsets(&a, &b, cn);
    }
}
#pragma pop

void fn_80053440(Obj_80053440 *arg0) {
    Vec_80053440 v;
    s32 i;
    if (arg0->state == 4) {
        return;
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&v, &arg0->pos);
        vec3_add_to(&v, &lbl_80486194[i]);
        if (arg0->a[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->a[i], &v);
        }
        if (arg0->b[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(arg0->b[i], &v);
        }
    }
    scroll_strips__11TBoss4Type2FPv(arg0->f378);
    ((void (*)(s32, void *, void *, s32, s32))play_persistent_sound)(0x4003BC0E, arg0, &arg0->pos, 0x40, 2);
}

void TBoss4Type2__sub_80053504(u8 *arg0) {
    s32 spC;
    s32 sp8;
    ((void (*)(void *, void *, void *))TBoss4Type2__sub_80053B48)(arg0, &spC, &sp8);
    ((void (*)(void *, s32, s32, s32))TBoss4Type2__sub_80053C8C)(arg0, 2, spC, sp8);
}

void check_state_transition__11TBoss4Type2FPv(void *arg0) {
    if (((s32 (*)(s32))TBoss4DarkFalz__sub_8004D990)(M2C_FIELD(arg0, s32 *, 0x38C)) <= (s32) (0xC - M2C_FIELD(arg0, s32 *, 0x3C4))) {
        ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)(arg0, 5);
        return;
    }
    ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)(arg0, 6);
}

void TBoss4Type2__sub_800535A8(Boss_800535A8 *arg0) {
    u8 pos[0xC];
    s32 r;
    u8 *tbl = lbl_80485AE0;
    if (arg0->x3a8 == 1) {
        if (arg0->hp <= arg0->x3d8) {
            r = pick_weighted_random__11TBoss4Type2FiPvPv(3, tbl + 0x68C, tbl + 0x698);
        } else {
            r = pick_weighted_random__11TBoss4Type2FiPvPv(2, tbl + 0x6A4, tbl + 0x6AC);
        }
        switch (r) {
        case 8:
        case 9:
            ((void (*)(void *, void *))pick_target_position__13TRaderMapCoreFPvPv)(arg0, pos);
            set_map_position__13TRaderMapCoreFPvPv(arg0, pos);
            ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)(arg0, r);
            break;
        default:
            ((M2C_UNK (*)(void *, M2C_UNK))send_state_to_target__11TBoss4Type2FPvi)(arg0, 0xA);
            break;
        }
    } else {
        check_state_transition__11TBoss4Type2FPv(arg0);
    }
}

void TRaderMapCore__sub_80053670(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80053670, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80053670, sp10) == 0x8) ? 1 : -1];
    Stack_80053670 stack;

    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f27;
    f32 temp_f29;
    f32 temp_f30;
    s32 temp_r30;
    s32 var_r29;
    s32 var_r28;

    add_radar_scaled_marker(arg0 + 0x38, -0x5DB4, 1, 1, lbl_805D8B44);
    add_radar_scaled_marker(arg0 + 0x438, -0x5DB4, 1, 1, lbl_805D8B44);
    add_radar_scaled_marker(arg0 + 0x450, -0x5DB4, 1, 1, lbl_805D8B44);
    add_radar_scaled_marker(arg0 + 0x468, -0x5DB4, 1, 1, lbl_805D8B44);
    temp_f29 = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f30 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x60));
    temp_f27 = lbl_805D8B48;
    var_r29 = 0;
    var_r28 = 0x25;
    do {
        ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)((Vec_80053914 *)&stack.sp8, (Vec_80053914 *)(arg0 + 0x38));
        stack.sp8 += (f32)(-var_r28) * temp_f30;
        stack.sp10 += (f32)var_r28 * temp_f29;
        add_radar_scaled_marker(&stack.sp8, -0x5DB4, 1, 1, lbl_805D8B44);
        ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)((Vec_80053914 *)&stack.sp8, (Vec_80053914 *)(arg0 + 0x38));
        stack.sp8 += (f32)var_r28 * temp_f29;
        stack.sp10 += (f32)var_r28 * temp_f30;
        add_radar_scaled_marker(&stack.sp8, -0x5DB4, 1, 1, lbl_805D8B44);
        ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)((Vec_80053914 *)&stack.sp8, (Vec_80053914 *)(arg0 + 0x38));
        stack.sp8 += (f32)var_r28 * temp_f30;
        stack.sp10 += (f32)(-var_r28) * temp_f29;
        add_radar_scaled_marker(&stack.sp8, -0x5DB4, 1, 1, lbl_805D8B44);
        if (var_r29 < 2) {
            ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)((Vec_80053914 *)&stack.sp8, (Vec_80053914 *)(arg0 + 0x38));
            stack.sp8 += (f32)(-var_r28) * temp_f29;
            stack.sp10 += (f32)(-var_r28) * temp_f30;
            add_radar_scaled_marker(&stack.sp8, -0x5DB4, 1, 1, lbl_805D8B44);
        }
        var_r29 += 1;
        var_r28 = (s32) ((f32) var_r28 + temp_f27);
    } while (var_r29 < 3);
}

#pragma push
#pragma opt_propagation off
void pick_target_position__13TRaderMapCoreFPvPv(O_80053914 *self, Vec_80053914 *out) {
    s32 a1;
    O_80053914 *found;
    s32 i;
    O_80053914 *p;
    f32 best;
    f32 d;
    f32 s;
    s32 ang;
    s32 b;
    Vec_80053914 res;
    best = lbl_805D8B20;
    found = NULL;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) {
            continue;
        }
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        {
            Vec_80053914 v = p->pos;
            v.y = lbl_805D8B20;
            d = xyz_distance(&v, &self->pos);
            if (d <= lbl_805D8B4C && d > best) {
                best = d;
                found = p;
                ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)(&res, &v);
            }
        }
    }
    if (found != NULL) {
        ((M2C_UNK (*)(Vec_80053914 *, Vec_80053914 *))VecCopy__FP3VecPC3Vec)(out, &res);
        return;
    }
    s = lbl_805D8B50 * calc_boss4_scale__10TObjPlayerFi(self);
    a1 = (s32)(lbl_80437630 * get_ad_end_text_start__10TObjPlayerFv(-self->pos.x, -self->pos.z));
    b = (s32)(lbl_805D8B54 * calc_boss4_scale__10TObjPlayerFi(self));
    ang = b + a1;
    ang -= 0x6000;
    out->x = s * sin_table_lookup(ang);
    out->y = lbl_805D8B20;
    out->z = s * cos_table_lookup(ang);
}
extern int fold_flush_1;
#pragma pop

void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8B5C);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8B5C);
}

#pragma push
#pragma fp_contract on
void TBoss4Type2__sub_80053AD4(Obj_80053AD4 *arg0) {
    arg0->f3B8 = lbl_805D8B5C * (lbl_805D8B60 + (f32)arg0->i3B0) - lbl_805D8B58;
    arg0->f3BC = lbl_805D8B20;
    arg0->f3C0 = lbl_805D8B5C * (lbl_805D8B60 + (f32)arg0->i3B4) - lbl_805D8B58;
}
extern int fold_flush_2;
#pragma pop

void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b) {
    f32 s;
    s32 v;
    v = o->f3a0 + (s32)(lbl_805D8B64 * calc_boss4_scale__10TObjPlayerFi(o));
    v += 1;
    if (v >= 4) {
        v -= 4;
    }
    *a = v;
    s = calc_boss4_scale__10TObjPlayerFi(o);
    if (s <= lbl_805D8B68) {
        *b = 0;
    } else if (s <= lbl_805D8B6C) {
        *b = 1;
    } else {
        *b = 2;
    }
}

void apply_packed_state__11TBoss4Type2FPvUi(void *arg0, u32 arg1) {
    s32 n;
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) ((arg1 >> 4U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3A0) = (s32) ((arg1 >> 6U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((arg1 >> 8U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) ((arg1 >> 0xAU) & 3);
    if (M2C_FIELD(arg0, s32 *, 0x3AC) > 2 || M2C_FIELD(arg0, s32 *, 0x3A8) > 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((arg1 >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((arg1 >> 0x10U) & 0xF);
    ((void (*)(void *))TBoss4Type2__sub_80053AD4)(arg0);
    n = arg1 & 0xF;
    if (n < 0 || n >= 0xB) {
        return;
    }
    ((M2C_UNK (*)(void *, int))set_state__11TBoss4Type2FPvi)(arg0, n);
}

void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38C));
    if (temp_r3 != NULL) {
        send_code_25_4__14TBoss4DarkFalzFPvi(temp_r3, ((((((((((((M2C_FIELD(arg0, s32 *, 0x3A0) * 0x10) & 0x30 & ~0xF) | (arg1 & 0xF)) & ~0xC0) | ((arg2 << 6) & 0xC0)) & ~0x300) | ((M2C_FIELD(arg0, s32 *, 0x3A8) << 8) & 0x300)) & ~0xC00) | ((arg3 << 0xA) & 0xC00)) & ~0xF000) | ((M2C_FIELD(arg0, s32 *, 0x3B0) << 0xC) & 0xF000)) & ~0xF0000) | ((M2C_FIELD(arg0, s32 *, 0x3B4) << 0x10) & 0xF0000));
    }
}

void send_state_to_target__11TBoss4Type2FPvi(Obj_80053CEC *self, s32 arg1) {
    if (self->target != 0) {
        send_code_25_4__14TBoss4DarkFalzFPvi(self->target, (arg1 & 0xF) | ((self->f3a0 & 3) << 4) | ((self->f3a0 & 3) << 6) | ((self->f3a8 & 3) << 8) | ((self->f3a8 & 3) << 10) | ((self->f3b0 & 0xF) << 12) | ((self->f3b4 & 0xF) << 16));
    }
}

#pragma push
#pragma fp_contract on
void fn_80053D4C(Obj_80053D4C *arg0) {
    Part_80053D4C *q;
    s32 i;
    f32 s;
    f32 c;
    q = arg0->parts;
    for (i = 0; i < 3; i++, q++) {
        Vec_80053D4C v = arg0->spots[i].pos;
        VecCopy__FP3VecPC3Vec(&q->local, &v);
        subtract_vector(&v, &arg0->pos);
        s = sin_table_lookup(-arg0->angle);
        c = cos_table_lookup(-arg0->angle);
        Vec_80053D4C t = v;
        v.x = c * t.x + s * t.z;
        v.z = -s * t.x + c * t.z;
        VecCopy__FP3VecPC3Vec(q, &v);
    }
}
extern int fold_flush_3;
#pragma pop

void push_players_out_of_colliders__10TObjPlayerFPv(Obj_80053E40 *o) {
    XZ_80053E40 pts[7];
    Vec_80053E40 in;
    Vec_80053E40 out;
    s32 i;
    s32 p;
    u8 *pl;
    s32 j;

    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    set_position_vec3__10TObjPlayerFPvPv(0, &o->pos);
    rotate_matrix_y(0, o->x60);
    for (i = 0; i < o->count; i++) {
        in.x = lbl_804860C0[i].x;
        in.y = lbl_805D8B20;
        in.z = lbl_804860C0[i].z;
        matrix_mult_vec(0, &in, &out);
        pts[i].x = out.x;
        pts[i].z = out.z;
    }
    pop_matrix();
    for (p = 0; p < lbl_805D586C; p++) {
        pl = ((u8 * (*)(s32))get_player_data__10TObjPlayerFi)(p);
        if (pl != NULL && get_field_3e0__12TBoss3VoloptFPv(pl) == 0xE) {
            Vec_80053E40 pos = *get_position_ptr__10TObjPlayerFPv(pl);
            Vec_80053E40 d;
            Vec_80053E40 q;
            for (j = 0; j < o->count; j++) {
                f32 r = lbl_804860A8[j];
                f32 dist;
                VecCopy__FP3VecPC3Vec(&d, &pos);
                d.x = d.x - pts[j].x;
                d.y = lbl_805D8B20;
                d.z = d.z - pts[j].z;
                dist = vector_length(&d);
                if (!(dist > r)) {
                    if (lbl_805D8B20 == dist) {
                        VecCopy__FP3VecPC3Vec(&d, &pos);
                        d.y = lbl_805D8B20;
                        if (lbl_805D8B20 == vector_length(&d)) {
                            d.y = lbl_805D8B20;
                            d.x = lbl_805D8B18;
                            d.z = lbl_805D8B20;
                        }
                    }
                    normalize_vector(&d);
                    {
                        f32 s = (*(const f32 *)&lbl_805D8B08) + r;
                        d.x *= s;
                        d.z *= s;
                    }
                    pos.x = d.x + pts[j].x;
                    pos.z = d.z + pts[j].z;
                    VecCopy__FP3VecPC3Vec(&q, &pos);
                    for (;;) {
                        f32 m;
                        q.y += lbl_805D8B44;
                        if (project_actor_to_ground(o, &q, 0) != 0) {
                            break;
                        }
                        q.y = lbl_805D8B20;
                        m = vector_length(&q) - lbl_805D8B70;
                        normalize_vector(&q);
                        q.x *= m;
                        q.z *= m;
                    }
                    VecCopy__FP3VecPC3Vec(&pos, &q);
                }
            }
            if (((f32 (*)(void *, void *))xyz_distance)(get_position_ptr__10TObjPlayerFPv(pl), &pos) > lbl_805D8B20) {
                set_position_from__14TBoss4DarkFalzFPvPv(pl, &pos);
                save_position__14TBoss4DarkFalzFi(pl);
                set_indexed_flags(pl, 0, 0x900000);
                *(u32 *)(pl + 0x30) &= ~0x20;
            }
        }
    }
}

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - cos_table_lookup((s32) (lbl_805D8B74 * farg0)));
}

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) angle_diff_s16(arg1, arg2)));
}

void set_pos_from_scaled_offset__11TBoss4Type2FPvPvPv(S_80054224 *o, void *src, V_80054224 *in) {
    V_80054224 v = *in;
    ((void (*)(void *))subtract_vector)(&v);
    v.x *= o->f39c;
    v.y *= o->f39c;
    v.z *= o->f39c;
    VecCopy__FP3VecPC3Vec(&o->pos, src);
    ((void (*)(void *, void *))vec3_add_to)(&o->pos, &v);
}

void set_state__11TBoss4Type2FPvi(Boss_800542B0 *arg0, s32 arg1) {
    s32 i;
    void **p;

    arg0->state = arg1;
    for (i = 8; i < 13; i++) {
        p = &arg0->items[i];
        if (*p != NULL) {
            ((void (*)(void *))request_destroy__11TBoss4Type2FUi)(*p);
            *p = NULL;
        }
    }
    arg0->f3d0 = 5;
    TBoss4Type2__sub_80054530((u8 *)arg0, lbl_80485C48[arg0->state].f4);
    Act_800542B0 f = lbl_80485C48[arg0->state].enter;
    if (f) {
        (arg0->*f)();
    }
}

u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j) {
    return lbl_8048615C[i] + (j - 1) * 0x4000;
}

#pragma push
#pragma opt_propagation off
void draw_parts__8TObjFishFPv(u8 *arg0) {
    s32 i;
    s32 off;
    s32 a;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 6; i++) {
        TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
        set_global_param__8TObjFishFi();
        switch (i) {
        case 2:
        case 3:
        case 4:
            TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
            off = (i - 2) * 4 + 0x42C;
            set_draw_callback_list__8TObjFishFPv(*(s32 *)(arg0 + off));
            a = get_bml_model(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
            draw_model_motion(a, get_bml_motion(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + off));
            update_camera_target__14TBoss6PlotFalzFv();
            break;
        case 5:
            set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0x480));
            draw_model_motion(get_bml_model(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), get_bml_motion(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x480));
            break;
        default:
            draw_model_motion(get_bml_model(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), get_bml_motion(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            break;
        }
    }
    clear_global_state__10TObjPlayerFv();
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
}
extern int fold_flush_4;
#pragma pop

void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3E4) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)(&lbl_80485EC8.value) + (arg1 << 5)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
void fn_8005455C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3EC));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3F0);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1 >= lbl_805D8B78) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (temp_f1 - lbl_805D8B78);
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B7C;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, s32 *, 0x3E4) = (s32) M2C_FIELD(((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(&lbl_80485EC8.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3E4) << 5));
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3E8);
    if ((temp_f1_2 < lbl_805D8B20) || (temp_f1_2 >= lbl_805D8B78)) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
    }
}
extern int fold_flush_5;
#pragma pop

void render_effects__10TObjPlayerFPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); push_matrix(); post_translate_matrix((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); ((int (*)(void*))draw_parts__8TObjFishFPv)(p); pop_matrix(); end_effect_render__13TParticleCtrlFv(); }

void snapshot_position__10TObjPlayerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8B24);
}

void render_and_update_effects__10TObjPlayerFPv(void* p) { ((int (*)(void*))push_players_out_of_colliders__10TObjPlayerFPv)(p); render_effects__10TObjPlayerFPv((void*)(p)); update_follow_camera_offsets__10TObjPlayerFPv((Obj_80053E40 *)(p)); }

#pragma push
#pragma opt_common_subs off
void TBoss4Type2__sub_80054738(Obj_80054738 *self) {
    Act_800542B0 act;
    if (is_field378_zero__14TBoss4DarkFalzFPv(self->x38c) != 0) {
        act = lbl_80485C48[self->x374].a;
        if (act) {
            (((Boss_800542B0 *)self)->*act)();
        }
    }
    act = lbl_80485C48[self->x374].b;
    if (act) {
        (((Boss_800542B0 *)self)->*act)();
    }
    ((M2C_UNK (*)(void *))fn_8005455C)(self);
    ((M2C_UNK (*)(void *))snapshot_position__10TObjPlayerFPv)(self);
    ((M2C_UNK (*)(void *))fn_80053D4C)(self);
    update_collisions__10TObjPlayerFPv(self);
    submit_cursor_candidate(self, -1);
    ((M2C_UNK (*)(void *))TRaderMapCore__sub_80053670)(self);
    ((M2C_UNK (*)(void *))fn_80053440)(self);
    {
        f32 x = self->x3dc;
        self->x3dc = x + lbl_805D8B80;
        if (self->x3dc < lbl_805D8B20) {
            self->x3dc = lbl_805D8B20;
        }
    }
    self->x3e0 = (f32)self->x32c / (f32)self->x33e;
}
extern int fold_flush_6;
#pragma pop

void request_state_3__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 4)) {
        ((M2C_UNK (*)(void *, M2C_UNK))set_state__11TBoss4Type2FPvi)(arg0, 3);
    }
}

void fn_800548E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x3D4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) lbl_805D8B18;
    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x4003A822, (u32) (arg0 + 0x38), 0, 1);
}

S_80054938 *fn_80054938(S_80054938 *o, s16 flag) {
    s32 i;
    s32 j;
    if (o != 0) {
        o->vt = lbl_80486224;
        fn_8004AA04(o->f378);
        for (i = 0; i < 13; i++) {
            if (o->parts[i] != 0) {
                ((void (*)(void *))request_destroy__11TBoss4Type2FUi)(o->parts[i]);
                o->parts[i] = 0;
            }
        }
        for (j = 0; j < 3; j++) {
            init_state_1__8TObjFishFPv(o->fx[j]);
            o->fx[j] = 0;
        }
        init_state_1__8TObjFishFPv(o->f480);
        o->f480 = 0;
        free_collision_body_parts(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

s32 create__11TBoss4Type1Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x49C);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type1__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void create_all_tenchu_furu__11TBoss4Type2Fi(s32 arg0) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&lbl_804FF2A0.value);
    do {
        create__16TObjDFTenchuFuruFPvPv(arg0, (s32) var_r31);
        var_r30 += 1;
        var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0xC));
    } while (var_r30 < 0x40);
}

void TBoss4Type2__sub_80055300(void) { ((int (*)(s32, f32))TBoss4Type2__sub_80054FC0)(0, lbl_805D8B20); }

}
