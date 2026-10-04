#include "types.h"
#include "pso/TBoss4Zanzo.h"
#include <stddef.h>
#include "pso/TObjBs4CutAtk.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;
struct Vec_800584E4 { f32 x, y, z; };

struct Obj_8005683C;
struct Vec_80055F5C { f32 x, y, z; };

extern "C" {
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern u8 lbl_80487150[];
void TBoss4Type3__sub_8005A1AC(Obj_8005A1AC *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK add_radar_scaled_marker(void *, u32, int, int, f32);
M2C_UNK vec3_add_to(void *, void *);
f32 vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
extern u32 lbl_80487174[];
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C70;
extern const f32 lbl_805D8C74;
void TBoss4Type3__sub_800597A8(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 * create_yutai__11TBoss4Type3FPvPvPv(void *, void *, void *);
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK play_sound_effect(int, void *, int, int);
void spawn_effect__11TBoss4Type3Fsss(s32, s32, s32);
extern const f32 TBoss4Type3__data_805D8C40;
void TBoss4Type3__vt39(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 * dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 TBoss4Type2__sub_80057048(void *, int);
M2C_UNK TBoss4Type2__sub_80057128(void *);
void TBoss4Type2__sub_800573AC(u8 *arg0, s32 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
s32 angle_diff_s16(int, int);
M2C_UNK add_radar_scaled_marker(void *, u32, int, int, f32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK create__11TTecRaBartaFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK create__10TTecRaFoieFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s32, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vector_length(void *);
M2C_UNK normalize_vector(void *);
extern const f64 TBoss4Type2__data_80437750;
extern s32 lbl_80486904[];
extern s32 lbl_805D5550;
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
}

extern "C" {

struct M2CCopy_C { u8 bytes[0xc]; };

struct Stack_80055918
{
  M2C_UNK sp8;
  f32 spC;
};

typedef struct Stack_80055918 Stack_80055918;

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    M2C_UNK value;
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
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437860 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_8043786C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437878 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Obj_80059EA8 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F04 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F64 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_8005A2A4 { u8 pad[0x404]; void *parts[13]; };

struct Obj_80059ABC { u8 pad[0x60]; s32 f60; };

struct Ply_80059ABC { u8 pad[0x38]; f32 f38; u8 pad3c[4]; f32 f40; };

struct Obj_8005A300 { u8 pad[0x38]; u8 f38[0x3CC]; u32 f404[13]; };

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
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 {
    M2C_UNK value;
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
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void * get_player_data__10TObjPlayerFi(s32 i);
u16 obj_getField1c(void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv(void *);
u8 * dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s16 * register_boss__6TLobbyFPv(M2C_UNK);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 get_game_mode__6TLobbyFv();
M2C_UNK fn_80044330(void *);
M2C_UNK TObjPlayer__sub_8004433C(void *);
void fn_8004AA04(void *);
s32 TBoss4Type3__sub_8004AE60(void);
s32 TBoss4DarkFalz__sub_8004AF5C(s32, s16 *, s16 *);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u8 * create_yutai__11TBoss4Type3FPvPvPv(void *, void *, void *);
void create_horming__11TBoss4Type3FPvPvPv(void *, void *, u16);
M2C_UNK create_jisin__11TBoss4Type2FPvPv(void *, int);
s32 create__13TObjDFRecoverFP7TObjectUsPCf(void *, int, void *);
void TObjPlayer__sub_80051E9C(int, f32);
s32 TBoss4Type2__sub_800522CC(s32 n, f32 *w, s32 *t);
s32 sync_player_globals__10TObjPlayerFv();
s32 TObjPlayer__sub_80052390(f32);
M2C_UNK fn_80052420(u16, s32);
f32 TBoss4Type3__sub_800524E8(f32);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type2__sub_80055300();
s32 get_position_ptr__10TObjPlayerFPv(int);
void render__11TBoss4ZanzoFv(u8 *arg0);
void run_task__11TBoss4ZanzoFv(void *arg0);
void * __ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2);
void fn_8005586C(u8 *arg0, u8 *arg1);
void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1);
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
void TBoss4Type2__sub_8005676C(Obj_8005676C *arg0);
void TBoss4Type2__sub_8005683C(Obj_8005683C *arg0);
void apply_resta_heal__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_80056998(u8 *arg0);
void TBoss4Type2__sub_80056A54(Obj_80056A54 *arg0);
void TBoss4Type2__sub_80056B3C(void *arg0, s32 lo, s32 hi);
void TBoss4Type2__sub_80056C30(O_80056C30 *self, Vec_80056C30 *out);
void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1);
f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0);
void TBoss4Type2__sub_80056F38(Obj_80056F38 *self, s32 arg1, s32 arg2);
void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2);
void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1);
s32 TBoss4Type2__sub_80057048(void *, int);
M2C_UNK TBoss4Type2__sub_80057128(void *);
s32 TBoss4Type2__sub_80057224(Obj_80057224 *self);
void TBoss4Type2__sub_80057270(Obj_80057270 *arg0);
void TBoss4Type2__sub_800573AC(u8 *arg0, s32 arg1);
void TBoss4Type2__sub_800573D8(u8 *arg0);
void init_hanger__11TBoss4Type2FPv(void* p);
void advance_afterimage__11TBoss4Type2FPv(u8 *arg0);
void TBoss4Type2__sub_80057578(void* p);
void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0);
void init_state__11TBoss4Type2FPv(u8 *arg0);
S_800578E8 * TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag);
u8 *TBoss4Type2__ct(u8 *, M2C_UNK, s32 *);
s32 create__11TBoss4Type2Fi(s32 arg0);
void TBoss4Type2__sub_80058208(void);
void TBoss4Type2__sub_8005820C(void);
void TBoss4Type2__sub_80058210(void);
void TBoss4Type2__sub_80058214(void);
void TBoss4Type2__sub_80058218(void);
void TBoss4Type2__sub_8005821C(void);
void TBoss4Type2__sub_80058220(void);
void TBoss4Type3__vt45(S_80058224 *o);
void TBoss4Type3__vt44(S_800582B4 *o);
void TBoss4Type3__vt43(u8 *arg0);
void TBoss4Type3__vt41(void *arg0);
void TBoss4Type3__vt40(void* p);
void TBoss4Type3__vt38(void *arg0);
void TBoss4Type3__vt37(void *arg0);
void TBoss4Type3__vt36(O_80058848 *o);
void TBoss4Type3__vt35(void* p);
void TBoss4Type3__vt34(void *arg0);
void TBoss4Type3__vt33(u8 *arg0);
void TBoss4Type3__vt32(void* p);
void TBoss4Type3__vt31(void *arg0);
void TBoss4Type3__vt30(O_80058BA0 *o);
void TBoss4Type3__vt29(O_80058D70 *self);
void TBoss4Type3__vt28(void *arg0);
void TBoss4Type3__vt27(u8 *arg0);
void TBoss4Type3__vt26(Obj_80058E64 *self);
void TBoss4Type3__vt25(u8 *arg0);
void TBoss4Type3__vt24(u8 *arg0);
void TBoss4Type3__vt23(Obj_80059010 *self);
void TBoss4Type3__vt22(u8 *arg0);
void TBoss4Type3__vt9(O_800590F4 *o);
void TBoss4Type3__vt8(u8 *arg0);
void TBoss4Type3__vt7(u8 *arg0);
void TBoss4Type3__vt6(u8 *arg0);
void TBoss4Type3__vt5(void);
void TBoss4Type3__vt4(void *arg0);
void TBoss4Type3__vt3(Obj_80059390 *self);
void TBoss4Type3__vt2(void *arg0);
void TBoss4Type3__vt1(void* p);
void TBoss4Type3__vt0(void* p);
void TBoss4Type3__sub_80059450(u8 *arg0);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
void TBoss4Type3__sub_80059618(O_80059618 *o);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
void calc_grid_index__11TBoss4Type3FPv(void *arg0);
void TBoss4Type3__sub_80059ABC(Obj_80059ABC *self, s32 arg1);
s32 get_random_scaled__11TBoss4Type3Fv(void);
void TBoss4Type3__sub_80059C20(u8 *arg0);
void spawn_random_effect__11TBoss4Type3Fi(s32 arg0);
void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2);
void TBoss4Type3__sub_80059F04(Obj_80059F04 *self, s32 arg1, s32 arg2, s32 arg3);
void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1);
void TBoss4Type3__sub_80059FC4(u8 *arg0);
void TBoss4Type3__sub_8005A150(void);
void TBoss4Type3__sub_8005A2A4(Obj_8005A2A4 *self);
void TBoss4Type3__sub_8005A300(Obj_8005A300 *self);
void TBoss4Type3__sub_8005A398(TBoss4Type3_8005A398 *self, s32 arg1);
void TBoss4Type3__sub_8005A438(Obj_8005A438 *self);
void copy_pair__11TBoss4Type3FPvPv(void* p, void* q);
void TBoss4Type3__sub_8005A4F4(void *, void *, f32);
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1);
void TBoss4Type3__sub_8005A6A4(u8 *arg0);
void draw__11TBoss4Type3FPv(void *arg0);
void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
void TBoss4Type3__sub_8005A86C(void* p);
void TBoss4Type3__sub_8005ACBC(Obj_8005ACBC *self);
void init_effect__11TBoss4Type3FPv(u8 *arg0);
S_8005AD50 * TBoss4Type3__sub_8005AD50(S_8005AD50 *o, s16 flag);
s32 TBoss4Type3__ct(s32, s32, s32);
s32 create__11TBoss4Type3Fi(s32 arg0);
void render__13TObjBs4CutAtkFv(void);
void * __ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void * create__13TObjBs4CutAtkFPvPvPv(void *arg0, void *arg1, void *arg2);
M2C_UNK create__11TBoss4BishiFi(void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
s32 request_follow_camera_offsets(void *, void *, int);
void request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, int);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 query_teammate_state__9TObjEneDDFPv(void *);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
int toggle_particle_effect__10TObjPlayerFv(void*);
u8 * lookup_entry_by_value__10TObjPlayerFPvf(s32);
void __dt__11TBoss4Type3FPvs(void *, s16);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
void init_state_1__8TObjFishFPv(void *);
s32 TObjControl__ct(s32, s32);
void __dt__9TObjEnemyFv(void *, s32);
s32 angle_diff_s16(int, int);
s32 approach_angle_limited(s32, s32, s32);
void free_collision_body_parts(void *);
Ply_80059ABC * get_player_by_client_id(u16);
int end_effect_render__13TParticleCtrlFv(void);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK create__10TTecGrantsFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK create__9TTecMegidFiiii(void *, Vec_80058848 *, u8 *, s32);
f32 TTecResta__sub_802394B0(s32);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s32, s32);
void spawn_effect__11TBoss4Type3Fsss(s32, s32, s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
f32 vector_length(void *);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
s32 rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
f32 xyz_distance(Vec_80056C30 *, Vec_80056C30 *);
s32 draw_model_motion(int, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();

extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern const f64 TBoss4Type2__data_80437750;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BD8;
extern RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 TBoss4Type3__data_80486FC8;
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern M2C_UNK __vt__11TBoss4Zanzo[];
extern void* __vt__13TObjBs4CutAtk[];
extern s32 lbl_80437814[];
extern RecoveredGlobal_80059450_lbl_80437854 lbl_80437854;
extern RecoveredGlobal_80059450_lbl_80437860 lbl_80437860;
extern RecoveredGlobal_80059450_lbl_8043786C lbl_8043786C;
extern RecoveredGlobal_80059450_lbl_80437878 lbl_80437878;
extern const f64 lbl_80437890[];
extern Ofs_8005683C lbl_804868EC[];
extern u8 lbl_80486924[];
extern Row_8005A398 lbl_80486C98[];
extern u8 lbl_80486FB0[];
extern u8 lbl_80486FBC[];
extern Vec_80059C20 lbl_8048715C;
extern Vec_80059C20 lbl_80487168;
extern u8 lbl_80487184[];
extern void *lbl_805D27DC;
extern s32 lbl_805D27E0;
extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5550;
extern s32 lbl_805D586C;
extern "C" {
}
extern "C" {
void TBoss4Type2__vt21();
}
struct Def_804867C8 { M2C_UNK value; M2C_UNK remaining[39]; };
void TBoss4Type2__vt9(u8 *arg0);

void add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
void fn_8004AA80(void *, void *, int);
s32 get_instance_count__9TBoss4UroFv();
s32 TObjFish__sub_800E3124(void *, void *, f32);
void set_param__12TObjEneLappyFPvi(void *, int);
void bind_enemy_combat_stats(void *, int, int, int);
void initialize__9TObjEnemyFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
extern s32 lbl_804376D0[];
extern u8 lbl_804376D8[];
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
__declspec(section ".data") s32 lbl_804867C0[2] = {
    0xb, 0xa,
};
Def_804867C8 TBoss4Type2__data_804867C8 = {
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
extern s32 some_id_805c6f74;
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
void TBoss4Type3__sub_80059ABC(Obj_80059ABC *self, s32 arg1);
void TBoss4Type3__sub_8005A398(TBoss4Type3_8005A398 *self, s32 arg1);
Ply_80059ABC * get_player_by_client_id(u16);
}

extern "C" {
void TBoss4Type2__sub_8005683C(Obj_8005683C *arg0);
}

void render__11TBoss4ZanzoFv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f5;
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_f31 = (((f32) M2C_FIELD(arg0, s32 *, 0x48) / (f32) M2C_FIELD(arg0, s32 *, 0x44)) * (M2C_FIELD(arg0, f32 *, 0x40) - temp_f5)) + temp_f5;
    if (!(temp_f31 <= lbl_805D8BA0)) {
        push_matrix();
        set_global_flag__10TObjPlayerFv();
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x2C)));
        TObjPlayer__sub_80052390((f32) (temp_f31));
        draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x30)), (int) (M2C_FIELD(arg0, s32 *, 0x34)), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
        sync_player_globals__10TObjPlayerFv();
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
    }
}
extern int fold_flush_0;
#pragma pop

