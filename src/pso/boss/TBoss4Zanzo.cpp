#include "types.h"
#include "pso/boss/TUnk_80486924.h"
#include "pso/TBoss4Zanzo.h"
#include <stddef.h>
#include "pso/TObjBs4CutAtk.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/boss/TBoss4Type3.h"
#include "pso/boss/TBoss4Uro.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TObjDFRecover.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TTecGrants.h"
#include "pso/misc/TTecMegid.h"
#include "pso/misc/TTecRaFoie.h"
#include "pso/misc/TTecResta.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Arr_800579A0 { u8 pad[0x42C]; s32 f42C[8]; };

struct Vec_8005A1AC { f32 x, y, z; };

struct Obj_8005A1AC {
    u8 pad0[0x3ba];
    u16 f3ba;
    u8 pad3bc[0x404 - 0x3bc];
    void *f404[13];
    u8 pad438[0x444 - 0x438];
    Vec_8005A1AC f444;
    Vec_8005A1AC f450;
    Vec_8005A1AC f45c;
    u8 pad468[0x480 - 0x468];
    Vec_8005A1AC f480;
    Vec_8005A1AC f48c;
    Vec_8005A1AC f498;
    u8 pad4a4[0x4d4 - 0x4a4];
    Vec_8005A1AC f4d4;
    Vec_8005A1AC f4e0;
};

struct Ply_80059ABC;
struct Vec_800597A8 { f32 x, y, z; };

struct Vec_800584E4 { f32 x, y, z; };

struct Obj_8005683C;
struct Vec_80055F5C { f32 x, y, z; };

struct Vec_80055BC0 { f32 x, y, z; };

struct Obj_80055BC0 { u8 pad[0x450]; Vec_80055BC0 f450; Vec_80055BC0 f45c; };

extern "C" {
extern u8 lbl_80487150[];
void copy_positions_to_parts__11TBoss4Type3FPv(Obj_8005A1AC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 add_radar_scaled_marker(void *, u32, int, int, f32);
s32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
extern u32 boss4_type3_radar_marker_colors[];
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C70;
extern const f32 lbl_805D8C74;
void update_radar_markers__11TBoss4Type3FPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
s32 play_sound_effect(int, void *, int, int);
extern const f32 TBoss4Type3__data_805D8C40;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
u8 * dispatch_shared_handler_a__6TLobbyFl(s32);
s32 TBoss4Type2__sub_80057048(void *, int);
s32 TBoss4Type2__sub_80057128(void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
s32 angle_diff_s16(int, int);
s32 add_radar_scaled_marker(void *, u32, int, int, f32);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 create__11TTecRaBartaFPvPvPvPv(void *, void *, void *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vector_length(void *);
s32 normalize_vector(void *);
extern const f64 TBoss4Type2__data_80437750;
extern s32 boss4_type2_attack_pattern_table[];
extern s32 game_difficulty_selection;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 lbl_805D8BB4;
extern const f32 lbl_805D8BBC;
extern const f32 lbl_805D8BC0;
extern const f32 lbl_805D8BC4;
extern const f32 lbl_805D8BC8;
extern const f32 lbl_805D8BCC;
extern const f32 lbl_805D8BD0;
extern const f32 lbl_805D8BD4;
extern const f32 TBoss4Type2__data_805D8BD8;
void TBoss4Type2__vt15(u8 *arg0);
s32 TBoss4Type2__sub_80054DA8();
s32 create_all_tenchu_furu__11TBoss4Type2Fi();
s32 TBoss4Type2__sub_80057048(void *, int);
u32 create_particle_emitter(void *, int);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
extern const f32 lbl_805D8BA4;
extern const f32 lbl_805D8BA8;
extern const f32 lbl_805D8BB4;
extern const f32 lbl_805D8BB8;
void TBoss4Type2__vt21(Obj_80055BC0 *o);
}

extern "C" {

struct ByteBlock_C { u8 bytes[0xc]; };

struct Stack_80055918
{
  s32 sp8;
  f32 spC;
};

typedef struct Stack_80055918 Stack_80055918;

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    s32 value;
    u8 remaining[0x1DC];
};

struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    s32 value;
    u8 remaining[0x1DC];
};

struct Obj_80056F38 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; };

struct Obj_80056F90 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; u8 pad3b4[0x10]; u16 f3c4; };

struct Obj_80056FEC { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; u8 pad3b4[0x10]; u16 f3c4; };

struct Obj_80057224 { u8 pad[0x3A0]; s32 f3a0; };

struct S_800578E8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x42c - 0x398];
    void *ptr[8];
    void *f44c;
};

struct S_80058224 {
    u8 pad0[0x398];
    s32 f398;
    u8 pad39c[0x3b8 - 0x39c];
    u16 f3b8;
    u16 f3ba;
};

struct S_800582B4 {
    u8 pad0[0x398];
    s32 f398;
    u8 pad39c[0x3b8 - 0x39c];
    u16 f3b8;
    u16 f3ba;
};

struct Vec_8005676C { f32 x, y, z; };

struct Zanzo_8005676C {
    Vec_8005676C pos;
    s32 f0c;
    s32 f10;
    s32 f14;
    s32 f18;
    f32 f1c;
    f32 f20;
    f32 f24;
    s32 f28;
};

struct Row_8005676C {
    s32 a;
    s32 b;
    s32 c[2];
};

struct Obj_8005676C {
    u8 pad0[0x38];
    Vec_8005676C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x390 - 0x64];
    s32 f390;
    u8 pad394[0x3c8 - 0x394];
    s32 f3c8;
    u8 pad3cc[0x3d0 - 0x3cc];
    f32 f3d0;
};

struct Vec_8005683C { f32 x, y, z; };

struct Bishi_8005683C {
    s32 f0;
    s16 id;
    s16 f6;
    s16 f8;
    s16 id2;
    s16 f0c;
    u8 pad0e[6];
    Vec_8005683C pos;
    u8 pad2c[0x20];
};

struct Ofs_8005683C { f32 x, z; };

struct Obj_8005683C {
    u8 pad0[0x38c];
    s32 f38c;
};

struct Obj_80056A54 {
    u8 pad0[0x32c];
    s16 f32c;
    u8 pad32e[0x3ec - 0x32e];
    s32 f3ec;
};

struct Grid_80056A54 {
    f32 x, y, z;
};

struct Row_80057270 {
    s32 a;
    s32 b;
    s32 c[2];
};

struct Obj_80057270 {
    u8 pad0[0x390];
    s32 f390;
    u8 pad394[0x3c0 - 0x394];
    f32 f3c0;
    u8 pad3c4[0x3c8 - 0x3c4];
    s32 f3c8;
    u8 pad3cc[0x3d0 - 0x3cc];
    f32 f3d0;
    u8 pad3d4[0x3e4 - 0x3d4];
    s32 f3e4;
    u8 pad3e8[0x3f0 - 0x3e8];
    f32 f3f0;
    f32 f3f4;
    u8 pad3f8[0x44c - 0x3f8];
    s32 f44c;
};

struct Vec_80056C30 { f32 x, y, z; };

struct O_80056C30 {
    u8 pad0[0x38];
    Vec_80056C30 pos;
};

typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

typedef char RecoveredGlobal_8005455C_lbl_80485EC8_size[sizeof(RecoveredGlobal_8005455C_lbl_80485EC8) == 0x1E0 ? 1 : -1];

struct Vec_80058848 { f32 x, y, z; };

struct O_80058848 {
    u8 pad0[0x38];
    Vec_80058848 pos;
    u8 pad44[0x398 - 0x44];
    s32 f398;
};

struct O_80058BA0 {
    u8 pad0[0x38];
    u8 f38[0x398 - 0x38];
    s32 f398;
    u8 pad39c[0x3B8 - 0x39C];
    u16 f3b8;
    u8 pad3ba[0x424 - 0x3BA];
    void *f424;
    void *f428;
    u8 pad42c[0x450 - 0x42C];
    u8 f450[0xC];
    u8 f45c[0x52C - 0x45C];
    s32 f52c;
};

struct Vec_800590F4
{
  f32 x;
  f32 y;
  f32 z;
};

struct VBase_800590F4
{
  char pad[0x18];
};

struct VObj_800590F4 : VBase_800590F4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_800590F4 *, Vec_800590F4 *);
};

struct O_800590F4
{
  u8 pad0[0x38];
  u8 f38[0x28];
  s32 f60;
  u8 pad64[0x374 - 0x64];
  s32 f374;
  u8 pad378[0x398 - 0x378];
  s32 f398;
  f32 f39c;
  u8 pad3a0[0x3A8 - 0x3A0];
  s32 f3a8;
  u8 pad3ac[0x3F4 - 0x3AC];
  f32 f3f4;
  u8 pad3f8[0x51C - 0x3F8];
  s32 f51c[2];
  VObj_800590F4 *f524[2];
};

