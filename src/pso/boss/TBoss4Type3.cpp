#include "types.h"
#include "pso/boss/TBoss4Type3.h"

extern "C" {
extern const char TObjBs4CutAtk_type_name[] = "TObjBs4CutAtk";
extern const char TBoss4Type3_type_name[] = "TBoss4Type3";
extern const char boss4_type3_state_name_appear[] = "APPEAR";
extern const char boss4_type3_state_name_wait_next[] = "WAITNEXT";
extern const char boss4_type3_state_name_wait_kill[] = "WAITKILL";
extern const char boss4_type3_state_name_dead[] = "DEAD";
extern const char boss4_type3_state_name_cut2[] = "CUT2";
extern const char boss4_type3_state_name_cut3[] = "CUT3";
extern const char boss4_type3_state_name_cut4[] = "CUT4";
extern const char boss4_type3_state_name_cut5[] = "CUT5";
extern const char boss4_type3_state_name_go_up[] = "GOUP";
extern const char boss4_type3_state_name_go_down[] = "GODOWN";
extern const char boss4_type3_state_name_homing[] = "HORMING";
extern const char boss4_type3_state_name_light_magic[] = "LMAGIC";
extern const char boss4_type3_state_name_dark_magic[] = "DMAGIC";
extern const char boss4_type3_state_name_capture[] = "CAPTURE";
extern const char boss4_type3_state_name_bura[] = "BURA";
extern const char boss4_type3_state_name_libera[] = "LIBERA";
extern const char boss4_type3_state_name_cut[] = "CUT";
}

extern "C" {
extern const s32 boss4_type3_model_node_specs[2][3] = {{12,74,1},{14,74,1}};
extern const s32 boss4_type3_effect_ids[8] = {326,326,326,326,328,327,327,323};
const char *TObjBs4CutAtk_name = TObjBs4CutAtk_type_name;
const char *TBoss4Type3_name = TBoss4Type3_type_name;
}
typedef TBoss4Type3Handler Type3Handler;
struct Type3MotionView { s32 kind, flags, motions[3]; };

#include "pso/TBoss4Zanzo.h"
#include <stddef.h>
#include "pso/TObjBs4CutAtk.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/boss/TBoss4Uro.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TObjDFRecover.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TTecGrants.h"
#include "pso/misc/TTecRaBarta.h"
#include "pso/misc/TTecRaFoie.h"
#include "pso/misc/TTecResta.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_800579A0 { char pad[0x18]; };
struct VObj_18_800579A0 : VBase_18_800579A0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78();
    virtual void m79(void *);
    virtual void m80();
};

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

struct VBase_8005AE60 { char pad[0x18]; };
struct VObj_8005AE60 : VBase_8005AE60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78();
    virtual void m79(void *);
};

struct Seg_8005AE60 { u8 b[0x48]; };
struct Self_8005AE60 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0x24 - 0x1c];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 v38[0xC];
    u8 v44[0xC];
    u8 v50[0xC];
    s32 f5C;
    s32 f60;
    u8 pad64[0x74 - 0x64];
    u8 v74[0xC];
    u8 pad80[0x2A8 - 0x80];
    s32 f2A8;
    u8 pad2ac[0x2FC - 0x2AC];
    u8 v2FC[0xC];
    f32 f308;
    f32 f30C;
    f32 f310;
    u8 pad314[0x32C - 0x314];
    s16 f32C;
    u8 pad32e[0x33E - 0x32E];
    s16 f33E;
    u8 pad340[0x378 - 0x340];
    u8 f378[0x38C - 0x378];
    s32 f38C;
    s32 f390;
    s32 f394;
    u8 pad398[0x3A0 - 0x398];
    s32 f3A0;
    s32 f3A4;
    s32 f3A8;
    s32 f3AC;
    f32 f3B0;
    s32 f3B4;
    u16 f3B8;
    u16 f3BA;
    s32 f3BC;
    u8 pad3c0[4];
    s32 f3C4;
    f32 f3C8;
    s32 f3CC;
    s32 f3D0;
    s32 f3D4;
    s32 f3D8;
    f32 f3DC;
    s32 f3E0;
    s32 f3E4;
    f32 f3E8;
    f32 f3EC;
    s32 f3F0;
    f32 f3F4;
    f32 f3F8;
    s32 f3FC;
    u8 pad400[0x438 - 0x400];
    s32 a438[3];
    Seg_8005AE60 a444[3];
    u8 pad57c[0x51C - 0x51C];
};

union TypedVector_80059B78 {
    struct { f32 x, y, z; } f;
    struct { s32 x, y, z; } bits;
};

extern "C" {
void copy_pos__11TNowLoadingFPv(void *, void *);
void copy_positions_to_parts__11TBoss4Type3FPv(Obj_8005A1AC *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 add_radar_scaled_marker(void *, u32, int, int, f32);
s32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C70;
extern const f32 lbl_805D8C74;
void update_radar_markers__11TBoss4Type3FPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
void copy_pos__11TNowLoadingFPv(void *, void *);
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
void copy_pos__11TNowLoadingFPv(void *, void *);
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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 pick_random_target_player__11TBoss4Type3Fv(void);
s32 TBoss4Type3__sub_8005254C(u16);
extern const f64 lbl_80437890[];
extern const f32 lbl_805D8C7C;
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

struct O_80058D70 { u8 pad[0x398]; s32 f398; u8 pad2[0x1c]; u16 f3b8; };

struct Obj_80059010 { u8 pad[0x398]; s32 f398; u8 pad39c[0x1C]; u16 f3b8; u16 f3ba; };

struct Obj_80059390 { u8 pad[0x30]; u32 flags; u8 pad34[0x384]; u16 f3b8; u16 f3ba; };

struct Obj_80058E64 { u8 pad[0x32C]; s16 f32c; u8 pad2[0x6A]; s32 f398; u8 pad3[0x1C]; u16 f3b8; u16 f3ba; u8 pad4[0x24]; s32 f3e0; };

struct Vec_80058848 { f32 x, y, z; };

struct O_80058848 {
    u8 pad0[0x38];
    Vec_80058848 pos;
    u8 pad44[0x398 - 0x44];
    s32 f398;
};

struct Grant_80058A48 { s32 f0; u16 f4; s16 f6; u8 pad[0x58]; };

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

struct Obj_80059ABC { u8 pad[0x60]; s32 f60; };

struct Ply_80059ABC { u8 pad[0x38]; f32 f38; u8 pad3c[4]; f32 f40; };

struct Obj_8005A300 { u8 pad[0x38]; u8 f38[0x3CC]; u32 f404[13]; };

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

struct S_80058380 {
    u8 pad0[0x398];
    s32 f398;
    f32 f39c;
};

struct Vec_80059C20 { f32 x, y, z; };

struct Dmg_8005B218 { s32 type; f32 val; };

struct VBase_8005B218 { char pad[0x18]; };

struct VObj_8005B218 : VBase_8005B218 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(s32, Dmg_8005B218 *, s32, s32, s32);
};

f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void * get_player_data__10TObjPlayerFi(s32 i);
u16 obj_getField1c(void *);
s32 is_split_screen();
f64 atan2_float(f32, f32);
void queue_destruction__7TObjectFv(void *);
u8 * dispatch_shared_handler_a__6TLobbyFl(s32);
s16 * register_boss__6TLobbyFl(s32);
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
void TBoss4Type2__sub_80058208(void);
void TBoss4Type2__sub_8005820C(void);
void TBoss4Type2__sub_80058210(void);
void TBoss4Type2__sub_80058214(void);
void TBoss4Type2__sub_80058218(void);
void TBoss4Type2__sub_8005821C(void);
void TBoss4Type2__sub_80058220(void);
void request_follow_camera_default_offsets__11TBoss4Type3FPv(u8 *arg0);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
void handle_damage_taken__11TBoss4Type3FPv(O_80059618 *o);
void TBoss4Type3__sub_800599F4(void*, int, int);
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
void * __ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void * create__13TObjBs4CutAtkFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 create__11TBoss4BishiFi(void *);
s32 request_follow_camera_offsets(void *, void *, int);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
void copy_pos__11TNowLoadingFPv(void *, void *);
s32 query_teammate_state__9TObjEneDDFv(void *);
int toggle_particle_effect__10TObjPlayerFv(void*);
u8 * lookup_entry_by_value__10TObjPlayerFPvf(s32);
void __dt__11TBoss4Type3FPvs(void *, s16);
s32 clear_render_callback__8TObjFishFv(s32);
s32 TObjControl__ct(s32, s32);
void __dt__9TObjEnemyFv(void *, s32);
s32 angle_diff_s16(int, int);
s32 approach_angle_limited(s32, s32, s32);
void free_collision_body_parts(void *);
s32 TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *);
s32 create__9TTecMegidFllll(void *, Vec_80058848 *, u8 *, s32);
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
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();

extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern const f64 TBoss4Type2__data_80437750;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BD8;
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern s32 __vt__11TBoss4Zanzo[];
extern void* __vt__13TObjBs4CutAtk[];

extern RecoveredGlobal_80059450_lbl_80437854 lbl_80437854;
extern RecoveredGlobal_80059450_lbl_80437860 lbl_80437860;
extern RecoveredGlobal_80059450_lbl_8043786C lbl_8043786C;
extern RecoveredGlobal_80059450_lbl_80437878 boss4_type3_follow_camera_offsets;
extern const f64 lbl_80437890[];
extern Ofs_8005683C bishi_spawn_offset_table[];
extern u8 lbl_80486924[];
extern void *TBoss4Zanzo__name;

extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern s32 lbl_805D586C;

struct Def_804867C8 { s32 value; s32 remaining[39]; };
void TBoss4Type2__vt9(u8 *arg0);

s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
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
extern const f32 lbl_805D8C60;
extern const f32 lbl_805D8C64;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C6C;
extern const f32 lbl_805D8C7C;
extern const f32 lbl_805D8C80;
extern const f32 lbl_805D8C84;
extern const f32 lbl_805D8C88;
extern const f32 lbl_805D8C8C;
extern const f32 lbl_805D8C90;
extern const f32 lbl_805D8C94;
extern const f32 lbl_805D8C98;
extern const f32 lbl_805D8C9C;
extern const f32 lbl_805D8CA0;
extern s32 model_render_flags;
extern s32 tl_04;

}