void run_task__11TBoss4ZanzoFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x48) + 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r4;
    if (temp_r4 >= (s32) M2C_FIELD(arg0, s32 *, 0x44)) {
        ((M2C_UNK (*)(void))queue_destruction__7TObjectFv)();
    }
}

void *__ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss4Zanzo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D27DC;
    ((void (*)(void *, void *))fn_8005586C)((void *)((char *)arg0 + 28), arg2);
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    return arg0;
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void fn_8005586C(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
}
extern int fold_flush_1;
#pragma pop

void * create_zanzo__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
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
      ((s32 (*)(int))request_destroy__11TBoss4Type2FUi)((int) temp_r3);
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
      ((s32 (*)(int, int))set_flags__11TBoss4Type2FPvUi)((int) (*new_var), (int) 0x40);
    }
  }
  if ((*((int *) (((s8 *) arg0) + 0x398))) == 0x46)
  {
    temp_r3_3 = spawn_particle_effect((void *) (arg0 + 0x468), (int) 0x13E);
    if (temp_r3_3 != 0)
    {
      ((s32 (*)(int, int))set_flags__11TBoss4Type2FPvUi)((int) temp_r3_3, (int) 0x40);
    }
    temp_r3_4 = *((u16 *) (((s8 *) arg0) + 0x3C4));
    if (temp_r3_4 != ((unsigned short) (-1)))
    {
      temp_r3_5 = ((u32 (*)(int))get_player_by_client_id)((int) temp_r3_4);
      if (temp_r3_5 != 0)
      {
        ((s32 (*)(void *, int))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (int) get_position_ptr__10TObjPlayerFPv((int) temp_r3_5));
        stack.spC += lbl_805D8BA8;
        temp_r3_6 = spawn_particle_effect((void *) (&stack.sp8), (int) 0x38);
        if (temp_r3_6 != 0)
        {
          ((s32 (*)(int, int))set_flags__11TBoss4Type2FPvUi)((int) temp_r3_6, (int) 0x40);
        }
      }
    }
    ((s32 (*)(void *))apply_resta_heal__11TBoss4Type2FPv)((void *) arg0);
    create__13TObjDFRecoverFP7TObjectUsPCf((void *) arg0, (int) (*((u16 *) (((s8 *) arg0) + 0x3C4))), (void *) (arg0 + 0x468));
  }
  temp_r0 = (*((int *) (((s8 *) arg0) + 0x398))) - 1;
  *((int *) (((s8 *) arg0) + 0x398)) = temp_r0;
  if (temp_r0 < 0)
  {
    ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)((M2C_UNK)((int) 0x4003AD1A), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 1));
    create__9TTecRestaFPvPvPv((void *) arg0, (void *) (arg0 + 0x38), (int) (*((int *) (((s8 *) arg0) + 0x428))));
    TBoss4Type2__sub_80057048((void *) arg0, (int) (*((int *) (((s8 *) arg0) + 0x424))));
  }
}

void TBoss4Type2__vt35(void) {  }

void TBoss4Type2__vt34(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x40039E21, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

void TBoss4Type2__vt24(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type2__sub_80057048)(arg0, 1);
    }
}

void TBoss4Type2__vt23(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)() < lbl_805D8BB0) {
            ((M2C_UNK (*)(void *))TBoss4Type2__sub_80056A54)(arg0);
            return;
        }
        ((M2C_UNK (*)(void *, M2C_UNK, s32))TBoss4Type2__sub_80056F90)(arg0, 4, ((s32 (*)(void *))TBoss4Type2__sub_80057224)(arg0));
    }
}

void TBoss4Type2__vt31(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x12C;
}

void TBoss4Type2__vt28(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xE1;
}