typedef struct O_800590F4 O_800590F4;

typedef struct VBase_800590F4 VBase_800590F4;

typedef struct VObj_800590F4 VObj_800590F4;

typedef struct Vec_800590F4 Vec_800590F4;

struct Stack_80059450 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
};

struct RecoveredGlobal_80059450_lbl_80437854 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437860 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_8043786C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437878 {
    s32 value;
    u8 remaining[0xC];
};

struct Obj_80059EA8 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F04 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F64 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_8005A2A4 { u8 pad[0x404]; void *parts[13]; };

struct Ply_80059ABC { u8 pad[0x38]; f32 f38; u8 pad3c[4]; f32 f40; };

class TBoss4Type3_8005A398 { public: u8 pad[0x374]; s32 f374; };

union MemberAction_8005A398 { s32 words[3]; void (TBoss4Type3_8005A398::*action)(); };

struct Row_8005A398 { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; u8 pad[0x18]; };

struct Obj_8005A438 { u8 pad[0x3B0]; f32 f3b0; };

struct Pair_8005A438 { void *p; f32 f; };

struct Words_8005A438 { void *p; u32 w; };

struct Vec_80059618 { f32 x, y, z; };

struct O_80059618 {
    u8 pad0[0x32C];
    s16 f32c;
    u8 pad32e[0x374 - 0x32E];
    s32 f374;
    u8 pad378[0x3BA - 0x378];
    u16 f3ba;
    u8 pad3bc[0x3E4 - 0x3BC];
    s32 f3e4;
    u8 pad3e8[0x480 - 0x3E8];
    Vec_80059618 f480;
};

typedef char RecoveredGlobal_80059450_lbl_80437854_size[sizeof(RecoveredGlobal_80059450_lbl_80437854) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80059450_lbl_80437860_size[sizeof(RecoveredGlobal_80059450_lbl_80437860) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80059450_lbl_8043786C_size[sizeof(RecoveredGlobal_80059450_lbl_8043786C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80059450_lbl_80437878_size[sizeof(RecoveredGlobal_80059450_lbl_80437878) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 {
    s32 value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 {
    s32 value;
    u8 remaining[0xC4];
};

struct Obj_8005ACBC { u8 pad[0x374]; s32 f374; u8 pad378[0x40]; u16 f3b8; u16 f3ba; };

struct S_8005AD50 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x438 - 0x398];
    void *fx[3];
    u8 pad444[0x51c - 0x444];
    void *f51c;
    void *f520;
    void *f524;
    void *f528;
};

typedef char RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8_size[sizeof(RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8) == 0xC8 ? 1 : -1];

typedef char RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8_size[sizeof(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8) == 0xC8 ? 1 : -1];

struct Obj_80056DF0 { u8 pad0[0x3AC]; s32 i3AC; s32 i3B0; f32 f3B4; f32 f3B8; f32 f3BC; };

struct Vec_80059C20 { f32 x, y, z; };

struct Dmg_8005B218 { s32 type; f32 val; };

f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void * get_player_data__10TObjPlayerFi(s32 i);
u16 obj_getField1c(void *);
s32 is_split_screen();
f64 atan2_float(f32, f32);
void queue_destruction__7TObjectFv(void *);
u8 * dispatch_shared_handler_a__6TLobbyFl(s32);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 fn_80044330(void *);
void fn_8004AA04(void *);
s32 pick_random_target_player__11TBoss4Type3Fv(void);
s32 TBoss4DarkFalz__sub_8004AF5C(s32, s16 *, s16 *);
s32 TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void create_horming__11TBoss4Type3FPvPvPv(void *, void *, u16);
s32 create_jisin__11TBoss4Type2FPvPv(void *, int);
s32 TObjPlayer__sub_80052390(f32);
s32 drain_player_hp(u16, s32);
f32 TBoss4Type3__sub_800524E8(f32);
s32 TBoss4Type3__sub_8005254C(u16);
s32 TBoss4Type2__sub_80055300();
void render__11TBoss4ZanzoFv(u8 *arg0);
void run_task__11TBoss4ZanzoFv(void *arg0);
void * __ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2);
void fn_8005586C(u8 *arg0, u8 *arg1);
void TBoss4Type2__vt36(u8 *arg0);
void TBoss4Type2__vt35(void);
void TBoss4Type2__vt34(u8 *arg0);
void TBoss4Type2__vt24(void *arg0);
void TBoss4Type2__vt23(void *arg0);
void TBoss4Type2__vt31(void *arg0);
void TBoss4Type2__vt28(void *arg0);
void TBoss4Type2__vt25(void *arg0);
void TBoss4Type2__vt22(void *arg0);
void TBoss4Type2__vt20(void);
void TBoss4Type2__vt19(u8 *arg0);
void TBoss4Type2__vt14(void);
void TBoss4Type2__vt13(u8 *arg0);
void TBoss4Type2__vt12(u8 *arg0);
void TBoss4Type2__vt11(void);
void TBoss4Type2__vt10(void *arg0);
void TBoss4Type2__vt8(void* p);
void TBoss4Type2__vt7(void *arg0);
void TBoss4Type2__vt6(u8 *arg0);
void TBoss4Type2__vt5(void);
void TBoss4Type2__vt4(void* p);
void TBoss4Type2__vt3(u8 *arg0);
void TBoss4Type2__vt2(void *arg0);
void TBoss4Type2__vt1(u8 *arg0);
void TBoss4Type2__vt0(void *arg0);
void spawn_afterimages__11TBoss4Type2FPv(Obj_8005676C *arg0);
void TBoss4Type2__sub_80056998(u8 *arg0);
void choose_next_action__11TBoss4Type2FPv(Obj_80056A54 *arg0);
void TBoss4Type2__sub_80056B3C(void *arg0, s32 lo, s32 hi);
void find_target_pos__11TBoss4Type2FPvPv(O_80056C30 *self, Vec_80056C30 *out);
f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0);
void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2);
void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1);
s32 TBoss4Type2__sub_80057048(void *, int);
s32 TBoss4Type2__sub_80057128(void *);
s32 TBoss4Type2__sub_80057224(Obj_80057224 *self);
void TBoss4Type2__sub_80057578(void* p);
void init_state__11TBoss4Type2FPv(u8 *arg0);
S_800578E8 * TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag);
u8 *TBoss4Type2__ct(u8 *, s32, s32 *);
void vfunc_44__13TUnk_80486924Fv(void);
void vfunc_45__13TUnk_80486924Fv(void);
void vfunc_46__13TUnk_80486924Fv(void);
void vfunc_47__13TUnk_80486924Fv(void);
void vfunc_48__13TUnk_80486924Fl(void);
void vfunc_49__13TUnk_80486924Fv(void);
void vfunc_50__13TUnk_80486924Fv(void);
void request_follow_camera_default_offsets__11TBoss4Type3FPv(u8 *arg0);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
void handle_damage_taken__11TBoss4Type3FPv(O_80059618 *o);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2);
void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1);
void update_scale_sound__11TBoss4Type3FPv(u8 *arg0);
void TBoss4Type3__sub_8005A150(void);
void TBoss4Type3__sub_8005A438(Obj_8005A438 *self);
void update_phase_timer__11TBoss4Type3FPv(u8 *arg0);
void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
void TBoss4Type3__sub_8005A86C(void* p);
void reset_action_to_3__11TBoss4Type3FPv(Obj_8005ACBC *self);
void init_effect__11TBoss4Type3FPv(u8 *arg0);
S_8005AD50 * destroy__11TBoss4Type3FPvs(S_8005AD50 *o, s16 flag);
s32 TBoss4Type3__ct(s32, s32, s32);
void * __ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void * create__13TObjBs4CutAtkFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 create__11TBoss4BishiFi(void *);
s32 request_follow_camera_offsets(void *, void *, int);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
int toggle_particle_effect__10TObjPlayerFv(void*);
void __dt__11TBoss4Type3FPvs(void *, s16);
s32 clear_render_callback__8TObjFishFv(s32);
s32 TObjControl__ct(s32, s32);
void __dt__9TObjEnemyFv(void *, s32);
s32 angle_diff_s16(int, int);
s32 approach_angle_limited(s32, s32, s32);
void free_collision_body_parts(void *);
Ply_80059ABC * get_player_by_client_id(u16);
s32 TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *);
s32 TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 vec3_add_to(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
f32 vector_length(void *);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
f32 xyz_distance(Vec_80056C30 *, Vec_80056C30 *);
s32 draw_model_motion(int, int, f32);

extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern const f64 TBoss4Type2__data_80437750;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BD8;
extern RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 TBoss4Type3__anim_state_table;
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern s32 __vt__11TBoss4Zanzo[];
extern void* __vt__13TObjBs4CutAtk[];
extern s32 boss4_type3_effect_ids[];
extern RecoveredGlobal_80059450_lbl_80437854 lbl_80437854;
extern RecoveredGlobal_80059450_lbl_80437860 lbl_80437860;
extern RecoveredGlobal_80059450_lbl_8043786C lbl_8043786C;
extern RecoveredGlobal_80059450_lbl_80437878 boss4_type3_follow_camera_offsets;
extern const f64 lbl_80437890[];
extern Ofs_8005683C bishi_spawn_offset_table[];
extern u8 lbl_80486924[];
extern Row_8005A398 boss4_type3_states[];
extern u8 lbl_80486FB0[];
extern u8 boss4_type3_index_table[];
extern Vec_80059C20 boss4_type3_default_position;
extern Vec_80059C20 boss4_type3_interp_origin_vec;
extern u8 __vt__11TBoss4Type3[];
extern void *TBoss4Zanzo__name;
extern s32 TObjBs4CutAtk_name;
extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern s32 lbl_805D586C;
extern "C" {
}
extern "C" {
}
struct Def_804867C8 { s32 value; s32 remaining[39]; };
void TBoss4Type2__vt9(u8 *arg0);

s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
void init_model_node_tables(void *, void *, int);
s32 TObjFish__sub_800E3124(void *, void *, f32);
void bind_enemy_combat_stats(void *, int, int, int);
s32 init_collision_body_parts(void *, void *, int);
extern s32 lbl_804376D0[];
extern u8 boss4_type2_model_node_table[];
extern s32 lbl_805D27D8;
extern const f32 lbl_805D8C28;
extern "C" {
extern u8 lbl_80437644[];
}
extern "C" {
extern u8 lbl_8043764C[];
}
extern "C" {
extern u8 lbl_80437658[];
}
extern "C" {
extern u8 lbl_80437664[];
}
extern "C" {
extern u8 lbl_8043766C[];
}
extern "C" {
extern u8 lbl_80437674[];
}
extern "C" {
extern u8 lbl_8043767C[];
}
extern "C" {
extern u8 lbl_80437684[];
}
extern "C" {
extern u8 lbl_8043768C[];
}
extern "C" {
extern u8 lbl_80437694[];
}
extern "C" {
extern u8 lbl_804376A0[];
}
extern "C" {
extern u8 lbl_804376AC[];
}
extern "C" {
extern u8 lbl_804376B8[];
}
extern "C" {
extern u8 lbl_804376C4[];
}
void *__vt__11TBoss4Type2[111] = {
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt0, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt1, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt2, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt3,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt4, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt5, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt6, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt7,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt8, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt9, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt10, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt11,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt12, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt13, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt14, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt15,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt13, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt14, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt15, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt19,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt20, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt21, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt22, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt23,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt24, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt25, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt23, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt24,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt28, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt23, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt24, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt31,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt23, (void *)0x0,
    (void *)0xffffffff, (void *)&TBoss4Type2__vt24, (void *)0x0, (void *)0xffffffff,
    (void *)&TBoss4Type2__vt34, (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt35,
    (void *)0x0, (void *)0xffffffff, (void *)&TBoss4Type2__vt36,
};
struct Row_80057598 { void *pad[5]; void *a[3]; void *b[3]; };
Row_80057598 lbl_8048652C[14] = {
    (void *)&lbl_80437644, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8043764C,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)&lbl_80437658, (void *)0xffffffff,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)&lbl_80437664, (void *)0x2, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043766C, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80437674,
    (void *)0x4, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)&lbl_8043767C, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)&lbl_80437684, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)&lbl_8043768C, (void *)0x8, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80437694,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)&lbl_804376A0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)&lbl_804376AC, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)&lbl_804376B8, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_804376C4,
    (void *)0x3, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_80486794[11] = {
    (void *)0x0, (void *)0x42700000, (void *)0x0, (void *)0x42200000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") s32 boss4_zanzo_bml_index_table[2] = {
    0xb, 0xa,
};
Def_804867C8 TBoss4Type2__attack_pattern_table = {
    0x0, {
        0x0, 0x52, 0x51, 0x2, 0x0, 0xd, 0xc, 0x1, 0x0, 0x12, 0x11, 0x2, 0x5, 0x31, 0x30, 0x2, 0x0, 0x33, 0x32, 0x2, 0x0, 0x3f, 0x3e, 0x2, 0x0, 0x3, 0x2, 0x2, 0x0, 0x7, 0x6, 0x2, 0x9, 0x52, 0x44, 0x2, 0x0, 0x52, 0x3e,
    },
};
void *lbl_80486868[16] = {
    (void *)0xf, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x55, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x6b, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804868A8[17] = {
    (void *)0x0, (void *)0xc2480000, (void *)0xc3960000, (void *)0x3e99999a,
    (void *)0x3e800000, (void *)0x3e800000, (void *)0x3e4ccccd, (void *)0x5,
    (void *)0x6, (void *)0x7, (void *)0xd, (void *)0x3ecccccd,
    (void *)0x3e99999a, (void *)0x3e99999a, (void *)0x5, (void *)0x6,
    (void *)0x7,
};

extern const f32 lbl_805D8BA0;
extern const f32 lbl_805D8BA4;
extern const f32 lbl_805D8BA8;
extern f32 lbl_805D8BB0;
extern const f32 lbl_805D8BD0;
extern const f32 lbl_805D8BDC;
extern const f32 lbl_805D8BE0;
extern const f32 lbl_805D8BE4;
extern const f32 lbl_805D8BE8;
extern const f32 lbl_805D8BEC;
extern const f32 lbl_805D8BF0;
extern const f32 lbl_805D8BF4;
extern const f32 lbl_805D8BF8;
extern const f32 lbl_805D8BFC;
extern const f32 lbl_805D8C00;
extern const f32 lbl_805D8C0C;
extern const f32 lbl_805D8C14;
extern const f32 lbl_805D8C18;
extern const f32 lbl_805D8C38;
extern const f32 lbl_805D8C3C;
extern const f32 lbl_805D8C44;
extern const f32 lbl_805D8C48;
extern const f32 lbl_805D8C4C;
extern const f32 lbl_805D8C50;
extern const f32 lbl_805D8C54;
extern const f32 lbl_805D8C58;
extern const f32 lbl_805D8C5C;
extern f32 lbl_805D8C60;
extern const f32 lbl_805D8C64;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C6C;
extern const f32 lbl_805D8C7C;
extern f32 lbl_805D8C80;
extern const f32 lbl_805D8C84;
extern const f32 lbl_805D8C88;
extern f32 lbl_805D8C8C;
extern const f32 lbl_805D8C90;
extern const f32 lbl_805D8C94;
extern const f32 lbl_805D8C98;
extern const f32 lbl_805D8C9C;
extern const f32 lbl_805D8CA0;
extern s32 model_render_flags;
extern s32 tl_04;

}
TBoss4Zanzo::~TBoss4Zanzo() {}