extern "C" {
extern "C" {
void TBoss4Bishi__sub_8005BABC();
}
extern "C" {
void TBoss4Bishi__sub_8005BAC0();
}
extern "C" {
void TBoss4Bishi__sub_8005BAC4();
}
extern "C" {
void TBoss4Bishi__sub_8005BAC8();
}
extern "C" {
void TBoss4Bishi__sub_8005BACC();
}
extern "C" {
void TBoss4Bishi__sub_8005BAD0();
}
extern "C" {
void TBoss4Bishi__sub_8005BAD4();
}
extern "C" {
void run_task__11TBoss4Type3Fv();
}
extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
extern u8 apply_anti_technique__10TObjPlayerFv[];
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
extern u8 enemy_spawn_zalure_effect[];
}
extern "C" {
extern u8 enemy_spawn_jellen_effect[];
}
extern "C" {
void TObjPlayer__sub_80011010();
}
extern "C" {
extern u8 get_actor_level_index[];
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
extern u8 add_actor_exp[];
}
extern "C" {
extern u8 is_actor_cadence_frame[];
}
extern "C" {
extern u8 receive_weapon_special_attack__10TObjPlayerFv[];
}
extern "C" {
extern u8 receive_direct_attack__10TObjPlayerFv[];
}
extern "C" {
extern u8 apply_knockback_from_attacker[];
}
extern "C" {
extern u8 receive_physical_attack__10TObjPlayerFv[];
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void TObjPlayer__sub_80014840();
}
extern "C" {
void TObjPlayer__sub_8001488C();
}
extern "C" {
void TObjPlayer__sub_80014890();
}
extern "C" {
void TObjPlayer__sub_80014894();
}
extern "C" {
void TObjPlayer__sub_80014898();
}
extern "C" {
extern u8 apply_action_hold_status[];
}
extern "C" {
extern u8 clear_all_status_effects[];
}
extern "C" {
extern u8 cure_paralysis__10TObjPlayerFv[];
}
extern "C" {
extern u8 cure_poison_ailment[];
}
extern "C" {
extern u8 apply_defense_stat_status__10TObjPlayerFlPv[];
}
extern "C" {
extern u8 apply_attack_stat_status__10TObjPlayerFv[];
}
extern "C" {
extern u8 calc_distance_accuracy_penalty__10TObjPlayerFv[];
}
extern "C" {
extern u8 roll_physical_accuracy__10TObjPlayerFv[];
}
extern "C" {
extern u8 select_melee_contact_body__10TObjPlayerFv[];
}
extern "C" {
extern u8 update_defense_stat_status[];
}
extern "C" {
extern u8 update_attack_stat_status[];
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
extern u8 update_movement_status__10TObjPlayerFv[];
}
extern "C" {
extern u8 update_action_hold_status__10TObjPlayerFv[];
}
extern "C" {
extern u8 update_poison_status__10TObjPlayerFv[];
}
extern "C" {
void TObjPlayer__sub_800172CC();
}
extern "C" {
extern u8 is_target_in_attack_range__10TObjPlayerFv[];
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
extern u8 update_actor_ground_y[];
}
extern "C" {
extern u8 get_actor_body_center[];
}
extern "C" {
extern u8 reset_actor_action_state[];
}
extern "C" {
void TObjPlayer__sub_80019568();
}
extern "C" {
extern u8 render_actor_shadows_default[];
}
extern "C" {
void update_and_send_enemy_hit_state();
}
extern "C" {
void apply_hit_message_flags__10TObjPlayerFPvPv();
}
extern "C" {
extern u8 apply_set_data__9TObjEnemyFPvPv[];
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void call_vt78__10TObjPlayerFv();
}
extern "C" {
void fn_80010EBC();
}
extern "C" {
void fn_80010EC0();
}
extern "C" {
void fn_80010EC4();
}
extern "C" {
void fn_80010EC8();
}
extern "C" {
void clear_lobby_object_state();
}
extern "C" {
extern u8 apply_object_set_data[];
}
extern "C" {
extern u8 classify_actor_view_detail[];
}
extern "C" {
extern u8 update_object_view_visibility[];
}
extern "C" {
void get_enemy_name__14TObjEnePanarmsFv();
}
extern "C" {
void get_pos__10TObjPlayerFii();
}
extern "C" {
}

extern "C" {
void reset_pose__10TObjPlayerFPv();
}
extern "C" {
}
extern "C" {
}
extern "C" {
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_timer__10TObjPlayerFPv();
}
extern "C" {
void update_flag30_timer__10TObjPlayerFPv();
}
extern void *lbl_80487090[28];
extern void *lbl_80487100[12];

TBoss4Type3State boss4_type3_states[17] = {
    { boss4_type3_state_name_appear, 0x0, &TBoss4Type3::enter_appear, &TBoss4Type3::advance_appear, &TBoss4Type3::update_appear },
    { boss4_type3_state_name_wait_next, 0x0, 0, &TBoss4Type3::advance_wait_next, 0 },
    { boss4_type3_state_name_wait_kill, -1, 0, 0, 0 },
    { boss4_type3_state_name_dead, 0x9, &TBoss4Type3::enter_dead, &TBoss4Type3::advance_dead, &TBoss4Type3::update_dead },
    { boss4_type3_state_name_cut, 0x3, &TBoss4Type3::enter_cut, &TBoss4Type3::advance_cut, &TBoss4Type3::update_cut },
    { boss4_type3_state_name_cut2, 0x4, &TBoss4Type3::enter_cut, &TBoss4Type3::advance_cut, &TBoss4Type3::update_cut },
    { boss4_type3_state_name_cut3, 0x3, &TBoss4Type3::enter_cut, &TBoss4Type3::advance_cut, &TBoss4Type3::update_cut },
    { boss4_type3_state_name_cut4, 0x4, &TBoss4Type3::enter_cut, &TBoss4Type3::advance_cut, &TBoss4Type3::update_cut },
    { boss4_type3_state_name_cut5, 0x3, &TBoss4Type3::enter_cut, &TBoss4Type3::advance_cut, &TBoss4Type3::update_cut },
    { boss4_type3_state_name_go_up, 0x1, &TBoss4Type3::enter_go_up, &TBoss4Type3::advance_go_up, &TBoss4Type3::update_go_up },
    { boss4_type3_state_name_go_down, 0x2, &TBoss4Type3::enter_go_down, &TBoss4Type3::advance_go_down, &TBoss4Type3::update_go_down },
    { boss4_type3_state_name_homing, 0x0, &TBoss4Type3::enter_homing, &TBoss4Type3::advance_homing, &TBoss4Type3::update_homing },
    { boss4_type3_state_name_light_magic, 0x0, &TBoss4Type3::enter_light_magic, &TBoss4Type3::advance_light_magic, &TBoss4Type3::update_light_magic },
    { boss4_type3_state_name_dark_magic, 0x7, &TBoss4Type3::enter_dark_magic, &TBoss4Type3::advance_dark_magic, &TBoss4Type3::update_dark_magic },
    { boss4_type3_state_name_capture, 0x0, &TBoss4Type3::enter_capture, &TBoss4Type3::advance_capture, &TBoss4Type3::update_capture },
    { boss4_type3_state_name_bura, 0x0, &TBoss4Type3::enter_bura, &TBoss4Type3::advance_bura, &TBoss4Type3::update_bura },
    { boss4_type3_state_name_libera, 0x0, &TBoss4Type3::enter_libera, &TBoss4Type3::advance_libera, &TBoss4Type3::update_libera },
};
void *boss4_type3_collision_body_desc[11] = {
    (void *)0x0, (void *)0x41a00000, (void *)0x0, (void *)0x42340000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80486FB0[3] = {
    (void *)0xc, (void *)0xd, (void *)0xd,
};
void *boss4_type3_index_table[3] = {
    (void *)0xe, (void *)0xf, (void *)0xf,
};
Type3MotionView TBoss4Type3__anim_state_table[10] = {
    { 0, 0, 83, 84, 85 },
    { 0, 0, 52, 53, 54 },
    { 0, 0, 55, 56, 57 },
    { 2, 0, 64, 65, 66 },
    { 2, 0, 72, 73, 74 },
    { 2, 0, 89, 84, 85 },
    { 2, 0, 58, 59, 60 },
    { 2, 0, 37, 84, 85 },
    { 2, 0, 14, 15, 16 },
    { 1, 0, 19, 84, 85 },
};
void *lbl_80487090[28] = {
    (void *)0x38, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x34, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x35, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x9, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xa, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x39, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_80487100[12] = {
    (void *)0xb, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xc, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *boss4_type3_start_position[3] = {
    (void *)0x461c4000, (void *)0xc1200000, (void *)0x0,
};
void *boss4_type3_effect_desc_ptr_table[3] = {
    (void *)&lbl_80487090, (void *)&lbl_80487100, (void *)&lbl_80487100,
};
__declspec(section ".data") void *boss4_type3_run_task_params[2] = {
    (void *)0x34, (void *)0x35,
};
void *lbl_80487150[3] = {
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *boss4_type3_default_position[3] = {
    (void *)0x461c4000, (void *)0xc1200000, (void *)0x0,
};
void *boss4_type3_interp_origin_vec[3] = {
    (void *)0x461c4000, (void *)0x43960000, (void *)0x0,
};
void *boss4_type3_radar_marker_colors[4] = {
    (void *)0xffff0000, (void *)0xff00ff00, (void *)0xffffff00, (void *)0xff0000ff,
};
void *__vt__11TBoss4Type3[83] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__11TBoss4Type3FPvs, (void *)&run_task__11TBoss4Type3Fv,
    (void *)&TBoss4Type3__sub_8005A86C, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjPlayer__sub_80011010, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&TBoss4Bishi__sub_8005BABC, (void *)&TBoss4Bishi__sub_8005BAC0, (void *)&TBoss4Bishi__sub_8005BAC4, (void *)&TBoss4Bishi__sub_8005BAC8,
    (void *)&TBoss4Bishi__sub_8005BACC, (void *)&TBoss4Bishi__sub_8005BAD0, (void *)&TBoss4Bishi__sub_8005BAD4, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFlPv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjPlayer__sub_8001488C, (void *)&init_effect__11TBoss4Type3FPv, (void *)&reset_action_to_3__11TBoss4Type3FPv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&call_vt78__10TObjPlayerFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state,
};
#define lbl_80486FB0 ((u8 *)lbl_80486FB0)
#define boss4_type3_index_table ((u8 *)boss4_type3_index_table)
#define TBoss4Type3__anim_state_table (*(RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 *)TBoss4Type3__anim_state_table)
#define lbl_80487150 ((u8 *)lbl_80487150)
#define boss4_type3_default_position (*(Vec_80059C20 *)boss4_type3_default_position)
#define boss4_type3_interp_origin_vec (*(Vec_80059C20 *)boss4_type3_interp_origin_vec)
#define boss4_type3_radar_marker_colors ((u32 *)boss4_type3_radar_marker_colors)
#define __vt__11TBoss4Type3 ((u8 *)__vt__11TBoss4Type3)

extern "C" {
Ply_80059ABC * get_player_by_client_id(int);
}

void TBoss4Type2__sub_80058208(void) {  }

void TBoss4Type2__sub_8005820C(void) {  }

void TBoss4Type2__sub_80058210(void) {  }

void TBoss4Type2__sub_80058214(void) {  }

void TBoss4Type2__sub_80058218(void) {  }

void TBoss4Type2__sub_8005821C(void) {  }

void TBoss4Type2__sub_80058220(void) {  }

}
void TBoss4Type3::update_libera() {
    S_80058224 *o = (S_80058224 *)this;
    u16 id = o->f3ba;
    if (id == 0xFFFF) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
        return;
    }
    ((TBoss4Type3 *)o)->turn_toward_player(id);
    if (o->f398 == 0x31) {
        TBoss4Type3::spawn_effect(0xC0, 0xF, (s16)o->f3ba);
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
    }
    if (--o->f398 < 0) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
    }
}
extern "C" {

}
void TBoss4Type3::advance_libera() {
    S_800582B4 *o = (S_800582B4 *)this;
    if (TBoss4Type3__sub_8005254C(o->f3ba) == 0) {
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
        ((void (*)(void *, s32, s32))TBoss4Type3__sub_800599F4)(o, 0, 2);
        return;
    }
    if (o->f398 == 0) {
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
        ((void (*)(void *, s32, s32))TBoss4Type3__sub_800599F4)(o, 0, 2);
    }
}
void TBoss4Type3::enter_libera() {
    u8 *arg0 = (u8 *)this;
    TBoss4Type3::create_yutai((void *)arg0, (void *)((void *)1), (void *)((void *) *(u16 *)((s8 *)arg0 + 0x3BA)));
    *(s32 *)((s8 *)arg0 + 0x52C) = 0;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x62;
}
void TBoss4Type3::update_bura() {
    S_80058380 *o = (S_80058380 *)this;
    if (o->f398 > 0x48) {
        o->f39c = TBoss4Type3__data_805D8C34 - (f32)(o->f398 - 0x48) / lbl_805D8C38;
    } else {
        o->f39c = TBoss4Type3__data_805D8C34;
    }
    o->f39c = TBoss4Type3__sub_800524E8(o->f39c);
    ((TBoss4Type3 *)o)->interp_position_between_nodes();
    if (--o->f398 < 0) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
    }
}
void TBoss4Type3::advance_bura() {
    void *arg0 = (void *)this;
    s32 temp_r0;

    u16 v = *(u16 *)((s8 *)arg0 + 0x3BA);
    if ((v != 0xFFFF) && (TBoss4Type3__sub_8005254C(v) == 0)) {
        *(u16 *)((s8 *)arg0 + 0x3B8) = 0xFFFF;
        *(u16 *)((s8 *)arg0 + 0x3BA) = 0xFFFF;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0) {
        *(s32 *)((s8 *)arg0 + 0x3BC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3BC) + 1);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x3BC);
        if ((temp_r0 >= 5) || ((temp_r0 >= 2) && (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D8C3C))) {
            ((s32 (*)(void *, s32))TBoss4Type3__sub_80059F64)(arg0, 9);
            return;
        }
        ((TBoss4Type3 *)arg0)->spawn_random_effect();
    }
}
void TBoss4Type3::enter_bura() {
    void* p = (void*)this; *(s32*)((char*)p + 0x52c) = 0; *(s32*)((char*)p + 0x398) = 147; }
