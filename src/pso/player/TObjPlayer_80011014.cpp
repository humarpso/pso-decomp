#include "types.h"
#include "pso/player/DamageBookkeeping.h"
#include "pso/player/TObjPlayer.h"
#include "dolphin/mtx.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_800172CC { u8 pad[0x18]; };

struct Player_800172CC : VBase_800172CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    u8 pad1c[0x254 - 0x1C];
    u8 f254[0xC];
    u8 f260[0xC];
};

typedef s32 M2C_UNK;
struct Vec_800186E8 { f32 x, y, z; };

struct Motion_8001882C { s16 f0; s16 f2; s16 f4; s16 f6; s16 f8; s16 fa; s16 fc; u8 padE[0x18 - 0xE]; s32 f18; };

struct Player_8001882C {
    u8 pad0[0x2B0];
    Motion_8001882C *motion;
    u8 pad2B4[0x2B8 - 0x2B4];
    s16 f2b8;
    s16 f2ba;
    s16 f2bc;
    s16 f2be;
    s16 f2c0;
    s16 f2c2;
    s16 f2c4;
    s16 f2c6;
    s16 f2c8;
    s16 f2ca;
    s16 f2cc;
    s16 f2ce;
    s16 f2d0;
    s16 f2d2;
    u8 pad2D4[0x2E8 - 0x2D4];
    s16 f2e8;
    s16 f2ea;
    s16 f2ec;
    s16 f2ee;
    s16 f2f0;
    s16 f2f2;
    s16 f2f4;
    s16 f2f6;
    s16 f2f8;
    s16 f2fa;
    u8 pad2FC[0x32C - 0x2FC];
    s16 f32c;
    s16 f32e;
};

struct ObjFlags;
class TObjPlayer;
struct Info_8001311C { s32 type; f32 power; };

struct Vec_8001311C { f32 x, y, z; };

struct Coll_8001311C { u8 pad0[0x18]; u32 flags; Vec_8001311C pos; };

struct Stats_8001311C { s16 f0; s16 mst; };

struct VBase_8001311C { char pad[0x18]; };

struct Actor_8001311C : VBase_8001311C {
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
    virtual void m46(Coll_8001311C *);
    virtual void m47();
    virtual void m48();
    virtual void m49(Info_8001311C);
    virtual void m50(Info_8001311C);
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54(f32);
    virtual void m55(s32);
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72(s32);
    virtual void m73();
    u16 f1c;
    u8 pad1E[0x30 - 0x1E];
    u32 flags30;
    u8 pad34[0x2B0 - 0x34];
    Stats_8001311C *stats;
    u8 pad2B4[0x2D4 - 0x2B4];
    u16 id;
    u8 pad2D6[0x2DC - 0x2D6];
    u32 f2dc;
    u8 pad2E0[0x2F2 - 0x2E0];
    s16 resist1;
    s16 resist3;
    s16 resist2;
    s16 resist5;
    s16 resist4;
    Vec_8001311C pos;
    u8 pad308[0x828 - 0x308];
    u8 f828[4];
};

extern "C" {
void TObjPlayer__sub_800101B0(s32 arg0, s32 arg1);
void TObjPlayer__sub_800192B4(void* a0, int a1);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);
s16 test_immunity_flags__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
extern const f32 TObjPlayer__data_805D7D24;
void TObjPlayer__sub_80015884(void *arg0);
void TObjPlayer__sub_800100A0(s32 arg0, s32 arg1);
void TObjPlayer__sub_800192B4(void* a0, int a1);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);
void reset_status_effect_row(u8 *arg0);
s32 TObjPlayer__sub_80016C54(u8 *arg0);
void TObjPlayer__sub_800192B4(void* a0, int a1);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);
void reset_status_effect_row(u8 *arg0);
u8 obj_isState2_324(u8* p);
s32 TObjPlayer__sub_800172CC(Player_800172CC *self);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void subtract_vector(void *a, void *b);
extern const f32 TObjPlayer__data_805D7D54;
extern const f32 lbl_805D7DC8;
f32 TObjPlayer__sub_800186E8(s32 arg0, u32 arg1, void *arg2);
extern const f32 TObjPlayer__data_805D7D98;
s32 TObjPlayer__sub_8001882C(Player_8001882C *p, Motion_8001882C *motion);
s32 get_main_phase();
s32 check_heavy_damage_flag(void *arg0, f32 farg0);
s32 is_local_player__10TObjPlayerFi(s32 arg0);
void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 calc_freeze_chance(TObjPlayer *arg0, TObjPlayer *arg1, TObjPlayer *arg2, f32 farg0);
s32 calc_shock_chance(TObjPlayer *arg0, TObjPlayer *arg1, TObjPlayer *arg2);
s16 clamp_value__10TObjPlayerFPv(void *arg0);
void empty_post_damage_hook(void *defender, void *attacker);
void record_local_damage_if_enabled(void *arg0, void *arg1, s32 arg2);
void attach_mine_trap__10TObjPlayerFiUi(s32 arg0, u32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0);
void set_hp_clamped__10TObjPlayerFPvs(u8 *arg0, s16 arg1);
s32 add_actor_hp(u8 *arg0, s16 arg1);
s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1);
void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1);
void draw_hp_label(void *arg0, u32 arg1, s32 arg2, s16 arg3);
void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0);
u8 obj_isState2_324(u8* p);
u8 obj_isState3_324(u8* p);
void obj_copyVec2_0(u8* d, u8* s);
s32 get_type__10TObjPlayerFPv(void* p);
void create_hit_effect__10TObjPlayerFPv(void *);
void calc_photon_blast_charge__10TObjPlayerFv(void *, s32);
s32 is_boss_area(void);
f32 calc_technique_boost(s32, u16);
extern s32 lbl_805D5550;
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D28;
extern const f32 lbl_805D7D30;
extern const f32 TObjPlayer__data_805D7D44;
extern const f32 TObjPlayer__data_805D7D4C;
extern const f32 TObjPlayer__data_805D7D54;
extern const f32 TObjPlayer__data_805D7D64;
extern const f32 TObjPlayer__data_805D7D74;
extern const f32 lbl_805D7D78;
extern const f32 lbl_805D7D7C;
f32 receive_direct_attack__10TObjPlayerFv(Actor_8001311C *self, Actor_8001311C *att, Info_8001311C *arg, Coll_8001311C *coll, s32 tech, s32 arg5);
}

extern "C" {

typedef void (*SceneFn_8000FD54)(void);

typedef struct SceneEntry_8000FD54 {
    SceneFn_8000FD54 init;
    SceneFn_8000FD54 update;
    SceneFn_8000FD54 exit;
} SceneEntry_8000FD54;

typedef struct SceneState_8000FD54 {
    s32 cur;
    s32 next;
    s32 unk8;
    s32 unkC;
    s32 result;
    s32 prev;
} SceneState_8000FD54;

struct Stack_80010A84 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct Stack_80010B44 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct Pkt_80010C54 {
    u8 cmd;
    u8 size;
    u16 client;
    u16 target;
    u8 which;
    u8 amount;
};

struct Pkt_80010DE8 { u8 f0; u8 f1; u16 f2; u16 f4; u8 f6; u8 f7; };

struct Obj_80010DE8 { u8 pad[0x1c]; u16 f1c; };

struct RecoveredGlobal_80010E44_lbl_8050EA40
{
  M2C_UNK value;
  u8 remaining[0x2C];
};

typedef struct RecoveredGlobal_80010E44_lbl_8050EA40 RecoveredGlobal_80010E44_lbl_8050EA40;

typedef char RecoveredGlobal_80010E44_lbl_8050EA40_size[((sizeof(RecoveredGlobal_80010E44_lbl_8050EA40)) == 0x30) ? (1) : (-1)];

struct Obj_80010F54 { u8 pad[0x2D4]; u16 id; u16 id2; };

struct ActorMesetaView
{
  u8 padding[0x20];
  s32 meseta;
};

struct O_80011274 { u8 pad[0x2be]; s16 v; };

struct O_800112D4 { u8 pad[0x32e]; s16 v; };

struct O_80011378 { u8 pad[0x2bc]; s16 v; };

struct O_80011704 { u8 pad[0x1c]; u16 f1c; };

typedef struct Vec_800115C4 { f32 x, y, z; } Vec_800115C4;

typedef struct Player_800115C4 {
    u8 pad0[0x1C];
    u16 id;
    u8 pad1E[0x30 - 0x1E];
    s32 flags;
    u8 pad34[0x2FC - 0x34];
    Vec_800115C4 pos;
} Player_800115C4;

typedef struct Vec_8001401C { f32 x, y, z; } Vec_8001401C;

struct Obj_80014C1C { u8 pad0[0x30]; u32 f30; u8 pad34[0x254 - 0x34]; u8 f254[0x330 - 0x254]; u32 f330; };

struct O_80015D74 { u8 pad[0x110]; s16 arr[3]; };

struct O_80015DC4 { u8 pad[0x110]; s16 arr[3]; };

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

struct Vec_80016454 { f32 x, y, z; };

struct Body_80016454 {
    Vec_80016454 local;
    f32 radius;
    u8 pad10[0x8];
    u32 flags;
    u8 pad1c[0x10];
};

struct Base_80016454 { u8 pad[0x18]; };

struct Actor_80016454 : Base_80016454 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual s32 m24(Actor_80016454 *, s32, f32);
    u8 pad1c[0x38 - 0x1c];
    Vec_80016454 pos;
    u8 pad44[0x60 - 0x44];
    s32 yaw;
    u8 pad64[0xa4 - 0x64];
    Body_80016454 *bodies;
    s32 bodyCount;
};

struct RecoveredGlobal_8001806C_lbl_8058D490;

struct Vec_8001745C { f32 x, y, z; };

struct Part_8001745C {
    Vec_8001745C pos;
    f32 radius;
    u8 pad10[0x8];
    u32 flags;
    u8 pad1C[0x10];
};

struct Target_8001745C {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x4];
    Vec_8001745C pos;
    u8 pad44[0x1C];
    s32 rotY;
    u8 pad64[0x40];
    Part_8001745C *parts;
    s32 nparts;
};

struct Player_8001745C {
    u8 pad0[0x38];
    Vec_8001745C pos;
    u8 pad44[0x1C];
    s32 rotY;
    u8 pad64[0x2A8 - 0x64];
    Target_8001745C *target;
    u8 pad2AC[0x318 - 0x2AC];
    u32 f318;
};

typedef M2C_UNK (*VecCopyFn_80016454)(void *, void *);

struct Obj_80018660;

typedef struct Hit_80017E6C Hit_80017E6C;

typedef struct Obj_80017E6C Obj_80017E6C;

typedef struct Plane_80017E6C Plane_80017E6C;

typedef struct Vec_80017E6C Vec_80017E6C;

struct Vec_80018428;

typedef struct Stack_80018780 Stack_80018780;

struct Stack_80018E6C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Stack_80018EE4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Vec_80018F64 { f32 x, y, z; };

struct Obj_80018F64 {
    u8 pad0[0x104]; Vec_80018F64 v104;
    u8 pad110[0x248 - 0x110]; f32 f248; f32 f24c; f32 f250;
    u8 pad254[0x290 - 0x254]; Vec_80018F64 v290; Vec_80018F64 v29c;
    u8 pad2a8[4]; s32 f2ac; u8 pad2b0[4]; f32 f2b4;
    u8 pad2b8[0x2d4 - 0x2b8]; u16 f2d4; u8 pad2d6[6]; s32 f2dc;
    u8 pad2e0[0x2fc - 0x2e0]; Vec_80018F64 v2fc; Vec_80018F64 v308;
    u8 pad314[0x320 - 0x314]; s32 f320; u8 pad324[4]; s16 f328; s16 f32a;
};

struct Rec800192C4 { s32 a; f32 b; s32 c; };

struct Obj800192C4 { u8 pad[0x254]; Rec800192C4 recs[1]; };

struct Word12 { int w; u8 _[8]; };

struct ObjArr254 { u8 _pad[0x254]; Word12 arr[1]; };

struct ObjArrFC  { u8 _pad[0xfc];  u16 arr[1];     };

struct ObjArr254_p53 { u8 _pad[0x25c]; Word12 arr[1]; };

struct R_800193FC { s32 a; f32 b; s32 c; };

struct O_800193FC { u8 pad[0x254]; R_800193FC recs[1]; };

struct R_8001940C { s32 a; f32 b; s32 c; };

struct O_8001940C { u8 pad[0x254]; R_8001940C recs[1]; };

struct R_8001941C { s32 a; f32 b; s32 c; };

struct O_8001941C { u8 pad[0x254]; R_8001941C recs[1]; };

struct R_800194AC { s32 a; f32 b; s32 c; };

struct O_800194AC { u8 pad[0x254]; R_800194AC recs[1]; };

struct ObjFlags {
    u8  _pad00[0x1c];
    u16 field_1c;
    u8  _pad1e[0x30 - 0x1e];
    u32 flags_30;
    u8  _pad34[0x96 - 0x34];
    u16 field_96;
};

struct O_80019664 { u8 f0; u8 f1; u8 pad[2]; u16 f4; u8 f6; u8 f7; };

struct O_80019828 { s32 arr[16]; };

struct Obj_80014B5C { u8 pad0[0x30]; u32 f30; u8 pad34[0x254 - 0x34]; u8 f254[0x330 - 0x254]; u32 f330; };

struct StatStatusReceipt_80014E74 { s32 kind; f32 power; };

typedef struct Elem_800162E0 {
    u8 pad0[0x18];
    s32 flags;
    u8 pad1C[0x2C - 0x1C];
} Elem_800162E0;

typedef struct Obj_800162E0 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0xA4 - 0x34];
    Elem_800162E0 *elems;
    u8 padA8[0x2CC - 0xA8];
    s16 val2CC;
    u8 pad2CE[0x2DC - 0x2CE];
    s32 flags2DC;
} Obj_800162E0;

struct VBase_800166DC { char pad[0x18]; };

struct VObj_800166DC : VBase_800166DC {
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
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69();
    virtual void m70();
};

struct VBase_80016944 { char pad[0x18]; };

struct VObj_80016944 : VBase_80016944 {
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
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69();
    virtual void m70();
};

struct Motion_80018990 { s16 f0; s16 f2; s16 f4; s16 f6; s16 f8; s16 fa; s16 fc; u8 padE[0x18 - 0xE]; s32 f18; };

struct Bonus_80018990 { s16 f0; s16 f2; s16 f4; s16 f6; s16 f8; s16 fa; u8 padC[0x1C - 0xC]; s32 f1c; };

struct Player_80018990 {
    u8 pad0[0x2B0];
    Motion_80018990 *motion;
    u8 pad2B4[0x2B8 - 0x2B4];
    s16 f2b8;
    s16 f2ba;
    s16 f2bc;
    s16 f2be;
    s16 f2c0;
    s16 f2c2;
    s16 f2c4;
    s16 f2c6;
    s16 f2c8;
    s16 f2ca;
    s16 f2cc;
    s16 f2ce;
    s16 f2d0;
    s16 f2d2;
    u8 pad2D4[0x2F2 - 0x2D4];
    s16 f2f2;
    s16 f2f4;
    s16 f2f6;
    s16 f2f8;
    s16 f2fa;
    u8 pad2FC[0x318 - 0x2FC];
    void *f318;
    Bonus_80018990 *bonus;
    u8 pad320[0x32C - 0x320];
    s16 f32c;
    s16 f32e;
};