extern "C" {
#pragma push
#pragma fp_contract on
extern "C" {
Ply_80059ABC * get_player_by_client_id(u16);
}

extern "C" {
Ply_80059ABC * get_player_by_client_id(u16);
}

extern "C" {
}

void render__11TBoss4ZanzoFv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f5;
    temp_f5 = *(f32 *)((s8 *)arg0 + 0x3C);
    temp_f31 = (((f32) *(s32 *)((s8 *)arg0 + 0x48) / (f32) *(s32 *)((s8 *)arg0 + 0x44)) * (*(f32 *)((s8 *)arg0 + 0x40) - temp_f5)) + temp_f5;
    if (!(temp_f31 <= lbl_805D8BA0)) {
        push_matrix();
        TObjPlayer::set_global_flag();
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x28)));
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)arg0 + 0x2C)));
        TObjPlayer__sub_80052390((f32) (temp_f31));
        draw_model_motion((int) (*(s32 *)((s8 *)arg0 + 0x30)), (int) (*(s32 *)((s8 *)arg0 + 0x34)), (f32) (*(f32 *)((s8 *)arg0 + 0x38)));
        TObjPlayer::sync_player_globals();
        TObjPlayer::clear_global_state();
        pop_matrix();
    }
}
extern int fold_flush_0;
#pragma pop

void run_task__11TBoss4ZanzoFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x48) + 1;
    *(s32 *)((s8 *)arg0 + 0x48) = temp_r4;
    if (temp_r4 >= (s32) *(s32 *)((s8 *)arg0 + 0x44)) {
        ((s32 (*)(void))queue_destruction__7TObjectFv)();
    }
}

void *__ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TBoss4Zanzo;
    *(void **)((s8 *)arg0 + 0x0) = TBoss4Zanzo__name;
    ((void (*)(void *, void *))fn_8005586C)((void *)((char *)arg0 + 28), arg2);
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    return arg0;
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void fn_8005586C(u8 *arg0, u8 *arg1) {
    *(ByteBlock_C *)(arg0) = *(const ByteBlock_C *)(arg1);
    *(s32 *)((s8 *)arg0 + 0xC) = (s32) *(s32 *)((s8 *)arg1 + 0xC);
    *(s32 *)((s8 *)arg0 + 0x10) = (s32) *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x14) = (s32) *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x18) = (s32) *(s32 *)((s8 *)arg1 + 0x18);
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) *(f32 *)((s8 *)arg1 + 0x1C);
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) *(f32 *)((s8 *)arg1 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) *(f32 *)((s8 *)arg1 + 0x24);
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) *(s32 *)((s8 *)arg1 + 0x28);
}
extern int fold_flush_1;
#pragma pop