extern "C" {

struct Obj_80059ABC;
struct TBoss4Type3;
}
void TBoss4Type3::update_capture() {
    u8 *arg0 = (u8 *)this;
    Vec_800584E4 v;
    Ply_80059ABC *p;
    u16 id;
    void *pos;
    u32 h;
    id = *(u16 *)((s8 *)arg0 + 0x3B8);
    if (id == 0xFFFF) {
        ((TBoss4Type3 *)arg0)->set_action_from_table(1);
        return;
    }
    if (id == 0xFFFF || (p = get_player_by_client_id((u16)(id))) == NULL) {
        v.x = v.y = v.z = TBoss4Type3__data_805D8C40;
    } else {
        VecCopy__FP3VecPC3Vec(&v, (u8 *)p + 0x2FC);
    }
    ((TBoss4Type3 *)arg0)->turn_toward_player(*(u16 *)((s8 *)arg0 + 0x3B8));
    if (*(s32 *)((s8 *)arg0 + 0x398) == 0x31) {
        play_sound_effect(0x4003AA2E, 0, 0, 0);
        TBoss4Type3::spawn_effect(0xC0, 0xF, (s16)*(u16 *)((s8 *)arg0 + 0x3B8));
        ((TBoss4Type3 *)arg0)->set_anim_state(5);
    }
    pos = arg0 + 0x474;
    if (*(s32 *)((s8 *)arg0 + 0x398) < 0x12) {
        if (*(void **)((s8 *)arg0 + 0x42C) != NULL) {
            TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x42C)));
            *(void **)((s8 *)arg0 + 0x42C) = NULL;
        }
    } else if (*(s32 *)((s8 *)arg0 + 0x398) <= 0x21 && *(u32 *)((s8 *)arg0 + 0x42C) == 0) {
        h = create_particle_emitter(pos, 0x142);
        *(u32 *)((s8 *)arg0 + 0x42C) = h;
        if (h != 0) {
            ((TBoss4Type2 *)(*(void **)((s8 *)arg0 + 0x42C)))->set_flags(0x40);
        }
    }
    if (*(void **)((s8 *)arg0 + 0x42C) != NULL) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x42C), pos);
    }
    if (*(s32 *)((s8 *)arg0 + 0x398) == 0x21) {
        TBoss4Type3::create_yutai((void *)arg0, (void *)0, (void *)((void *)*(u16 *)((s8 *)arg0 + 0x3B8)));
    }
    if (*(s32 *)((s8 *)arg0 + 0x398) == 0x1C) {
        h = spawn_particle_effect(&v, 0x38);
        if (h != 0) {
            ((TBoss4Type2 *)h)->set_flags(0x40);
        }
    }
    pos = &v;
    if (*(s32 *)((s8 *)arg0 + 0x398) < 2) {
        if (*(void **)((s8 *)arg0 + 0x430) != NULL) {
            TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x430)));
            *(void **)((s8 *)arg0 + 0x430) = NULL;
        }
        if (*(void **)((s8 *)arg0 + 0x434) != NULL) {
            TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x434)));
            *(void **)((s8 *)arg0 + 0x434) = NULL;
        }
    } else if (*(s32 *)((s8 *)arg0 + 0x398) <= 0x12) {
        if (*(u32 *)((s8 *)arg0 + 0x430) == 0) {
            h = create_particle_emitter(pos, 0xEA);
            *(u32 *)((s8 *)arg0 + 0x430) = h;
            if (h != 0) {
                ((TBoss4Type2 *)(*(void **)((s8 *)arg0 + 0x430)))->set_flags(0x40);
            }
        }
        if (*(u32 *)((s8 *)arg0 + 0x434) == 0) {
            h = create_particle_emitter(pos, 0x139);
            *(u32 *)((s8 *)arg0 + 0x434) = h;
            if (h != 0) {
                ((TBoss4Type2 *)(*(void **)((s8 *)arg0 + 0x434)))->set_flags(0x40);
            }
        }
    }
    if (*(void **)((s8 *)arg0 + 0x430) != NULL) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x430), pos);
    }
    if (*(void **)((s8 *)arg0 + 0x434) != NULL) {
        copy_pos__11TNowLoadingFPv(*(void **)((s8 *)arg0 + 0x434), pos);
    }
    if (--*(s32 *)((s8 *)arg0 + 0x398) < 0) {
        ((TBoss4Type3 *)arg0)->set_action_from_table(1);
    }
}
void TBoss4Type3::advance_capture() {
    void *arg0 = (void *)this;
    if (TBoss4Type3__sub_8005254C(*(u16 *)((s8 *)arg0 + 0x3B8)) == 0) {
        *(u16 *)((s8 *)arg0 + 0x3B8) = 0xFFFFU;
        *(u16 *)((s8 *)arg0 + 0x3BA) = 0xFFFFU;
        TBoss4Type3__sub_800599F4((void*)(arg0), 0, 2);
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0) {
        *(u16 *)((s8 *)arg0 + 0x3BA) = (u16) *(u16 *)((s8 *)arg0 + 0x3B8);
        *(u16 *)((s8 *)arg0 + 0x3B8) = 0xFFFFU;
        play_sound_effect((int)(0x4003C12C), (void *)(0), (int)(0), (int)(0));
        *(s32 *)((s8 *)arg0 + 0x3BC) = 0;
        ((TBoss4Type3 *)arg0)->spawn_random_effect();
    }
}
void TBoss4Type3::enter_capture() {
    void *arg0 = (void *)this;
    play_sound_effect((int)(0x4003C12B), (void *)(0), (int)(0), (int)(0));
    *(s32 *)((s8 *)arg0 + 0x52C) = 0;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x62;
}
extern "C" {

#pragma push
#pragma fp_contract on
#pragma opt_propagation off
}
void TBoss4Type3::update_dark_magic() {
    s32 p;
    s32 r30;
    s32 i;
    O_80058848 *o;
    f32 s;
    o = (O_80058848 *)this;
    if (o->f398 == 0x46) {
        r30 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFl(0x38) + 0x1C);
        for (i = 0; i < TLobby::get_game_mode(); i++) {
            p = ((s32 (*)(s32))get_player_by_client_id)(i);
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                Vec_80058848 v = o->pos;
                p += 0x2FC;
                ((s32 (*)(Vec_80058848 *, u8 *))subtract_vector)(&v, (u8 *)p);
                if (TBoss4Type3__data_805D8C40 == ((f32 (*)(Vec_80058848 *))vector_length)(&v)) {
                    v.y = TBoss4Type3__data_805D8C34;
                } else {
                    ((s32 (*)(Vec_80058848 *))normalize_vector)(&v);
                }
                s = lbl_805D8C48 * (lbl_805D8C4C * (f32)rand()) + lbl_805D8C44;
                v.x *= s;
                v.y *= s;
                v.z *= s;
                ((s32 (*)(Vec_80058848 *, u8 *))vec3_add_to)(&v, (u8 *)p);
                create__9TTecMegidFllll(o, &v, (u8 *)p, r30);
            }
        }
        TBoss3Volopt::queue_event_1D(0xC0, 0xF);
    }
    if (--o->f398 < 0) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
    }
}
extern "C" {
extern int fold_flush_5;
#pragma pop

}
void TBoss4Type3::advance_dark_magic() {
    void* p = (void*)this; if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(p, (void*)12); } }