void shutdown_and_reset_system(void);
s32 get_main_phase();
void init_game_systems(void);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
bool TObjPlayer__sub_8000FF3C(u8 *arg0);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
s32 is_local_player__10TObjPlayerFi(s32 arg0);
void spawn_freeze_shell_effect(u8 *arg0, u32 arg1, s32 arg2);
void TObjPlayer__sub_800100A0(s32 arg0, s32 arg1);
void spawn_confusion_feedback_effect(s32 arg0, s32 arg1);
void TObjPlayer__sub_800101B0(s32 arg0, s32 arg1);
void spawn_paralysis_feedback_effect(s32 arg0, s32 arg1);
void spawn_poison_effect__10TObjPlayerFii(s32 arg0, s32 arg1);
void TObjPlayer__sub_8001053C(u8 *arg0);
s16 clamp_value__10TObjPlayerFPv(void *arg0);
void add_id_to_slots__10TObjPlayerFiUs(s32 arg0, u16 arg1);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);
void enemy_spawn_zalure_effect(s32 arg0);
void enemy_spawn_jellen_effect(s32 arg0);
s32 is_entity_locally_controlled(s32 id);
void handle_6x9A_update_entity_stat(Pkt_80010C54 *pkt);
void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c);
void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void record_attack_source(Obj_80010F54 *self, s32 id);
void TObjPlayer__sub_80011010(void);
f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0);
void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
s32 try_spend_actor_meseta(u8 *arg0, s32 arg1);
s32 get_actor_level_index(void* p);
s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1);
s32 add_actor_exp(u8 *arg0, s32 arg1);
int TObjPlayer__sub_8001124C(u8 *arg0);
s32 add_actor_tp_bonus(O_80011274 *self, s32 x);
s32 add_actor_tp(u8 *arg0, s32 arg1);
s32 subtract_actor_tp(O_800112D4 *self, s32 x);
int TObjPlayer__sub_80011350(u8 *arg0);
s32 add_actor_hp_bonus(O_80011378 *self, s32 x);
s32 clamp_hp_value__10TObjPlayerFPvPv(u8 *arg0, s16 *arg1);
void set_hp_clamped__10TObjPlayerFPvs(u8 *arg0, s16 arg1);
s32 add_actor_hp(u8 *arg0, s16 arg1);
s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1);
u16 find_nearest_visible_player(u8 *arg0, Vec_800115C4 *arg1, f32 farg0);
s32 is_actor_cadence_frame(O_80011704 *self, s32 x);
void apply_actor_gravity(u8 *arg0, M2C_UNK *arg1, f32 farg0);
void apply_knockback_from_attacker(u8 *arg0, u8 *arg1);
int TObjPlayer__sub_80014830(void);
int TObjPlayer__sub_80014838(void);
void TObjPlayer__sub_80014840(void);
void reset_pose__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80014884(void);
void TObjPlayer__sub_80014888(void);
void TObjPlayer__sub_8001488C(void);
void TObjPlayer__sub_80014890(void);
void TObjPlayer__sub_80014894(void);
void TObjPlayer__sub_80014898(void);
void apply_action_hold_status(s32 arg0, f32 farg0);
void cure_poison_ailment(Obj_80014C1C *self);
void spawn_recovery_effect__10TObjPlayerFPv(u8 *arg0);
void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1);
void set_attribute_entry__10TObjPlayerFPviPv(O_80015D74 *self, s32 i, void *q);
void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q);
s16 * get_attribute_entry__10TObjPlayerFPvi(O_80015DC4 *self, s32 i);
void show_meseta_label(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void show_tp_font(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void draw_hp_label(void *arg0, u32 arg1, s32 arg2, s16 arg3);
void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2);
void show_miss_popup(TObjPlayer *self, const float *pos);
M2C_UNK show_miss_for_collider__10TObjPlayerFi(void *, s32);
s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 select_melee_contact_body__10TObjPlayerFv(Actor_80016454 *target, Actor_80016454 *source, f32 factor);
s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0);
s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
s32 is_target_in_attack_range__10TObjPlayerFv(Player_8001745C *p);
f32 TObjPlayer__sub_80017804(Obj_80017804 *arg0, Vec_800180E8 *arg1, f32 farg0);
f32 enemy_pursue_point(u8 *arg0, s32 arg1, Vec_800180E8 arg2, f32 farg0, f32 farg1);
f32 enemy_backstep_from_point(Obj_80017ABC *arg0, Vec_800180E8 arg1, f32 farg0);
f32 enemy_wander_home(u8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
void move_with_wall_slide(u8 *arg0);
void enemy_set_heading_velocity(u8 *arg0, s32 arg1, f32 farg0);
void calc_velocity_toward_destination(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed);
s32 TObjPlayer__sub_800181DC(u8 *arg0, Vec_800180E8 arg1);
M2C_UNK select_enemy_destination(Obj_800182A0 *self, Vec_800182A0 *arg1, int flags);
s32 check_path_obstructed(u8 *arg0, Vec_80018428 *arg1);
s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
void enemy_turn_half_toward_dest(Obj_80018570 *self);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn);
f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2);
void calc_attach_pos__10TObjPlayerFPv(u8 *arg0);
u8 * TObjPlayer__sub_80018E6C(u8 *arg0, u8 *arg1);
u8 * update_actor_ground_y(u8 *arg0);
void* get_actor_body_center(void* p);
void reset_actor_action_state(Obj_80018F64 *self);
void * destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0);
s16 get_class_id__10TObjPlayerFPv(void* p);
s16 get_item_index__10TObjPlayerFPv(void* p);
void add_to_field_2ce__10TObjPlayerFPvi(void* a0, int a1);
s16 get_atp__10TObjPlayerFPv(void* p);
void add_to_field_2ca__10TObjPlayerFPvi(void* a0, int a1);
s16 get_field_2c2__10TObjPlayerFPv(void* p);
void add_to_field_2c8__10TObjPlayerFPvi(void* a0, int a1);
s16 get_field_2c0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_800192B4(void* a0, int a1);
f32 TObjPlayer__sub_800192C4(Obj800192C4 *self, s32 i);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);
void reset_status_effect_row(u8 *arg0);
int obj_getArrWord_254(ObjArr254* p, int i);
void obj_setArrS16_FC(ObjArrFC* p, int i, s16 v);
u16 obj_getArrU16_FC(ObjArrFC* p, int i);
void obj_clearArrS16_FC(ObjArrFC* p, int i);
u8 obj_isState2_324(u8* p);
s16 obj_getS16_32C(u8* p);
u8 obj_testFlag_2E4(u8* p, u32 mask);
s16 get_model_animation_id__10TObjPlayerFPv(void* p);
s16 get_id__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_800193FC(O_800193FC *self, s32 i, s32 v);
void TObjPlayer__sub_8001940C(O_8001940C *self, s32 i, s32 v);
void TObjPlayer__sub_8001941C(O_8001941C *self, s32 i, f32 v);
s16 test_immunity_flags__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
int TObjPlayer__sub_8001943C(ObjArr254_p53* p, int i);
s16 get_ata__10TObjPlayerFPv(void* p);
s32 update_field_318__10TObjPlayerFPv(void* p);
s32 get_field_0c__10TObjPlayerFPv(void* p);
f32 get_target_value__10TObjPlayerFPv(void* p);
f32 get_pos_x__10TObjPlayerFPv(void* p);
s32 add_status_effect_timer__10TObjPlayerFPvii(O_800194AC *self, s32 i, s32 v);
s16 TObjPlayer__sub_800194C4(void* p);
s16 TObjPlayer__sub_800194E8(void* p);
s16 get_stats_atp_max__10TObjPlayerFPv(void* p);
s16 get_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8001951C(void* p);
void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v);
void* init_192dc_return_self__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80019568(void* p, s16 v);
u8 obj_is_hit_receivable(u8 *arg0);
int get_player_data__10TObjPlayerFi(int a0);
u32 obj_testFlags30(ObjFlags* p, u32 mask);
u16 obj_getField1c(ObjFlags* p);
void obj_clearFlags30(ObjFlags* p, u32 mask);
void obj_setFlags30(ObjFlags* p, u32 mask);
void bswap_head16__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
void send_head__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80019664(O_80019664 *self);
bool is_split_screen(void);
f32 calc_random_ratio__10TObjPlayerFv(void);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void* p);
s32 get_player_count__10TObjPlayerFv(void);
int get_item_field_6__10TObjPlayerFPv(void* p);
u8 get_field_ed__10TObjPlayerFPv(void* p);
s32 get_type__10TObjPlayerFPv(void* p);
f32 get_random_float__8TObjFishFv(void);
f32 get_ad_end_text_start__10TObjPlayerFv(void);
f64 fabs_double(f64 x);
f32 newton_sqrtf(f32 x);
s32 register_object__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_80019828(O_80019828 *self);
u32 csnLookAt(void *, void *);
u8 * csnVectorUnder(f32 *, void *, M2C_UNK, void *, f32);
u32 csnVecterUnder(void *, int);
u32 csnVector(void *, void *, s32);
u32 subtractive_rng_next();
M2C_UNK clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *);
void create__10TObjPlayerFUiii(u32, s32, s32);
s32 create_timed_particle_emitter_with_flags(s32, s32, s32, s32, s32);
s32 create_oneshot_particle_emitter(void *, void *, int, int);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
M2C_UNK draw_blob_shadow(void *);
M2C_UNK create_font_small_task(u32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s16, s32);
M2C_UNK create_font_small_task_default_color(u32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s16);
M2C_UNK create_damage_font__19TObjEneEpsilonGuardFiiii(u32, M2C_UNK, M2C_UNK, s16);
void create_font__13TOCtrlDubchikFiiii(s32, s32, s32, s32);
f32 horizontal_distance_squared(void *, void *);
M2C_UNK angle_difference_abs(s32, s32);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
void __dt__10TObjMotionFv(void *, int);
void * find_entity_by_id(s32 id);
s32 project_actor_to_ground(s32, s32, s32);
M2C_UNK TOMineTrap__sub_801B0300(void *, void *, void *);
s32 get_player_by_client_id(s32);
int get_slot_value__10TObjPlayerFPvi(void*, int);
u8 get_rule_field_0__6TLobbyFPv(void *);
int bswap_16__FPUs(void*);
int TLobby__send_and_handle_60(void*);
s32 play_sound_effect(s32, s32, s32, s32);
void __dl__7TObjectFPv(void *);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK construct_actor_light_task(f32, void *, void *, void *, M2C_UNK, void *, s32);
s32 rand();
f64 atan2(void);
M2C_UNK vec3_add_to(void *, void *);
void matrix_mult_vec(s32, void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
void TObjPlayer__sub_803D8CD4(s32);
f32 vec_squared_length(void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, void *);
M2C_UNK rotate_matrix_z(int, int);
void subtract_vector(void *a, void *b);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK normalize_vector(void *);
s32 push_matrix_from(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void post_translate_matrix(void *);

extern M2C_UNK TObjPlayer__data_80434060[];
extern const f64 TObjPlayer__data_804340B8;
extern int TObjPlayer__data_8050D460[];
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D28;
extern const f32 TObjPlayer__data_805D7D44;
extern const f32 TObjPlayer__data_805D7D4C;
extern const f32 TObjPlayer__data_805D7D54;
extern const f32 TObjPlayer__data_805D7D58;
extern const f32 TObjPlayer__data_805D7D70;
extern const f32 TObjPlayer__data_805D7D74;
extern const f32 TObjPlayer__data_805D7D80;
extern const f32 TObjPlayer__data_805D7D98;
extern M2C_UNK lbl_80434040[];
extern M2C_UNK lbl_80434050[];
extern s16 lbl_8043406C[];
extern Vec_800115C4 lbl_80434074;
extern const f64 lbl_80434098;
extern const f64 lbl_804340A0;
extern u8 lbl_804340A8[];
extern s32 lbl_804340B0[];
extern SceneEntry_8000FD54 lbl_804805E0[];
extern M2C_UNK lbl_804806E8[];
extern SceneState_8000FD54 lbl_804FE120;
extern Vec_800182A0 lbl_8050BEE0;
extern RecoveredGlobal_80010E44_lbl_8050EA40 lbl_8050EA40;
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D34B8;
extern s32 lbl_805D53A4;
extern s32 lbl_805D5550;
extern s32 lbl_805D586C;
extern s32 lbl_805D5D6C;
extern s32 lbl_805D5FC0;
extern const f32 lbl_805D7D18;
extern const f32 lbl_805D7D2C;
extern const f32 lbl_805D7D30;
extern const f32 lbl_805D7D34;
extern f32 lbl_805D7D38;
extern const f32 lbl_805D7D3C;
extern const f32 lbl_805D7D40;
extern const f32 lbl_805D7D48;
extern const f32 lbl_805D7D8C;
extern const f32 lbl_805D7D90;
extern const f32 lbl_805D7D94;
extern const f32 lbl_805D7D9C;
extern const f32 lbl_805D7DA0;
extern M2C_UNK lbl_805D7DA8;
extern M2C_UNK lbl_805D7DAC;
extern M2C_UNK lbl_805D7DB0;
extern const f32 lbl_805D7DB4;
extern const f32 lbl_805D7DB8;
extern const f32 lbl_805D7DBC;
extern const f32 lbl_805D7DC0;
extern const f32 lbl_805D7DC4;
extern const f32 lbl_805D7DC8;
extern M2C_UNK tl_07;

extern "C" {
f32 TObjPlayer__sub_800192C4(Obj800192C4 *self, s32 i);
int obj_getArrWord_254(ObjArr254* p, int i);
void TObjPlayer__sub_800193FC(O_800193FC *self, s32 i, s32 v);
void TObjPlayer__sub_8001940C(O_8001940C *self, s32 i, s32 v);
void TObjPlayer__sub_8001941C(O_8001941C *self, s32 i, f32 v);
}

extern "C" {
f32 TObjPlayer__sub_800192C4(Obj800192C4 *self, s32 i);
s32 add_status_effect_timer__10TObjPlayerFPvii(O_800194AC *self, s32 i, s32 v);
u32 obj_testFlags30(ObjFlags* p, u32 mask);
void obj_clearFlags30(ObjFlags* p, u32 mask);
void obj_setFlags30(ObjFlags* p, u32 mask);
}

extern "C" {
f32 TObjPlayer__sub_800192C4(Obj800192C4 *self, s32 i);
int obj_getArrWord_254(ObjArr254* p, int i);
u32 obj_testFlags30(ObjFlags* p, u32 mask);
}

extern "C" {
u32 obj_testFlags30(ObjFlags* p, u32 mask);
u16 obj_getField1c(ObjFlags* p);
void obj_setFlags30(ObjFlags* p, u32 mask);
}

void main(void) {
    SceneFn_8000FD54 fn;
    SceneFn_8000FD54 update;

    init_game_systems();
    while (lbl_804FE120.cur != 0) {
        lbl_804FE120.result = 0;
        fn = lbl_804805E0[lbl_804FE120.cur].init;
        if (fn != NULL) {
            fn();
        }
        update = lbl_804805E0[lbl_804FE120.cur].update;
        while (lbl_804FE120.result == 0 && update != NULL) {
            update();
            lbl_805D53A4++;
        }
        fn = lbl_804805E0[lbl_804FE120.cur].exit;
        if (fn != NULL) {
            fn();
        }
        switch (lbl_804FE120.result) {
        case 1:
        case 2:
        case 3:
            lbl_804FE120.prev = lbl_804FE120.cur;
            lbl_804FE120.cur = lbl_804FE120.next;
            break;
        }
    }
    shutdown_and_reset_system();
}

s32 check_heavy_damage_flag(void *arg0, f32 farg0) {
    if ((lbl_805D7D18 * (f32) M2C_FIELD(arg0, s16 *, 0x2B8)) < farg0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x400);
        return 1;
    }
    return 0;
}

int test_flag_1000__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))obj_testFlags30)(p, 4096); }

int has_flag_0x800__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))obj_testFlags30)(p, 2048); }

int test_flag30_512__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))obj_testFlags30)(p, 512); }

int test_flag_256__10TObjPlayerFPv(void* p) { return ((int (*)(void*, int))obj_testFlags30)(p, 256); }

bool TObjPlayer__sub_8000FF3C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2A8) == 0;
}

void TObjPlayer__sub_8000FF4C(void* p, s16 v) { *(s16*)((char*)p + 0x2d4) = v; }