void *TBoss4Type2::create_zanzo(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = __ct__11TBoss4ZanzoFv(o, arg0, arg1);
    }
    return o;
}

void TBoss4Type2__vt36(u8 *arg0) {
  Stack_80055918 stack;
  int temp_r0;
  u16 temp_r3_4;
  unsigned int temp_r3;
  unsigned int temp_r3_2;
  unsigned int temp_r3_3;
  unsigned int temp_r3_5;
  unsigned int temp_r3_6;
  unsigned int *new_var;
  if (((*((int *) (((s8 *) arg0) + 0x3C8))) == 5) && ((*((f32 *) (((s8 *) arg0) + 0x3D0))) > lbl_805D8BA4))
  {
    temp_r3 = *((unsigned int *) (((s8 *) arg0) + 0x448));
    if (temp_r3 != 0)
    {
      TBoss4Type2::request_destroy((u32)((int) temp_r3));
      *((unsigned int *) (((s8 *) arg0) + 0x448)) = 0;
    }
  }
  else
    if ((*((unsigned int *) (((s8 *) arg0) + 0x448))) == 0)
  {
    temp_r3_2 = create_particle_emitter((void *) (arg0 + 0x468), (int) 0x143);
    new_var = (unsigned int *) (((s8 *) arg0) + 0x448);
    *new_var = temp_r3_2;
    if (temp_r3_2 != 0)
    {
      ((TBoss4Type2 *)(*new_var))->set_flags((int) 0x40);
    }
  }
  if ((*((int *) (((s8 *) arg0) + 0x398))) == 0x46)
  {
    temp_r3_3 = spawn_particle_effect((void *) (arg0 + 0x468), (int) 0x13E);
    if (temp_r3_3 != 0)
    {
      ((TBoss4Type2 *)temp_r3_3)->set_flags((int) 0x40);
    }
    temp_r3_4 = *((u16 *) (((s8 *) arg0) + 0x3C4));
    if (temp_r3_4 != ((unsigned short) (-1)))
    {
      temp_r3_5 = ((u32 (*)(int))get_player_by_client_id)((int) temp_r3_4);
      if (temp_r3_5 != 0)
      {
        ((s32 (*)(void *, int))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (int) ((TObjPlayer *)temp_r3_5)->get_position_ptr());
        stack.spC += lbl_805D8BA8;
        temp_r3_6 = spawn_particle_effect((void *) (&stack.sp8), (int) 0x38);
        if (temp_r3_6 != 0)
        {
          ((TBoss4Type2 *)temp_r3_6)->set_flags((int) 0x40);
        }
      }
    }
    ((TBoss4Type2 *)arg0)->apply_resta_heal();
    TObjDFRecover::create((TObject *)arg0, (u16)((int) (*((u16 *) (((s8 *) arg0) + 0x3C4)))), (const f32 *)(arg0 + 0x468));
  }
  temp_r0 = (*((int *) (((s8 *) arg0) + 0x398))) - 1;
  *((int *) (((s8 *) arg0) + 0x398)) = temp_r0;
  if (temp_r0 < 0)
  {
    ((s32 (*)(s32, void *, s32, s32))play_sound_effect)((s32)((int) 0x4003AD1A), (void *)((void *) (arg0 + 0x38)), (s32)((int) 0), (s32)((int) 1));
    TTecResta::create((void *)arg0, (void *)(arg0 + 0x38), (void *)(*((int *) (((s8 *) arg0) + 0x428))));
    TBoss4Type2__sub_80057048((void *) arg0, (int) (*((int *) (((s8 *) arg0) + 0x424))));
  }
}

void TBoss4Type2__vt35(void) {  }

void TBoss4Type2__vt34(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    ((s32 (*)(s32, void *, s32, s32))play_sound_effect)(0x40039E21, arg0 + 0x38, 0, 1);
    *(s32 *)((s8 *)arg0 + 0x398) = 0x96;
}

void TBoss4Type2__vt24(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))TBoss4Type2__sub_80057048)(arg0, 1);
    }
}

void TBoss4Type2__vt23(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0) {
        if (((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)() < lbl_805D8BB0) {
            ((s32 (*)(void *))choose_next_action__11TBoss4Type2FPv)(arg0);
            return;
        }
        ((s32 (*)(void *, s32, s32))TBoss4Type2__sub_80056F90)(arg0, 4, ((s32 (*)(void *))TBoss4Type2__sub_80057224)(arg0));
    }
}

void TBoss4Type2__vt31(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x12C;
}

void TBoss4Type2__vt28(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x398) = 0xE1;
}

void TBoss4Type2__vt25(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x96;
}

void TBoss4Type2__vt22(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x4B;
}

void TBoss4Type2__vt21(Obj_80055BC0 *o) {
    Vec_80055BC0 sp14 = o->f450;
    Vec_80055BC0 sp8 = o->f45c;
    u8 *arg0 = (u8 *)o;
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
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398);
    if (temp_r0 == 6) {
        create_all_tenchu_furu__11TBoss4Type2Fi();
    } else if (temp_r0 == 1) {
        TBoss4Type2__sub_80054DA8();
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3C8) == 8) {
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3D0);
        if (temp_f1 > lbl_805D8BA4) {
            temp_r3 = *(u32 *)((s8 *)arg0 + 0x438);
            if (temp_r3 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3));
                *(u32 *)((s8 *)arg0 + 0x438) = 0U;
            }
            temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x440);
            if (temp_r3_2 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3_2));
                *(u32 *)((s8 *)arg0 + 0x440) = 0U;
            }
        } else if (temp_f1 >= lbl_805D8BB4) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x438) == 0) {
                temp_r3_3 = create_particle_emitter((void *) (&sp14), (int) (0x142));
                *(u32 *)((s8 *)arg0 + 0x438) = temp_r3_3;
                if (temp_r3_3 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x438)))->set_flags(0x40U);
                }
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x440) == 0) {
                temp_r3_4 = create_particle_emitter((void *) (&sp8), (int) (0x142));
                *(u32 *)((s8 *)arg0 + 0x440) = temp_r3_4;
                if (temp_r3_4 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x440)))->set_flags(0x40U);
                }
            }
        }
        temp_r3_5 = *(u32 *)((s8 *)arg0 + 0x438);
        if (temp_r3_5 != 0) {
            ((TNowLoading *)temp_r3_5)->copy_pos(&sp14);
        }
        temp_r3_6 = *(u32 *)((s8 *)arg0 + 0x440);
        if (temp_r3_6 != 0) {
            ((TNowLoading *)temp_r3_6)->copy_pos(&sp8);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3C8) == 9) {
        temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x3D0);
        if (temp_f1_2 > lbl_805D8BA8) {
            temp_r3_7 = *(u32 *)((s8 *)arg0 + 0x438);
            if (temp_r3_7 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3_7));
                *(u32 *)((s8 *)arg0 + 0x438) = 0U;
            }
            temp_r3_8 = *(u32 *)((s8 *)arg0 + 0x43C);
            if (temp_r3_8 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3_8));
                *(u32 *)((s8 *)arg0 + 0x43C) = 0U;
            }
            temp_r3_9 = *(u32 *)((s8 *)arg0 + 0x440);
            if (temp_r3_9 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3_9));
                *(u32 *)((s8 *)arg0 + 0x440) = 0U;
            }
            temp_r3_10 = *(u32 *)((s8 *)arg0 + 0x444);
            if (temp_r3_10 != 0) {
                TBoss4Type2::request_destroy((u32)((void *)temp_r3_10));
                *(u32 *)((s8 *)arg0 + 0x444) = 0U;
            }
        } else if (temp_f1_2 >= lbl_805D8BB8) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x438) == 0) {
                temp_r3_11 = create_particle_emitter((void *) (&sp14), (int) (0x13A));
                *(u32 *)((s8 *)arg0 + 0x438) = temp_r3_11;
                if (temp_r3_11 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x438)))->set_flags(0x40U);
                }
                play_sound_effect((int) (0x40039717), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x43C) == 0) {
                temp_r3_12 = create_particle_emitter((void *) (&sp14), (int) (0x13B));
                *(u32 *)((s8 *)arg0 + 0x43C) = temp_r3_12;
                if (temp_r3_12 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x43C)))->set_flags(0x40U);
                }
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x440) == 0) {
                temp_r3_13 = create_particle_emitter((void *) (&sp8), (int) (0x13A));
                *(u32 *)((s8 *)arg0 + 0x440) = temp_r3_13;
                if (temp_r3_13 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x440)))->set_flags(0x40U);
                }
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x444) == 0) {
                temp_r3_14 = create_particle_emitter((void *) (&sp8), (int) (0x13B));
                *(u32 *)((s8 *)arg0 + 0x444) = temp_r3_14;
                if (temp_r3_14 != 0) {
                    ((TBoss4Type2 *)((void *) *(u32 *)((s8 *)arg0 + 0x444)))->set_flags(0x40U);
                }
            }
        }
        temp_r3_15 = *(u32 *)((s8 *)arg0 + 0x438);
        if (temp_r3_15 != 0) {
            ((TNowLoading *)temp_r3_15)->copy_pos(&sp14);
        }
        temp_r3_16 = *(u32 *)((s8 *)arg0 + 0x43C);
        if (temp_r3_16 != 0) {
            ((TNowLoading *)temp_r3_16)->copy_pos(&sp14);
        }
        temp_r3_17 = *(u32 *)((s8 *)arg0 + 0x440);
        if (temp_r3_17 != 0) {
            ((TNowLoading *)temp_r3_17)->copy_pos(&sp8);
        }
        temp_r3_18 = *(u32 *)((s8 *)arg0 + 0x444);
        if (temp_r3_18 != 0) {
            ((TNowLoading *)temp_r3_18)->copy_pos(&sp8);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) > 6) {
        play_persistent_sound((int) (0x4003AD16), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    }
    temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x424)));
    }
}