void TBoss4Type3::enter_dark_magic() {
    void *arg0 = (void *)this;
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3A4) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3AC) = (s32) *(s32 *)((s8 *)arg0 + 0x3A8);
    play_sound_effect((int)(0x4003B238), (void *)(0), (int)(0), (int)(0));
    *(s32 *)((s8 *)arg0 + 0x52C) = 1;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x62;
}
extern "C" {

}
void TBoss4Type3::update_light_magic() {
    void *p;
    Grant_80058A48 g;
    s32 r29;
    u8 *sub;
    s32 i;
    u8 *arg0;
    arg0 = (u8 *)this;
    sub = arg0 + 0x474;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0x62) {
        ((TBoss4Type3 *)arg0)->set_anim_state(7);
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0x49) {
        p = ((void * (*)(void *, int))spawn_particle_effect)(sub, 0x133);
        if (p != 0) {
            ((TBoss4Type2 *)p)->set_flags(0x40);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0x45) {
        r29 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFl(0x38) + 0x18);
        for (i = 0; i < 4; i++) {
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                ((TObjPlayer *)(&g))->construct_target_cursor_records();
                fn_80044330(&g);
                g.f0 = 1;
                g.f4 = i;
                g.f6 = 0;
                TTecGrants::create((void *)arg0, (void *)sub, (void *)(&g), (void *)r29);
            }
        }
        TBoss3Volopt::queue_event_1D(0xC0, 0xF);
    }
    if (--*(s32 *)((s8 *)arg0 + 0x398) < 0) {
        ((TBoss4Type3 *)arg0)->set_action_from_table(1);
    }
}
void TBoss4Type3::advance_light_magic() {
    void* p = (void*)this; if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(p, (void*)10); } }
void TBoss4Type3::enter_light_magic() {
    void *arg0 = (void *)this;
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3A4) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3AC) = (s32) *(s32 *)((s8 *)arg0 + 0x3A8);
    *(s32 *)((s8 *)arg0 + 0x52C) = 1;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x93;
}
extern "C" {

}
void TBoss4Type3::update_homing() {
    O_80058BA0 *o = (O_80058BA0 *)this;
    u8 *a;
    u8 *b;
    s32 n;
    s32 step;
    s32 v;
    s32 i;
    u16 id;
    a = o->f450;
    b = o->f45c;
    id = o->f3b8;
    if (id == 0xFFFF) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
        return;
    }
    if (o->f398 > 0x93) {
        ((TBoss4Type3 *)o)->turn_toward_player(id);
    } else if (o->f398 == 0x93) {
        if ((o->f424 = ((void * (*)(void *, int))create_particle_emitter)(a, 0xF7)) != 0) {
            ((TBoss4Type2 *)(o->f424))->set_flags(0x40);
        }
        if ((o->f428 = ((void * (*)(void *, int))create_particle_emitter)(b, 0xF7)) != 0) {
            ((TBoss4Type2 *)(o->f428))->set_flags(0x40);
        }
        ((TBoss4Type3 *)o)->set_anim_state(6);
    } else if (o->f398 == 0x75) {
        if (o->f424 != 0) {
            TBoss4Type2::request_destroy((u32)(o->f424));
            o->f424 = 0;
        }
        if (o->f428 != 0) {
            TBoss4Type2::request_destroy((u32)(o->f428));
            o->f428 = 0;
        }
        o->f52c = 0;
    }
    n = *(s32 *)(dispatch_shared_handler_a__6TLobbyFl(0x38) + 0x20);
    if (n < 1 || n > 8) {
        n = 4;
    }
    step = 0x42 / n;
    if (step < 1) {
        step = 1;
    }
    v = 0x75;
    for (i = 0; i < n; i++) {
        if (o->f398 == v) {
            create_horming__11TBoss4Type3FPvPvPv(o, a, o->f3b8);
            create_horming__11TBoss4Type3FPvPvPv(o, b, o->f3b8);
            play_sound_effect(0x4003B229, o->f38, 0, 1);
            break;
        }
        v += step;
    }
    if (o->f424 != 0) {
        copy_pos__11TNowLoadingFPv(o->f424, a);
    }
    if (o->f428 != 0) {
        copy_pos__11TNowLoadingFPv(o->f428, b);
    }
    if (--o->f398 < 0) {
        ((TBoss4Type3 *)o)->set_action_from_table(1);
    }
}
void TBoss4Type3::advance_homing() {
    O_80058D70 *self = (O_80058D70 *)this;
    if (self->f398 == 0) {
        self->f3b8 = 0xFFFF;
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)(0xc));
    }
}
void TBoss4Type3::enter_homing() {
    void *arg0 = (void *)this;
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3A4) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3AC) = (s32) *(s32 *)((s8 *)arg0 + 0x3A8);
    *(s32 *)((s8 *)arg0 + 0x52C) = 1;
    *(s32 *)((s8 *)arg0 + 0x398) = 0xC4;
}
extern "C" {

}
void TBoss4Type3::update_go_down() {
    s32 temp_r0;
    this->m_39c = (f32) (TBoss4Type3__data_805D8C34 - ((f32) this->m_398 / lbl_805D8C50));
    this->m_39c = TBoss4Type3__sub_800524E8(this->m_39c);
    interp_position_between_nodes();
    temp_r0 = this->m_398 - 1;
    this->m_398 = temp_r0;
    if (temp_r0 < 0) {
        set_action_from_table((s32)(1));
    }
}
extern "C" {

}
void TBoss4Type3::advance_go_down() {
    Obj_80058E64 *self = (Obj_80058E64 *)this;
    s32 t;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(self, (void*)16);
            return;
        }
        t = pick_random_target_player__11TBoss4Type3Fv();
        if (self->f32c <= self->f3e0 && (u16)t != 0xFFFF) {
            ((void (*)(void *, s32, s32))TBoss4Type3__sub_80059EA8)(self, 14, t);
            return;
        }
        TBoss4Type3__sub_800599F4(self, 0, 2);
    }
}
void TBoss4Type3::enter_go_down() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x3A4) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0x10;
    *(s32 *)((s8 *)arg0 + 0x3AC) = (s32) *(s32 *)((s8 *)arg0 + 0x3A8);
    play_sound_effect((int)(0x4003B032), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((u16) *(u16 *)((s8 *)arg0 + 0x3BA) == (u16)-1) {
        play_sound_effect((int)(0x4003C62D), (void *)(0), (int)(0), (int)(0));
    }
    *(s32 *)((s8 *)arg0 + 0x52C) = 0;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x31;
}
extern "C" {

}
void TBoss4Type3::update_go_up() {
    s32 temp_r0;
    this->m_39c = (f32) (TBoss4Type3__data_805D8C34 - ((f32) this->m_398 / lbl_805D8C50));
    this->m_39c = TBoss4Type3__sub_800524E8(this->m_39c);
    interp_position_between_nodes();
    temp_r0 = this->m_398 - 1;
    this->m_398 = temp_r0;
    if (temp_r0 < 0) {
        set_action_from_table((s32)(1));
    }
}
extern "C" {

}
void TBoss4Type3::advance_go_up() {
    Obj_80059010 *self = (Obj_80059010 *)this;
    s32 id;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)0xD));
        } else {
            id = pick_random_target_player__11TBoss4Type3Fv();
            if ((u16)id != 0xFFFF) {
                ((void (*)(void *, s32, s32))TBoss4Type3__sub_80059EA8)(self, 0xB, id);
            } else {
                ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)0xC));
            }
        }
    }
}
void TBoss4Type3::enter_go_up() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x3A4) = (s32) *(s32 *)((s8 *)arg0 + 0x3A0);
    *(s32 *)((s8 *)arg0 + 0x3A0) = 0x11;
    *(s32 *)((s8 *)arg0 + 0x3AC) = (s32) *(s32 *)((s8 *)arg0 + 0x3A8);
    play_sound_effect((int)(0x4003B031), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    *(s32 *)((s8 *)arg0 + 0x52C) = 1;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x31;
}
void TBoss4Type3::update_cut() {
    O_800590F4 *o = (O_800590F4 *)this;
  s32 pb;
  Vec_800590F4 b;
  Vec_800590F4 a;
  if (o->f398 > 0x2A)
  {
    o->f39c = TBoss4Type3__data_805D8C34 - (((f32) (o->f398 - 0x2A)) / lbl_805D8C54);
  }
  else
  {
    o->f39c = TBoss4Type3__data_805D8C34;
  }
  ((TBoss4Type3 *)o)->interp_position_between_nodes();
  if (o->f398 == 0x28)
  {
    ((s32 (*)(void *, s32, s32))create__13TObjBs4CutAtkFPvPvPv)(o, o->f3a8, (o->f374 - 4) & 1);
    play_sound_effect(0x4003B228, o->f38, 0, 1);
  }
  if ((o->f3f4 >= lbl_805D8C58) && (o->f3f4 <= lbl_805D8C5C))
  {
    s32 idx = (o->f374 - 4) & 1;
    u8 *e = lookup_entry_by_value__10TObjPlayerFPvf(o->f51c[idx]);
    if (e != 0)
    {
      push_matrix();
      set_matrix_identity(0);
      ((s32 (*)(void *))post_translate_matrix)(o->f38);
      rotate_matrix_y(0, o->f60);
      matrix_mult_vec(0, e, &a);
      pb = (0, (s32) (&b));
      matrix_mult_vec(0, e + 0xC, (void *) pb);
      pop_matrix();
      o->f524[idx]->m4(&a, (Vec_800590F4 *) pb);
    }
  }
  if ((--o->f398) < 0)
  {
    ((TBoss4Type3 *)o)->set_action_from_table(1);
  }
}
void TBoss4Type3::advance_cut() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x398) == 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 4) {
            *(s32 *)((s8 *)arg0 + 0x3BC) = 0;
            ((TBoss4Type3 *)arg0)->spawn_random_effect();
            return;
        }
        temp_r3 = TBoss4Type3::get_random_scaled((void *)(arg0));
        ((TBoss4Type3 *)arg0)->send_packed_action(*(s32 *)((s8 *)arg0 + 0x374) - 1, temp_r3, temp_r3);
    }
}
void TBoss4Type3::enter_cut() {
    u8 *arg0 = (u8 *)this;
    ((TBoss4Type3 *)(*(s32 *)((s8 *)arg0 + 0x524)))->reset_timer();
    ((TBoss4Type3 *)(*(s32 *)((s8 *)arg0 + 0x528)))->reset_timer();
    ((TBoss4Type3 *)arg0)->set_anim_state((int) (((*(s32 *)((s8 *)arg0 + 0x374) - 4) & 1) + 3));
    *(s32 *)((s8 *)arg0 + 0x52C) = 0;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x31;
}
extern "C" {

}
void TBoss4Type3::update_dead() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((TBoss4Type3 *)arg0)->set_action_from_table((s32)((int) (2)));
    }
}
void TBoss4Type3::advance_dead() {  }
void TBoss4Type3::enter_dead() {
    void *arg0 = (void *)this;
    *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) lbl_805D8C60;
    *(s32 *)((s8 *)arg0 + 0x398) = 0x31;
}
extern "C" {

}
void TBoss4Type3::advance_wait_next() {
    Obj_80059390 *self = (Obj_80059390 *)this;
    if (self->flags & 0x800) {
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)2));
    } else {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)10));
    }
}
void TBoss4Type3::update_appear() {
    void *arg0 = (void *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x398) - 1;
    *(s32 *)((s8 *)arg0 + 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((TBoss4Type3 *)arg0)->set_action_from_table(1);
    }
}
void TBoss4Type3::advance_appear() {
    void* p = (void*)this; if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_800599F4(p, 0, 2); } }