u16 get_field_2d4__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x2d4); }

s32 is_local_player__10TObjPlayerFi(s32 arg0) {
    if (((u16 (*)(void*))obj_getField1c)((void*)(arg0)) < 0x1000U) {
        return ((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)((s32)((void *) (arg0)));
    }
    return 0;
}

void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((int (*)(void*, int))obj_testFlags30)((void*)(arg0), 0x02000000) == 0) {
        spawn_particle_effect_with_flags(arg1, 0xB9, 0x40);
        spawn_particle_effect_with_flags(arg1, 0xBA, 0x40);
        ((s32 (*)(s32, s32))trigger_switch_attack__10TObjPlayerFPvi)(arg0, arg1);
    }
}

void spawn_freeze_shell_effect(u8 *arg0, u32 arg1, s32 arg2) {
    u32 temp_r4;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        if (arg1 != 0U) {
            create__10TObjPlayerFUiii((u32) arg0, (s32) arg1, 0x96);
        } else {
            temp_r4 = M2C_FIELD(arg0, u32 *, 0xA4);
            if (temp_r4 != 0U) {
                create__10TObjPlayerFUiii((u32) arg0, (s32) temp_r4, 0x96);
            }
        }
        if (arg2 != 0) {
            play_sound_effect((s32)(0xB20F), (s32)((u32) (arg0 + 0x38)), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_800100A0(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = spawn_particle_effect_with_flags((s32)(arg0 + 0x2FC), (s32)(0x21), (s32)(0x50));
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(void*))obj_getField1c)((void*)(arg0)));
        }
        if (arg1 != 0) {
            play_sound_effect((s32)(0xB210), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void spawn_confusion_feedback_effect(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = spawn_particle_effect_with_flags((s32)(arg0 + 0x2FC), (s32)(0x24), (s32)(0x50));
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(void*))obj_getField1c)((void*)(arg0)));
        }
        if (arg1 != 0) {
            play_sound_effect((s32)(0xB20E), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_800101B0(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = spawn_particle_effect_with_flags((s32)(arg0 + 0x2FC), (s32)(0x27), (s32)(0x50));
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(void*))obj_getField1c)((void*)(arg0)));
        }
        if (arg1 != 0) {
            play_sound_effect((s32)(0xB20D), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void spawn_paralysis_feedback_effect(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = spawn_particle_effect_with_flags((s32)(arg0 + 0x2FC), (s32)(0x26), (s32)(0x50));
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(void*))obj_getField1c)((void*)(arg0)));
        }
        if (arg1 != 0) {
            play_sound_effect((s32)(0xB20C), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void spawn_poison_effect__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)((int (*)(void*, int))obj_testFlags30)((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = spawn_particle_effect_with_flags((s32)(arg0 + 0x2FC), (s32)(0x25), (s32)(0x50));
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(void*))obj_getField1c)((void*)(arg0)));
        }
        if (arg1 != 0) {
            play_sound_effect((s32)(0xCD0B), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

s32 calc_freeze_chance(TObjPlayer *arg0, TObjPlayer *arg1, TObjPlayer *arg2, f32 farg0) {
    f32 var_f31;

    var_f31 = farg0;
    if ((((u16 (*)(TObjPlayer *))obj_getField1c)(arg1) >= 0x1000U) && (((u16 (*)(TObjPlayer *))obj_getField1c)(arg1) < 0x4000U) && (((u16 (*)(TObjPlayer *))obj_getField1c)(arg2) < 0x1000U)) {
        var_f31 = 0.75f - ((f32) ((s16 (*)(TObjPlayer *))get_class_id__10TObjPlayerFPv)(arg0) / 100.0f);
        if (var_f31 < 0.0f) {
            var_f31 = 0.0f;
        }
    } else if (((s32) lbl_805D5550 == 3) && (TObjPlayer__data_805D7D28 < var_f31)) {
        var_f31 = TObjPlayer__data_805D7D28;
    } else if (lbl_805D7D2C < var_f31) {
        var_f31 = lbl_805D7D2C;
    }
    return calc_boss4_scale__10TObjPlayerFi((s32) arg0) < var_f31;
}

s32 calc_shock_chance(TObjPlayer *arg0, TObjPlayer *arg1, TObjPlayer *arg2) {
    f32 var_f31;

    if ((((u16 (*)(TObjPlayer *))obj_getField1c)(arg1) >= 0x1000U) && (((u16 (*)(TObjPlayer *))obj_getField1c)(arg2) < 0x1000U)) {
        var_f31 = 0.75f - ((f32) ((s16 (*)(TObjPlayer *))get_item_index__10TObjPlayerFPv)(arg0) / 100.0f);
        if (var_f31 < 0.0f) {
            var_f31 = 0.0f;
        }
    } else if ((s32) lbl_805D5550 == 3) {
        var_f31 = lbl_805D7D30;
    } else {
        var_f31 = lbl_805D7D34;
    }
    return calc_boss4_scale__10TObjPlayerFi((s32) arg0) < var_f31;
}

void TObjPlayer__sub_8001053C(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjPlayer__data_805D7D24;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805D7D24;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjPlayer__data_805D7D24;
}

void apply_velocity__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x308));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30C));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x310));
}

s16 clamp_field_32E__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32E);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32E) = 0;
    } else {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2BA);
        if (temp_r0 < temp_r4) {
            M2C_FIELD(arg0, s16 *, 0x32E) = temp_r0;
        }
    }
    return M2C_FIELD(arg0, s16 *, 0x32E);
}

s16 clamp_value__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s16 *, 0x32C) = 0;
    } else {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
        if (temp_r0 < temp_r4) {
            M2C_FIELD(arg0, s16 *, 0x32C) = temp_r0;
        }
    }
    return M2C_FIELD(arg0, s16 *, 0x32C);
}

void apply_anti_technique__10TObjPlayerFv(u8 *arg0, s32 arg1) {
    if (arg1 >= 0) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 0)) {
        case 0xF:
            *(u32 *)(arg0 + 0x30) &= ~3;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x254);
        }
    }
    if (arg1 >= 1) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 3:
            TObjPlayer__sub_800192B4(arg0, (int)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 1)));
            *(u32 *)(arg0 + 0x30) &= ~0x3C;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        }
    }
    if (arg1 >= 2) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 0)) {
        case 0x10:
            TObjPlayer__sub_800192B4(arg0, (int)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 0)));
            *(u32 *)(arg0 + 0x30) &= ~3;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x254);
        }
    }
    if (arg1 >= 3) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 0x12:
            *(u32 *)(arg0 + 0x30) &= ~0x3C;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        }
    }
    if (arg1 >= 4) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 0x11:
            *(u32 *)(arg0 + 0x30) &= ~0x3C;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        }
    }
    if (arg1 >= 5) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 2)) {
        case 0xB:
            add_to_field_2c8__10TObjPlayerFPvi(arg0, (int)((f32)get_field_2c0__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 2)));
            add_to_field_2ca__10TObjPlayerFPvi(arg0, (int)((f32)get_field_2c2__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 2)));
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x26C);
        }
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 3)) {
        case 0xC:
            add_to_field_2ce__10TObjPlayerFPvi(arg0, (int)((f32)get_atp__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 3)));
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x278);
        }
    }
    if (arg1 >= 6) {
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 2:
            TObjPlayer__sub_800192B4(arg0, (int)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 1)));
            *(u32 *)(arg0 + 0x30) &= ~0x3C;
            ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        }
    }
    *(u32 *)(arg0 + 0x330) = *(u32 *)(arg0 + 0x30) & 0x3F;
    ((void (*)(void *, u32))obj_clearFlags30)(arg0, 0x4000);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x284);
}

void add_id_to_slots__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 var_r30;

    var_r30 = 0;
loop_1:
    if (arg1 != ((u16 (*)(s32, s32))obj_getArrU16_FC)(arg0, var_r30)) {
        if (((u16 (*)(s32, s32))obj_getArrU16_FC)(arg0, var_r30) == 0xFFFF) {
            ((s32 (*)(s32, s32, u16))obj_setArrS16_FC)(arg0, var_r30, arg1);
            return;
        }
        var_r30 += 1;
        if (var_r30 >= 4) {

        } else {
            goto loop_1;
        }
    }
}

void clear_s16_arrays__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 4; i++) { ((int (*)(void*, void*))obj_clearArrS16_FC)(p, (void*)i); } } }

int TObjPlayer__sub_80010A78(void) { return 0; }

void TObjPlayer__sub_80010A80(void) {  }

void enemy_spawn_zalure_effect(s32 arg0) {
    Stack_80010A84 stack;
    s32 temp_r3;
    stack.spC = 0;
    stack.sp8 = 0;
    stack.sp10 = -0x8000;
    temp_r3 = create_oneshot_particle_emitter((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) (0x1FE), (int) (0x50));
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs((s32)((int) (temp_r3)), (s32)((void *) (((s32 (*)(s32))obj_getField1c)((s32)((void *) (arg0))))));
    }
}

void trigger_switch_attack__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0 + 0x2FC, 0x1FE, 0x50);
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(s32))obj_getField1c)(arg0));
    }
}

void enemy_spawn_jellen_effect(s32 arg0) {
    Stack_80010B44 stack;
    s32 temp_r3;
    stack.spC = 0;
    stack.sp8 = 0;
    stack.sp10 = -0x8000;
    temp_r3 = create_oneshot_particle_emitter((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) (0x1FD), (int) (0x50));
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs((s32)((int) (temp_r3)), (s32)((void *) (((s32 (*)(s32))obj_getField1c)((s32)((void *) (arg0))))));
    }
}

void apply_switch_attack__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0 + 0x2FC, 0x1FD, 0x50);
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs(temp_r3, ((s32 (*)(s32))obj_getField1c)(arg0));
    }
}

s32 is_entity_locally_controlled(s32 id) {
    void *p;
    if ((u16)id == 0xFFFF || (u16)id >= 0x1000) {
        return 0;
    }
    p = find_entity_by_id(id);
    if (p == 0) {
        return 0;
    }
    return ((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(p);
}

void handle_6x9A_update_entity_stat(Pkt_80010C54 *pkt) {
    s16 v;
    s32 player;
    s32 amount;
    if (pkt == NULL) {
        return;
    }
    ((M2C_UNK (*)(void *))bswap_head16__10TObjPlayerFPv)(pkt);
    if (pkt->client >= 0x1000U) {
        return;
    }
    player = get_player_by_client_id(pkt->client);
    if (player == 0) {
        return;
    }
    amount = pkt->amount;
    switch (pkt->which) {
    case 0: {
        v = amount;
        ((M2C_UNK (*)(s32, s16))TObjectV8047c128_subtract_hp)(player, v);
        if (((s32 (*)(u16))is_entity_locally_controlled)(pkt->target) != 0) {
            ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))draw_hp_label)(player, player + 0x2FC, 0xA, v);
        } else {
            ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))draw_hp_label)(player, player + 0x2FC, 0xA, -amount);
        }
        break;
    }
    case 1: {
        v = amount;
        ((M2C_UNK (*)(s32, s16))subtract_actor_tp)(player, v);
        if (((s32 (*)(u16))is_entity_locally_controlled)(pkt->target) != 0) {
            ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))show_tp_font)(player, player + 0x2FC, 0xA, v);
        } else {
            ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))show_tp_font)(player, player + 0x2FC, 0xA, -amount);
        }
        break;
    }
    case 2:
        ((M2C_UNK (*)(s32, s32))try_spend_actor_meseta)(player, amount);
        ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))show_meseta_label)(player, player + 0x2FC, 0xA, -amount);
        break;
    case 3: {
        v = amount;
        ((M2C_UNK (*)(s32, s16))add_actor_hp)(player, v);
        ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))draw_hp_label)(player, player + 0x2FC, 0xA, v);
        ((M2C_UNK (*)(s32))spawn_recovery_effect__10TObjPlayerFPv)(player);
        break;
    }
    case 4: {
        v = amount;
        ((M2C_UNK (*)(s32, s16))add_actor_tp)(player, v);
        ((M2C_UNK (*)(s32, s32, M2C_UNK, s16))show_tp_font)(player, player + 0x2FC, 0xA, v);
        ((M2C_UNK (*)(s32))spawn_recovery_effect__10TObjPlayerFPv)(player);
        break;
    }
    }
}

void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c) {
    Pkt_80010DE8 pkt;
    ((void (*)(Pkt_80010DE8 *))TObjPlayer__sub_80019664)(&pkt);
    pkt.f2 = self->f1c;
    pkt.f4 = a;
    pkt.f6 = b;
    pkt.f7 = c;
    send_head__10TObjPlayerFPv(&pkt);
}

void empty_post_damage_hook(void *defender, void *attacker) {  }

#pragma push
#pragma opt_pointer_analysis on
void record_local_damage_if_enabled(void *arg0, void *arg1, s32 arg2) {
  if ((((get_rule_field_0__6TLobbyFPv(&lbl_8050EA40.value) == 1) && (((int (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) && (arg2 > 0)) && (arg1 != NULL))
  {
    TOMineTrap__sub_801B0300((void *) arg0, (void *) arg1, (void *) arg2);
  }
}
#pragma pop

void fn_80010EBC(void) {  }

void fn_80010EC0(void) {  }

void fn_80010EC4(void) {  }

void fn_80010EC8(void) {  }

void assign_slots_from_list(void *arg0, s32 arg1) {
    s32 var_r31;

    if (arg1 != 0) {
        if (((s32 (*)(void))is_split_screen)() != 0) {
            var_r31 = 0;
            do {
                ((s32 (*)(void *, s32))add_id_to_slots__10TObjPlayerFiUs)(arg0, ((s32 (*)(s32, s32))obj_getArrU16_FC)(arg1, var_r31));
                var_r31 += 1;
            } while (var_r31 != 4);
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 0x2D6) == 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x2D6) = fn_80010F4C((void*)(arg1));
        }
    }
}

u16 fn_80010F4C(void* p) { return *(u16*)((char*)p + 0x2d6); }

void record_attack_source(Obj_80010F54 *self, s32 id) {
    if ((u16)id != 0xFFFF) {
        self->id = id;
        if (self->id < 0x1000 && is_entity_locally_controlled(self->id) != 0) {
            if (((s32 (*)(void))is_split_screen)() == 0) {
                self->id2 = self->id;
            } else {
                ((s32 (*)(void *, s32))add_id_to_slots__10TObjPlayerFiUs)(self, id);
            }
        }
    }
}

void attach_mine_trap__10TObjPlayerFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        ((int (*)(void*, void*))record_attack_source)((void*)(arg0), (void*)(((s32 (*)(u32))obj_getField1c)(arg1)));
    }
}

void TObjPlayer__sub_80011010(void) {  }

f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return lbl_805D7D38 * (f32) rand();
    }
    return ((f32 (*)(s32))calc_random_ratio__10TObjPlayerFv)(arg0 + 0x160);
}

void render_with_position_override__10TObjPlayerFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 spC;
    s32 sp8;

    push_matrix();
    direction_to_rotation_xz((void *) (arg0 + 0x248), (void *) (&spC), (void *) (&sp8));
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (lbl_805D7D40 + M2C_FIELD(arg0, f32 *, 0x3C)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
    rotate_matrix_z((int) (0), (int) (sp8));
    rotate_matrix_x((int) (0), (int) (spC));
    ((M2C_UNK (*)(int, int))rotate_matrix_y)((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (-0x4000));
    if (arg1 != NULL) {
        scale_matrix((int) (0), (f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 8)), (f32) (TObjPlayer__data_805D7D44));
    }
    draw_blob_shadow((void *) (arg2));
    pop_matrix();
}

s32 try_spend_actor_meseta(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x2B0);
    temp_r0 = M2C_FIELD(temp_r5, s32 *, 0x20);
    if (temp_r0 < arg1) {
        return 0;
    }
    M2C_FIELD(temp_r5, s32 *, 0x20) = (s32) (temp_r0 - arg1);
    return 1;
}