void TBoss4Type2__vt25(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

void TBoss4Type2__vt22(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

void TBoss4Type2__vt20(void) {  }

void TBoss4Type2__vt19(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
    TBoss4Type2__sub_80055300();
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

#pragma push
#pragma fp_contract on
void TBoss4Type2__vt15(u8 *arg0) {
    s32 idx = M2C_FIELD(arg0, s32 *, 0x374) - 6;
    Vec_80055F5C v = ((Vec_80055F5C *)(arg0 + 0x450))[idx];
    Vec_80055F5C p;
    s32 a;
    s32 b;
    u32 h;
    f32 t;
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x4B) {
        TBoss4Type2__sub_800573AC(arg0, lbl_80486904[idx]);
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C8) == 6 || M2C_FIELD(arg0, s32 *, 0x3C8) == 7) {
        t = M2C_FIELD(arg0, f32 *, 0x3D0);
        if (t > lbl_805D8BBC) {
            if (M2C_FIELD(arg0, u32 *, 0x434) != 0) {
                request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x434));
                M2C_FIELD(arg0, u32 *, 0x434) = 0;
            }
        } else if (t >= lbl_805D8BC0 && M2C_FIELD(arg0, u32 *, 0x434) == 0) {
            if ((M2C_FIELD(arg0, u32 *, 0x434) = create_particle_emitter(&v, 0xF7)) != 0) {
                set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, void **, 0x434), 0x40);
            }
        }
        if (M2C_FIELD(arg0, f32 *, 0x3D0) >= lbl_805D8BC0 && M2C_FIELD(arg0, f32 *, 0x3D0) <= lbl_805D8BBC) {
            play_persistent_sound(0x4003B512, arg0, arg0 + 0x38, 0, 1);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x26) {
        h = spawn_particle_effect(&v, 0xFD);
        if (h != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)h, 0x40);
        }
        play_sound_effect(0x4003A813, arg0 + 0x38, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) <= 0x26 && M2C_FIELD(arg0, s32 *, 0x398) >= 4 && !(M2C_FIELD(arg0, s32 *, 0x398) & 1)) {
        VecCopy__FP3VecPC3Vec(&p, arg0 + 0x410);
        p.x += lbl_805D8BC4 * M2C_FIELD(arg0, f32 *, 0x404);
        p.z += lbl_805D8BC4 * M2C_FIELD(arg0, f32 *, 0x40C);
        if (idx == 0) {
            create__11TTecRaBartaFPvPvPvPv(arg0, &p, &p, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x1C));
        } else {
            create__10TTecRaFoieFPvPvPvPv(arg0, &p, &p, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x18));
        }
        add_radar_scaled_marker(&p, -0x5DB4, 1, 1, lbl_805D8BC8);
        M2C_FIELD(arg0, f32 *, 0x404) *= lbl_805D8BCC;
        M2C_FIELD(arg0, f32 *, 0x40C) *= lbl_805D8BCC;
        if (vector_length(arg0 + 0x410) > lbl_805D8BD0) {
            normalize_vector(arg0 + 0x410);
            M2C_FIELD(arg0, f32 *, 0x410) *= lbl_805D8BD0;
            M2C_FIELD(arg0, f32 *, 0x418) *= lbl_805D8BD0;
            a = (s32)(TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x410), M2C_FIELD(arg0, f32 *, 0x418)));
            b = (s32)(TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3F8), M2C_FIELD(arg0, f32 *, 0x400)));
            b += angle_diff_s16(b, a);
            M2C_FIELD(arg0, f32 *, 0x3F8) = -sin_table_lookup(b);
            M2C_FIELD(arg0, f32 *, 0x400) = -cos_table_lookup(b);
        }
        M2C_FIELD(arg0, f32 *, 0x410) = lbl_805D8BD4 * M2C_FIELD(arg0, f32 *, 0x3F8) + M2C_FIELD(arg0, f32 *, 0x410);
        M2C_FIELD(arg0, f32 *, 0x418) = lbl_805D8BD4 * M2C_FIELD(arg0, f32 *, 0x400) + M2C_FIELD(arg0, f32 *, 0x418);
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) > 0x87) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32)(0x96 - M2C_FIELD(arg0, s32 *, 0x398)) / lbl_805D8BB4;
    } else if (M2C_FIELD(arg0, s32 *, 0x398) >= 0x11) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = TBoss4Type2__data_805D8BD8;
    } else if (M2C_FIELD(arg0, s32 *, 0x398) > 2) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32)(M2C_FIELD(arg0, s32 *, 0x398) - 2) / lbl_805D8BB4;
    } else {
        M2C_FIELD(arg0, f32 *, 0x3E8) = TBoss4Type2__data_805D8BAC;
    }
    TBoss4Type2__sub_80057128(arg0);
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        if (lbl_805D5550 == 3) {
            TBoss4Type2__sub_8005683C((Obj_8005683C *)arg0);
        }
        TBoss4Type2__sub_80057048(arg0, M2C_FIELD(arg0, s32 *, 0x424));
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
  var_r31 = (s32) (TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv((f32) (*((f32 *) (((s8 *) arg0) + 0x3F8))), (f32) (*((f32 *) (((s8 *) arg0) + 0x400)))));
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
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x1E) {
        set_shake_preset__11TCameraCtrlFi((int) (1));
        create_jisin__11TBoss4Type2FPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x3A0)));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) <= 0x1E) {
        play_persistent_sound((int) (0x4003AD16), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (8));
    }
}

void TBoss4Type2__vt11(void) {  }

void TBoss4Type2__vt10(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BAC);
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

void TBoss4Type2__vt9(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x398);
    if (temp_r5 > 7) {
        M2C_FIELD(arg0, f32 *, 0x39C) = ((f32 (*)(void *, f32))compute_wave_offset__11TBoss4Type2Ff)(arg0, (*(f32 *)&TBoss4Type2__data_805D8BD8) - ((f32) (temp_r5 - 7) / (f32) M2C_FIELD(arg0, s32 *, 0x420)));
    } else {
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BD8);
    }
    TBoss4Type2__sub_80057128((void *) (arg0));
    if ((s32) lbl_805D5550 == 3) {
        temp_r3 = angle_diff_s16((int) (M2C_FIELD(arg0, s32 *, 0x3A4)), (int) (M2C_FIELD(arg0, s32 *, 0x3A8)));
        if (!(M2C_FIELD(arg0, s32 *, 0x398) & 3)) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
            if ((temp_f1 > lbl_805D8BDC) && (temp_f1 < lbl_805D8BE0) && ((temp_r3 <= -0x4000) || (temp_r3 >= 0x4000))) {
                ((M2C_UNK (*)(void *))TBoss4Type2__sub_8005676C)((void *) (arg0));
            }
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (1));
    }
}

void TBoss4Type2__vt8(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*))TBoss4Type2__sub_80056998)(p); } }

void TBoss4Type2__vt7(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (*(f32 *)&TBoss4Type2__data_805D8BAC);
    M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E0) + 1);
    M2C_FIELD(arg0, s32 *, 0x398) = (s32) M2C_FIELD(arg0, s32 *, 0x41C);
}

void TBoss4Type2__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *)(arg0), (int) (2));
    }
}

void TBoss4Type2__vt5(void) {  }

void TBoss4Type2__vt4(void* p) { *(s32*)((char*)p + 0x398) = 75; }

void TBoss4Type2__vt3(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)((void *)(arg0)), (s32)((int) (2)));
        return;
    }
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type2__sub_80057048)((void *)((void *)(arg0)), (M2C_UNK)((int) (9)));
}

void TBoss4Type2__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type2__sub_80057048)(arg0, 1);
    }
}

void TBoss4Type2__vt1(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *) (arg0)), (s32)((int) (4)), (s32)((int) (TBoss4Type2__sub_80057224((Obj_80057224 *)(arg0)))));
    }
}

void TBoss4Type2__vt0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

void TBoss4Type2__sub_8005676C(Obj_8005676C *arg0) {
    Zanzo_8005676C z;
    s32 i;
    VecCopy__FP3VecPC3Vec(&z.pos, &arg0->pos);
    z.f0c = arg0->f60;
    z.f1c = arg0->f3d0;
    z.f20 = lbl_805D8BB0;
    z.f24 = TBoss4Type2__data_805D8BAC;
    z.f28 = 10;
    for (i = 0; i < 2; i++) {
        z.f10 = TObjFish__sub_8001EDB0(arg0->f390, lbl_804867C0[i]);
        z.f14 = get_bml_model(arg0->f390, lbl_804867C0[i]);
        z.f18 = get_bml_motion(arg0->f390, ((Row_8005676C *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i]);
        ((void (*)(void *, void *))create_zanzo__11TBoss4Type2FPvPv)(arg0, &z);
    }
}

void TBoss4Type2__sub_8005683C(Obj_8005683C *arg0) {
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
                    b.pos.x += lbl_804868EC[j].x;
                    b.pos.z += lbl_804868EC[j].z;
                    create__11TBoss4BishiFi(&b);
                }
            }
        }
    }
}

void apply_resta_heal__11TBoss4Type2FPv(void *arg0) {
    s16 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s16 *, 2);
    fn_80052420(M2C_FIELD(arg0, u16 *, 0x3C4), (temp_r31 / 5) + (s32) TTecResta__sub_802394B0(M2C_FIELD(((void * (*)(M2C_UNK, void *))dispatch_shared_handler_a__6TLobbyFPv)(0x37, temp_r4), s32 *, 0x1C)));
}