void TBoss4Type2__vt20(void) {  }

void TBoss4Type2__vt19(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
    TBoss4Type2__sub_80055300();
    *(s32 *)((s8 *)arg0 + 0x398) = 0x96;
}

#pragma push
#pragma fp_contract on
void TBoss4Type2__vt15(u8 *arg0) {
    s32 idx = *(s32 *)((s8 *)arg0 + 0x374) - 6;
    Vec_80055F5C v = ((Vec_80055F5C *)(arg0 + 0x450))[idx];
    Vec_80055F5C p;
    s32 a;
    s32 b;
    u32 h;
    f32 t;
    if (*(s32 *)((s8 *)arg0 + 0x398) == 0x4B) {
        ((TBoss4Type2 *)arg0)->set_attack_pattern_by_index(boss4_type2_attack_pattern_table[idx]);
    }
    if (*(s32 *)((s8 *)arg0 + 0x3C8) == 6 || *(s32 *)((s8 *)arg0 + 0x3C8) == 7) {
        t = *(f32 *)((s8 *)arg0 + 0x3D0);
        if (t > lbl_805D8BBC) {
            if (*(u32 *)((s8 *)arg0 + 0x434) != 0) {
                TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x434)));
                *(u32 *)((s8 *)arg0 + 0x434) = 0;
            }
        } else if (t >= lbl_805D8BC0 && *(u32 *)((s8 *)arg0 + 0x434) == 0) {
            if ((*(u32 *)((s8 *)arg0 + 0x434) = create_particle_emitter(&v, 0xF7)) != 0) {
                ((TBoss4Type2 *)(*(void **)((s8 *)arg0 + 0x434)))->set_flags(0x40);
            }
        }
        if (*(f32 *)((s8 *)arg0 + 0x3D0) >= lbl_805D8BC0 && *(f32 *)((s8 *)arg0 + 0x3D0) <= lbl_805D8BBC) {
            play_persistent_sound(0x4003B512, arg0, arg0 + 0x38, 0, 1);
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x398) == 0x26) {
        h = spawn_particle_effect(&v, 0xFD);
        if (h != 0) {
            ((TBoss4Type2 *)h)->set_flags(0x40);
        }
        play_sound_effect(0x4003A813, arg0 + 0x38, 0, 1);
        TBoss3Volopt::queue_event_1D(0xC0, 0xF);
    }
    if (*(s32 *)((s8 *)arg0 + 0x398) <= 0x26 && *(s32 *)((s8 *)arg0 + 0x398) >= 4 && !(*(s32 *)((s8 *)arg0 + 0x398) & 1)) {
        VecCopy__FP3VecPC3Vec(&p, arg0 + 0x410);
        p.x += lbl_805D8BC4 * *(f32 *)((s8 *)arg0 + 0x404);
        p.z += lbl_805D8BC4 * *(f32 *)((s8 *)arg0 + 0x40C);
        if (idx == 0) {
            create__11TTecRaBartaFPvPvPvPv(arg0, &p, &p, *(s32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x36)) + 0x1C));
        } else {
            ((TTecRaFoie *)arg0)->create((void *)(&p), (void *)(&p), (void *)(*(s32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x36)) + 0x18)));
        }
        add_radar_scaled_marker(&p, -0x5DB4, 1, 1, lbl_805D8BC8);
        *(f32 *)((s8 *)arg0 + 0x404) *= lbl_805D8BCC;
        *(f32 *)((s8 *)arg0 + 0x40C) *= lbl_805D8BCC;
        if (vector_length(arg0 + 0x410) > lbl_805D8BD0) {
            normalize_vector(arg0 + 0x410);
            *(f32 *)((s8 *)arg0 + 0x410) *= lbl_805D8BD0;
            *(f32 *)((s8 *)arg0 + 0x418) *= lbl_805D8BD0;
            a = (s32)(TBoss4Type2__data_80437750 * atan2_float(*(f32 *)((s8 *)arg0 + 0x410), *(f32 *)((s8 *)arg0 + 0x418)));
            b = (s32)(TBoss4Type2__data_80437750 * atan2_float(*(f32 *)((s8 *)arg0 + 0x3F8), *(f32 *)((s8 *)arg0 + 0x400)));
            b += angle_diff_s16(b, a);
            *(f32 *)((s8 *)arg0 + 0x3F8) = -sin_table_lookup(b);
            *(f32 *)((s8 *)arg0 + 0x400) = -cos_table_lookup(b);
        }
        *(f32 *)((s8 *)arg0 + 0x410) = lbl_805D8BD4 * *(f32 *)((s8 *)arg0 + 0x3F8) + *(f32 *)((s8 *)arg0 + 0x410);
        *(f32 *)((s8 *)arg0 + 0x418) = lbl_805D8BD4 * *(f32 *)((s8 *)arg0 + 0x400) + *(f32 *)((s8 *)arg0 + 0x418);
    }
    if (*(s32 *)((s8 *)arg0 + 0x398) > 0x87) {
        *(f32 *)((s8 *)arg0 + 0x3E8) = (f32)(0x96 - *(s32 *)((s8 *)arg0 + 0x398)) / lbl_805D8BB4;
    } else if (*(s32 *)((s8 *)arg0 + 0x398) >= 0x11) {
        *(f32 *)((s8 *)arg0 + 0x3E8) = TBoss4Type2__data_805D8BD8;
    } else if (*(s32 *)((s8 *)arg0 + 0x398) > 2) {
        *(f32 *)((s8 *)arg0 + 0x3E8) = (f32)(*(s32 *)((s8 *)arg0 + 0x398) - 2) / lbl_805D8BB4;
    } else {
        *(f32 *)((s8 *)arg0 + 0x3E8) = TBoss4Type2__data_805D8BAC;
    }
    TBoss4Type2__sub_80057128(arg0);
    if (--*(s32 *)((s8 *)arg0 + 0x398) < 0) {
        if (game_difficulty_selection == 3) {
            ((TBoss4Type2 *)arg0)->spawn_bishi_around_players();
        }
        TBoss4Type2__sub_80057048(arg0, *(s32 *)((s8 *)arg0 + 0x424));
    }
}
#pragma pop

void TBoss4Type2__vt14(void) {  }