s32 TObjPlayer::add_meseta(s32 amount) {
  TObjPlayer* self = this;
  s32 limit = 999999;
  int maximum;
  ((ActorMesetaView *) self->m_2b0)->meseta += amount;
  maximum = limit;
  if (maximum < ((ActorMesetaView *) self->m_2b0)->meseta)
  {
    ((ActorMesetaView *) self->m_2b0)->meseta = maximum;
    return 0;
  }
  return 1;
}

s32 get_actor_level_index(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x2b0) + 0x18); }

s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x11A) = (s16) (M2C_FIELD(arg0, s16 *, 0x11A) + arg1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x11A) > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x11A) = 0x3E7;
        return 0;
    }
    return 1;
}

s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x2B0);
    M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) - arg1);
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x2B0);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x1C) < 0) {
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        return 0;
    }
    return 1;
}

s32 add_actor_exp(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  int new_var;
  u8 *temp_r6;
  temp_r6 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2B0)));
  *((s32 *) (((s8 *) temp_r6) + 0x1C)) = (s32) ((*((s32 *) (((s8 *) temp_r6) + 0x1C))) + arg1);
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2B0)));
  new_var = 0x05F5E0FF;
  if (new_var < ((s32) (*((s32 *) (((s8 *) temp_r3) + 0x1C)))))
  {
    *((s32 *) (((s8 *) temp_r3) + 0x1C)) = new_var;
    return 0;
  }
  return 1;
}

int TObjPlayer__sub_8001124C(u8 *arg0) {
  int new_var;
  s16 temp_r0;
  new_var = 0xFFFFu;
  temp_r0 = (unsigned long) (*((s16 *) (((s8 *) arg0) + (((((0x2BE & new_var) & new_var) & new_var) & new_var) & new_var))));
  if (temp_r0 < 0)
  {
    return 0U;
  }
  if (temp_r0 <= 0xFA)
  {
    return (u8) temp_r0;
  }
  return 0xFAU;
}

s32 add_actor_tp_bonus(O_80011274 *self, s32 x) {
    self->v += x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

s32 add_actor_tp(u8 *arg0, s32 arg1) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) (M2C_FIELD(arg0, s16 *, 0x32E) + arg1);
    if (M2C_FIELD(arg0, s16 *, 0x32E) > M2C_FIELD(arg0, s16 *, 0x2BA)) {
        M2C_FIELD(arg0, s16 *, 0x32E) = M2C_FIELD(arg0, s16 *, 0x2BA);
        return 0;
    }
    return 1;
}

s32 subtract_actor_tp(O_800112D4 *self, s32 x) {
    self->v -= x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

s32 check_can_act__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))obj_isState2_324)() != 0) {
        return 0;
    }
    return ((int (*)(void*, void*))subtract_actor_tp)((void*)(arg0), (void*)(arg1));
}

int TObjPlayer__sub_80011350(u8 *arg0) {
  s16 temp_r0;
  int new_var;
  new_var = *((s16 *) (((s8 *) arg0) + 0x2BC));
  temp_r0 = new_var;
  if (temp_r0 < 0)
  {
    return 0U;
  }
  if (temp_r0 <= 0xFA)
  {
    return (u8) temp_r0;
  }
  return 0xFAU;
}

s32 add_actor_hp_bonus(O_80011378 *self, s32 x) {
    self->v += x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

s32 clamp_hp_value__10TObjPlayerFPvPv(u8 *arg0, s16 *arg1) {
    s16 temp_r0;
    s16 temp_r5;
    temp_r5 = *arg1;
    if (temp_r5 < 0) {
        *arg1 = 0;
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
    if (temp_r5 > temp_r0) {
        *arg1 = temp_r0;
        return 0;
    }
    return 1;
}

void set_hp_clamped__10TObjPlayerFPvs(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = arg1;
    clamp_hp_value__10TObjPlayerFPvPv((u8 *)(arg0), (s16 *)(arg0 + 0x32C));
}

#pragma push
#pragma scheduling off
s32 add_actor_hp(u8 *arg0, s16 arg1) {
    s16 temp_r4;
    s16 temp_r0;
    if (arg1 < 0) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (M2C_FIELD(arg0, s16 *, 0x32C) + arg1);
    if (M2C_FIELD(arg0, s16 *, 0x32C) > M2C_FIELD(arg0, s16 *, 0x2B8)) {
        M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x2B8);
        return 0;
    }
    return 1;
}
#pragma pop

s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1) {
  if (arg1 < 0)
  {
    return 0;
  }
  *((s16 *) (((s8 *) arg0) + 0x32C)) = (s16) ((*((s16 *) (((s8 *) arg0) + 0x32C))) - arg1);
  if ((*((s16 *) (((s8 *) arg0) + 0x32C))) < 0)
  {
    *((s16 *) (((s8 *) arg0) + 0x32C)) = 0;
    return 0;
  }
  return 1;
}

s32 damage_hp__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))obj_isState2_324)() != 0) {
        return 0;
    }
    return ((int (*)(void*, void*))TObjectV8047c128_subtract_hp)((void*)(arg0), (void*)(arg1));
}

u16 find_nearest_visible_player(u8 *arg0, Vec_800115C4 *arg1, f32 farg0) {
    f32 best = farg0 * farg0;
    u16 result = 0xFFFF;
    Vec_800115C4 diff = lbl_80434074;
    f32 dist;
    Player_800115C4 *player;
    s32 i;
    for (i = 0; i < lbl_805D586C; i++) {
        player = ((Player_800115C4 * (*)(s32))get_player_data__10TObjPlayerFi)(i);
        if (player != NULL && player->id < 0x1000 && !(player->flags & 0x02000800)) {
            if (((s32 (*)(Player_800115C4 *))get_field_3e4__10TObjPlayerFPv)(player) == get_current_floor()) {
                ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&diff, &player->pos);
                ((M2C_UNK (*)(void *, void *))subtract_vector)(&diff, arg0 + 0x2FC);
                dist = (diff.x * diff.x) + (diff.z * diff.z);
                if (dist < best && ((s32 (*)(void *, void *))check_path_obstructed)(arg0, &player->pos) == 0) {
                    best = dist;
                    result = player->id;
                    if (arg1 != NULL) {
                        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg1, &diff);
                    }
                }
            }
        }
    }
    return result;
}

s32 is_actor_cadence_frame(O_80011704 *self, s32 x) {
    s32 g = lbl_805D53A4 % x;
    if ((self->f1c % x) == g) {
        return 1;
    }
    return 0;
}

void apply_actor_gravity(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = ((s32 (*)(void *, void *, void *))project_actor_to_ground)((void *) (arg0), (void *) (&position.x), (void *) (arg0 + 0x248));
    if (arg1 != NULL) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 != 0) {
        M2C_FIELD(arg0, f32 *, 0x30C) = (f32) (M2C_FIELD(arg0, f32 *, 0x30C) + lbl_805D7D48);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30C));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805D7D24;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}

#pragma push
#pragma fp_contract on
#define TEST30(o, m) ((s32 (*)(Actor_8001311C *, u32))obj_testFlags30)(o, m)
#define SET30(o, m) ((void (*)(Actor_8001311C *, u32))obj_setFlags30)(o, m)
#define FIELD1C(o) ((u16 (*)(Actor_8001311C *))obj_getField1c)(o)
#define STATE2(o) ((s32 (*)(Actor_8001311C *))obj_isState2_324)(o)
#define STATE3(o) ((s32 (*)(Actor_8001311C *))obj_isState3_324)(o)
#define LOCAL(o) ((s32 (*)(Actor_8001311C *))is_locally_controlled__10TObjPlayerFPv)(o)
#define VECCOPY(d, s) ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(d, s)
#define HIT(o, p) ((void (*)(Actor_8001311C *, Vec_8001311C *, s32))try_apply_damage__19TObjEneEpsilonGuardFPvUii)(o, p, 0)
#define DAMAGE(o, p, d) ((void (*)(Actor_8001311C *, Vec_8001311C *, s32))try_apply_damage__19TObjEneEpsilonGuardFPvUii)(o, p, d)
#define SWITCH_ATTACK(o, p) ((void (*)(Actor_8001311C *, Vec_8001311C *))trigger_switch_attack__10TObjPlayerFPvi)(o, p)
#define SUB_HP(o, d) ((s32 (*)(Actor_8001311C *, s32))TObjectV8047c128_subtract_hp)(o, d)
f32 receive_direct_attack__10TObjPlayerFv(Actor_8001311C *self, Actor_8001311C *att, Info_8001311C *arg, Coll_8001311C *coll, s32 tech, s32 arg5) {
    Info_8001311C info;
    Vec_8001311C pos;
    s32 immune;
    u16 aid;
    f32 mst;
    f32 dmg;
    f32 f;
    f32 heal;
    ((void (*)(Info_8001311C *, Info_8001311C *))obj_copyVec2_0)(&info, arg);
    if (info.power < 0.0f) {
        info.power = 0.0f;
    }
    if (coll != NULL) {
        VECCOPY(&pos, &coll->pos);
    } else {
        VECCOPY(&pos, &self->pos);
    }
    if (att == NULL || FIELD1C(att) == 0xFFFF || (info.type != 8 && TEST30(self, 0x800) != 0)) {
        return TObjPlayer__data_805D7D24;
    }
    if (info.type != 6 && info.type != 7 && info.type != 8 && info.type != 9 && info.type != 10 && info.type != 20 &&
        (TEST30(self, 0x04000000) != 0 || (coll != NULL && (coll->flags & 0x02000080)))) {
        if (STATE2(self) == 0) {
            HIT(self, &pos);
        }
        return TObjPlayer__data_805D7D24;
    }
    ((void (*)(Actor_8001311C *, Actor_8001311C *))attach_mine_trap__10TObjPlayerFiUi)(self, att);
    if (STATE2(self) != 0) {
        if ((u32)(info.type - 6) <= 3 || info.type == 10) {
            immune = 0;
        } else {
            immune = 1;
        }
    } else if (self->id < 0x1000 && get_main_phase() == 15) {
        if (STATE2(att) != 0) {
            if (LOCAL(self) != 0 || STATE3(self) != 0) {
                if ((u32)(info.type - 6) <= 4 || get_type__10TObjPlayerFPv((void*)(att->f828)) != 0) {
                    immune = 0;
                } else {
                    immune = 1;
                }
            } else {
                immune = 1;
            }
        } else {
            immune = 0;
        }
    } else {
        immune = 0;
    }
    if (self->id < 0x4000) {
        mst = att->stats->mst;
        if (mst < 0.0f) {
            mst = 0.0f;
        }
    } else {
        mst = TObjPlayer__data_805D7D24;
    }
    aid = FIELD1C(att);
    if (aid < 12) {
        dmg = info.power + mst;
        if (tech != -1) {
            dmg *= TObjPlayer__data_805D7D44 + calc_technique_boost(tech, aid);
        }
    } else {
        dmg = TObjPlayer__data_805D7D4C * mst + info.power;
    }
    switch (info.type) {
    case 0:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= TObjPlayer__data_805D7D28;
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 1:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= lbl_805D7D78 * (f32)(100 - self->resist1);
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 2:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= lbl_805D7D78 * (f32)(100 - self->resist2);
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            self->f2dc |= 4;
            if (LOCAL(self) != 0 || is_local_player__10TObjPlayerFi((s32)att) != 0) {
                f = info.power - lbl_805D7D7C;
                if (f < 0.0f) {
                    f = 0.0f;
                }
                if (((s32 (*)(Actor_8001311C *, Actor_8001311C *, Actor_8001311C *, f32))calc_freeze_chance)(self, att, self, lbl_805D7D30 * (lbl_805D7D30 * f + TObjPlayer__data_805D7D74)) != 0) {
                    self->m46(coll);
                }
            }
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 3:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= lbl_805D7D78 * (f32)(100 - self->resist3);
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if ((LOCAL(self) != 0 || is_local_player__10TObjPlayerFi((s32)att) != 0) &&
                ((s32 (*)(Actor_8001311C *, Actor_8001311C *, Actor_8001311C *, f32))calc_shock_chance)(self, att, self, info.power) != 0) {
                self->m47();
            }
            ((void (*)(Actor_8001311C *, Vec_8001311C *))activate_switch_attacks__10TObjPlayerFii)(self, &pos);
            if (TEST30(self, 0x02000000) == 0) {
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 4:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= lbl_805D7D78 * (f32)(100 - self->resist4);
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 5:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            if (is_boss_area() == 0 || (lbl_805D5550 == 3 && self->id >= 0x1000)) {
                if (TEST30(self, 0x02000000) == 0) {
                    create_hit_effect__10TObjPlayerFPv(&pos);
                }
                self->f2dc |= 4;
                dmg = TObjPlayer__data_805D7D54 * (info.power - (f32)self->resist5);
                if (immune == 0 && ((f32 (*)(Actor_8001311C *))calc_boss4_scale__10TObjPlayerFi)(self) < dmg) {
                    ((void (*)(Actor_8001311C *, s16))set_hp_clamped__10TObjPlayerFPvs)(self, 0);
                    SET30(self, 0xA00);
                }
            } else {
                dmg = TObjPlayer__data_805D7D24;
            }
        }
        break;
    case 6:
        heal = TObjPlayer__data_805D7D4C * mst + info.power;
        if (immune == 0) {
            ((s32 (*)(Actor_8001311C *, s32))add_actor_hp)(self, (s32)heal);
            clamp_value__10TObjPlayerFPv(self);
        }
        ((void (*)(Actor_8001311C *, Vec_8001311C *, s32, s32))draw_hp_label)(self, &pos, 0, (s32)heal);
        dmg = TObjPlayer__data_805D7D24;
        break;
    case 7:
        dmg = TObjPlayer__data_805D7D24;
        if (STATE3(self) != 0) {
            self->m48();
        } else {
            self->m55(arg5);
        }
        break;
    case 9:
        dmg = TObjPlayer__data_805D7D24;
        if (TEST30(self, 0x02000000) == 0) {
            self->m67();
        }
        self->m49(info);
        if (self->f1c <= 0x1000 && self->f1c > 0x4000) {
            self->m72(info.type);
        }
        break;
    case 10:
        dmg = TObjPlayer__data_805D7D24;
        if (TEST30(self, 0x02000000) == 0) {
            self->m69();
        }
        self->m50(info);
        if (self->f1c <= 0x1000 && self->f1c > 0x4000) {
            self->m72(info.type);
        }
        break;
    case 11:
        dmg = TObjPlayer__data_805D7D24;
        if (TEST30(self, 0x02000000) == 0) {
            self->m68();
        }
        self->m49(info);
        if (self->f1c <= 0x1000 && self->f1c > 0x4000) {
            self->m72(info.type);
        }
        break;
    case 12:
        dmg = TObjPlayer__data_805D7D24;
        if (TEST30(self, 0x02000000) == 0) {
            self->m70();
        }
        self->m50(info);
        if (self->f1c <= 0x1000 && self->f1c > 0x4000) {
            self->m72(info.type);
        }
        break;
    case 15:
        dmg = TObjPlayer__data_805D7D24;
        if (immune == 0) {
            self->m42();
        }
        break;
    case 16:
        dmg = TObjPlayer__data_805D7D24;
        if (immune == 0) {
            self->m43();
        }
        break;
    case 17:
        dmg = TObjPlayer__data_805D7D24;
        if (immune == 0) {
            self->m44();
        }
        break;
    case 18:
        dmg = TObjPlayer__data_805D7D24;
        if (immune == 0) {
            self->m45();
        }
        break;
    case 19:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg *= lbl_805D7D78 * (f32)(100 - self->resist2);
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    self->flags30 |= 0x800;
                }
            }
            self->flags30 |= 0x200;
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    case 20:
        dmg = TObjPlayer__data_805D7D24;
        self->m54(info.power);
        break;
    case 8:
        dmg = TObjPlayer__data_805D7D24;
        self->m62();
        break;
    case 21:
        if (TEST30(self, 0x10000000) == 0 || STATE2(self) == 0) {
            dmg = info.power;
            if (immune == 0) {
                SUB_HP(self, (s32)dmg);
                if (clamp_value__10TObjPlayerFPv(self) <= 0) {
                    SET30(self, 0x800);
                }
            }
            SET30(self, 0x200);
            check_heavy_damage_flag(self, dmg);
            self->f2dc |= 4;
            if (TEST30(self, 0x02000000) == 0) {
                create_hit_effect__10TObjPlayerFPv(&pos);
                SWITCH_ATTACK(self, &pos);
                DAMAGE(self, &pos, (s32)dmg);
            }
        }
        break;
    default:
        dmg = TObjPlayer__data_805D7D24;
        break;
    }
    if (immune == 0) {
        self->m72(0);
    }
    if (LOCAL(self) != 0) {
        calc_photon_blast_charge__10TObjPlayerFv(self, (s32)(TObjPlayer__data_805D7D64 * dmg));
        self->m73();
    }
    record_local_damage_if_enabled(self, att, (s32)dmg);
    empty_post_damage_hook(self, att);
    return dmg;
}
#undef TEST30
#undef SET30
#undef FIELD1C
#undef STATE2
#undef STATE3
#undef LOCAL
#undef VECCOPY
#undef HIT
#undef DAMAGE
#undef SWITCH_ATTACK
#undef SUB_HP
#pragma pop