void TBoss4Type3::enter_appear() {
    void* p = (void*)this; *(s32*)((char*)p + 0x398) = 147; }
extern "C" {

#pragma push
#pragma opt_common_subs off
void request_follow_camera_default_offsets__11TBoss4Type3FPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80059450, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80059450, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80059450, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80059450, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80059450, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80059450, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80059450, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80059450, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_80059450, sp28) == 0x20) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_80059450, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_80059450, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_80059450, sp34) == 0x2C) ? 1 : -1];
    Stack_80059450 stack;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x52C) == 1) {
        stack.sp2C = *(s32 *)((s8 *)(&lbl_80437854.value) + 0);
        stack.sp30 = *(s32 *)((s8 *)(&lbl_80437854.value) + 4);
        stack.sp34 = *(s32 *)((s8 *)(&lbl_80437854.value) + 8);
        stack.sp20 = *(s32 *)((s8 *)(&lbl_80437860.value) + 0);
        stack.sp24 = *(s32 *)((s8 *)(&lbl_80437860.value) + 4);
        stack.sp28 = *(s32 *)((s8 *)(&lbl_80437860.value) + 8);
        request_follow_camera_offsets((void *) (&stack.sp20), (void *) (&stack.sp2C), (int) (0xFFFFU));
        return;
    }
    stack.sp14 = *(s32 *)((s8 *)(&lbl_8043786C.value) + 0);
    stack.sp18 = *(s32 *)((s8 *)(&lbl_8043786C.value) + 4);
    stack.sp1C = *(s32 *)((s8 *)(&lbl_8043786C.value) + 8);
    stack.sp8 = *(s32 *)((s8 *)(&boss4_type3_follow_camera_offsets.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&boss4_type3_follow_camera_offsets.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&boss4_type3_follow_camera_offsets.value) + 8);
    request_follow_camera_offsets((void *) (&stack.sp8), (void *) (&stack.sp14), (int) (0xFFFFU));
}
extern int fold_flush_6;
#pragma pop

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (is_split_screen() != 0) {
        if (*(u16 *)((s8 *)arg0 + 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) *(u16 *)((s8 *)arg0 + 0x3BA) != (s32) local_client_id) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        *(s32 *)((s8 *)arg0 + 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = *(s32 *)((s8 *)arg0 + 0x3D8) % 39;
    if (temp_r30 == 0) {
        TBoss4Type3::spawn_effect(0x60, 0xF, (s16) *(u16 *)((s8 *)arg0 + 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        ((s32 (*)(s32, s32, s32, s32))play_sound_effect)(0x4003C133, 0, 0, 0);
    }
    *(s32 *)((s8 *)arg0 + 0x3D8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3D8) + 1);
}

void handle_damage_taken__11TBoss4Type3FPv(O_80059618 *o) {
    u8 *p;
    s32 i;
    u32 e;
    if (o->f3ba == 0xFFFF || o->f374 == 2 || o->f374 == 3 || o->f32c >= o->f3e4 ||
        (p = (u8 *)get_player_by_client_id((u16)(o->f3ba))) == NULL) {
        o->f3e4 = o->f32c;
        return;
    }
    drain_player_hp(o->f3ba, o->f3e4 - o->f32c);
    o->f3e4 = o->f32c;
    TBoss4Type3::create_yutai((void *)o, (void *)2, (void *)(o->f3ba));
    Vec_80059618 pos = *(Vec_80059618 *)(p + 0x2FC);
    Vec_80059618 tgt = o->f480;
    Vec_80059618 dir;
    VecCopy__FP3VecPC3Vec(&dir, &tgt);
    subtract_vector(&dir, &pos);
    if (vector_length(&dir) <= lbl_805D8C64) {
        return;
    }
    normalize_vector(&dir);
    dir.x *= lbl_805D8C68;
    dir.y *= lbl_805D8C68;
    dir.z *= lbl_805D8C68;
    for (i = 0; i < 8; i++) {
        e = ((u32 (*)(void *, s32))spawn_particle_effect)(&pos, 0x38);
        if (e != 0) {
            ((TBoss4Type2 *)e)->set_flags(0x40);
        }
        vec3_add_to(&pos, &dir);
        if (((f32 (*)(void *, void *))xyz_distance)(&pos, &tgt) <= lbl_805D8C6C) {
            break;
        }
    }
}

void update_radar_markers__11TBoss4Type3FPv(u8 *arg0) {
    s32 c[3];
    Vec_800597A8 v;
    u32 col;
    s32 sh;
    u8 tgt;
    u16 id;
    s32 i;
    s32 d;
    Ply_80059ABC *p;
    f32 f;
    s32 n;
    s32 j;
    col = 0xFFFFA24C;
    id = *(u16 *)((s8 *)arg0 + 0x3BA);
    if (id != 0xFFFF) {
        if (id >= 4) return;
        col = boss4_type3_radar_marker_colors[id];
    }
    for (i = 0, sh = 0; i < 3; i++, sh += 8) {
        tgt = col >> sh;
        c[i] = (u8)(*(u32 *)((s8 *)arg0 + 0x3C4) >> sh);
        d = tgt - c[i];
        if (d > 0) {
            if ((c[i] = c[i] + 0x10) > tgt) c[i] = tgt;
        } else if (d < 0) {
            if ((c[i] = c[i] - 0x10) < tgt) c[i] = tgt;
        }
    }
    *(u32 *)((s8 *)arg0 + 0x3C4) = c[0] | ((c[2] << 16) | 0xFF000000 | (c[1] << 8));
    if (TBoss4Type3__data_805D8C40 == *(f32 *)((s8 *)arg0 + 0x3B0) && (*(s32 *)((s8 *)arg0 + 0x3C0) & 4)) {
        add_radar_scaled_marker(arg0 + 0x2FC, -1, 1, 1, lbl_805D8C70);
    } else {
        add_radar_scaled_marker(arg0 + 0x2FC, *(u32 *)((s8 *)arg0 + 0x3C4), 1, 1, lbl_805D8C70);
    }
    if (!(*(s32 *)((s8 *)arg0 + 0x3C0) & 1) && *(u16 *)((s8 *)arg0 + 0x3BA) != 0xFFFF) {
        p = get_player_by_client_id((u16)(*(u16 *)((s8 *)arg0 + 0x3BA)));
        if (p != NULL) {
            VecCopy__FP3VecPC3Vec(&v, (u8 *)p + 0x38);
            subtract_vector(&v, arg0 + 0x38);
            v.y = TBoss4Type3__data_805D8C40;
            f = vector_length(&v);
            if (!(f < lbl_805D8C68)) {
                n = (s32)(f / lbl_805D8C68);
                if (n > 0xE) n = 0xE;
                normalize_vector(&v);
                v.x *= lbl_805D8C68;
                v.z *= lbl_805D8C68;
                {
                Vec_800597A8 w = *(Vec_800597A8 *)(arg0 + 0x38);
                vec3_add_to(&w, &v);
                for (j = 0; j < n; j++) {
                    add_radar_scaled_marker(&w, boss4_type3_radar_marker_colors[*(u16 *)((s8 *)arg0 + 0x3BA)], 1, 1, lbl_805D8C74);
                    vec3_add_to(&w, &v);
                }
                }
            }
        }
    }
    (*(s32 *)((s8 *)arg0 + 0x3C0))++;
}

}

extern "C" {

void TBoss4Type3::calc_grid_index() {
    *(s32 *)((s8 *)this + 0x3AC) = (s32) (((u32) -(*(s32 *)((s8 *)this + 0x60) + 0x800) >> 0xCU) & 0xF);
    *(s32 *)((s8 *)this + 0x3A8) = (s32) (((u32) -(*(s32 *)((s8 *)this + 0x60) + 0x800) >> 0xCU) & 0xF);
}

void TBoss4Type3::turn_toward_player(s32 arg1) {
    Obj_80059ABC *self = (Obj_80059ABC *)this;
    Ply_80059ABC *p;
    if ((u16)arg1 != 0xFFFF) {
        p = get_player_by_client_id((u16)((u16)arg1));
        if (p != NULL) {
            self->f60 = approach_angle_limited(self->f60, (s32)(lbl_80437890[0] * atan2_float(p->f38 - lbl_805D8C7C, p->f40)), 0x888);
            calc_grid_index();
        }
    }
}

s32 TBoss4Type3::get_random_scaled(void * _w0) {
    return (s32) (lbl_805D8C80 * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)());
}

typedef char TypedVector_80059B78_size[(sizeof(TypedVector_80059B78) == 12) ? 1 : -1];
s32 TBoss4Type3::choose_attack_heading_sector() {
    s32 arg0 = (s32)this;
    TypedVector_80059B78 sp8;
    f32 temp_f0;
    u16 temp_r3;
    temp_r3 = ((u16 (*)(void))pick_random_target_player__11TBoss4Type3Fv)();
    if ((temp_r3 == 0xFFFFU) || (TBoss4Type3__sub_8005254C(temp_r3) == 0)) {
        return TBoss4Type3::get_random_scaled((void *)((void *) (arg0)));
    }
    VecCopy__FP3VecPC3Vec((void *) (&sp8), (void *) (((s32)get_player_by_client_id((int) (temp_r3))) + 0x38));
    temp_f0 = sp8.f.x - lbl_805D8C7C;
    sp8.f.x = temp_f0;
    return ((u32) ((s32) ((*(const f64 *)&lbl_80437890) * atan2_float((f32) (-temp_f0), (f32) (sp8.f.z))) + 0x800) >> 0xCU) & 0xF;
}

#pragma push
#pragma fp_contract on
void TBoss4Type3::interp_position_between_nodes() {
    u8 *arg0 = (u8 *)this;
    Vec_80059C20 pts[2];
    s32 ids[2];
    s32 id;
    Vec_80059C20 *p;
    s32 a;
    s32 i;

    a = *(s32 *)((s8 *)arg0 + 0x3AC) << 12;
    *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited(*(s32 *)((s8 *)arg0 + 0x60), -(a + (s32)(*(f32 *)((s8 *)arg0 + 0x39C) * (f32)((s32 (*)(s32, s32))angle_diff_s16)(a, *(s32 *)((s8 *)arg0 + 0x3A8) << 12))), 0x888);
    ids[0] = *(s32 *)((s8 *)arg0 + 0x3A4);
    ids[1] = *(s32 *)((s8 *)arg0 + 0x3A0);
    for (i = 0; i < 2; i++) {
        id = ids[i];
        switch (id) {
        case 16:
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&pts[i], &boss4_type3_default_position);
            break;
        case 17:
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&pts[i], &boss4_type3_interp_origin_vec);
            break;
        default:
            p = &pts[i];
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(p, &boss4_type3_default_position);
            id <<= 12;
            p->x += lbl_805D8C84 * sin_table_lookup(id);
            p->z += lbl_805D8C88 * cos_table_lookup(id);
            break;
        }
    }
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x38, &pts[1]);
    subtract_vector(arg0 + 0x38, &pts[0]);
    *(f32 *)((s8 *)arg0 + 0x38) *= *(f32 *)((s8 *)arg0 + 0x39C);
    *(f32 *)((s8 *)arg0 + 0x3C) *= *(f32 *)((s8 *)arg0 + 0x39C);
    *(f32 *)((s8 *)arg0 + 0x40) *= *(f32 *)((s8 *)arg0 + 0x39C);
    vec3_add_to(arg0 + 0x38, &pts[0]);
}
extern int fold_flush_7;
#pragma pop

}