void TBoss4Type2__vt13(u8 *arg0) {
  s32 temp_r31;
  s32 var_r31;
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3F8), (void *) (arg0 + 0x3B4));
  subtract_vector((void *) (arg0 + 0x3F8), (void *) (arg0 + 0x38));
  *((f32 *) (((s8 *) arg0) + 0x3FC)) = (f32) TBoss4Type2__data_805D8BAC;
  if (vector_length((void *) (arg0 + 0x3F8)) <= lbl_805D8BA0)
  {
    *((f32 *) (((s8 *) arg0) + 0x3F8)) = (f32) TBoss4Type2__data_805D8BD8;
    *((f32 *) (((s8 *) arg0) + 0x3FC)) = (f32) TBoss4Type2__data_805D8BAC;
    *((f32 *) (((s8 *) arg0) + 0x400)) = (f32) TBoss4Type2__data_805D8BAC;
  }
  else
  {
    normalize_vector((void *) (arg0 + 0x3F8));
  }
  var_r31 = (s32) (TBoss4Type2__data_80437750 * atan2_float((f32) (*((f32 *) (((s8 *) arg0) + 0x3F8))), (f32) (*((f32 *) (((s8 *) arg0) + 0x400)))));
  temp_r31 = var_r31;
  if (((*((s32 *) (((s8 *) arg0) + 0x374))) - 6) == 0)
  {
    var_r31 = temp_r31 + 0x4000;
  }
  else
  {
    var_r31 = 0x4000;
    var_r31 = temp_r31 - var_r31;
  }
  *((f32 *) (((s8 *) arg0) + 0x404)) = ((f32 (*)(int))sin_table_lookup)((int) var_r31);
  *((f32 *) (((s8 *) arg0) + 0x40C)) = ((f32 (*)(int))cos_table_lookup)((int) var_r31);
  *((f32 *) (((s8 *) arg0) + 0x408)) = (f32) TBoss4Type2__data_805D8BAC;
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x410), (void *) (arg0 + 0x38));
  *((f32 *) (((s8 *) arg0) + 0x414)) = (f32) TBoss4Type2__data_805D8BAC;
  normalize_vector((void *) (arg0 + 0x410));
  *((f32 *) (((s8 *) arg0) + 0x410)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x410))) * lbl_805D8BD0);
  *((f32 *) (((s8 *) arg0) + 0x418)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x418))) * lbl_805D8BD0);
  *((s32 *) (((s8 *) arg0) + 0x398)) = 0x96;
}

void TBoss4Type2__vt12(u8 *arg0) {
    s32 temp_r0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0x1E) {
        TCameraCtrl::set_shake_preset((int) (1));
        create_jisin__11TBoss4Type2FPvPv((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x3A0)));
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) <= 0x1E) {
        play_persistent_sound((int) (0x4003AD16), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (8));
    }
}

void TBoss4Type2__vt11(void) {  }

void TBoss4Type2__vt10(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BAC);
    *(s32 *)((s8 *)arg0 + 0x398) = 0x4B;
}

void TBoss4Type2__vt9(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;

    temp_r5 = *(s32 *)((s8 *)arg0 + 0x398);
    if (temp_r5 > 7) {
        *(f32 *)((s8 *)arg0 + 0x39C) = ((f32 (*)(void *, f32))compute_wave_offset__11TBoss4Type2Ff)(arg0, (*(f32 *)&TBoss4Type2__data_805D8BD8) - ((f32) (temp_r5 - 7) / (f32) *(s32 *)((s8 *)arg0 + 0x420)));
    } else {
        *(f32 *)((s8 *)arg0 + 0x39C) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BD8);
    }
    TBoss4Type2__sub_80057128((void *) (arg0));
    if ((s32) game_difficulty_selection == 3) {
        temp_r3 = angle_diff_s16((int) (*(s32 *)((s8 *)arg0 + 0x3A4)), (int) (*(s32 *)((s8 *)arg0 + 0x3A8)));
        if (!(*(s32 *)((s8 *)arg0 + 0x398) & 3)) {
            temp_f1 = *(f32 *)((s8 *)arg0 + 0x39C);
            if ((temp_f1 > lbl_805D8BDC) && (temp_f1 < lbl_805D8BE0) && ((temp_r3 <= -0x4000) || (temp_r3 >= 0x4000))) {
                ((s32 (*)(void *))spawn_afterimages__11TBoss4Type2FPv)((void *) (arg0));
            }
        }
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (1));
    }
}

void TBoss4Type2__vt8(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*))TBoss4Type2__sub_80056998)(p); } }

void TBoss4Type2__vt7(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BAC);
    *(s32 *)((s8 *)arg0 + 0x3E0) = (s32) (*(s32 *)((s8 *)arg0 + 0x3E0) + 1);
    *(s32 *)((s8 *)arg0 + 0x398) = (s32) *(s32 *)((s8 *)arg0 + 0x41C);
}

void TBoss4Type2__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *)(arg0), (int) (2));
    }
}

void TBoss4Type2__vt5(void) {  }

void TBoss4Type2__vt4(void* p) { *(s32*)((char*)p + 0x398) = 75; }

void TBoss4Type2__vt3(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x30) & 0x800) {
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)((void *)(arg0)), (s32)((int) (2)));
        return;
    }
    ((s32 (*)(void *, s32))TBoss4Type2__sub_80057048)((void *)((void *)(arg0)), (s32)((int) (9)));
}

void TBoss4Type2__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((s32 (*)(void *, s32))TBoss4Type2__sub_80057048)(arg0, 1);
    }
}

void TBoss4Type2__vt1(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0) {
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *) (arg0)), (s32)((int) (4)), (s32)((int) (TBoss4Type2__sub_80057224((Obj_80057224 *)(arg0)))));
    }
}

void TBoss4Type2__vt0(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x3C;
}

void spawn_afterimages__11TBoss4Type2FPv(Obj_8005676C *arg0) {
    Zanzo_8005676C z;
    s32 i;
    VecCopy__FP3VecPC3Vec(&z.pos, &arg0->pos);
    z.f0c = arg0->f60;
    z.f1c = arg0->f3d0;
    z.f20 = lbl_805D8BB0;
    z.f24 = TBoss4Type2__data_805D8BAC;
    z.f28 = 10;
    for (i = 0; i < 2; i++) {
        z.f10 = TObjFish__sub_8001EDB0(arg0->f390, boss4_zanzo_bml_index_table[i]);
        z.f14 = get_bml_model(arg0->f390, boss4_zanzo_bml_index_table[i]);
        z.f18 = get_bml_motion(arg0->f390, ((Row_8005676C *)&TBoss4Type2__attack_pattern_table)[arg0->f3c8].c[i]);
        TBoss4Type2::create_zanzo(arg0, &z);
    }
}

void TBoss4Type2::spawn_bishi_around_players() {
    Obj_8005683C *arg0 = (Obj_8005683C *)this;
    Bishi_8005683C b;
    s32 i;
    s32 j;
    u8 *pl;
    TBoss4DarkFalz__sub_8004B4F0(&b.id, TBoss4DarkFalz__data_804FF1E8);
    b.f0 = arg0->f38c;
    b.f0c = 1;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (pl != 0 && TBoss4Type3__sub_8005254C(obj_getField1c(pl)) != 0) {
            for (j = 0; j < 3; j++) {
                if (TBoss4DarkFalz__sub_8004AF5C(arg0->f38c, &b.id, &b.id2) != 0) {
                    VecCopy__FP3VecPC3Vec(&b.pos, pl + 0x38);
                    b.pos.x += bishi_spawn_offset_table[j].x;
                    b.pos.z += bishi_spawn_offset_table[j].z;
                    create__11TBoss4BishiFi(&b);
                }
            }
        }
    }
}

void TBoss4Type2::apply_resta_heal() {
    s16 temp_r31;
    void *temp_r4;

    temp_r4 = *(void **)((s8 *)this + 0x2B0);
    temp_r31 = *(s16 *)((s8 *)temp_r4 + 2);
    drain_player_hp(*(u16 *)((s8 *)this + 0x3C4), (temp_r31 / 5) + (s32) TTecResta::calc_heal_amount(*(s32 *)((s8 *)(((void * (*)(s32, void *))dispatch_shared_handler_a__6TLobbyFl)(0x37, temp_r4)) + 0x1C)));
}

void TBoss4Type2__sub_80056998(u8 *arg0) {
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    if (((s32) *(s32 *)((s8 *)arg0 + 0x3E0) < 3) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4)) {
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *)((void *) (arg0))), (s32)((int)((int) (4))), (s32)((int)((void *) (TBoss4Type2__sub_80057224((Obj_80057224 *)((void *)((void *) (arg0))))))));
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4) {
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x424);
        var_r5 = temp_r3 + 1;
        var_r4 = temp_r3;
        if (var_r5 < temp_r3) {
            var_r4 = var_r5;
            var_r5 = temp_r3;
        }
        if (var_r4 < 9) {
            var_r4 = 9;
        }
        if (var_r5 > 0xC) {
            var_r5 = 0xC;
        }
        ((s32 (*)(void *, int, int))TBoss4Type2__sub_80056B3C)((void *) (arg0), (int) (var_r4), (int) (var_r5));
        return;
    }
    choose_next_action__11TBoss4Type2FPv((Obj_80056A54 *)((void *) (arg0)));
}

void choose_next_action__11TBoss4Type2FPv(Obj_80056A54 *arg0) {
    u8 *tbl = (u8 *)__vt__11TBoss4Type2;
    Grid_80056A54 grid;
    s32 r;
    s32 id;
    id = ((s32 (*)(void *))pick_random_target_player__11TBoss4Type3Fv)(arg0);
    if (arg0->f32c <= arg0->f3ec && (u16)id != 0xFFFF) {
        r = TBoss4Type2::pick_weighted_random(4, (f32 *)(tbl + 0x544), (s32 *)(tbl + 0x554));
    } else {
        r = TBoss4Type2::pick_weighted_random(3, (f32 *)(tbl + 0x564), (s32 *)(tbl + 0x570));
    }
    switch (r) {
    case 6:
    case 7:
        find_target_pos__11TBoss4Type2FPvPv((O_80056C30 *)(arg0), (Vec_80056C30 *)(&grid));
        ((TBoss4Type2 *)arg0)->set_grid_pos(&grid);
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, r);
        break;
    case 13:
        ((TBoss4Type2 *)arg0)->send_attack_code(r, id);
        break;
    default:
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, r);
        break;
    }
}