void apply_knockback_from_attacker(u8 *arg0, u8 *arg1) {
    Vec_8001401C diff;
    f32 scale;
    if (((s32 (*)(void))obj_isState2_324)() != 1 && ((s32 (*)(void *, int))obj_testFlags30)(arg0, 0x04000000) == 0) {
    ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&diff, arg1 + 0x38);
    ((M2C_UNK (*)(void *, void *))subtract_vector)(&diff, arg0 + 0x38);
    if ((diff.x * diff.x) + (diff.z * diff.z) < TObjPlayer__data_805D7D80) {
        M2C_FIELD(arg0, f32 *, 0x308) = TObjPlayer__data_805D7D24;
        M2C_FIELD(arg0, f32 *, 0x310) = TObjPlayer__data_805D7D24;
        return;
    }
    scale = 10.0f + (10.0f - M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x14));
    if (scale < 0.0f) {
        scale = 0.0f;
    }
    update_scale__15TObjBoss2TunnelFPv(&diff);
    M2C_FIELD(arg0, f32 *, 0x308) = -scale * diff.x;
    M2C_FIELD(arg0, f32 *, 0x310) = -scale * diff.z;
    }
}

int TObjPlayer__sub_80014830(void) { return 0; }

int TObjPlayer__sub_80014838(void) { return 0; }

void TObjPlayer__sub_80014840(void) {  }

void reset_pose__10TObjPlayerFPv(void* p) { ((int (*)(void*, void*))obj_clearFlags30)(p, (void*)2048); *(short*)((char*)p + 0x32c) = *(short*)((char*)p + 0x2b8); *(short*)((char*)p + 0x32e) = *(short*)((char*)p + 0x2ba); }

void TObjPlayer__sub_80014884(void) {  }

void TObjPlayer__sub_80014888(void) {  }

void TObjPlayer__sub_8001488C(void) {  }

void TObjPlayer__sub_80014890(void) {  }

void TObjPlayer__sub_80014894(void) {  }

void TObjPlayer__sub_80014898(void) {  }

void apply_action_hold_status(s32 arg0, f32 farg0) {
    ((void (*)(s32, s32, s32))TObjPlayer__sub_8001940C)(arg0, 4, 0x14);
    ((void (*)(s32, s32, s32))TObjPlayer__sub_800193FC)(arg0, 4, (s32) farg0);
    ((void (*)(void *, u32))obj_setFlags30)((void *) arg0, 0x4000U);
}

void clear_all_status_effects(u8 *arg0) {
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 0)) {
    case 0x10:
        TObjPlayer__sub_800192B4(arg0, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 0)));
        break;
    }
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
    case 2:
    case 3:
        TObjPlayer__sub_800192B4(arg0, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 1)));
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x254);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
    add_to_field_2c8__10TObjPlayerFPvi(arg0, (s32) ((f32) get_field_2c0__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 2)));
    add_to_field_2ca__10TObjPlayerFPvi(arg0, (s32) ((f32) get_field_2c2__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 2)));
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x26C);
    add_to_field_2ce__10TObjPlayerFPvi(arg0, (s32) ((f32) get_atp__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 3)));
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x278);
    ((void (*)(void *, u32))obj_clearFlags30)(arg0, 0x4000U);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x284);
}

void cure_paralysis__10TObjPlayerFv(Obj_80014B5C *self) {
    switch (((int (*)(void *, int))obj_getArrWord_254)(self, 0)) {
    case 0x10:
        ((s32 (*)(void *, s32))TObjPlayer__sub_800192B4)(self, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(self) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(self, 0)));
        self->f30 &= ~3;
        self->f330 = self->f30 & 0x3f;
        ((void (*)(void *))reset_status_effect_row)(self->f254);
        break;
    }
}

void cure_poison_ailment(Obj_80014C1C *self) {
    switch (((int (*)(void *, int))obj_getArrWord_254)(self, 0)) {
    case 0xf:
        self->f30 &= ~3;
        self->f330 = self->f30 & 0x3f;
        ((void (*)(void *))reset_status_effect_row)(self->f254);
        break;
    }
}

#pragma push
#pragma fp_contract on
void apply_defense_stat_status__10TObjPlayerFv(s32 arg0, void *arg1) {
    f32 temp_f31;
    f32 var_f30;
    f32 temp_f29;

    if ((s32) M2C_FIELD(arg1, s32 *, 0) != 0xC) {
        var_f30 = TObjPlayer__data_805D7D54 * (lbl_805D7D8C * M2C_FIELD(arg1, f32 *, 4) + TObjPlayer__data_805D7D70);
    } else {
        var_f30 = lbl_805D7D90 * (lbl_805D7D8C * M2C_FIELD(arg1, f32 *, 4) + TObjPlayer__data_805D7D70);
    }
    temp_f29 = ((f32 (*)(s32, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 3);
    temp_f31 = ((f32 (*)(f32))get_random_float__8TObjFishFv)(var_f30);
    if (!(((f32 (*)(f32))get_random_float__8TObjFishFv)(temp_f29) > temp_f31)) {
        temp_f31 = -((f32 (*)(s32, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 3);
        {
            f32 v = ((s16 (*)(s32))get_atp__10TObjPlayerFPv)(arg0);
            v *= temp_f31;
            ((M2C_UNK (*)(s32, s32))add_to_field_2ce__10TObjPlayerFPvi)(arg0, (s32) v);
        }
        ((M2C_UNK (*)(s32, M2C_UNK, s32))TObjPlayer__sub_8001940C)(arg0, 3, M2C_FIELD(arg1, s32 *, 0));
        ((M2C_UNK (*)(s32, M2C_UNK, f32))TObjPlayer__sub_8001941C)(arg0, 3, var_f30);
        ((M2C_UNK (*)(s32, s32))add_to_field_2ce__10TObjPlayerFPvi)(arg0, (s32) (var_f30 * (f32) ((s16 (*)(s32))get_atp__10TObjPlayerFPv)(arg0)));
        ((M2C_UNK (*)(f32, f32, f32, s32, M2C_UNK, s32))TObjPlayer__sub_800193FC)(M2C_FIELD(arg1, f32 *, 4), TObjPlayer__data_805D7D70, TObjPlayer__data_805D7D58, arg0, 3, (s32) (TObjPlayer__data_805D7D58 * (TObjPlayer__data_805D7D70 * M2C_FIELD(arg1, f32 *, 4) + lbl_805D7D94)));
        if (((s32 (*)(s32, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0) {
            u32 temp_obj = __nw__7TObjectFUl(0x64);
            if (temp_obj != 0U) {
                ((M2C_UNK (*)(u32, M2C_UNK *, M2C_UNK *, s32, s32, f32, M2C_UNK))construct_actor_light_task)(temp_obj, lbl_80434050, TObjPlayer__data_80434060, 0x2D, arg0, TObjPlayer__data_805D7D98, tl_07);
            }
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void apply_attack_stat_status__10TObjPlayerFv(TObjPlayer *arg0, StatStatusReceipt_80014E74 *arg1) {
    f32 var_f31;
    f32 temp_f30;
    f32 temp_f29;

    if ((s32) arg1->kind != 0xB) {
        var_f31 = TObjPlayer__data_805D7D54 * (lbl_805D7D8C * arg1->power + TObjPlayer__data_805D7D70);
    } else {
        var_f31 = lbl_805D7D90 * (lbl_805D7D8C * arg1->power + TObjPlayer__data_805D7D70);
    }
    temp_f29 = ((f32 (*)(TObjPlayer*, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2);
    temp_f30 = ((f32 (*)(f32))get_random_float__8TObjFishFv)(var_f31);
    if (!(((f32 (*)(f32))get_random_float__8TObjFishFv)(temp_f29) > temp_f30)) {
        temp_f30 = -((f32 (*)(TObjPlayer*, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2);
        {
            f32 v = ((s16 (*)(TObjPlayer*))get_field_2c0__10TObjPlayerFPv)(arg0);
            v *= temp_f30;
            ((M2C_UNK (*)(TObjPlayer*, s32))add_to_field_2c8__10TObjPlayerFPvi)(arg0, (s32) v);
        }
        temp_f30 = -((f32 (*)(TObjPlayer*, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2);
        {
            f32 v = ((s16 (*)(TObjPlayer*))get_field_2c2__10TObjPlayerFPv)(arg0);
            v *= temp_f30;
            ((M2C_UNK (*)(TObjPlayer*, s32))add_to_field_2ca__10TObjPlayerFPvi)(arg0, (s32) v);
        }
        ((M2C_UNK (*)(TObjPlayer*, M2C_UNK, s32))TObjPlayer__sub_8001940C)(arg0, 2, arg1->kind);
        ((M2C_UNK (*)(TObjPlayer*, M2C_UNK, f32))TObjPlayer__sub_8001941C)(arg0, 2, var_f31);
        ((M2C_UNK (*)(TObjPlayer*, s32))add_to_field_2c8__10TObjPlayerFPvi)(arg0, (s32) (var_f31 * (f32) ((s16 (*)(TObjPlayer*))get_field_2c0__10TObjPlayerFPv)(arg0)));
        ((M2C_UNK (*)(TObjPlayer*, s32))add_to_field_2ca__10TObjPlayerFPvi)(arg0, (s32) (var_f31 * (f32) ((s16 (*)(TObjPlayer*))get_field_2c2__10TObjPlayerFPv)(arg0)));
        ((M2C_UNK (*)(f32, f32, f32, TObjPlayer*, M2C_UNK, s32))TObjPlayer__sub_800193FC)(arg1->power, TObjPlayer__data_805D7D70, TObjPlayer__data_805D7D58, arg0, 2, (s32) (TObjPlayer__data_805D7D58 * (TObjPlayer__data_805D7D70 * arg1->power + lbl_805D7D94)));
        if (((s32 (*)(TObjPlayer*, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0) {
            u32 temp_obj = __nw__7TObjectFUl(0x64);
            if (temp_obj != 0U) {
                ((M2C_UNK (*)(u32, M2C_UNK *, M2C_UNK *, s32, TObjPlayer*, f32, M2C_UNK))construct_actor_light_task)(temp_obj, lbl_80434040, TObjPlayer__data_80434060, 0x2D, arg0, TObjPlayer__data_805D7D98, tl_07);
            }
        }
    }
}
#pragma pop

void clear_harmful_statuses__10TObjPlayerFv(u8 *arg0) {
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 0)) {
    case 0x10:
        TObjPlayer__sub_800192B4(arg0, (s32)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 0)));
        break;
    }
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
    case 2:
    case 3:
        TObjPlayer__sub_800192B4(arg0, (s32)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 1)));
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC0);
    M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x254);
    ((void (*)(void *))reset_status_effect_row)(arg0 + 0x260);
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 2)) {
    case 0xB:
        add_to_field_2c8__10TObjPlayerFPvi(arg0, (s32)((f32)get_field_2c0__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 2)));
        add_to_field_2ca__10TObjPlayerFPvi(arg0, (s32)((f32)get_field_2c2__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 2)));
        ((void (*)(void *))reset_status_effect_row)(arg0 + 0x26C);
        break;
    }
    switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 3)) {
    case 0xC:
        add_to_field_2ce__10TObjPlayerFPvi(arg0, (s32)((f32)get_atp__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 3)));
        ((void (*)(void *))reset_status_effect_row)(arg0 + 0x278);
        break;
    }
}

void apply_shock_status__10TObjPlayerFv(u8 *arg0) {
    s32 ok;
    f32 k;
    f32 v;

    ok = 0;
    if (((u16 (*)(void *))obj_getField1c)(arg0) >= 0x1000 && ((u16 (*)(void *))obj_getField1c)(arg0) < 0x4000 &&
        ((s32 (*)(void *, int))obj_testFlag_2E4)(arg0, 4) != 0 && ((s32 (*)(void *, int))obj_testFlags30)(arg0, 0x01000000) == 0 &&
        ((s16 (*)(void *, int))test_immunity_flags__10TObjPlayerFPvi)(arg0, 4) == 0) {
        ok = 1;
    }
    if (((u16 (*)(void *))obj_getField1c)(arg0) < 0x1000 && ((s16 (*)(void *, int))test_immunity_flags__10TObjPlayerFPvi)(arg0, 4) == 0) {
        ok = 1;
    }
    if (ok != 0) {
        if (((s32 (*)(void *, int))obj_testFlags30)(arg0, 0x02000000) == 0) {
            ((void (*)(void *, int))TObjPlayer__sub_800100A0)(arg0, 1);
        }
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 2:
        case 3:
            k = -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 1);
            v = (f32)get_s16_2c4__10TObjPlayerFPv(arg0);
            v *= k;
            ((void (*)(void *, s32))TObjPlayer__sub_800192B4)(arg0, (s32)v);
            break;
        }
        ((void (*)(void *, int, int))TObjPlayer__sub_8001940C)(arg0, 1, 3);
        if (((u16 (*)(void *))obj_getField1c)(arg0) < 0x1000) {
            ((void (*)(void *, int, f32))TObjPlayer__sub_8001941C)(arg0, 1, (*(f32 *)&TObjPlayer__data_805D7D24));
        } else {
            ((void (*)(void *, int, f32))TObjPlayer__sub_8001941C)(arg0, 1, lbl_805D7D9C);
        }
        ((void (*)(void *, int, int))TObjPlayer__sub_800193FC)(arg0, 1, 0x12C);
        M2C_FIELD(arg0, u32 *, 0x30) &= ~0x3C;
        M2C_FIELD(arg0, u32 *, 0x30) |= 4;
        if (M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000) {
            ((void (*)(void *, s32))TObjPlayer__sub_800192B4)(arg0, (s32)(lbl_805D7D9C * (f32)get_s16_2c4__10TObjPlayerFPv(arg0)));
        }
    }
}

void apply_movement_ailment__10TObjPlayerFv(u8 *arg0, s32 arg1) {

    if ((((s32 (*)(void *, u32))obj_testFlags30)(arg0, 0x8000U) == 0) && (((s32 (*)(void *, u32))obj_testFlags30)(arg0, 0x01000000U) == 0) && (((s16 (*)(void *, s32))test_immunity_flags__10TObjPlayerFPvi)(arg0, 0x20) == 0) && ((((s32 (*)(void *, u32))obj_testFlags30)(arg0, 0x20U) == 0) || (((s32 (*)(void *, int))TObjPlayer__sub_8001943C)((void *) (arg0), (int) (1)) <= 0))) {
        ((M2C_UNK (*)(void *, void *, int))spawn_freeze_shell_effect)((void *) (arg0), (void *) (arg1), (int) (1));
        switch (((int (*)(void *, int))obj_getArrWord_254)(arg0, 1)) {
        case 2:
        case 3:
            TObjPlayer__sub_800192B4(arg0, (s32)((f32)get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)(arg0, 1)));
            break;
        }
        ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_8001940C)((void *) (arg0), (int) (1), (int) (2));
        ((M2C_UNK (*)(void *, int, f32))TObjPlayer__sub_8001941C)((void *) (arg0), (int) (1), (f32) (lbl_805D7DA0));
        ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_800193FC)((void *) (arg0), (int) (1), (int) (0x96));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC3);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x20);
        TObjPlayer__sub_800192B4(arg0, (s32) (lbl_805D7DA0 * (f32) get_s16_2c4__10TObjPlayerFPv(arg0)));
    }
}