void TBoss4Type2__sub_80056998(u8 *arg0) {
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3E0) < 3) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4)) {
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *)((void *) (arg0))), (s32)((int)((int) (4))), (s32)((int)((void *) (TBoss4Type2__sub_80057224((Obj_80057224 *)((void *)((void *) (arg0))))))));
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x424);
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
        ((M2C_UNK (*)(void *, int, int))TBoss4Type2__sub_80056B3C)((void *) (arg0), (int) (var_r4), (int) (var_r5));
        return;
    }
    TBoss4Type2__sub_80056A54((Obj_80056A54 *)((void *) (arg0)));
}

void TBoss4Type2__sub_80056A54(Obj_80056A54 *arg0) {
    u8 *tbl = (u8 *)__vt__11TBoss4Type2;
    Grid_80056A54 grid;
    s32 r;
    s32 id;
    id = ((s32 (*)(void *))TBoss4Type3__sub_8004AE60)(arg0);
    if (arg0->f32c <= arg0->f3ec && (u16)id != 0xFFFF) {
        r = TBoss4Type2__sub_800522CC(4, (f32 *)(tbl + 0x544), (s32 *)(tbl + 0x554));
    } else {
        r = TBoss4Type2__sub_800522CC(3, (f32 *)(tbl + 0x564), (s32 *)(tbl + 0x570));
    }
    switch (r) {
    case 6:
    case 7:
        TBoss4Type2__sub_80056C30((O_80056C30 *)(arg0), (Vec_80056C30 *)(&grid));
        set_grid_pos__11TBoss4Type2FPvPv(arg0, &grid);
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, r);
        break;
    case 13:
        TBoss4Type2__sub_80056F38((Obj_80056F38 *)arg0, r, id);
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
void TBoss4Type2__sub_80056C30(O_80056C30 *self, Vec_80056C30 *out) {
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
    a1 = (s32)(TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv(-self->pos.x, -self->pos.z));
    b = (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self));
    ang = b + a1;
    ang -= 0x6000;
    out->x = s * sin_table_lookup(ang);
    out->y = TBoss4Type2__data_805D8BAC;
    out->z = s * cos_table_lookup(ang);
}
extern int fold_flush_2;
#pragma pop

void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8BF8);
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8BF8);
}

#pragma push
#pragma fp_contract on
void TBoss4Type2__sub_80056DF0(Obj_80056DF0 *arg0) {
    arg0->f3B4 = lbl_805D8BF8 * (lbl_805D8BFC + (f32)arg0->i3AC) - lbl_805D8BF4;
    arg0->f3B8 = TBoss4Type2__data_805D8BAC;
    arg0->f3BC = lbl_805D8BF8 * (lbl_805D8BFC + (f32)arg0->i3B0) - lbl_805D8BF4;
}
extern int fold_flush_3;
#pragma pop

f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8BFC * (TBoss4Type2__data_805D8BD8 - cos_table_lookup((s32) (lbl_805D8C00 * farg0)));
}

void TBoss4Type2__sub_80056F38(Obj_80056F38 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((arg2 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((arg2 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

s32 TBoss4Type2__sub_80057224(Obj_80057224 *self) {
    return (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self)) + 0x2000 + self->f3a0;
}

void TBoss4Type2__sub_80057270(Obj_80057270 *arg0) {
    s32 i;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 2; i++) {
        ((M2C_UNK (*)(s32))set_global_param__8TObjFishFi)(TObjFish__sub_8001EDB0(arg0->f390, lbl_804867C0[i]));
        switch (i) {
        case 1:
            some_id_805c6f74 |= 0x20000;
            TObjEneRe4Sorcerer__sub_801E3F1C(TBoss4Type2__data_805D8BAC, arg0->f3c0);
            TObjFish__sub_800E3074(arg0->f44c);
            ((M2C_UNK (*)(s32, s32, f32))draw_model_motion)(get_bml_model(arg0->f390, lbl_804867C0[i]),
                get_bml_motion((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i])),
                arg0->f3d0);
            clear_render_callback__8TObjFishFv(arg0->f44c);
            some_id_805c6f74 &= ~0x20000;
            break;
        default:
            TBoss6PlotFalz__sub_802AC008(arg0->f3f0, arg0->f3f4);
            ((M2C_UNK (*)(s32, s32, f32))draw_model_motion)(get_bml_model(arg0->f390, lbl_804867C0[i]),
                get_bml_motion((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i])),
                arg0->f3d0);
            update_camera_target__14TBoss6PlotFalzFv();
            break;
        }
    }
    clear_global_state__10TObjPlayerFv();
    arg0->f3e4 = 0;
}

void TBoss4Type2__sub_800573AC(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3c8) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
        M2C_FIELD(arg0, s32 *, 0x3dc) = (s32) M2C_FIELD(((u8 *)(&TBoss4Type2__data_804867C8.value) + (arg1 << 0x4)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type2__sub_800573D8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3d8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3d0) + M2C_FIELD(arg0, f32 *, 0x3d4));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3dc);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3d0);
        if (temp_f1 >= lbl_805D8C0C) {
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (temp_f1 - lbl_805D8C0C);
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3d0) >= lbl_805D8C14) {
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) lbl_805D8C14;
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3d0) >= lbl_805D8C14) {
            M2C_FIELD(arg0, s32 *, 0x3c8) = (s32) M2C_FIELD(((u8 *)&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__data_804867C8).value + (M2C_FIELD(arg0, s32 *, 0x3c8) << 0x4)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x3dc) = (s32) M2C_FIELD(&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__data_804867C8).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3c8) << 0x4));
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3d0);
    if ((temp_f1_2 < TBoss4Type2__data_805D8BAC) || (temp_f1_2 >= lbl_805D8C0C)) {
        M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
    }
}
extern int fold_flush_4;
#pragma pop

void init_hanger__11TBoss4Type2FPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); ((int (*)(void))push_matrix)(); ((int (*)(void*))post_translate_matrix)((char*)p + 0x38); ((int (*)(void*, void*))rotate_matrix_y)((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270((Obj_80057270 *)(p)); ((int (*)(void))pop_matrix)(); end_effect_render__13TParticleCtrlFv(); }

void advance_afterimage__11TBoss4Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C18);
}

void TBoss4Type2__sub_80057578(void* p) { init_hanger__11TBoss4Type2FPv((void*)(p)); }

struct Vec_80057598 { f32 x, y, z; };
class TBoss4Type2_80057598 { public: u8 pad[0x374]; s32 f374; };
union MemberAction_80057598 { s32 words[3]; void (TBoss4Type2_80057598::*action)(); };

s32 is_field378_zero__14TBoss4DarkFalzFPv(void *);
void update_collisions__10TObjPlayerFPv(void *);
void submit_cursor_candidate(void *, int);
void TBoss4Type2__sub_8004A98C(void *);
extern Vec_80057598 lbl_80437720[];
extern Vec_80057598 lbl_8043772C[];
extern const f32 lbl_805D8BD4;
extern const f32 lbl_805D8C08;
extern const f32 lbl_805D8C1C;
void TBoss4Type2__sub_80057598(u8 *arg0) {
    MemberAction_80057598 m;

    if (is_field378_zero__14TBoss4DarkFalzFPv(M2C_FIELD(arg0, void **, 0x38C)) != 0) {
        m.words[0] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].a[0];
        m.words[1] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].a[1];
        m.words[2] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].a[2];
        if (m.action != 0) {
            (((TBoss4Type2_80057598 *)arg0)->*(m.action))();
        }
    }
    m.words[0] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].b[0];
    m.words[1] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].b[1];
    m.words[2] = (s32)lbl_8048652C[M2C_FIELD(arg0, s32 *, 0x374)].b[2];
    if (m.action != 0) {
        (((TBoss4Type2_80057598 *)arg0)->*(m.action))();
    }
    TBoss4Type2__sub_800573D8(arg0);
    advance_afterimage__11TBoss4Type2FPv(arg0);
    if (TBoss4Type2__data_805D8BAC == M2C_FIELD(arg0, f32 *, 0x3E8)) {
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x394), u32 *, 0x18) |= 1;
        update_collisions__10TObjPlayerFPv(arg0);
        submit_cursor_candidate(arg0, -1);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x394), u32 *, 0x18) &= ~1;
    }
    add_radar_scaled_marker(arg0 + 0x2FC, 0xFFFFA24C, 1, 1, lbl_805D8C1C);
    if (M2C_FIELD(arg0, s32 *, 0x374) != 2) {
        Vec_80057598 pos = *(Vec_80057598 *)(arg0 + 0x38);
        Vec_80057598 dir = *(Vec_80057598 *)(arg0 + 0x38);
        dir.y = TBoss4Type2__data_805D8BAC;
        normalize_vector(&dir);
        dir.x *= lbl_805D8C08;
        dir.z *= lbl_805D8C08;
        dir.y = lbl_805D8BD4;
        vec3_add_to(&pos, &dir);
        if (M2C_FIELD(arg0, void **, 0x42C) != NULL) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x42C), &pos);
        }
        if (M2C_FIELD(arg0, void **, 0x430) != NULL) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x430), &pos);
        }
        TBoss4Type2__sub_8004A98C(arg0 + 0x378);
    }
    {
        Vec_80057598 a = lbl_80437720[0];
        Vec_80057598 b = lbl_8043772C[0];
        request_follow_camera_offsets(&a, &b, 0xFFFF);
    }
    if ((M2C_FIELD(arg0, f32 *, 0x3C0) += 0.022222223f) >= 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x3C0) -= 1.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x3F0) += -0.06666667f;
    if (M2C_FIELD(arg0, f32 *, 0x3F0) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x3F0) = 0.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32)M2C_FIELD(arg0, s16 *, 0x32C) / (f32)M2C_FIELD(arg0, s16 *, 0x33E);
}