void TBoss4Type2__sub_80056B3C(void *arg0, s32 lo, s32 hi) {
    f32 step;
    f32 acc;
    f32 scale;
    s32 t;
    s32 i;

    if (lo < 9 || lo > 12 || hi < 9 || hi > 12) {
        return;
    }
    if (hi < lo) {
        t = hi;
        hi = lo;
        lo = t;
    }
    step = TBoss4Type2__data_805D8BD8 / (f32)(hi - lo + 1);
    acc = step;
    scale = calc_boss4_scale__10TObjPlayerFi(arg0);
    for (i = lo; i < hi; i++) {
        if (scale < acc) {
            break;
        }
        acc += step;
    }
    TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, i);
}

#pragma push
#pragma opt_propagation off
void find_target_pos__11TBoss4Type2FPvPv(O_80056C30 *self, Vec_80056C30 *out) {
    s32 a1;
    O_80056C30 *found;
    s32 i;
    O_80056C30 *p;
    f32 best;
    f32 d;
    f32 s;
    s32 ang;
    s32 b;
    Vec_80056C30 res;
    best = TBoss4Type2__data_805D8BAC;
    found = NULL;
    for (i = 0; i < lbl_805D586C; i++) {
        p = (O_80056C30 *)get_player_data__10TObjPlayerFi(i);
        if (p == NULL) {
            continue;
        }
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        {
            Vec_80056C30 v = p->pos;
            v.y = TBoss4Type2__data_805D8BAC;
            d = xyz_distance(&v, &self->pos);
            if (d <= lbl_805D8BE8 && d > best) {
                best = d;
                found = p;
                VecCopy__FP3VecPC3Vec(&res, &v);
            }
        }
    }
    if (found != NULL) {
        VecCopy__FP3VecPC3Vec(out, &res);
        return;
    }
    s = lbl_805D8BEC * calc_boss4_scale__10TObjPlayerFi(self);
    a1 = (s32)(TBoss4Type2__data_80437750 * atan2_float(-self->pos.x, -self->pos.z));
    b = (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self));
    ang = b + a1;
    ang -= 0x6000;
    out->x = s * sin_table_lookup(ang);
    out->y = TBoss4Type2__data_805D8BAC;
    out->z = s * cos_table_lookup(ang);
}
extern int fold_flush_2;
#pragma pop

void TBoss4Type2::set_grid_pos(void *arg1) {
    *(s32 *)((s8 *)this + 0x3AC) = (s32) ((lbl_805D8BF4 + *(f32 *)((s8 *)arg1 + 0)) / lbl_805D8BF8);
    *(s32 *)((s8 *)this + 0x3B0) = (s32) ((lbl_805D8BF4 + *(f32 *)((s8 *)arg1 + 8)) / lbl_805D8BF8);
}

#pragma push
#pragma fp_contract on
void TBoss4Type2::calc_grid_target_position() {
    Obj_80056DF0 *arg0 = (Obj_80056DF0 *)this;
    arg0->f3B4 = lbl_805D8BF8 * (lbl_805D8BFC + (f32)arg0->i3AC) - lbl_805D8BF4;
    arg0->f3B8 = TBoss4Type2__data_805D8BAC;
    arg0->f3BC = lbl_805D8BF8 * (lbl_805D8BFC + (f32)arg0->i3B0) - lbl_805D8BF4;
}
extern int fold_flush_3;
#pragma pop

f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8BFC * (TBoss4Type2__data_805D8BD8 - cos_table_lookup((s32) (lbl_805D8C00 * farg0)));
}

void TBoss4Type2::send_attack_code(s32 arg1, s32 arg2) {
    Obj_80056F38 *self = (Obj_80056F38 *)this;
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((arg2 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((arg2 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1) {
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

s32 TBoss4Type2__sub_80057224(Obj_80057224 *self) {
    return (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self)) + 0x2000 + self->f3a0;
}

void TBoss4Type2::draw_hanger() {
    Obj_80057270 *arg0 = (Obj_80057270 *)this;
    s32 i;
    TObjPlayer::set_global_flag();
    for (i = 0; i < 2; i++) {
        TObjFish::set_global_param(TObjFish__sub_8001EDB0(arg0->f390, boss4_zanzo_bml_index_table[i]));
        switch (i) {
        case 1:
            model_render_flags |= 0x20000;
            TObjEneRe4Sorcerer__sub_801E3F1C(TBoss4Type2__data_805D8BAC, arg0->f3c0);
            ((TObjFish *)(arg0->f44c))->set_draw_callback_list();
            ((s32 (*)(s32, s32, f32))draw_model_motion)(get_bml_model(arg0->f390, boss4_zanzo_bml_index_table[i]),
                get_bml_motion((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__attack_pattern_table)[arg0->f3c8].c[i])),
                arg0->f3d0);
            clear_render_callback__8TObjFishFv(arg0->f44c);
            model_render_flags &= ~0x20000;
            break;
        default:
            TBoss6PlotFalz__sub_802AC008(arg0->f3f0, arg0->f3f4);
            ((s32 (*)(s32, s32, f32))draw_model_motion)(get_bml_model(arg0->f390, boss4_zanzo_bml_index_table[i]),
                get_bml_motion((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__attack_pattern_table)[arg0->f3c8].c[i])),
                arg0->f3d0);
            TBoss6PlotFalz::update_camera_target();
            break;
        }
    }
    TObjPlayer::clear_global_state();
    arg0->f3e4 = 0;
}

void TBoss4Type2::set_attack_pattern_by_index(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    if (arg1 != -1) {
        *(s32 *)((s8 *)arg0 + 0x3c8) = arg1;
        *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
        *(s32 *)((s8 *)arg0 + 0x3dc) = (s32) *(s32 *)((s8 *)((u8 *)(&TBoss4Type2__attack_pattern_table.value) + (arg1 << 0x4)) + 0);
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type2::update_phase_timer() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x3d8) = 0;
    *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3d0) + *(f32 *)((s8 *)arg0 + 0x3d4));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3dc);
    switch (temp_r0) {
    case 0:
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3d0);
        if (temp_f1 >= lbl_805D8C0C) {
            *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) (temp_f1 - lbl_805D8C0C);
            *(s32 *)((s8 *)arg0 + 0x3d8) = 1;
        }
        break;
    case 1:
        if (*(f32 *)((s8 *)arg0 + 0x3d0) >= lbl_805D8C14) {
            *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) lbl_805D8C14;
            *(s32 *)((s8 *)arg0 + 0x3d8) = 1;
        }
        break;
    case 2:
        if (*(f32 *)((s8 *)arg0 + 0x3d0) >= lbl_805D8C14) {
            *(s32 *)((s8 *)arg0 + 0x3c8) = (s32) *(s32 *)((s8 *)((u8 *)&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__attack_pattern_table).value + (*(s32 *)((s8 *)arg0 + 0x3c8) << 0x4)) + 4);
            *(s32 *)((s8 *)arg0 + 0x3dc) = (s32) *(s32 *)((s8 *)(&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__attack_pattern_table).value) + (*(s32 *)((s8 *)arg0 + 0x3c8) << 0x4));
            *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
            *(s32 *)((s8 *)arg0 + 0x3d8) = 1;
        }
        break;
    }
    temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x3d0);
    if ((temp_f1_2 < TBoss4Type2__data_805D8BAC) || (temp_f1_2 >= lbl_805D8C0C)) {
        *(f32 *)((s8 *)arg0 + 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
    }
}
extern int fold_flush_4;
#pragma pop

void TBoss4Type2::init_hanger() { toggle_particle_effect__10TObjPlayerFv(this); ((int (*)(void))push_matrix)(); ((int (*)(void*))post_translate_matrix)((char*)this + 0x38); ((int (*)(void*, void*))rotate_matrix_y)((void*)0, *(void**)((char*)this + 0x60)); draw_hanger(); ((int (*)(void))pop_matrix)(); TParticleCtrl::end_effect_render(); }

void TBoss4Type2::advance_afterimage() {
    u8 *arg0 = (u8 *)this;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) + lbl_805D8C18);
}

void TBoss4Type2__sub_80057578(void* p) { ((TBoss4Type2 *)p)->init_hanger(); }

struct Vec_80057598 { f32 x, y, z; };
class TBoss4Type2_80057598 { public: u8 pad[0x374]; s32 f374; };
union MemberAction_80057598 { s32 words[3]; void (TBoss4Type2_80057598::*action)(); };