void apply_confusion_status__10TObjPlayerFv(void *arg0) {
    f32 temp_f31;
    s32 temp_r3;

    if ((((s32 (*)(void *, M2C_UNK))obj_testFlag_2E4)(arg0, 0x10) == 0) && (((s16 (*)(void *, M2C_UNK))test_immunity_flags__10TObjPlayerFPvi)(arg0, 0x10) == 0)) {
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_confusion_feedback_effect)(arg0, 0);
        temp_r3 = ((s32 (*)(void *, M2C_UNK))obj_getArrWord_254)(arg0, 1);
        switch (temp_r3) {
        case 2:
        case 3:
            ((M2C_UNK (*)(void *, s32))TObjPlayer__sub_800192B4)(arg0, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 1)));
            break;
        }
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))TObjPlayer__sub_8001940C)(arg0, 1, 0x12);
        ((M2C_UNK (*)(void *, M2C_UNK, f32))TObjPlayer__sub_8001941C)(arg0, 1, TObjPlayer__data_805D7D24);
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))TObjPlayer__sub_800193FC)(arg0, 1, 0x12C);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC3);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x10);
    }
}

struct Obj800192C4;
struct ObjArr254;
struct O_800193FC;
struct O_8001940C;
struct O_8001941C;
void TObjPlayer__sub_80015884(void *arg0) {
    f32 temp_f31;
    s32 temp_r3;
    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) <= 0x1000U) && (((s16 (*)(void *, s32))test_immunity_flags__10TObjPlayerFPvi)(arg0, 8) == 0)) {
        ((void (*)(void *, s32))TObjPlayer__sub_800101B0)(arg0, 0);
        temp_r3 = ((s32 (*)(void *, s32))obj_getArrWord_254)(arg0, 1);
        switch (temp_r3) {
        case 2:
        case 3:
            TObjPlayer__sub_800192B4(arg0, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 1)));
            break;
        }
        ((void (*)(void *, s32, s32))TObjPlayer__sub_8001940C)(arg0, 1, 0x11);
        ((void (*)(void *, s32, f32))TObjPlayer__sub_8001941C)(arg0, 1, TObjPlayer__data_805D7D24);
        ((void (*)(void *, s32, s32))TObjPlayer__sub_800193FC)(arg0, 1, 0xD2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFC3);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 8);
    }
}

void apply_paralysis__10TObjPlayerFv(u8 *arg0) {
    if ((((s32 (*)(void *, s32))obj_testFlag_2E4)(arg0, 4U) == 0) && (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x01000000U) == 0) && (((s16 (*)(void *, s32))test_immunity_flags__10TObjPlayerFPvi)(arg0, 2) == 0)) {
        spawn_paralysis_feedback_effect((s32) arg0, 0);
        if (((int (*)(void *, int))obj_getArrWord_254)(arg0, 0) == 0x10) {
            TObjPlayer__sub_800192B4(arg0, (s32) ((f32) get_s16_2c4__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)((void *) (arg0), (int) (0))));
        }
        ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_8001940C)((void *) (arg0), (int) (0), (int) (0x10));
        if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
            ((M2C_UNK (*)(void *, int, f32))TObjPlayer__sub_8001941C)((void *) (arg0), (int) (0), (f32) (lbl_805D7D9C));
            TObjPlayer__sub_800192B4(arg0, (s32) (lbl_805D7D9C * (f32) get_s16_2c4__10TObjPlayerFPv(arg0)));
            ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_800193FC)((void *) (arg0), (int) (0), (int) (0xD2));
        } else {
            ((M2C_UNK (*)(void *, int, f32))TObjPlayer__sub_8001941C)((void *) (arg0), (int) (0), (f32) (TObjPlayer__data_805D7D24));
            ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_800193FC)((void *) (arg0), (int) (0), (int) (0));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 2);
    }
}

void apply_poison_status__10TObjPlayerFv(void *arg0) {
    f32 temp_f31;

    if ((((s32 (*)(void *, M2C_UNK))obj_testFlag_2E4)(arg0, 4) == 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) && (((s16 (*)(void *, M2C_UNK))test_immunity_flags__10TObjPlayerFPvi)(arg0, 1) == 0)) {
        ((M2C_UNK (*)(void *, M2C_UNK))spawn_poison_effect__10TObjPlayerFii)(arg0, 0);
        if (((s32 (*)(void *, M2C_UNK))obj_getArrWord_254)(arg0, 0) == 0x10) {
            f32 temp_d4;
            temp_f31 = -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 0);
            temp_d4 = (f32) get_s16_2c4__10TObjPlayerFPv(arg0);
            ((M2C_UNK (*)(void *, s32))TObjPlayer__sub_800192B4)(arg0, (s32) (temp_d4 * temp_f31));
        }
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))TObjPlayer__sub_8001940C)(arg0, 0, 0xF);
        ((M2C_UNK (*)(void *, M2C_UNK, f32))TObjPlayer__sub_8001941C)(arg0, 0, TObjPlayer__data_805D7D24);
        ((M2C_UNK (*)(void *, M2C_UNK, M2C_UNK))TObjPlayer__sub_800193FC)(arg0, 0, 0x2D);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 1);
    }
}

void spawn_recovery_effect__10TObjPlayerFPv(u8 *arg0) {
    if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x02000000) == 0) {
        create_timed_particle_emitter_with_flags((s32) (arg0 + 0x2FC), 0x10A, 0, 0xA, 0x40);
    }
}

void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x02000000) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2E4);
        switch (temp_r0) {
        case 1:
            spawn_particle_effect_with_flags(arg1, 0xF1, 0x40);
            return;
        case 2:
            spawn_particle_effect_with_flags(arg1, 0xF2, 0x40);
            return;
        case 4:
            spawn_particle_effect_with_flags(arg1, 0xE3, 0x40);
            return;
        case 8:
            spawn_particle_effect_with_flags(arg1, 0x10D, 0x40);
            break;
        }
    }
}

void set_attribute_entry__10TObjPlayerFPviPv(O_80015D74 *self, s32 i, void *q) {
    if (i < 3) {
        copy_entry_bytes__10TObjPlayerFPvPv((void*)(&self->arr[i]), (void*)(q));
    }
}

void copy_entry_bytes__10TObjPlayerFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); }

s16 *get_attribute_entry__10TObjPlayerFPvi(O_80015DC4 *self, s32 i) {
    if (i < 3) {
        return &self->arr[i];
    }
    return 0;
}

void display_exp_gain(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if ((((s32 (*)(s32, u32))obj_testFlags30)(arg0, 0x02000000) == 0) && (((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)(arg0) == 0) && (arg1 != 0U)) {
        create_font_small_task(arg1, 0xFFFF00FF, 0x14, arg2, &lbl_805D7DA8, arg3, ((s32 (*)(s32))obj_getField1c)(arg0));
    }
}

void show_meseta_label(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 size;
    if (((s32 (*)(s32, u32))obj_testFlags30)(arg0, 0x02000000) == 0 && arg1 != 0) {
        size = 0x14;
        if (((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0) {
            size <<= 1;
        }
        ((void (*)(u32, s32, s32, s32, void *, s16, s32))create_font_small_task)(arg1, -0x100, size, arg2, lbl_804340A8, arg3, ((s32 (*)(s32))obj_getField1c)(arg0));
    }
}

void show_tp_font(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if ((((s32 (*)(s32, s32))obj_testFlags30)(arg0, 0x02000000) == 0) && (((s32 (*)(s32))is_locally_controlled__10TObjPlayerFPv)(arg0) == 0) && (arg1 != 0U)) {
        create_font_small_task_default_color(arg1, 0xFF00B2FF, 0x14, arg2, &lbl_805D7DAC, arg3);
    }
}

void draw_hp_label(void *arg0, u32 arg1, s32 arg2, s16 arg3) {
    if ((((s32 (*)(void *, s32))obj_testFlags30)(arg0, 0x02000000) == 0) && (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) == 0) && (arg1 != 0U)) {
        create_font_small_task_default_color(arg1, 0xFF00FF00, 0x14, arg2, &lbl_805D7DB0, (s16)arg3);
    }
}

void try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *arg0, u32 arg1, s32 arg2) {
    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0) && (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) == 0) && (arg1 != 0U) && ((s16) arg2 >= 0) && ((get_player_count__10TObjPlayerFv() == 0) || ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U))) {
        create_damage_font__19TObjEneEpsilonGuardFiiii(arg1, -1, 0x14, (s16) arg2);
    }
}

void show_miss_popup(TObjPlayer *self, const float *pos) {
    if (((s32 (*)(void *, u32))obj_testFlags30)(self, 0x02000000) == 0 && ((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(self) == 0 && pos != NULL) {
        if (get_player_count__10TObjPlayerFv() == 0 || *(u16 *)((s8 *)self + 0x1C) >= 0x1000) {
            create_font__13TOCtrlDubchikFiiii((s32)pos, 0xFFFF0000, 0x14, (s32)lbl_804340B0);
        }
    }
}

}
void TObjPlayer::show_miss_for_collider(int collider) {
    show_miss_popup(this, (const float*)(m_a4 + collider*0x2C + 0x1C));
}

extern "C" {
#pragma push
#pragma fp_contract on
s32 roll_physical_accuracy__10TObjPlayerFv(Obj_800162E0 *arg0, void *arg1, s32 arg2, f32 farg0) {
    f32 v;

    if (arg1 == NULL) {
        return 0;
    }
    if (((s32 (*)(void *, u32))obj_testFlags30)(arg0, 0x04000800) == 0) {
        v = TObjPlayer__data_805D7D54 * ((farg0 * (f32) get_ata__10TObjPlayerFPv(arg1)) - (TObjPlayer__data_805D7D28 * (f32) arg0->val2CC));
        if (TObjPlayer__data_805D7D24 < v && ((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0) <= v) {
            arg0->elems[arg2].flags |= 0x04000000;
            arg0->flags2DC |= 1;
            return 1;
        }
        arg0->flags30 |= 0x100;
    }
    return 0;
}
#pragma pop

s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (((VObj_800163F8 *)arg0)->m25() != 0) {
        return 1;
    }
    show_miss_for_collider__10TObjPlayerFi(arg0, arg2);
    return 0;
}

s32 select_melee_contact_body__10TObjPlayerFv(Actor_80016454 *target, Actor_80016454 *source, f32 factor) {
    s32 selected = -1;
    Vec_80016454 point;
    s32 i;
    s32 diff;
    f32 dist2;
    f32 r2;
    f32 dist;
    f32 r;
    if (source != NULL) {
    if (target->bodies != NULL) {
        ((void (*)(void))push_matrix)();
        TObjPlayer__sub_803D8CD4(0);
        ((void (*)(s32, f32, f32, f32))translate_matrix)(0, -source->pos.x, -source->pos.y, -source->pos.z);
        post_translate_matrix(&target->pos);
        rotate_matrix_y(0, (void *)target->yaw);
        for (i = 0; i < target->bodyCount; i++) {
            if (!(target->bodies[i].flags & 0x02000000)) {
                ((VecCopyFn_80016454)VecCopy__FP3VecPC3Vec)(&point, &target->bodies[i]);
                matrix_mult_vec(0, &point, &point);
            }
            dist = point.x * point.x + point.z * point.z;
            r = (target->bodies[i].radius + get_target_value__10TObjPlayerFPv(source)) * (target->bodies[i].radius + get_target_value__10TObjPlayerFPv(source));
            diff = angle_difference_abs(source->yaw, (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(point.x, point.z)));
            if (dist < r && diff < update_field_318__10TObjPlayerFPv(source)) {
                selected = i;
                break;
            }
        }
        pop_matrix();
        if (selected == -1) {
            return 0;
        }
    } else {
        ((VecCopyFn_80016454)VecCopy__FP3VecPC3Vec)(&point, &target->pos);
        subtract_vector(&point, &source->pos);
        dist2 = point.x * point.x + point.z * point.z;
        r2 = get_target_value__10TObjPlayerFPv(source) * get_target_value__10TObjPlayerFPv(source);
        r2 = r2 * r2;
        diff = angle_difference_abs(source->yaw, (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(point.x, point.z)));
        if (r2 < dist2 || update_field_318__10TObjPlayerFPv(source) < diff) {
            return 0;
        }
    }
    if (target->m24(source, selected, factor) != 0) {
        return 1;
    }
    }
    return 0;
}

s32 update_defense_stat_status(u8 *arg0) {
    s32 temp_ret;
    void *obj;

    if (((s32 (*)(void *, M2C_UNK))TObjPlayer__sub_8001943C)(arg0, 3) > 0) {
        temp_ret = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 3, -1);
        if (temp_ret > 0) {
            if (((temp_ret % 45) == 0) && (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0)) {
                switch (((s32 (*)(void *, M2C_UNK))obj_getArrWord_254)(arg0, 3)) {
                case 11:
                    break;
                case 10:
                    ((VObj_800166DC *)arg0)->m69();
                    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x10000000) == 0) || (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) {
                        ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x40022C2C, arg0 + 0x38, 0, 0);
                    }
                    break;
                case 12:
                    ((VObj_800166DC *)arg0)->m70();
                    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x10000000) == 0) || (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) {
                        ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4002362D, arg0 + 0x38, 0, 0);
                    }
                    break;
                }
                obj = ((void * (*)(u32))__nw__7TObjectFUl)(0x64);
                if (obj != 0) {
                    construct_actor_light_task(TObjPlayer__data_805D7D98, obj, ((u8 *)&lbl_80434050), ((u8 *)&TObjPlayer__data_80434060), 0x2D, arg0, tl_07);
                }
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, s32))add_to_field_2ce__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_atp__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 3)));
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x278);
    } else if (((s32 (*)(void *))obj_isState2_324)(arg0) != 0) {
        ((M2C_UNK (*)(void *, s32))add_to_field_2ce__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_atp__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 3)));
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x278);
    }
    return 0;
}

s32 update_attack_stat_status(u8 *arg0) {
    s32 temp_ret;
    void *obj;

    if (((s32 (*)(void *, M2C_UNK))TObjPlayer__sub_8001943C)(arg0, 2) > 0) {
        temp_ret = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 2, -1);
        if (temp_ret > 0) {
            if (((temp_ret % 45) == 0) && (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x02000000) == 0)) {
                switch (((s32 (*)(void *, M2C_UNK))obj_getArrWord_254)(arg0, 2)) {
                case 10:
                    break;
                case 9:
                    ((VObj_80016944 *)arg0)->m67();
                    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x10000000) == 0) || (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) {
                        ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4002462A, arg0 + 0x38, 0, 0);
                    }
                    break;
                case 11:
                    ((VObj_80016944 *)arg0)->m68();
                    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x10000000) == 0) || (((s32 (*)(void *))is_locally_controlled__10TObjPlayerFPv)(arg0) != 0)) {
                        ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0x4002442B, arg0 + 0x38, 0, 0);
                    }
                    break;
                }
                obj = ((void * (*)(u32))__nw__7TObjectFUl)(0x64);
                if (obj != 0) {
                    construct_actor_light_task(TObjPlayer__data_805D7D98, obj, ((u8 *)&lbl_80434040), ((u8 *)&TObjPlayer__data_80434060), 0x2D, arg0, tl_07);
                }
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, s32))add_to_field_2c8__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_field_2c0__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2)));
        ((M2C_UNK (*)(void *, s32))add_to_field_2ca__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_field_2c2__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2)));
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x26C);
    } else if (((s32 (*)(void *))obj_isState2_324)(arg0) != 0) {
        ((M2C_UNK (*)(void *, s32))add_to_field_2c8__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_field_2c0__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2)));
        ((M2C_UNK (*)(void *, s32))add_to_field_2ca__10TObjPlayerFPvi)(arg0, (s32) ((f32) get_field_2c2__10TObjPlayerFPv(arg0) * -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 2)));
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x26C);
    }
    return 0;
}