void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 2)) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type2__sub_80057048)(arg0, 3);
    }
}

void init_state__11TBoss4Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) TBoss4Type2__data_805D8BD8;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    ((M2C_UNK (*)(int, void *, int, int, void *))play_sound_effect)(0x4003B723, arg0 + 0x38, 0, 1, arg0);
}

S_800578E8 *TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80486924;
        fn_8004AA04(o->f378);
        for (i = 0; i < 8; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        init_state_1__8TObjFishFPv(o->f44c);
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

u8 *TBoss4Type2__ct(u8 *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 i;
    s32 v;

    ((void (*)(void *, M2C_UNK)) initialize__9TObjEnemyFPv)(arg0, arg1);
    M2C_FIELD(arg0, u8 **, 0x18) = lbl_80486924;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D27D8;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 8);
    M2C_FIELD(arg0, s32 *, 0x38C) = arg2[0];
    ((VObj_18_800579A0 *) arg0)->m79(arg2 + 1);
    ((VObj_18_800579A0 *) arg0)->m80();
    M2C_FIELD(arg0, s32 *, 0x390) = get_instance_count__9TBoss4UroFv();
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, lbl_804868A8);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, (void *) VecCopy__FP3VecPC3Vec(arg0 + 0x50, (void *) VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    M2C_FIELD(arg0, s32 *, 0x394) = init_collision_body_parts(arg0, lbl_80486794, 1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, f32 *, 0x30C) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, f32 *, 0x308) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(arg0, (int) register_boss__6TLobbyFPv(0x37), dispatch_shared_handler_b__6TLobbyFPv(0x37), register_object__6TLobbyFPv(0x37));
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    set_param__12TObjEneLappyFPvi(arg0, 0x2F);
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3D4) = lbl_805D8C28;
    M2C_FIELD(arg0, f32 *, 0x3D0) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x44C) = TObjFish__sub_800E3124(lbl_80486868, arg0 + 0x450, lbl_805D8C28);
    for (i = 0; i < 2; i++) {
        ((Arr_800579A0 *) arg0)->f42C[i] = create_particle_emitter(arg0 + 0x38, lbl_804376D0[i]);
    }
    for (; i < 8; i++) {
        ((Arr_800579A0 *) arg0)->f42C[i] = 0;
    }
    fn_8004AA80(arg0 + 0x378, lbl_804376D8, 6);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, u16 *, 0x3C4) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x41C) = get_random_float__21TObjEneMe3ShinowaRealFv(*(f32 *) dispatch_shared_handler_a__6TLobbyFPv(0x37));
    if (M2C_FIELD(arg0, s32 *, 0x41C) < 1 || M2C_FIELD(arg0, s32 *, 0x41C) > 25) {
        M2C_FIELD(arg0, s32 *, 0x41C) = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x41C) *= 75;
    M2C_FIELD(arg0, s32 *, 0x420) = M2C_FIELD(arg0, s32 *, 0x41C) - 7;
    v = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x37), s32 *, 0x18);
    if (v < 1 || v > 4) {
        v = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x424) = v + 8;
    M2C_FIELD(arg0, s32 *, 0x428) = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x37), s32 *, 0x1C);
    if (M2C_FIELD(arg0, s32 *, 0x428) < 0 || M2C_FIELD(arg0, s32 *, 0x428) > 14) {
        M2C_FIELD(arg0, s32 *, 0x428) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3C0) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E8) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x3EC) = M2C_FIELD(arg0, s16 *, 0x32C) / 2;
    M2C_FIELD(arg0, f32 *, 0x3F0) = TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, f32 *, 0x3F4) = TBoss4Type2__data_805D8BD8;
    TBoss4Type2__sub_80057048(arg0, 0);
    return arg0;
}

s32 create__11TBoss4Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x474);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = ((s32 (*)(s32, s32, s32))TBoss4Type2__ct)(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss4Type2__sub_80058208(void) {  }

void TBoss4Type2__sub_8005820C(void) {  }

void TBoss4Type2__sub_80058210(void) {  }

void TBoss4Type2__sub_80058214(void) {  }

void TBoss4Type2__sub_80058218(void) {  }

void TBoss4Type2__sub_8005821C(void) {  }

void TBoss4Type2__sub_80058220(void) {  }

void TBoss4Type3__vt45(S_80058224 *o) {
    u16 id = o->f3ba;
    if (id == 0xFFFF) {
        ((void (*)(void *, s32))TBoss4Type3__sub_8005A398)(o, 1);
        return;
    }
    ((void (*)(void *, u16))TBoss4Type3__sub_80059ABC)(o, id);
    if (o->f398 == 0x31) {
        spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16)o->f3ba);
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
    }
    if (--o->f398 < 0) {
        ((void (*)(void *, s32))TBoss4Type3__sub_8005A398)(o, 1);
    }
}

void TBoss4Type3__vt44(S_800582B4 *o) {
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

void TBoss4Type3__vt43(u8 *arg0) {
    create_yutai__11TBoss4Type3FPvPvPv(arg0, (void *)1, (void *) M2C_FIELD(arg0, u16 *, 0x3BA));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt42(S_80058380 *o) {
    if (o->f398 > 0x48) {
        o->f39c = TBoss4Type3__data_805D8C34 - (f32)(o->f398 - 0x48) / lbl_805D8C38;
    } else {
        o->f39c = TBoss4Type3__data_805D8C34;
    }
    o->f39c = TBoss4Type3__sub_800524E8(o->f39c);
    ((void (*)(void *))TBoss4Type3__sub_80059C20)(o);
    if (--o->f398 < 0) {
        ((void (*)(void *, s32))TBoss4Type3__sub_8005A398)(o, 1);
    }
}

void TBoss4Type3__vt41(void *arg0) {
    s32 temp_r0;

    u16 v = M2C_FIELD(arg0, u16 *, 0x3BA);
    if ((v != 0xFFFF) && (TBoss4Type3__sub_8005254C(v) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFF;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFF;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3BC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3BC);
        if ((temp_r0 >= 5) || ((temp_r0 >= 2) && (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D8C3C))) {
            ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_80059F64)(arg0, 9);
            return;
        }
        ((M2C_UNK (*)(void *))spawn_random_effect__11TBoss4Type3Fi)(arg0);
    }
}

void TBoss4Type3__vt40(void* p) { *(s32*)((char*)p + 0x52c) = 0; *(s32*)((char*)p + 0x398) = 147; }

struct Obj_80059ABC;
struct TBoss4Type3_8005A398;
void TBoss4Type3__vt39(u8 *arg0) {
    Vec_800584E4 v;
    Ply_80059ABC *p;
    u16 id;
    void *pos;
    u32 h;
    id = M2C_FIELD(arg0, u16 *, 0x3B8);
    if (id == 0xFFFF) {
        TBoss4Type3__sub_8005A398((TBoss4Type3_8005A398 *)arg0, 1);
        return;
    }
    if (id == 0xFFFF || (p = get_player_by_client_id(id)) == NULL) {
        v.x = v.y = v.z = TBoss4Type3__data_805D8C40;
    } else {
        VecCopy__FP3VecPC3Vec(&v, (u8 *)p + 0x2FC);
    }
    TBoss4Type3__sub_80059ABC((Obj_80059ABC *)arg0, M2C_FIELD(arg0, u16 *, 0x3B8));
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x31) {
        play_sound_effect(0x4003AA2E, 0, 0, 0);
        spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16)M2C_FIELD(arg0, u16 *, 0x3B8));
        TBoss4Type3__sub_8005A678(arg0, 5);
    }
    pos = arg0 + 0x474;
    if (M2C_FIELD(arg0, s32 *, 0x398) < 0x12) {
        if (M2C_FIELD(arg0, void **, 0x42C) != NULL) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x42C));
            M2C_FIELD(arg0, void **, 0x42C) = NULL;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x398) <= 0x21 && M2C_FIELD(arg0, u32 *, 0x42C) == 0) {
        h = create_particle_emitter(pos, 0x142);
        M2C_FIELD(arg0, u32 *, 0x42C) = h;
        if (h != 0) {
            set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, void **, 0x42C), 0x40);
        }
    }
    if (M2C_FIELD(arg0, void **, 0x42C) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x42C), pos);
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x21) {
        create_yutai__11TBoss4Type3FPvPvPv(arg0, 0, (void *)M2C_FIELD(arg0, u16 *, 0x3B8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x1C) {
        h = spawn_particle_effect(&v, 0x38);
        if (h != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)h, 0x40);
        }
    }
    pos = &v;
    if (M2C_FIELD(arg0, s32 *, 0x398) < 2) {
        if (M2C_FIELD(arg0, void **, 0x430) != NULL) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x430));
            M2C_FIELD(arg0, void **, 0x430) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x434) != NULL) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x434));
            M2C_FIELD(arg0, void **, 0x434) = NULL;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x398) <= 0x12) {
        if (M2C_FIELD(arg0, u32 *, 0x430) == 0) {
            h = create_particle_emitter(pos, 0xEA);
            M2C_FIELD(arg0, u32 *, 0x430) = h;
            if (h != 0) {
                set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, void **, 0x430), 0x40);
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x434) == 0) {
            h = create_particle_emitter(pos, 0x139);
            M2C_FIELD(arg0, u32 *, 0x434) = h;
            if (h != 0) {
                set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, void **, 0x434), 0x40);
            }
        }
    }
    if (M2C_FIELD(arg0, void **, 0x430) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x430), pos);
    }
    if (M2C_FIELD(arg0, void **, 0x434) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x434), pos);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        TBoss4Type3__sub_8005A398((TBoss4Type3_8005A398 *)arg0, 1);
    }
}