void submit_cursor_candidate(void *, int);
extern Vec_80057598 lbl_80437720[];
extern Vec_80057598 lbl_8043772C[];
extern const f32 lbl_805D8BD4;
extern const f32 lbl_805D8C08;
extern const f32 lbl_805D8C1C;
void TBoss4Type2::update_main() {
    u8 *arg0 = (u8 *)this;
    MemberAction_80057598 m;

    if (((TBoss4DarkFalz *)(*(void **)((s8 *)arg0 + 0x38C)))->is_field378_zero() != 0) {
        m.words[0] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].a[0];
        m.words[1] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].a[1];
        m.words[2] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].a[2];
        if (m.action != 0) {
            (((TBoss4Type2_80057598 *)arg0)->*(m.action))();
        }
    }
    m.words[0] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].b[0];
    m.words[1] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].b[1];
    m.words[2] = (s32)lbl_8048652C[*(s32 *)((s8 *)arg0 + 0x374)].b[2];
    if (m.action != 0) {
        (((TBoss4Type2_80057598 *)arg0)->*(m.action))();
    }
    update_phase_timer();
    advance_afterimage();
    if (TBoss4Type2__data_805D8BAC == *(f32 *)((s8 *)arg0 + 0x3E8)) {
        *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x394)) + 0x18) |= 1;
        ((TObjPlayer *)arg0)->update_collisions();
        submit_cursor_candidate(arg0, -1);
    } else {
        *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x394)) + 0x18) &= ~1;
    }
    add_radar_scaled_marker(arg0 + 0x2FC, 0xFFFFA24C, 1, 1, lbl_805D8C1C);
    if (*(s32 *)((s8 *)arg0 + 0x374) != 2) {
        Vec_80057598 pos = *(Vec_80057598 *)(arg0 + 0x38);
        Vec_80057598 dir = *(Vec_80057598 *)(arg0 + 0x38);
        dir.y = TBoss4Type2__data_805D8BAC;
        normalize_vector(&dir);
        dir.x *= lbl_805D8C08;
        dir.z *= lbl_805D8C08;
        dir.y = lbl_805D8BD4;
        vec3_add_to(&pos, &dir);
        if (*(void **)((s8 *)arg0 + 0x42C) != NULL) {
            ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x42C)))->copy_pos(&pos);
        }
        if (*(void **)((s8 *)arg0 + 0x430) != NULL) {
            ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x430)))->copy_pos(&pos);
        }
        ((TBoss4Type2 *)(arg0 + 0x378))->scroll_strips();
    }
    {
        Vec_80057598 a = lbl_80437720[0];
        Vec_80057598 b = lbl_8043772C[0];
        request_follow_camera_offsets(&a, &b, 0xFFFF);
    }
    if ((*(f32 *)((s8 *)arg0 + 0x3C0) += 0.022222223f) >= 1.0f) {
        *(f32 *)((s8 *)arg0 + 0x3C0) -= 1.0f;
    }
    *(f32 *)((s8 *)arg0 + 0x3F0) += -0.06666667f;
    if (*(f32 *)((s8 *)arg0 + 0x3F0) < 0.0f) {
        *(f32 *)((s8 *)arg0 + 0x3F0) = 0.0f;
    }
    *(f32 *)((s8 *)arg0 + 0x3F4) = (f32)*(s16 *)((s8 *)arg0 + 0x32C) / (f32)*(s16 *)((s8 *)arg0 + 0x33E);
}

void TUnk_80486924::vfunc_63() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 2)) {
        ((s32 (*)(void *, s32))TBoss4Type2__sub_80057048)(this, 3);
    }
}

void init_state__11TBoss4Type2FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3E4) = 1;
    *(f32 *)((s8 *)arg0 + 0x3F0) = (f32) TBoss4Type2__data_805D8BD8;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
    ((s32 (*)(int, void *, int, int, void *))play_sound_effect)(0x4003B723, arg0 + 0x38, 0, 1, arg0);
}

S_800578E8 *TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80486924;
        fn_8004AA04(o->f378);
        for (i = 0; i < 8; i++) {
            if (o->ptr[i] != 0) {
                TBoss4Type2::request_destroy((u32)(o->ptr[i]));
                o->ptr[i] = 0;
            }
        }
        TObjFish::init_state_1(o->f44c);
        o->f44c = 0;
        free_collision_body_parts(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

u8 *TBoss4Type2__ct(u8 *arg0, s32 arg1, s32 *arg2) {
    s32 i;
    s32 v;

    ((TObjEnemy *)arg0)->initialize((void*)arg1);
    *(u8 **)((s8 *)arg0 + 0x18) = lbl_80486924;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D27D8;
    ((TObjPlayer *)arg0)->add_flags_2e4(8);
    *(s32 *)((s8 *)arg0 + 0x38C) = arg2[0];
    ((TUnk_80486924 *)arg0)->apply_set_data(arg2 + 1);
    ((TUnk_80486924 *)arg0)->clear_lobby_object_state();
    *(s32 *)((s8 *)arg0 + 0x390) = TBoss4Uro::get_instance_count();
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, lbl_804868A8);
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, (void *) VecCopy__FP3VecPC3Vec(arg0 + 0x50, (void *) VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    *(s32 *)((s8 *)arg0 + 0x394) = init_collision_body_parts(arg0, lbl_80486794, 1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x310) = TBoss4Type2__data_805D8BAC;
    *(f32 *)((s8 *)arg0 + 0x30C) = TBoss4Type2__data_805D8BAC;
    *(f32 *)((s8 *)arg0 + 0x308) = TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
    bind_enemy_combat_stats(arg0, (int) TLobby::register_boss(0x37), dispatch_shared_handler_b__6TLobbyFl(0x37), register_object__6TLobbyFl(0x37));
    *(s16 *)((s8 *)arg0 + 0x33E) = *(s16 *)((s8 *)arg0 + 0x32C);
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    ((TObjEneLappy *)arg0)->set_param(0x2F);
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C8) = 0;
    *(s32 *)((s8 *)arg0 + 0x3D8) = 0;
    *(f32 *)((s8 *)arg0 + 0x3D4) = lbl_805D8C28;
    *(f32 *)((s8 *)arg0 + 0x3D0) = TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x44C) = TObjFish__sub_800E3124(lbl_80486868, arg0 + 0x450, lbl_805D8C28);
    for (i = 0; i < 2; i++) {
        ((Arr_800579A0 *) arg0)->f42C[i] = create_particle_emitter(arg0 + 0x38, lbl_804376D0[i]);
    }
    for (; i < 8; i++) {
        ((Arr_800579A0 *) arg0)->f42C[i] = 0;
    }
    init_model_node_tables(arg0 + 0x378, boss4_type2_model_node_table, 6);
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3E0) = 0;
    *(u16 *)((s8 *)arg0 + 0x3C4) = 0xFFFF;
    *(s32 *)((s8 *)arg0 + 0x41C) = get_random_float__21TObjEneMe3ShinowaRealFv(*(f32 *) dispatch_shared_handler_a__6TLobbyFl(0x37));
    if (*(s32 *)((s8 *)arg0 + 0x41C) < 1 || *(s32 *)((s8 *)arg0 + 0x41C) > 25) {
        *(s32 *)((s8 *)arg0 + 0x41C) = 4;
    }
    *(s32 *)((s8 *)arg0 + 0x41C) *= 75;
    *(s32 *)((s8 *)arg0 + 0x420) = *(s32 *)((s8 *)arg0 + 0x41C) - 7;
    v = *(s32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x37)) + 0x18);
    if (v < 1 || v > 4) {
        v = 1;
    }
    *(s32 *)((s8 *)arg0 + 0x424) = v + 8;
    *(s32 *)((s8 *)arg0 + 0x428) = *(s32 *)((s8 *)(dispatch_shared_handler_a__6TLobbyFl(0x37)) + 0x1C);
    if (*(s32 *)((s8 *)arg0 + 0x428) < 0 || *(s32 *)((s8 *)arg0 + 0x428) > 14) {
        *(s32 *)((s8 *)arg0 + 0x428) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0x3C0) = TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x3E4) = 0;
    *(f32 *)((s8 *)arg0 + 0x3E8) = TBoss4Type2__data_805D8BAC;
    *(s32 *)((s8 *)arg0 + 0x3EC) = *(s16 *)((s8 *)arg0 + 0x32C) / 2;
    *(f32 *)((s8 *)arg0 + 0x3F0) = TBoss4Type2__data_805D8BAC;
    *(f32 *)((s8 *)arg0 + 0x3F4) = TBoss4Type2__data_805D8BD8;
    TBoss4Type2__sub_80057048(arg0, 0);
    return arg0;
}

s32 TBoss4Type2::create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(s32))__nw__7TObjectFUl)(0x474);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(s32))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = ((s32 (*)(s32, s32, s32))TBoss4Type2__ct)(var_r31, var_r4, arg0);
    }
    return var_r31;
}
}