extern "C" {

void TBoss4Type3::spawn_random_effect() {
    s32 arg0 = (s32)this;
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)());
    send_packed_action((s32)(0xF), (s32)(temp_r5), (s32)(temp_r5));
}

void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((arg2 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3::send_packed_action(s32 arg1, s32 arg2, s32 arg3) {
    Obj_80059F04 *self = (Obj_80059F04 *)this;
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((arg2 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((arg3 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1) {
    if (self->target != 0) {
        ((TBoss4DarkFalz *)(self->target))->send_code_25_4((arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

#pragma push
#pragma opt_common_subs off
void update_scale_sound__11TBoss4Type3FPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r31;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x374);
    temp_f31 = *(f32 *)((s8 *)arg0 + 0x3B0);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        temp_f1 = *(f32 *)((s8 *)var_r31 + 0x3B0) + lbl_805D8C90;
        *(f32 *)((s8 *)var_r31 + 0x3B0) = temp_f1;
        if (temp_f1 > TBoss4Type3__data_805D8C34) {
            *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        }
    } else {
        var_r3 = *(s32 *)((s8 *)var_r31 + 0x3B4);
        *(s32 *)((s8 *)var_r31 + 0x3B4) = (s32) (var_r3 + 1);
        temp_r0_2 = *(s32 *)((s8 *)var_r31 + 0x3B4);
        if (temp_r0_2 < 0x78) {
            *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        } else if (temp_r0_2 < 0x96) {
            temp_f1_2 = *(f32 *)((s8 *)var_r31 + 0x3B0) + lbl_805D8C94;
            *(f32 *)((s8 *)var_r31 + 0x3B0) = temp_f1_2;
            if (temp_f1_2 < TBoss4Type3__data_805D8C40) {
                *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
            }
        } else if (temp_r0_2 < 0x10E) {
            *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
        } else if (temp_r0_2 < 0x12C) {
            temp_f1_3 = *(f32 *)((s8 *)var_r31 + 0x3B0) + lbl_805D8C98;
            *(f32 *)((s8 *)var_r31 + 0x3B0) = temp_f1_3;
            if (temp_f1_3 > TBoss4Type3__data_805D8C34) {
                *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            }
        } else {
            *(f32 *)((s8 *)var_r31 + 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            *(s32 *)((s8 *)var_r31 + 0x3B4) = 0;
        }
        if (((TBoss4Type3__data_805D8C40 == temp_f31) && (*(f32 *)((s8 *)var_r31 + 0x3B0) > TBoss4Type3__data_805D8C40)) || ((TBoss4Type3__data_805D8C34 == temp_f31) && (*(f32 *)((s8 *)var_r31 + 0x3B0) < TBoss4Type3__data_805D8C34))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003B02F;
            var_r5 = 0;
            var_r6 = 1;
            ((s32 (*)(s32, s32, s32, s32))play_sound_effect)((s32)((int) (0x4003B02F)), (s32)((int) (var_r4)), (s32)((int) (0)), (s32)((int) (1)));
        }
        if ((temp_f31 > TBoss4Type3__data_805D8C40) && (TBoss4Type3__data_805D8C40 == *(f32 *)((s8 *)var_r31 + 0x3B0))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003AD30;
            var_r5 = 0;
            var_r6 = 1;
            ((s32 (*)(s32, s32, s32, s32))play_sound_effect)((s32)((int) (0x4003AD30)), (s32)((int) (var_r4)), (s32)((int) (0)), (s32)((int) (1)));
        }
    }
}
extern int fold_flush_8;
#pragma pop

}

extern "C" {

void copy_positions_to_parts__11TBoss4Type3FPv(Obj_8005A1AC *arg0) {
    Vec_8005A1AC *pos[8] = {
        &arg0->f48c, &arg0->f498, &arg0->f4d4, &arg0->f4e0,
        &arg0->f444, &arg0->f450, &arg0->f45c, 0
    };
    Vec_8005A1AC **p = pos;
    s32 i;
    for (i = 0; i < 8; i++, p++) {
        if (arg0->f404[i] != 0 && *p != 0) {
            copy_pos__11TNowLoadingFPv(arg0->f404[i], *p);
        }
    }
    if (arg0->f3ba == 0xFFFF) {
        copy_pos__11TNowLoadingFPv(arg0->f404[7], lbl_80487150);
    } else {
        copy_pos__11TNowLoadingFPv(arg0->f404[7], &arg0->f480);
    }
}

void TBoss4Type3::destroy_parts() {
    Obj_8005A2A4 *self = (Obj_8005A2A4 *)this;
    s32 i;
    for (i = 0; i < 13; i++) {
        if (self->parts[i] != 0) {
            TBoss4Type2::request_destroy((u32)(self->parts[i]));
            self->parts[i] = 0;
        }
    }
}

void TBoss4Type3::create_particle_emitters() {
    Obj_8005A300 *self = (Obj_8005A300 *)this;
    s32 i;
    for (i = 0; i < 8; i++) {
        self->f404[i] = ((u32 (*)(void *, s32))create_particle_emitter)(self->f38, boss4_type3_effect_ids[i]);
        if (self->f404[i] != 0) {
            ((TBoss4Type2 *)(self->f404[i]))->set_flags(0x40);
        }
    }
    for (; i < 13; i++) {
        self->f404[i] = 0;
    }
}

void TBoss4Type3::set_action_from_table(s32 arg1) {
    Type3Handler m;
    TBoss4Type3__sub_8005A150();
    this->m_374 = arg1;
    set_anim_state(boss4_type3_states[this->m_374].animation);
    m = boss4_type3_states[this->m_374].enter;
    if (m != 0) {
        (this->*m)();
    }
}

void TBoss4Type3__sub_8005A438(Obj_8005A438 *self) {
    Pair_8005A438 b;
    Pair_8005A438 a;
    Words_8005A438 tmp;
    Pair_8005A438 *pb = &b;
    a.p = lbl_80486FB0;
    a.f = self->f3b0;
    b.p = boss4_type3_index_table;
    b.f = TBoss4Type3__data_805D8C34 - a.f;
    if (a.f < lbl_805D8C3C) {
        tmp.p = lbl_80486FB0;
        tmp.w = *(u32 *)&a.f;
        ((TBoss4Type3 *)(&a))->copy_pair(pb);
        ((TBoss4Type3 *)pb)->copy_pair(&tmp);
    }
    ((TBoss4Type3 *)self)->draw_model_set((const s32 *)a.p, a.f);
    ((TBoss4Type3 *)self)->draw_model_set((const s32 *)b.p, b.f);
}

void TBoss4Type3::copy_pair(void* q) { *(u32*)((char*)this + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)this + 0x4) = *(f32*)((char*)q + 0x4); }

}

#pragma push
#pragma opt_propagation off
void TBoss4Type3::draw_model_set(const s32 *tbl, f32 t) {
    f32 c;
    s32 i;
    f32 v;
    s32 off;

    if (this->m_3f0 < 0 || this->m_3f0 >= 0xA) {
        return;
    }
    v = this->m_3f4;
    c = TBoss4Type3__data_805D8C40;
    if (v < c || v >= lbl_805D8C9C) {
        return;
    }
    if (c == t) {
        return;
    }
    if (t < TBoss4Type3__data_805D8C34) {
        TObjPlayer__sub_80052390(t);
    } else if (tbl == (const s32 *)lbl_80486FB0) {
        TBoss6PlotFalz__sub_802AC008(this->m_3e8, this->m_3ec);
    }
    model_render_flags |= 0x20000;
    TObjEneRe4Sorcerer__sub_801E3F1C(TBoss4Type3__data_805D8C40, this->m_3dc);
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 3; i++) {
        TObjFish::set_global_param(TObjFish__sub_8001EDB0(this->m_390, tbl[i]));
        off = i;
        ((TObjFish *)((s32)this->render_lists[off]))->set_draw_callback_list();
        draw_model_motion(get_bml_model(this->m_390, tbl[i]), get_bml_motion(this->m_390, ((Type3MotionView *)&TBoss4Type3__anim_state_table)[this->m_3f0].motions[i]), this->m_3f4);
        clear_render_callback__8TObjFishFv((s32)this->render_lists[off]);
    }
    clear_global_state__10TObjPlayerFv();
    model_render_flags &= ~0x20000;
    if (t < TBoss4Type3__data_805D8C34) {
        TObjPlayer::sync_player_globals();
        return;
    }
    if (tbl == (const s32 *)lbl_80486FB0) {
        TBoss6PlotFalz::update_camera_target();
    }
}
#pragma pop

extern "C" {

void TBoss4Type3::set_anim_state(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    if (arg1 != -1) {
        *(s32 *)((s8 *)arg0 + 0x3F0) = arg1;
        *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
        *(s32 *)((s8 *)arg0 + 0x400) = (s32) *(s32 *)((s8 *)((u8 *)(&TBoss4Type3__anim_state_table.value) + (arg1 * 0x14)) + 0);
    }
}

#pragma push
#pragma opt_common_subs off
void update_phase_timer__11TBoss4Type3FPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x3FC) = 0;
    *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) (*(f32 *)((s8 *)arg0 + 0x3F4) + *(f32 *)((s8 *)arg0 + 0x3F8));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x400);
    switch (temp_r0) {
    case 0:
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3F4);
        if (temp_f1 >= lbl_805D8C9C) {
            *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) (temp_f1 - lbl_805D8C9C);
            *(s32 *)((s8 *)arg0 + 0x3FC) = 1;
        }
        break;
    case 1:
        if (*(f32 *)((s8 *)arg0 + 0x3F4) >= lbl_805D8CA0) {
            *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) lbl_805D8CA0;
            *(s32 *)((s8 *)arg0 + 0x3FC) = 1;
        }
        break;
    case 2:
        if (*(f32 *)((s8 *)arg0 + 0x3F4) >= lbl_805D8CA0) {
            *(s32 *)((s8 *)arg0 + 0x3F0) = (s32) *(s32 *)((s8 *)((u8 *)&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__anim_state_table).value + (*(s32 *)((s8 *)arg0 + 0x3F0) * 0x14)) + 4);
            *(s32 *)((s8 *)arg0 + 0x400) = (s32) *(s32 *)((s8 *)(&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__anim_state_table).value) + (*(s32 *)((s8 *)arg0 + 0x3F0) * 0x14));
            *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
            *(s32 *)((s8 *)arg0 + 0x3FC) = 1;
        }
        break;
    }
    temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x3F4);
    if ((temp_f1_2 < TBoss4Type3__data_805D8C40) || (temp_f1_2 >= lbl_805D8C9C)) {
        *(f32 *)((s8 *)arg0 + 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
    }
}
extern int fold_flush_9;
#pragma pop