struct ObjFlags;
struct O_800194AC;
s32 TObjPlayer__sub_80016C54(u8 *arg0) {
    f32 temp_f31;
    f32 fv;
    s32 temp_ret;
    if (((s32 (*)(void *, s32))obj_testFlags30)(arg0, 4) != 0) {
        temp_ret = ((s32 (*)(void *, s32, s32))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 1, -1);
        if (temp_ret > 0) {
            ((void (*)(void *, s32))obj_clearFlags30)(arg0, 0x3C);
            ((void (*)(void *, s32))obj_setFlags30)(arg0, 4);
            if ((temp_ret % 45) == 0) {
                ((void (*)(void *, s32))TObjPlayer__sub_800100A0)(arg0, 1);
            }
            return 1;
        }
        ((void (*)(void *, s32))obj_clearFlags30)(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
            temp_f31 = -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(arg0, 1);
            fv = (f32) get_s16_2c4__10TObjPlayerFPv(arg0);
            TObjPlayer__sub_800192B4(arg0, (s32) (fv * temp_f31));
        }
        reset_status_effect_row(arg0 + 0x260);
        goto block_8;
    }
block_8:
    return 0;
}

s32 update_movement_status__10TObjPlayerFv(u8 *arg0) {
    f32 temp_f31;
    f32 fv;
    s32 temp_ret;

    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x20) != 0) {
        temp_ret = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 1, -1);
        if (temp_ret > 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x3C);
            ((M2C_UNK (*)(void *, M2C_UNK))obj_setFlags30)(arg0, 0x20);
            if ((temp_ret % 45) == 0) {
                ((M2C_UNK (*)(M2C_UNK, void *, M2C_UNK, M2C_UNK))play_sound_effect)(0xB20F, arg0 + 0x38, 0, 0);
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        temp_f31 = -((f32 (*)(void *, M2C_UNK))TObjPlayer__sub_800192C4)(arg0, 1);
        fv = (f32) get_s16_2c4__10TObjPlayerFPv(arg0);
        ((M2C_UNK (*)(void *, s32))TObjPlayer__sub_800192B4)(arg0, (s32) (fv * temp_f31));
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x10) != 0) {
        temp_ret = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 1, -1);
        if (temp_ret > 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x3C);
            ((M2C_UNK (*)(void *, M2C_UNK))obj_setFlags30)(arg0, 0x10);
            if ((temp_ret % 45) == 0) {
                ((M2C_UNK (*)(void *, M2C_UNK))spawn_confusion_feedback_effect)(arg0, 1);
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

s32 update_action_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 8) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U)) {
        temp_ret = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 1, -1);
        if (temp_ret > 0) {
            if ((temp_ret % 45) == 0) {
                ((M2C_UNK (*)(void *, M2C_UNK))TObjPlayer__sub_800101B0)(arg0, 1);
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        ((M2C_UNK (*)(void *))reset_status_effect_row)(arg0 + 0x260);
        goto block_7;
    }
block_7:
    return 0;
}

s32 update_action_hold_status__10TObjPlayerFv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;

    if ((((s32 (*)(void *, M2C_UNK))obj_testFlags30)((void *) (arg0), 0x4000) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U)) {
        if (((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            ((M2C_UNK (*)(void *))reset_status_effect_row)((void *) (arg0 + 0x284));
            ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)((void *) (arg0), (int) (0x4000));
        }
        return 1;
    }
    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)((void *) (arg0), (int) (2)) != 0) {
        temp_r31 = ((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)((void *) (arg0), (int) (0), (int) (-1));
        if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
            if (temp_r31 <= 0) {
                ((M2C_UNK (*)(void *, int))spawn_paralysis_feedback_effect)((void *) (arg0), (int) (1));
                ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_800193FC)((void *) (arg0), (int) (0), (int) (0x2D));
            }
            return 1;
        }
        if (temp_r31 > 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)((void *) (arg0), (int) (3));
            ((M2C_UNK (*)(void *, M2C_UNK))obj_setFlags30)((void *) (arg0), (int) (2));
            if ((temp_r31 % 45) == 0) {
                ((M2C_UNK (*)(void *, int))spawn_paralysis_feedback_effect)((void *) (arg0), (int) (1));
            }
            return 1;
        }
        ((M2C_UNK (*)(void *, M2C_UNK))obj_clearFlags30)((void *) (arg0), (int) (3));
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        temp_f31 = -((f32 (*)(void *, int))TObjPlayer__sub_800192C4)((void *) (arg0), (int) (0));
        {
            f32 v = get_s16_2c4__10TObjPlayerFPv((void *) (arg0));
            v *= temp_f31;
            ((M2C_UNK (*)(void *, s32))TObjPlayer__sub_800192B4)((void *) (arg0), (s32) v);
        }
        ((M2C_UNK (*)(void *))reset_status_effect_row)((void *) (arg0 + 0x254));
    }
    return 0;
}

s32 update_poison_status__10TObjPlayerFv(u8 *arg0) {
    s32 dmg;

    if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 1) != 0) {
        if ((((s32 (*)(void *, M2C_UNK, M2C_UNK))add_status_effect_timer__10TObjPlayerFPvii)(arg0, 0, 1) % 45) == 0) {
            ((M2C_UNK (*)(void *, int))spawn_poison_effect__10TObjPlayerFii)(arg0, 1);
            ((M2C_UNK (*)(void *, int, int))TObjPlayer__sub_800193FC)(arg0, 0, 0);
            dmg = (s32) (lbl_805D7DB4 * (f32) ((s16 (*)(void *))obj_getS16_32C)(arg0));
            if ((s16) dmg < 1) {
                dmg = 1;
            }
            ((s32 (*)(u8 *, s32, void *))TObjectV8047c128_subtract_hp)(arg0, dmg + lbl_8043406C[lbl_805D5550], lbl_8043406C);
            if (clamp_value__10TObjPlayerFPv(arg0) <= 0) {
                if (((s32 (*)(void *, M2C_UNK))obj_testFlags30)(arg0, 0x800) == 0) {
                    ((M2C_UNK (*)(void *, int))set_hp_clamped__10TObjPlayerFPvs)(arg0, 1);
                }
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

#define VCOPY(d, s) ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((d), (s))

s32 TObjPlayer__sub_800172CC(Player_800172CC *self) {
    if (((s32 (*)(void *, s32))obj_testFlags30)(self, 0x40) != 0) {
        self->m48();
        return 1;
    }
    if (((s32 (*)(void *))obj_isState2_324)(self) != 0) {
        if (((s32 (*)(void *, s32))obj_testFlags30)(self, 3) == 0) {
            switch (((s32 (*)(void *, s32))obj_getArrWord_254)(self, 0)) {
            case 0x10:
                TObjPlayer__sub_800192B4(self, (s32)(get_s16_2c4__10TObjPlayerFPv(self) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(self, 0)));
                break;
            }
            reset_status_effect_row(self->f254);
        }
        if (((s32 (*)(void *, s32))obj_testFlags30)(self, 0x3C) == 0) {
            switch (((s32 (*)(void *, s32))obj_getArrWord_254)(self, 1)) {
            case 2:
            case 3:
                TObjPlayer__sub_800192B4(self, (s32)(get_s16_2c4__10TObjPlayerFPv(self) * -((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(self, 1)));
                break;
            }
            reset_status_effect_row(self->f260);
        }
    }
    return 0;
}

s32 is_target_in_attack_range__10TObjPlayerFv(Player_8001745C *p) {
    Vec_8001745C v;
    Vec_8001745C base;
    Vec_8001745C out;
    Target_8001745C *t;
    s32 i;
    s32 ang;
    f32 range;
    f32 dist;
    f32 prod;
    if (p->target != NULL && p->f318 != 0 &&
        all_parents_unqueued_for_destruction__7TObjectFv(p->target) != 0 &&
        ((u8 * (*)(u16))find_entity_by_id)(((u16 (*)(void *))obj_getField1c)(p->target)) != NULL) {
        t = p->target;
        if (!(t->flags30 & 0x800)) {
            if (t->parts != NULL) {
                VCOPY(&base, &t->pos);
                for (i = 0; i < p->target->nparts; i++) {
                    if (!(p->target->parts[i].flags & 0x02000000)) {
                        VCOPY(&v, &p->target->parts[i]);
                        push_matrix_from(&lbl_8058D490);
                        rotate_matrix_y(0, (void *)p->target->rotY);
                        rotate_vector_by_matrix(0, &v, &v);
                        pop_matrix();
                        vec3_add_to(&v, &base);
                        subtract_vector(&v, &p->pos);
                        dist = v.x * v.x + v.z * v.z;
                        range = (p->target->parts[i].radius + get_target_value__10TObjPlayerFPv(p)) * (p->target->parts[i].radius + get_target_value__10TObjPlayerFPv(p));
                        ang = ((s32)angle_difference_abs(p->rotY, (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(v.x, v.z))));
                        if (dist < range && ang < update_field_318__10TObjPlayerFPv(p)) {
                            return 1;
                        }
                    }
                }
            } else {
                dist = TObjPlayer__sub_800186E8((s32)((s32)p), (u32)((u32)t), (void *)(&out));
                ang = ((s32)angle_difference_abs(p->rotY, (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(out.x, out.z))));
                if (p->target->parts != NULL) {
                    prod = (p->target->parts->radius + get_target_value__10TObjPlayerFPv(p)) * (p->target->parts->radius + get_target_value__10TObjPlayerFPv(p));
                } else {
                    prod = get_target_value__10TObjPlayerFPv(p) * get_target_value__10TObjPlayerFPv(p);
                }
                if (dist <= prod && ang <= update_field_318__10TObjPlayerFPv(p)) {
                    return 1;
                }
            }
        } else {
            p->target = NULL;
        }
    }
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
    ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) calc_velocity_toward_destination)(arg0, arg0->home, arg0->dest, farg0);
    arg0->pos.x += arg0->vx;
    arg0->pos.z += arg0->vz;
    return horizontal_distance_squared(arg1, &arg0->pos);
}

f32 enemy_pursue_point(u8 *arg0, s32 arg1, Vec_800180E8 arg2, f32 farg0, f32 farg1) {
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
        subtract_vector(&d, arg0 + 0x2FC);
        a = (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
        d.z = farg1;
        d.x = d.y = TObjPlayer__data_805D7D24;
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *)a);
        rotate_vector_by_matrix(0, &d, &d);
        pop_matrix();
        vec3_add_to(&d, arg0 + 0x2FC);
        if (((M2C_UNK (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, d, 1) != 0) {
            ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, *(Vec_800180E8 *)(arg0 + 0x2FC));
        }
    }
    enemy_turn_toward_dest((Obj_80018660 *)arg0, arg1);
    enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), farg0);
    move_with_wall_slide((u8 *)(arg0));
    return horizontal_distance_squared(&arg2, arg0 + 0x2FC);
}

f32 enemy_backstep_from_point(Obj_80017ABC *arg0, Vec_800180E8 arg1, f32 farg0) {
    if (TObjPlayer__sub_800181DC((u8 *)((u8 *) arg0), (Vec_800180E8)(arg1)) != 0) {
        ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, arg0->cur);
        ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) calc_velocity_toward_destination)(arg0, arg0->home, arg0->dest, farg0);
        move_with_wall_slide((u8 *)(arg0));
        return horizontal_distance_squared(&arg1, &arg0->pos);
    }
    return TObjPlayer__data_805D7D24;
}

f32 enemy_wander_home(u8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    Vec_80017BA8 v;
    f32 var_f31;
    s32 ang;
    var_f31 = horizontal_distance_squared((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x29C));
    if ((var_f31 < (farg0 * farg0)) || (((VObj_18_cc39a7 *)(arg0))->m17(0x96) != 0)) {
        v.x = v.y = TObjPlayer__data_805D7D24;
        v.z = TObjPlayer__data_805D7D44;
        ang = (s32) (lbl_805D7DB8 * (lbl_805D7DBC * ((f32 (*)(void *))calc_boss4_scale__10TObjPlayerFi)(arg0)));
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *) ang);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        v.x *= farg1;
        v.z *= farg2;
        vec3_add_to(&v, arg0 + 0x50);
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

f32 update_enemy_wander_move(Obj_80017ABC *arg0, Vec_800180E8 arg1, s32 arg2, f32 farg0) {
    if (((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0) {
        if (((M2C_UNK (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, arg1, arg2) != 0) {
            ((s32 (*)(void *, Vec_800180E8)) copy_position_if_valid__10TObjPlayerFii)(arg0, arg0->cur);
        }
    }
    ((void (*)(void *, Vec_800180E8, Vec_800180E8, f32)) calc_velocity_toward_destination)(arg0, arg0->home, arg0->dest, farg0);
    move_with_wall_slide((u8 *)(arg0));
    return horizontal_distance_squared(&arg1, &arg0->pos);
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
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
  vec3_add_to(&next, &self->vel);
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
    vec3_add_to(&next, &self->vel);
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
  vec3_add_to(&next, &self->vel);
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

void calc_velocity_toward_destination(Obj_800180E8 *self, Vec_800180E8 *pos, Vec_800180E8 *dest, f32 speed) {
    Vec_800180E8 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)dest);
    subtract_vector(&d, pos);
    if (d.x * d.x + d.z * d.z < TObjPlayer__data_805D7D80) {
        self->vz = TObjPlayer__data_805D7D24;
        self->vx = TObjPlayer__data_805D7D24;
    } else {
        a = (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
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
    subtract_vector(&d, arg0 + 0x2FC);
    push_matrix_from(&lbl_8058D490);
    rotate_matrix_y(0, (void *) 0x8000);
    rotate_vector_by_matrix(0, &d, &d);
    pop_matrix();
    if (TObjPlayer__data_805D7D80 < vec_squared_length(&d)) {
        normalize_vector(&d);
        vec3_add_to(&d, arg0 + 0x2FC);
        return ((s32 (*)(void *, Vec_800180E8, int)) select_enemy_destination)(arg0, d, 1);
    }
    return 0;
}

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
            subtract_vector(&d, &self->pos);
            a = (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
            lbl_8050BEE0.x = lbl_8050BEE0.y = TObjPlayer__data_805D7D24;
            lbl_8050BEE0.z = self->fA4->fC;
            push_matrix_from(&lbl_8058D490);
            rotate_matrix_y(0, (void *)a);
            rotate_vector_by_matrix(0, &lbl_8050BEE0, &lbl_8050BEE0);
            pop_matrix();
            vec3_add_to(&d, &lbl_8050BEE0);
            vec3_add_to(&d, &self->pos);
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
    subtract_vector(&d, arg0 + 0x2FC);
    if (lbl_805D7DC0 < (d.x * d.x) + (d.z * d.z)) {
        a = (s32) (TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
        d.y = d.x = TObjPlayer__data_805D7D24;
        d.z = lbl_805D7DC4;
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y(0, (void *) a);
        rotate_vector_by_matrix(0, &d, &d);
        pop_matrix();
        vec3_add_to(&d, arg0 + 0x2FC);
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

void enemy_turn_half_toward_dest(Obj_80018570 *self) {
    Vec_80018570 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)&self->dest);
    subtract_vector(&d, &self->pos);
    a = (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
    self->angle = lerp_angle_half__10TObjPlayerFUsUs(self->angle, a);
    angle_difference_abs(self->angle, a);
}

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}

void enemy_turn_toward_dest(Obj_80018660 *self, s32 turn) {
    Vec_80018660 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)&self->dest);
    subtract_vector(&d, &self->pos);
    a = (s32)(TObjPlayer__data_804340B8 * ((f64 (*)(f32, f32))get_ad_end_text_start__10TObjPlayerFv)(d.x, d.z));
    self->angle = approach_angle_limited(self->angle, a, turn);
    angle_difference_abs(self->angle, a);
}

f32 TObjPlayer__sub_800186E8(s32 arg0, u32 arg1, void *arg2) {
    Vec_800186E8 diff;
    f32 dist;
    if (arg1 != 0U) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&diff, (void *)(arg1 + 0x38));
        ((void (*)(void *, void *))subtract_vector)(&diff, (void *)(arg0 + 0x38));
        diff.y = TObjPlayer__data_805D7D54;
        dist = (diff.x * diff.x) + (diff.z * diff.z);
        if (arg2 != NULL) {
            ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg2, &diff);
        }
    } else {
        dist = lbl_805D7DC8;
    }
    return dist;
}

f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2) {
  Stack_80018780 stack;
  f32 var_f31;
  s32 temp_r31;
  s32 temp_r3;
  var_f31 = lbl_805D7DC8;
  if (arg1 < 0x1000U)
  {
    temp_r3 = ((s32 (*)(u32))get_player_by_client_id)((u32) arg1);
    if ((temp_r3 != 0) && (!((*((s32 *) (((s8 *) temp_r3) + 0x30))) & 0x800)))
    {
      ;
      if (get_field_3e4__10TObjPlayerFPv((void *) temp_r3) == get_current_floor())
      {
        var_f31 = TObjPlayer__sub_800186E8((s32)(arg0), (u32)((u32) temp_r3), (void *)(&stack.sp8));
        if (arg2 != 0U)
        {
          VecCopy__FP3VecPC3Vec((s32)((void *) arg2), (s32)((void *) (&stack.sp8)));
        }
      }
    }
  }
  return var_f31;
}