void TBoss4Type3__vt38(void *arg0) {
    if (TBoss4Type3__sub_8005254C(M2C_FIELD(arg0, u16 *, 0x3B8)) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFFU;
        TBoss4Type3__sub_800599F4((void*)(arg0), (void*)(0), (void*)(2));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3BA) = (u16) M2C_FIELD(arg0, u16 *, 0x3B8);
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        play_sound_effect((int)(0x4003C12C), (void *)(0), (int)(0), (int)(0));
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        ((M2C_UNK (*)(void *))spawn_random_effect__11TBoss4Type3Fi)(arg0);
    }
}

void TBoss4Type3__vt37(void *arg0) {
    play_sound_effect((int)(0x4003C12B), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

#pragma push
#pragma fp_contract on
#pragma opt_propagation off
void TBoss4Type3__vt36(O_80058848 *o) {
    s32 r30;
    s32 i;
    s32 p;
    f32 s;
    if (o->f398 == 0x46) {
        r30 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x1C);
        for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
            p = ((s32 (*)(s32))get_player_by_client_id)(i);
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                Vec_80058848 v = o->pos;
                p += 0x2FC;
                ((M2C_UNK (*)(Vec_80058848 *, u8 *))subtract_vector)(&v, (u8 *)p);
                if (TBoss4Type3__data_805D8C40 == ((f32 (*)(Vec_80058848 *))vector_length)(&v)) {
                    v.y = TBoss4Type3__data_805D8C34;
                } else {
                    ((M2C_UNK (*)(Vec_80058848 *))normalize_vector)(&v);
                }
                s = lbl_805D8C48 * (lbl_805D8C4C * (f32)rand()) + lbl_805D8C44;
                v.x *= s;
                v.y *= s;
                v.z *= s;
                ((M2C_UNK (*)(Vec_80058848 *, u8 *))vec3_add_to)(&v, (u8 *)p);
                create__9TTecMegidFiiii(o, &v, (u8 *)p, r30);
            }
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--o->f398 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(o, 1);
    }
}
extern int fold_flush_5;
#pragma pop

void TBoss4Type3__vt35(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(p, (void*)12); } }

void TBoss4Type3__vt34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B238), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt33(u8 *arg0) {
    Grant_80058A48 g;
    s32 r29;
    u8 *sub;
    s32 i;
    void *p;
    sub = arg0 + 0x474;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x62) {
        ((M2C_UNK (*)(void *, int))TBoss4Type3__sub_8005A678)(arg0, 7);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x49) {
        p = ((void * (*)(void *, int))spawn_particle_effect)(sub, 0x133);
        if (p != 0) {
            set_flags__11TBoss4Type2FPvUi(p, 0x40);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x45) {
        r29 = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x18);
        for (i = 0; i < 4; i++) {
            if (TBoss4Type3__sub_8005254C(i) != 0) {
                TObjPlayer__sub_8004433C(&g);
                fn_80044330(&g);
                g.f0 = 1;
                g.f4 = i;
                g.f6 = 0;
                create__10TTecGrantsFPvPvPvPv(arg0, sub, &g, r29);
            }
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(arg0, 1);
    }
}

void TBoss4Type3__vt32(void* p) { if (*(int*)((char*)p + 0x398) == 0) { ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(p, (void*)10); } }

void TBoss4Type3__vt31(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x93;
}

void TBoss4Type3__vt30(O_80058BA0 *o) {
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
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(o, 1);
        return;
    }
    if (o->f398 > 0x93) {
        ((void (*)(void *, u16))TBoss4Type3__sub_80059ABC)(o, id);
    } else if (o->f398 == 0x93) {
        if ((o->f424 = ((void * (*)(void *, int))create_particle_emitter)(a, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi(o->f424, 0x40);
        }
        if ((o->f428 = ((void * (*)(void *, int))create_particle_emitter)(b, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi(o->f428, 0x40);
        }
        ((M2C_UNK (*)(void *, int))TBoss4Type3__sub_8005A678)(o, 6);
    } else if (o->f398 == 0x75) {
        if (o->f424 != 0) {
            request_destroy__11TBoss4Type2FUi(o->f424);
            o->f424 = 0;
        }
        if (o->f428 != 0) {
            request_destroy__11TBoss4Type2FUi(o->f428);
            o->f428 = 0;
        }
        o->f52c = 0;
    }
    n = *(s32 *)(dispatch_shared_handler_a__6TLobbyFPv(0x38) + 0x20);
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
        copy_pos__11TNowLoadingFPvPv(o->f424, a);
    }
    if (o->f428 != 0) {
        copy_pos__11TNowLoadingFPvPv(o->f428, b);
    }
    if (--o->f398 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(o, 1);
    }
}

void TBoss4Type3__vt29(O_80058D70 *self) {
    if (self->f398 == 0) {
        self->f3b8 = 0xFFFF;
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)(0xc));
    }
}

void TBoss4Type3__vt28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xC4;
}

void TBoss4Type3__vt27(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TBoss4Type3__data_805D8C34 - ((f32) M2C_FIELD(arg0, s32 *, 0x398) / lbl_805D8C50));
    M2C_FIELD(arg0, f32 *, 0x39C) = TBoss4Type3__sub_800524E8(M2C_FIELD(arg0, f32 *, 0x39C));
    ((void (*)(void *))TBoss4Type3__sub_80059C20)(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)((void *)(arg0), (M2C_UNK)(1));
    }
}

void TBoss4Type3__vt26(Obj_80058E64 *self) {
    s32 t;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)(self, (void*)16);
            return;
        }
        t = TBoss4Type3__sub_8004AE60();
        if (self->f32c <= self->f3e0 && (u16)t != 0xFFFF) {
            ((void (*)(void *, s32, s32))TBoss4Type3__sub_80059EA8)(self, 14, t);
            return;
        }
        TBoss4Type3__sub_800599F4(self, (void*)0, (void*)2);
    }
}

void TBoss4Type3__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B032), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        play_sound_effect((int)(0x4003C62D), (void *)(0), (int)(0), (int)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt24(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (TBoss4Type3__data_805D8C34 - ((f32) M2C_FIELD(arg0, s32 *, 0x398) / lbl_805D8C50));
    M2C_FIELD(arg0, f32 *, 0x39C) = TBoss4Type3__sub_800524E8(M2C_FIELD(arg0, f32 *, 0x39C));
    ((void (*)(void *))TBoss4Type3__sub_80059C20)(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)((void *)(arg0), (M2C_UNK)(1));
    }
}

void TBoss4Type3__vt23(Obj_80059010 *self) {
    s32 id;
    if (self->f398 == 0) {
        if (self->f3ba != 0xFFFF) {
            ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)0xD));
        } else {
            id = TBoss4Type3__sub_8004AE60();
            if ((u16)id != 0xFFFF) {
                ((void (*)(void *, s32, s32))TBoss4Type3__sub_80059EA8)(self, 0xB, id);
            } else {
                ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)0xC));
            }
        }
    }
}

void TBoss4Type3__vt22(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) M2C_FIELD(arg0, s32 *, 0x3A0);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    play_sound_effect((int)(0x4003B031), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt9(O_800590F4 *o) {
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
  ((void (*)(void *))TBoss4Type3__sub_80059C20)(o);
  if (o->f398 == 0x28)
  {
    ((M2C_UNK (*)(void *, s32, s32))create__13TObjBs4CutAtkFPvPvPv)(o, o->f3a8, (o->f374 - 4) & 1);
    play_sound_effect(0x4003B228, o->f38, 0, 1);
  }
  if ((o->f3f4 >= lbl_805D8C58) && (o->f3f4 <= lbl_805D8C5C))
  {
    s32 idx = (o->f374 - 4) & 1;
    u8 *e = lookup_entry_by_value__10TObjPlayerFPvf(o->f51c[idx]);
    if (e != 0)
    {
      push_matrix();
      TObjPlayer__sub_803D8CD4(0);
      ((M2C_UNK (*)(void *))post_translate_matrix)(o->f38);
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
    ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(o, 1);
  }
}

void TBoss4Type3__vt8(u8 *arg0) {
    s32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 4) {
            M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
            ((M2C_UNK (*)(void *))spawn_random_effect__11TBoss4Type3Fi)((void *)((s32) arg0));
            return;
        }
        temp_r3 = get_random_scaled__11TBoss4Type3Fv();
        ((void (*)(void *, s32, s32, s32))TBoss4Type3__sub_80059F04)(arg0, M2C_FIELD(arg0, s32 *, 0x374) - 1, temp_r3, temp_r3);
    }
}