void TBoss4Type3::draw() {
    ((void (*)(void *))toggle_particle_effect__10TObjPlayerFv)(this);
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)((void *)((char *)this + 56));
    ((void (*)(int, void *))rotate_matrix_y)(0, *(void **)((s8 *)this + 0x60));
    ((void (*)(void *))TBoss4Type3__sub_8005A438)(this);
    ((void (*)(void))pop_matrix)();
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)((void *)((char *)this + 1152));
    ((void (*)(int, void *))rotate_matrix_y)(0, *(void **)((s8 *)this + 0x60));
    TObjPlayer::draw_player_model_by_id(*(u16 *)((s8 *)this + 0x3BA), *(f32 *)((s8 *)this + 0x3C8));
    ((void (*)(void))pop_matrix)();
    TParticleCtrl::end_effect_render();
}

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) + lbl_805D8C68);
}

void TBoss4Type3__sub_8005A86C(void* p) { ((TBoss4Type3 *)p)->draw(); }

}
#undef TBoss4Type3__anim_state_table

extern "C" { extern const f32 lbl_805D8CAC; }
namespace Type3Tick {
extern "C" {
s32 TBoss4Type3__sub_8005254C(u16);
s32 is_field378_zero__14TBoss4DarkFalzFv(void *);
void update_phase_timer__11TBoss4Type3FPv(u8 *arg0);
void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
void update_collisions__10TObjPlayerFv(void *);
void submit_cursor_candidate(void *, int);
void update_radar_markers__11TBoss4Type3FPv(u8 *arg0);
void update_scale_sound__11TBoss4Type3FPv(u8 *arg0);
struct O_80059618;
struct Obj_8005A1AC;
struct Ply_80059ABC;
void handle_damage_taken__11TBoss4Type3FPv(O_80059618 *o);
void copy_positions_to_parts__11TBoss4Type3FPv(Obj_8005A1AC *arg0);
void scroll_strips__11TBoss4Type2Fv(void *);
Ply_80059ABC * get_player_by_client_id(u16);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
void request_follow_camera_default_offsets__11TBoss4Type3FPv(u8 *arg0);
void draw_motion_trail__11TBoss4Type3FPviiii(void *, s32, s32, void *, s32);
u8 * lookup_entry_by_value__10TObjPlayerFPvf(s32);
s32 push_matrix();
s32 set_matrix_identity(int);
f32 post_translate_matrix(void *);
s32 rotate_matrix_y(int, int);
s32 matrix_mult_vec(int, void *, void *);
s32 pop_matrix();
void copy_pos__11TNowLoadingFPv(void *, void *);
void __dt__11TBoss4Type3FPvs(void *, s16);
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
s32 init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);
s32 get_bml_motion(s32, s32);
s32 get_bml_model(s32, s32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();

}
}

#pragma push
#pragma fp_contract on
void TBoss4Type3::run_task() {
    u8 v[2][0xC];
    Type3Handler fn;
    void *p;
    f32 lim;
    u8 *e;

    if (this->m_3ba != 0xFFFF && Type3Tick::TBoss4Type3__sub_8005254C(this->m_3ba) == 0) {
        this->m_3ba = 0xFFFF;
    }
    if (this->m_3b8 != 0xFFFF && Type3Tick::TBoss4Type3__sub_8005254C(this->m_3b8) == 0) {
        this->m_3b8 = 0xFFFF;
    }
    if (Type3Tick::is_field378_zero__14TBoss4DarkFalzFv((void *)this->m_38c)) {
        fn = boss4_type3_states[this->m_374].advance;
        if (fn) {
            (this->*fn)();
        }
    }
    fn = boss4_type3_states[this->m_374].update;
    if (fn) {
        (this->*fn)();
    }
    Type3Tick::update_phase_timer__11TBoss4Type3FPv((u8 *)this);
    Type3Tick::advance_afterimage__11TBoss4Type3FPv((u8 *)this);
    if (this->m_3a0 != 17) {
        this->m_394->flags |= 1;
        Type3Tick::update_collisions__10TObjPlayerFv(this);
        Type3Tick::submit_cursor_candidate(this, -1);
    } else {
        this->m_394->flags &= ~1;
    }
    Type3Tick::update_radar_markers__11TBoss4Type3FPv((u8 *)this);
    Type3Tick::update_scale_sound__11TBoss4Type3FPv((u8 *)this);
    this->m_394->radius = this->m_3b0 * (f32)(this->m_3cc - this->m_3d0) + (f32)this->m_3d0;
    Type3Tick::handle_damage_taken__11TBoss4Type3FPv((Type3Tick::O_80059618 *)this);
    if (this->m_374 != 2) {
        Type3Tick::copy_positions_to_parts__11TBoss4Type3FPv((Type3Tick::Obj_8005A1AC *)this);
        Type3Tick::scroll_strips__11TBoss4Type2Fv(&this->m_378);
    }
    if (this->m_3ba == 0xFFFF) {
        if ((this->m_3c8 -= 0.06666667f) < 0.0f) {
            this->m_3c8 = 0.0f;
        }
    } else {
        if ((this->m_3c8 += 0.06666667f) > 1.0f) {
            this->m_3c8 = 1.0f;
        }
        if (Type3Tick::get_player_by_client_id(this->m_3ba) == 0) {
            this->m_3c8 = 0.0f;
        }
    }
    Type3Tick::update_target_effect_timer__11TBoss4Type3FPv(this);
    this->m_3d4 = this->m_32c;
    Type3Tick::request_follow_camera_default_offsets__11TBoss4Type3FPv((u8 *)this);
    if ((this->m_3dc += 0.022222223f) >= 1.0f) {
        this->m_3dc -= 1.0f;
    }
    lim = this->m_3f4;
    if (lim > lbl_805D8CA0) {
        lim = lbl_805D8CA0;
    }
    p = Type3Tick::alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != 0) {
        p = (void *)Type3Tick::init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lim, lim, lbl_805D8CAC);
    }
    Type3Tick::set_global_flag__10TObjPlayerFv();
    Type3Tick::draw_motion_trail__11TBoss4Type3FPviiii(p, Type3Tick::get_bml_model(this->m_390, ((s32 *)lbl_80486FB0)[0]),
        Type3Tick::get_bml_motion(this->m_390, TBoss4Type3__anim_state_table[this->m_3f0].motions[0]),
        boss4_type3_run_task_params, 0);
    Type3Tick::clear_global_state__10TObjPlayerFv();
    e = ((u8 *(*)(void *, f32))Type3Tick::lookup_entry_by_value__10TObjPlayerFPvf)(p, lim);
    Type3Tick::push_matrix();
    Type3Tick::set_matrix_identity(0);
    Type3Tick::post_translate_matrix(&this->m_38);
    Type3Tick::rotate_matrix_y(0, this->m_60);
    Type3Tick::matrix_mult_vec(0, e, v[0]);
    Type3Tick::matrix_mult_vec(0, e + 0xC, v[1]);
    Type3Tick::pop_matrix();
    if (e != 0) {
        if (this->effect_parts[5] != 0) {
            Type3Tick::copy_pos__11TNowLoadingFPv(this->effect_parts[5], v[0]);
        }
        if (this->effect_parts[6] != 0) {
            Type3Tick::copy_pos__11TNowLoadingFPv(this->effect_parts[6], v[1]);
        }
    }
    Type3Tick::__dt__11TBoss4Type3FPvs(p, 1);
    this->m_3e8 += -0.06666667f;
    if (this->m_3e8 < 0.0f) {
        this->m_3e8 = 0.0f;
    }
    this->m_3ec = (f32)this->m_32c / (f32)this->m_33e;
}