#undef VCOPY

s32 TObjPlayer__sub_8001882C(Player_8001882C *p, Motion_8001882C *motion) {
    if (motion != NULL) {
        p->motion = motion;
        p->f2b8 = p->motion->f6 + p->motion->f18 + p->f2bc;
        p->f2ba = p->motion->f2 + p->motion->f18 + p->f2be;
        p->f32c = p->f2b8;
        p->f32e = p->f2ba;
    } else if (p->motion != NULL) {
        p->f2b8 = p->motion->f6 + p->motion->f18 + p->f2bc;
        p->f2ba = p->motion->f2 + p->motion->f18 + p->f2be;
    } else {
        return 0;
    }
    p->f2c0 = p->f2c8 = p->motion->f0;
    p->f2c2 = p->f2ca = 0;
    p->f2c4 = p->f2cc = p->motion->f4;
    p->f2c6 = p->f2ce = p->motion->f8;
    p->f2d0 = TObjPlayer__data_805D7D98 * (f32)p->motion->fa;
    p->f2d2 = p->motion->fc;
    p->f2ee = 0;
    p->f2f0 = 0;
    p->f2ec = 0;
    p->f2ea = 0;
    p->f2e8 = 0;
    p->f2f8 = 0;
    p->f2fa = 0;
    p->f2f6 = 0;
    p->f2f4 = 0;
    p->f2f2 = 0;
    return 1;
}

#pragma push
#pragma fp_contract on
s32 recalc_combat_stats__10TObjPlayerFv(Player_80018990 *p, Motion_80018990 *motion, void *arg2, Bonus_80018990 *bonus, f32 xscale, f32 yscale) {
    if (motion != NULL) {
        p->motion = motion;
        p->f2b8 = xscale * (f32)(p->motion->f6 + p->motion->f18) + (f32)p->f2bc;
        p->f32c = p->f2b8;
        if (((s32 (*)(void *, s32))obj_testFlag_2E4)(p, 4) != 0) {
            p->f2ba = 0;
            p->f32e = 0;
        } else {
            p->f2ba = yscale * (f32)(p->motion->f2 + p->motion->f18) + (f32)p->f2be;
            p->f32e = p->f2ba;
        }
    } else if (p->motion != NULL) {
        p->f2b8 = xscale * (f32)(p->motion->f6 + p->motion->f18) + (f32)p->f2bc;
        if (((s32 (*)(void *, s32))obj_testFlag_2E4)(p, 4) != 0) {
            p->f2ba = 0;
            p->f32e = 0;
        } else {
            p->f2ba = yscale * (f32)(p->motion->f2 + p->motion->f18) + (f32)p->f2be;
        }
    } else {
        return 0;
    }
    if (arg2 != NULL) {
        p->f318 = arg2;
    } else if (p->f318 == NULL) {
        return 0;
    }
    if (bonus != NULL) {
        p->bonus = bonus;
    } else if (p->bonus == NULL) {
        return 0;
    }
    p->f2c0 = p->f2c8 = p->motion->f0;
    p->f2c2 = p->f2ca = ((s32 (*)(void *))get_stats_atp_max__10TObjPlayerFPv)(p) - ((s32 (*)(void *))get_model_animation_id__10TObjPlayerFPv)(p);
    p->f2c4 = p->f2cc = p->motion->f4 + p->bonus->f0;
    p->f2c6 = p->f2ce = p->motion->f8 + p->bonus->f1c;
    p->f2d0 = TObjPlayer__data_805D7D98 * (f32)(p->motion->fa + TObjPlayer__sub_800194C4(p));
    p->f2d2 = p->motion->fc;
    p->f2f2 = p->bonus->f2;
    p->f2f4 = p->bonus->f6;
    p->f2f6 = p->bonus->f4;
    p->f2fa = p->bonus->f8;
    p->f2f8 = p->bonus->fa;
    ((void (*)(void *, s32))add_to_field_2c8__10TObjPlayerFPvi)(p, (f32)get_field_2c0__10TObjPlayerFPv(p) * ((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(p, 2));
    ((void (*)(void *, s32))add_to_field_2ca__10TObjPlayerFPvi)(p, (f32)get_field_2c2__10TObjPlayerFPv(p) * ((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(p, 2));
    ((void (*)(void *, s32))add_to_field_2ce__10TObjPlayerFPvi)(p, (f32)get_atp__10TObjPlayerFPv(p) * ((f32 (*)(void *, s32))TObjPlayer__sub_800192C4)(p, 3));
    return 1;
}
#pragma pop

#pragma push
#pragma fp_contract on
void calc_attach_pos__10TObjPlayerFPv(u8 *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0x2B0) != NULL) {
        M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) ((TObjPlayer__data_805D7D4C * M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 0x3C));
        M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
        return;
    }
    ((M2C_UNK (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, arg0 + 0x38);
}
#pragma pop

u8 *TObjPlayer__sub_80018E6C(u8 *arg0, u8 *arg1) {
    Stack_80018E6C stack;
    f32 temp_f1;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg1, f32 *, 0);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg1, f32 *, 8);
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    return temp_r3;
}

u8 *update_actor_ground_y(u8 *arg0) {
    Stack_80018EE4 stack;
    f32 temp_f1;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    return temp_r3;
}

void* get_actor_body_center(void* p) { return (char*)p + 0x2fc; }

void reset_actor_action_state(Obj_80018F64 *self) {
    self->v104.x = self->v104.y = self->v104.z = TObjPlayer__data_805D7D24;
    self->v290.x = self->v290.y = self->v290.z = TObjPlayer__data_805D7D24;
    self->v29c.x = self->v29c.y = self->v29c.z = TObjPlayer__data_805D7D24;
    self->f248 = self->f250 = TObjPlayer__data_805D7D24;
    self->f24c = TObjPlayer__data_805D7D44;
    self->f2ac = 0;
    self->f2b4 = TObjPlayer__data_805D7D24;
    self->f2d4 = 0xFFFF;
    self->f2dc = 0;
    self->f328 = self->f32a = 0;
    self->f320 = 0;
    self->v2fc.x = self->v2fc.y = self->v2fc.z = self->v308.x = self->v308.y = self->v308.z = TObjPlayer__data_805D7D24;
}

void *destroy_motion_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804806E8;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void get_pos__10TObjPlayerFii(s32 arg0, s32 arg1) {
    ((M2C_UNK (*)(s32, s32, s32))VecCopy__FP3VecPC3Vec)(arg1, arg0 + 0x2FC, arg0);
}

}
#pragma push
#pragma scheduling off
void VecCopy(Vec* dst, const Vec* src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}
#pragma pop

extern "C" {
#pragma push
#pragma scheduling off
u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x324) == 1);
}
#pragma pop

s16 get_class_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2f6); }

s16 get_item_index__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2f4); }

void add_to_field_2ce__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2ce) = (*(short*)((char*)a0 + 0x2ce) + a1); }

s16 get_atp__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c6); }

void add_to_field_2ca__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2ca) = (*(short*)((char*)a0 + 0x2ca) + a1); }

s16 get_field_2c2__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c2); }

void add_to_field_2c8__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2c8) = (*(short*)((char*)a0 + 0x2c8) + a1); }

s16 get_field_2c0__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c0); }

void TObjPlayer__sub_800192B4(void* a0, int a1) { *(short*)((char*)a0 + 0x2cc) = (*(short*)((char*)a0 + 0x2cc) + a1); }

f32 TObjPlayer__sub_800192C4(Obj800192C4 *self, s32 i) {
    return self->recs[i].b;
}

s16 get_s16_2c4__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c4); }

void reset_status_effect_row(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) TObjPlayer__data_805D7D24;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

#pragma push
#pragma scheduling off
int obj_getArrWord_254(ObjArr254* p, int i) {
    return p->arr[i].w;
}
#pragma pop

#pragma push
#pragma scheduling off
void obj_setArrS16_FC(ObjArrFC* p, int i, s16 v) {
    p->arr[i] = v;
}
#pragma pop

#pragma push
#pragma scheduling off
u16 obj_getArrU16_FC(ObjArrFC* p, int i) {
    return p->arr[i];
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
void obj_clearArrS16_FC(ObjArrFC* p, int i) {
    p->arr[i] = 0xFFFF;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
u8 obj_isState2_324(u8* p) {
    return *(s16*)(p + 0x324) == 2;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
s16 obj_getS16_32E(u8* p) {
    return *(s16*)(p + 0x32e);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
int obj_getPtr2B0_20(u8* p) {
    return *(int*)(*(u8**)(p + 0x2b0) + 0x20);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
int obj_getPtr2B0_1C(u8* p) {
    return *(int*)(*(u8**)(p + 0x2b0) + 0x1c);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
s16 obj_getS16_2BA(u8* p) {
    return *(s16*)(p + 0x2ba);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
s16 obj_getS16_32C(u8* p) {
    return *(s16*)(p + 0x32c);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
u8 obj_testFlag_2E4(u8* p, u32 mask) {
    return (*(u32*)(p + 0x2e4) & mask) != 0;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
s16 obj_getS16_118(u8* p) {
    return *(s16*)(p + 0x118);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
s16 obj_getS16_116(u8* p) {
    return *(s16*)(p + 0x116);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
u8 obj_isState3_324(u8* p) {
    return *(s16*)(p + 0x324) == 3;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma scheduling on
#pragma scheduling off
void obj_copyVec2_0(u8* d, u8* s) {
    *(int*)(d + 0) = *(int*)(s + 0);
    *(f32*)(d + 4) = *(f32*)(s + 4);
}
#pragma pop

s16 get_model_animation_id__10TObjPlayerFPv(void* p) { return get_id__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }

s16 get_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x0); }

void TObjPlayer__sub_800193FC(O_800193FC *self, s32 i, s32 v) {
    self->recs[i].c = v;
}

void TObjPlayer__sub_8001940C(O_8001940C *self, s32 i, s32 v) {
    self->recs[i].a = v;
}

void TObjPlayer__sub_8001941C(O_8001941C *self, s32 i, f32 v) {
    self->recs[i].b = v;
}

s16 test_immunity_flags__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0x11C) & arg1);
}

#pragma push
#pragma scheduling off
int TObjPlayer__sub_8001943C(ObjArr254_p53* p, int i) {
    return p->arr[i].w;
}
#pragma pop

s16 get_ata__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2d0); }

s32 update_field_318__10TObjPlayerFPv(void* p) { return get_field_0c__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }

s32 get_field_0c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xc); }

f32 get_target_value__10TObjPlayerFPv(void* p) { return get_pos_x__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }

f32 get_pos_x__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x8); }

s32 add_status_effect_timer__10TObjPlayerFPvii(O_800194AC *self, s32 i, s32 v) {
    return self->recs[i].c += v;
}

s16 TObjPlayer__sub_800194C4(void* p) { return TObjPlayer__sub_800194E8((void*)(*(void**)((char*)p + 0x318))); }

s16 TObjPlayer__sub_800194E8(void* p) { return *(s16*)((char*)p + 0x4); }

s16 get_stats_atp_max__10TObjPlayerFPv(void* p) { return get_level__10TObjPlayerFPv((void*)(*(void**)((char*)p + 0x318))); }

s16 get_level__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2); }

void TObjPlayer__sub_8001951C(void* p) { *(s16*)((char*)p + 0x11c) = 0; }

void add_flags_2e4__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x2e4) |= v; }

void* init_192dc_return_self__10TObjPlayerFPv(void* p) { ((int (*)(void*))reset_status_effect_row)(p); return p; }

void TObjPlayer__sub_80019568(void* p, s16 v) { *(s16*)((char*)p + 0x94) = v; }

u8 obj_is_hit_receivable(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 0x96) == 1);
}

int get_player_data__10TObjPlayerFi(int a0) {  return TObjPlayer__data_8050D460[a0]; }

void obj_setField96_1(ObjFlags* p) {
    p->field_96 = 1;
}

u32 obj_testFlags30(ObjFlags* p, u32 mask) {
    return p->flags_30 & mask;
}

u16 obj_getField1c(ObjFlags* p) {
    return p->field_1c;
}

void obj_clearFlags30(ObjFlags* p, u32 mask) {
    p->flags_30 &= ~mask;
}

void obj_setFlags30(ObjFlags* p, u32 mask) {
    p->flags_30 |= mask;
}

void bswap_head16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_16__FPUs((char*)p + 0x4); }

int read_be16_field2__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }

void send_head__10TObjPlayerFPv(void* p) { bswap_head16__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_80019664(O_80019664 *self) {
    self->f4 = 0xFFFF;
    self->f6 = 0;
    self->f7 = 0;
    self->f0 = 0x9a;
    self->f1 = 2;
}

bool is_split_screen(void) {
    return lbl_805D34B8 != 1;
}

f32 calc_random_ratio__10TObjPlayerFv(void) {
    return (f32) (subtractive_rng_next() >> 0x10U) / lbl_805D7D3C;
}

s32 get_current_floor(void) {
    return lbl_805D5FC0;
}

s32 get_field_3e4__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x3e4); }

s32 get_player_count__10TObjPlayerFv(void) {
    return lbl_805D5D6C;
}

int get_item_field_6__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 6); }

u8 get_field_ed__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0xed); }

s32 get_type__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x0); }

f32 get_random_float__8TObjFishFv(void) {
    return (f32) ((f64 (*)(void))fabs_double)();
}

f32 get_ad_end_text_start__10TObjPlayerFv(void) {
    return (f32) atan2();
}

f64 fabs_double(f64 x) { return __fabs(x); }

#pragma push
#pragma fp_contract on
f32 newton_sqrtf(f32 x) {
    volatile f32 y;
    if (x > TObjPlayer__data_805D7D24) {
        f64 guess = __frsqrte(x);
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        y = (f32) ((f64) x * guess);
        return y;
    }
    return x;
}
#pragma pop

s32 register_object__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_80019828((O_80019828 *)(arg0));
    return arg0;
}

void TObjPlayer__sub_80019828(O_80019828 *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        self->arr[i] = 0;
    }
}

}