void TBoss4Type3__vt7(u8 *arg0) {
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x524)));
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x528)));
    ((M2C_UNK (*)(void *, int))TBoss4Type3__sub_8005A678)((void *) (arg0), (int) (((M2C_FIELD(arg0, s32 *, 0x374) - 4) & 1) + 3));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)((void *)((void *)(arg0)), (M2C_UNK)((int) (2)));
    }
}

void TBoss4Type3__vt5(void) {  }

void TBoss4Type3__vt4(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805D8C60;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt3(Obj_80059390 *self) {
    if (self->flags & 0x800) {
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)2));
    } else {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        ((int (*)(void*, void*))TBoss4Type3__sub_80059F64)((void*)(self), (void*)((void *)10));
    }
}

void TBoss4Type3__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))TBoss4Type3__sub_8005A398)(arg0, 1);
    }
}

void TBoss4Type3__vt1(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_800599F4(p, (void*)0, (void*)2); } }

void TBoss4Type3__vt0(void* p) { *(s32*)((char*)p + 0x398) = 147; }

#pragma push
#pragma opt_common_subs off
void TBoss4Type3__sub_80059450(u8 *arg0) {
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
    if ((s32) M2C_FIELD(arg0, s32 *, 0x52C) == 1) {
        stack.sp2C = M2C_FIELD(&lbl_80437854.value, s32 *, 0);
        stack.sp30 = M2C_FIELD(&lbl_80437854.value, s32 *, 4);
        stack.sp34 = M2C_FIELD(&lbl_80437854.value, s32 *, 8);
        stack.sp20 = M2C_FIELD(&lbl_80437860.value, s32 *, 0);
        stack.sp24 = M2C_FIELD(&lbl_80437860.value, s32 *, 4);
        stack.sp28 = M2C_FIELD(&lbl_80437860.value, s32 *, 8);
        request_follow_camera_offsets((void *) (&stack.sp20), (void *) (&stack.sp2C), (int) (0xFFFFU));
        return;
    }
    stack.sp14 = M2C_FIELD(&lbl_8043786C.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_8043786C.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_8043786C.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_80437878.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80437878.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80437878.value, s32 *, 8);
    request_follow_camera_offsets((void *) (&stack.sp8), (void *) (&stack.sp14), (int) (0xFFFFU));
}
extern int fold_flush_6;
#pragma pop

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (is_split_screen() != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, u16 *, 0x3BA) != (s32) lbl_805D53A0) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x3D8) % 39;
    if (temp_r30 == 0) {
        ((M2C_UNK (*)(M2C_UNK, M2C_UNK, s16))spawn_effect__11TBoss4Type3Fsss)(0x60, 0xF, (s16) M2C_FIELD(arg0, u16 *, 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        ((M2C_UNK (*)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK))play_sound_effect)(0x4003C133, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
}

void TBoss4Type3__sub_80059618(O_80059618 *o) {
    u8 *p;
    s32 i;
    u32 e;
    if (o->f3ba == 0xFFFF || o->f374 == 2 || o->f374 == 3 || o->f32c >= o->f3e4 ||
        (p = (u8 *)get_player_by_client_id(o->f3ba)) == NULL) {
        o->f3e4 = o->f32c;
        return;
    }
    fn_80052420(o->f3ba, o->f3e4 - o->f32c);
    o->f3e4 = o->f32c;
    ((M2C_UNK (*)(void *, s32, u16))create_yutai__11TBoss4Type3FPvPvPv)(o, 2, o->f3ba);
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
            ((void (*)(u32, u32))set_flags__11TBoss4Type2FPvUi)(e, 0x40);
        }
        vec3_add_to(&pos, &dir);
        if (((f32 (*)(void *, void *))xyz_distance)(&pos, &tgt) <= lbl_805D8C6C) {
            break;
        }
    }
}

void TBoss4Type3__sub_800597A8(u8 *arg0) {
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
    id = M2C_FIELD(arg0, u16 *, 0x3BA);
    if (id != 0xFFFF) {
        if (id >= 4) return;
        col = lbl_80487174[id];
    }
    for (i = 0, sh = 0; i < 3; i++, sh += 8) {
        tgt = col >> sh;
        c[i] = (u8)(M2C_FIELD(arg0, u32 *, 0x3C4) >> sh);
        d = tgt - c[i];
        if (d > 0) {
            if ((c[i] = c[i] + 0x10) > tgt) c[i] = tgt;
        } else if (d < 0) {
            if ((c[i] = c[i] - 0x10) < tgt) c[i] = tgt;
        }
    }
    M2C_FIELD(arg0, u32 *, 0x3C4) = c[0] | ((c[2] << 16) | 0xFF000000 | (c[1] << 8));
    if (TBoss4Type3__data_805D8C40 == M2C_FIELD(arg0, f32 *, 0x3B0) && (M2C_FIELD(arg0, s32 *, 0x3C0) & 4)) {
        add_radar_scaled_marker(arg0 + 0x2FC, -1, 1, 1, lbl_805D8C70);
    } else {
        add_radar_scaled_marker(arg0 + 0x2FC, M2C_FIELD(arg0, u32 *, 0x3C4), 1, 1, lbl_805D8C70);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 1) && M2C_FIELD(arg0, u16 *, 0x3BA) != 0xFFFF) {
        p = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x3BA));
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
                    add_radar_scaled_marker(&w, lbl_80487174[M2C_FIELD(arg0, u16 *, 0x3BA)], 1, 1, lbl_805D8C74);
                    vec3_add_to(&w, &v);
                }
                }
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3C0)++;
}

void calc_grid_index__11TBoss4Type3FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
}

void TBoss4Type3__sub_80059ABC(Obj_80059ABC *self, s32 arg1) {
    Ply_80059ABC *p;
    if ((u16)arg1 != 0xFFFF) {
        p = get_player_by_client_id((u16)arg1);
        if (p != NULL) {
            self->f60 = approach_angle_limited(self->f60, (s32)(lbl_80437890[0] * get_ad_end_text_start__10TObjPlayerFv(p->f38 - lbl_805D8C7C, p->f40)), 0x888);
            calc_grid_index__11TBoss4Type3FPv(self);
        }
    }
}

s32 get_random_scaled__11TBoss4Type3Fv(void) {
    return (s32) (lbl_805D8C80 * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)());
}

#pragma push
#pragma fp_contract on
void TBoss4Type3__sub_80059C20(u8 *arg0) {
    Vec_80059C20 pts[2];
    s32 ids[2];
    s32 id;
    Vec_80059C20 *p;
    s32 a;
    s32 i;

    a = M2C_FIELD(arg0, s32 *, 0x3AC) << 12;
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), -(a + (s32)(M2C_FIELD(arg0, f32 *, 0x39C) * (f32)((s32 (*)(s32, s32))angle_diff_s16)(a, M2C_FIELD(arg0, s32 *, 0x3A8) << 12))), 0x888);
    ids[0] = M2C_FIELD(arg0, s32 *, 0x3A4);
    ids[1] = M2C_FIELD(arg0, s32 *, 0x3A0);
    for (i = 0; i < 2; i++) {
        id = ids[i];
        switch (id) {
        case 16:
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&pts[i], &lbl_8048715C);
            break;
        case 17:
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&pts[i], &lbl_80487168);
            break;
        default:
            p = &pts[i];
            ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(p, &lbl_8048715C);
            id <<= 12;
            p->x += lbl_805D8C84 * sin_table_lookup(id);
            p->z += lbl_805D8C88 * cos_table_lookup(id);
            break;
        }
    }
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x38, &pts[1]);
    subtract_vector(arg0 + 0x38, &pts[0]);
    M2C_FIELD(arg0, f32 *, 0x38) *= M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x3C) *= M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x40) *= M2C_FIELD(arg0, f32 *, 0x39C);
    vec3_add_to(arg0 + 0x38, &pts[0]);
}
extern int fold_flush_7;
#pragma pop

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0) {
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * ((f32 (*)(void))calc_boss4_scale__10TObjPlayerFi)());
    TBoss4Type3__sub_80059F04((Obj_80059F04 *)(arg0), (s32)(0xF), (s32)(temp_r5), (s32)(temp_r5));
}