#pragma pop
extern "C" {

void reset_action_to_3__11TBoss4Type3FPv(Obj_8005ACBC *self) {
    if (self->f374 != 3 && self->f374 != 2) {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        ((TBoss4Type3 *)self)->set_action_from_table(3);
    }
}

void init_effect__11TBoss4Type3FPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
    *(f32 *)((s8 *)arg0 + 0x3E8) = (f32) TBoss4Type3__data_805D8C34;
    ((s32 (*)(int, void *, int, int, void *))play_sound_effect)(0x4003B734, arg0 + 0x38, 0, 1, arg0);
}

S_8005AD50 *destroy__11TBoss4Type3FPvs(S_8005AD50 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = __vt__11TBoss4Type3;
        fn_8004AA04(o->f378);
        ((TBoss4Type3 *)o)->destroy_parts();
        if (o->f51c != 0) {
            __dt__11TBoss4Type3FPvs(o->f51c, 1);
            o->f51c = 0;
        }
        if (o->f524 != 0) {
            queue_destruction__7TObjectFv(o->f524);
            o->f524 = 0;
        }
        if (o->f520 != 0) {
            __dt__11TBoss4Type3FPvs(o->f520, 1);
            o->f520 = 0;
        }
        if (o->f528 != 0) {
            queue_destruction__7TObjectFv(o->f528);
            o->f528 = 0;
        }
        for (i = 0; i < 3; i++) {
            TObjFish::init_state_1(o->fx[i]);
            o->fx[i] = 0;
        }
        free_collision_body_parts(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

void *alloc__23TAdSinglePlyChrSelectGCFv(int);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void draw_trail_with_colors(s32, s32, s32, s32, s32);
s32 init_trail_buffer__11TBoss4Type3FPvifff(void *, s32, f32, f32, f32);

extern const f32 lbl_805D8CAC;

Self_8005AE60 *TBoss4Type3__ct(Self_8005AE60 *self, s32 arg1, s32 *arg2) {
    s32 i;
    s32 model;
    s32 p;

    ((TObjEnemy *)self)->initialize((void*)arg1);
    self->vt = __vt__11TBoss4Type3;
    self->f0 = (s32)TBoss4Type3_name;
    ((TObjPlayer *)self)->add_flags_2e4(8);
    self->f38C = arg2[0];
    ((VObj_8005AE60 *)self)->m79(arg2 + 1);
    self->f390 = TBoss4Uro::get_instance_count();
    self->f24 = 0;
    self->f34 = 0;
    VecCopy__FP3VecPC3Vec(self->v38, boss4_type3_start_position);
    self->f60 = 0;
    VecCopy__FP3VecPC3Vec(self->v44,
        (void *)VecCopy__FP3VecPC3Vec(self->v50,
            (void *)VecCopy__FP3VecPC3Vec(self->v74, self->v38)));
    self->f394 = init_collision_body_parts(self, boss4_type3_collision_body_desc, 1);
    VecCopy__FP3VecPC3Vec(self->v2FC, self->v38);
    self->f308 = self->f30C = self->f310 = TBoss4Type3__data_805D8C40;
    self->f2A8 = 0;
    bind_enemy_combat_stats(self, (int)register_boss__6TLobbyFl(0x38), dispatch_shared_handler_b__6TLobbyFl(0x38), register_object__6TLobbyFl(0x38));
    self->f33E = self->f3E4 = self->f32C;
    ((TBoss3Volopt *)self)->reset_photon_effect();
    ((TObjEneLappy *)self)->set_param(0x2F);
    self->f3F0 = 0;
    self->f3FC = 0;
    self->f3F8 = lbl_805D8CAC;
    self->f3F4 = TBoss4Type3__data_805D8C40;
    for (i = 0; i < 3; i++) {
        self->a438[i] = ((s32 (*)(void *, void *))TObjFish__sub_800E3124)(((void **)boss4_type3_effect_desc_ptr_table)[i], &self->a444[i]);
    }
    set_global_flag__10TObjPlayerFv();
    model = get_bml_model(self->f390, ((s32 *)lbl_80486FB0)[0]);
    p = (s32)alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != 0) {
        p = init_trail_buffer__11TBoss4Type3FPvifff((void *)p, 2, lbl_805D8C58, lbl_805D8C5C, lbl_805D8CAC);
    }
    *(s32 *)((u8 *)self + 0x51C) = p;
    draw_trail_with_colors(*(s32 *)((u8 *)self + 0x51C), model, get_bml_motion(self->f390, ((s32 *)&TBoss4Type3__anim_state_table)[0x44 / 4]), 0x16, 0x17);
    *(s32 *)((u8 *)self + 0x524) = create__12TObjEneSaverFPvPv(0xA0303030, 0xFFFF0088);
    p = (s32)alloc__23TAdSinglePlyChrSelectGCFv(0x18);
    if (p != 0) {
        p = init_trail_buffer__11TBoss4Type3FPvifff((void *)p, 2, lbl_805D8C58, lbl_805D8C5C, lbl_805D8CAC);
    }
    *(s32 *)((u8 *)self + 0x520) = p;
    draw_trail_with_colors(*(s32 *)((u8 *)self + 0x520), model, get_bml_motion(self->f390, ((s32 *)&TBoss4Type3__anim_state_table)[0x58 / 4]), 9, 10);
    *(s32 *)((u8 *)self + 0x528) = create__12TObjEneSaverFPvPv(0xA0303030, 0xFFFF0088);
    clear_global_state__10TObjPlayerFv();
    ((TBoss4Type3 *)self)->create_particle_emitters();
    init_model_node_tables(self->f378, (void *)boss4_type3_model_node_specs, 2);
    self->f3D4 = self->f32C;
    self->f3CC = 0;
    self->f3D0 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFl(0x38) + 0x24);
    self->f3B0 = TBoss4Type3__data_805D8C34;
    self->f3B4 = 0;
    self->f3A4 = 0x10;
    self->f3A0 = 0x10;
    self->f3AC = 0;
    self->f3A8 = 0;
    self->f3B8 = 0xFFFF;
    self->f3BA = 0xFFFF;
    self->f3C4 = -0x5DB4;
    self->f3BC = 0;
    self->f3C8 = TBoss4Type3__data_805D8C40;
    self->f3D8 = 0;
    self->f3DC = TBoss4Type3__data_805D8C40;
    self->f3E0 = self->f32C / 2;
    self->f3E8 = TBoss4Type3__data_805D8C40;
    self->f3EC = TBoss4Type3__data_805D8C34;
    *(s32 *)((u8 *)self + 0x52C) = 0;
    ((TBoss4Type3 *)self)->set_action_from_table(0);
    return self;
}

s32 TBoss4Type3::create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(s32))__nw__7TObjectFUl)(0x530);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(s32))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = ((s32 (*)(s32, s32, s32))TBoss4Type3__ct)(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}

void TObjBs4CutAtk::render() {  }

void TObjBs4CutAtk::run_task() {
    s32 lo;
    s32 hi;
    s32 i;
    VObj_8005B218 *p;
    s32 id;
    u16 ang;

    lo = (u16)this->angle;
    hi = lo + 0x71C;
    if (query_teammate_state__9TObjEneDDFv(this) != 0) {
        return;
    }
    for (i = 0; i < TLobby::get_game_mode(); i++) {
        p = ((VObj_8005B218 * (*)(s32))get_player_data__10TObjPlayerFi)(i);
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        ang = (s32)((*(const f64 *)&lbl_80437890) * atan2_float(-(*(f32 *)((s8 *)p + 0x38) - lbl_805D8C7C), *(f32 *)((s8 *)p + 0x40)));
        if (ang >= lo && ang < hi) {
            Dmg_8005B218 d;
            id = *(s32 *)((s8 *)this + 0x10);
            d.type = 0;
            d.val = *register_boss__6TLobbyFl(0x38);
            {
                Dmg_8005B218 t = d;
                p->m21(id, &t, 0, -1, -1);
            }
        }
    }
    if (++this->age >= 6) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    this->angle += this->angle_step;
}

TObjBs4CutAtk::~TObjBs4CutAtk() {}

extern "C" {
void *__ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((s32 (*)(void))__ct__7TObjectFP7TObject)();
    *(void **)((s8 *)arg0 + 0x18) = __vt__13TObjBs4CutAtk;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjBs4CutAtk_name;
    if (arg3 == 0) {
        *(s32 *)((s8 *)arg0 + 0x1C) = -0x1554;
        *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + (arg2 << 0xC));
        *(s32 *)((s8 *)arg0 + 0x20) = 0x71C;
    } else {
        *(s32 *)((s8 *)arg0 + 0x1C) = 0xE38;
        *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + (arg2 << 0xC));
        *(s32 *)((s8 *)arg0 + 0x20) = -0x71C;
    }
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

void * create__13TObjBs4CutAtkFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__13TObjBs4CutAtkFv((void *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
    return o;
}

}