void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((arg2 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3__sub_80059F04(Obj_80059F04 *self, s32 arg1, s32 arg2, s32 arg3) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((arg2 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((arg3 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type3__sub_80059FC4(u8 *arg0) {
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3B0);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        temp_f1 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C90;
        M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1;
        if (temp_f1 > TBoss4Type3__data_805D8C34) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        }
    } else {
        var_r3 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        M2C_FIELD(var_r31, s32 *, 0x3B4) = (s32) (var_r3 + 1);
        temp_r0_2 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        if (temp_r0_2 < 0x78) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        } else if (temp_r0_2 < 0x96) {
            temp_f1_2 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C94;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_2;
            if (temp_f1_2 < TBoss4Type3__data_805D8C40) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
            }
        } else if (temp_r0_2 < 0x10E) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
        } else if (temp_r0_2 < 0x12C) {
            temp_f1_3 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C98;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_3;
            if (temp_f1_3 > TBoss4Type3__data_805D8C34) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            }
        } else {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            M2C_FIELD(var_r31, s32 *, 0x3B4) = 0;
        }
        if (((TBoss4Type3__data_805D8C40 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) > TBoss4Type3__data_805D8C40)) || ((TBoss4Type3__data_805D8C34 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) < TBoss4Type3__data_805D8C34))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003B02F;
            var_r5 = 0;
            var_r6 = 1;
            ((M2C_UNK (*)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK))play_sound_effect)((M2C_UNK)((int) (0x4003B02F)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
        if ((temp_f31 > TBoss4Type3__data_805D8C40) && (TBoss4Type3__data_805D8C40 == M2C_FIELD(var_r31, f32 *, 0x3B0))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003AD30;
            var_r5 = 0;
            var_r6 = 1;
            ((M2C_UNK (*)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK))play_sound_effect)((M2C_UNK)((int) (0x4003AD30)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
    }
}
extern int fold_flush_8;
#pragma pop

void TBoss4Type3__sub_8005A1AC(Obj_8005A1AC *arg0) {
    Vec_8005A1AC *pos[8] = {
        &arg0->f48c, &arg0->f498, &arg0->f4d4, &arg0->f4e0,
        &arg0->f444, &arg0->f450, &arg0->f45c, 0
    };
    Vec_8005A1AC **p = pos;
    s32 i;
    for (i = 0; i < 8; i++, p++) {
        if (arg0->f404[i] != 0 && *p != 0) {
            copy_pos__11TNowLoadingFPvPv(arg0->f404[i], *p);
        }
    }
    if (arg0->f3ba == 0xFFFF) {
        copy_pos__11TNowLoadingFPvPv(arg0->f404[7], lbl_80487150);
    } else {
        copy_pos__11TNowLoadingFPvPv(arg0->f404[7], &arg0->f480);
    }
}

void TBoss4Type3__sub_8005A2A4(Obj_8005A2A4 *self) {
    s32 i;
    for (i = 0; i < 13; i++) {
        if (self->parts[i] != 0) {
            request_destroy__11TBoss4Type2FUi(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}

void TBoss4Type3__sub_8005A300(Obj_8005A300 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        self->f404[i] = ((u32 (*)(void *, s32))create_particle_emitter)(self->f38, lbl_80437814[i]);
        if (self->f404[i] != 0) {
            ((void (*)(u32, u32))set_flags__11TBoss4Type2FPvUi)(self->f404[i], 0x40);
        }
    }
    for (; i < 13; i++) {
        self->f404[i] = 0;
    }
}

void TBoss4Type3__sub_8005A398(TBoss4Type3_8005A398 *self, s32 arg1) {
    MemberAction_8005A398 m;
    TBoss4Type3__sub_8005A150();
    self->f374 = arg1;
    ((void (*)(void *, s32))TBoss4Type3__sub_8005A678)(self, lbl_80486C98[self->f374].f4);
    m.words[0] = lbl_80486C98[self->f374].f8;
    m.words[1] = lbl_80486C98[self->f374].fc;
    m.words[2] = lbl_80486C98[self->f374].f10;
    if (m.action != 0) {
        (self->*(m.action))();
    }
}

void TBoss4Type3__sub_8005A438(Obj_8005A438 *self) {
    Pair_8005A438 b;
    Pair_8005A438 a;
    Words_8005A438 tmp;
    Pair_8005A438 *pb = &b;
    a.p = lbl_80486FB0;
    a.f = self->f3b0;
    b.p = lbl_80486FBC;
    b.f = TBoss4Type3__data_805D8C34 - a.f;
    if (a.f < lbl_805D8C3C) {
        tmp.p = lbl_80486FB0;
        tmp.w = *(u32 *)&a.f;
        copy_pair__11TBoss4Type3FPvPv(&a, pb);
        copy_pair__11TBoss4Type3FPvPv(pb, &tmp);
    }
    TBoss4Type3__sub_8005A4F4(self, a.p, a.f);
    TBoss4Type3__sub_8005A4F4(self, b.p, b.f);
}

void copy_pair__11TBoss4Type3FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3F0) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
        M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(((u8 *)(&TBoss4Type3__data_80486FC8.value) + (arg1 * 0x14)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type3__sub_8005A6A4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F4) + M2C_FIELD(arg0, f32 *, 0x3F8));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x400);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3F4);
        if (temp_f1 >= lbl_805D8C9C) {
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (temp_f1 - lbl_805D8C9C);
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3F4) >= lbl_805D8CA0) {
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) lbl_805D8CA0;
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3F4) >= lbl_805D8CA0) {
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__data_80486FC8).value + (M2C_FIELD(arg0, s32 *, 0x3F0) * 0x14)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__data_80486FC8).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3F0) * 0x14));
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3F4);
    if ((temp_f1_2 < TBoss4Type3__data_805D8C40) || (temp_f1_2 >= lbl_805D8C9C)) {
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
    }
}
extern int fold_flush_9;
#pragma pop

void draw__11TBoss4Type3FPv(void *arg0) {
    ((void (*)(void *))toggle_particle_effect__10TObjPlayerFv)(arg0);
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)((void *)((char *)arg0 + 56));
    ((void (*)(int, void *))rotate_matrix_y)(0, M2C_FIELD(arg0, void **, 0x60));
    ((void (*)(void *))TBoss4Type3__sub_8005A438)(arg0);
    ((void (*)(void))pop_matrix)();
    ((void (*)(void))push_matrix)();
    ((void (*)(void *))post_translate_matrix)((void *)((char *)arg0 + 1152));
    ((void (*)(int, void *))rotate_matrix_y)(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    ((void (*)(void))pop_matrix)();
    ((void (*)(void))end_effect_render__13TParticleCtrlFv)();
}

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C68);
}

void TBoss4Type3__sub_8005A86C(void* p) { draw__11TBoss4Type3FPv((void *)(p)); }

void TBoss4Type3__sub_8005ACBC(Obj_8005ACBC *self) {
    if (self->f374 != 3 && self->f374 != 2) {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        ((s32 (*)(void *, s32))TBoss4Type3__sub_8005A398)(self, 3);
    }
}

void init_effect__11TBoss4Type3FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type3__data_805D8C34;
    ((M2C_UNK (*)(int, void *, int, int, void *))play_sound_effect)(0x4003B734, arg0 + 0x38, 0, 1, arg0);
}

S_8005AD50 *TBoss4Type3__sub_8005AD50(S_8005AD50 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80487184;
        fn_8004AA04(o->f378);
        ((void (*)(void *))TBoss4Type3__sub_8005A2A4)(o);
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
            init_state_1__8TObjFishFPv(o->fx[i]);
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

s32 create__11TBoss4Type3Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x530);
    if (var_r31 != 0) {
        var_r4 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type3__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
TObjBs4CutAtk::~TObjBs4CutAtk() {}

extern "C" {
void render__13TObjBs4CutAtkFv(void) {  }

void run_task__13TObjBs4CutAtkFv(u8 *arg0) {
    s32 lo;
    s32 hi;
    s32 i;
    VObj_8005B218 *p;
    s32 id;
    u16 ang;

    lo = (u16)M2C_FIELD(arg0, s32 *, 0x1C);
    hi = lo + 0x71C;
    if (query_teammate_state__9TObjEneDDFPv(arg0) != 0) {
        return;
    }
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        p = ((VObj_8005B218 * (*)(s32))get_player_data__10TObjPlayerFi)(i);
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        ang = (s32)((*(const f64 *)&lbl_80437890) * get_ad_end_text_start__10TObjPlayerFv(-(M2C_FIELD(p, f32 *, 0x38) - lbl_805D8C7C), M2C_FIELD(p, f32 *, 0x40)));
        if (ang >= lo && ang < hi) {
            Dmg_8005B218 d;
            id = M2C_FIELD(arg0, s32 *, 0x10);
            d.type = 0;
            d.val = *register_boss__6TLobbyFPv(0x38);
            {
                Dmg_8005B218 t = d;
                p->m21(id, &t, 0, -1, -1);
            }
        }
    }
    if (++M2C_FIELD(arg0, s32 *, 0x24) >= 6) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) += M2C_FIELD(arg0, s32 *, 0x20);
}

void *__ct__13TObjBs4CutAtkFv(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    ((M2C_UNK (*)(void))__ct__7TObjectFP7TObject)();
    M2C_FIELD(arg0, void **, 0x18) = __vt__13TObjBs4CutAtk;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27E0;
    if (arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = -0x1554;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (arg2 << 0xC));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x71C;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xE38;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + (arg2 << 0xC));
        M2C_FIELD(arg0, s32 *, 0x20) = -0x71C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
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
