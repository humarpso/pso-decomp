#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneGyaranzo.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TUnk_80484870.h"
#include "pso/boss/TUnk_80484610.h"

struct VBase_18_b5cc36 { char pad[0x18]; };
struct VObj_18_b5cc36 : VBase_18_b5cc36 {
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
    virtual s32 m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual s32 m63(s16, void *);
};

struct Vec_80046260 { f32 x, y, z; };

#include "pso/misc/RenderFadeState.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Base_800475A0_80044498 { char pad[0x18]; };

struct VObj_800475A0_80044498 : Base_800475A0_80044498 {
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
    virtual void m56(); virtual void m57(); virtual void m58();
};

struct BaseA_80044498 { char pad[0x18]; };

struct VObjA_80044498 : BaseA_80044498 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

struct BaseB_80044498 { char pad[0x14]; };

struct VObjB_80044498 : BaseB_80044498 {
    virtual s32 n0();
    virtual s32 n1();
    virtual s32 n2();
    virtual s32 n3();
    virtual s32 n4();
    virtual s32 n5();
    virtual s32 n6();
    virtual s32 n7();
};

struct Stack_80045A04 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
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
    virtual void m62();
    virtual s32 m63(s32, s32 *);
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80045628_lbl_804FF14C {
    s32 value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800456E4_lbl_804FF10C {
    s32 value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800457A0_lbl_804FF0CC {
    s32 value;
    u8 remaining[0x3C];
};

struct VBase_18_62ff9d { char pad[0x18]; };

struct VObj_18_62ff9d : VBase_18_62ff9d {
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
    virtual s32 m56();
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8004585C_lbl_804FF04C {
    s32 value;
    u8 remaining[0x7C];
};

struct O_80044CB8 { u8 pad[6]; s16 arr[3]; };

struct Base_80047408 { char pad[0x18]; };

struct V_80047408 : Base_80047408 {
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
    virtual void m56();
    u8 pad2[0x37c - 0x1c];
    s32 state;
};

struct Part_80044E4C { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_80044E4C { u8 pad[0xa4]; Part_80044E4C *parts; u8 pad2[0x388 - 0xa8]; u32 mask; };

struct V3_80044600 { f32 x, y, z; };

struct Obj_80044600 { u8 pad[0x3d8]; u8 target[0x4c8 - 0x3d8]; V3_80044600 pos[4]; void *objs[4]; };

struct Obj_800445A4 { u8 pad[0x4f8]; void *objs[4]; };

struct V2_80044DD4 { f32 x, y; };

struct Part_80044DD4 { u8 pad[0x18]; u32 flags; u8 pad2[0x2c - 0x1c]; };

struct Obj_80044DD4 { u8 pad[0xa4]; Part_80044DD4 *parts; u8 pad2[0x388 - 0xa8]; u32 mask; };

struct Obj_800450D0 { u8 pad[0x3e4]; void *objs[4]; };

struct V3_80045928 { f32 x, y, z; };

struct Obj_80045928 { u8 pad[0x480]; s32 color; V3_80045928 scale; };

struct Msg_80045328 { u8 hdr[2]; u16 id; s16 vals[4]; };

struct Obj_80045328 { u8 pad[0x1c]; u16 id; u8 pad2[0x4ac - 0x1e]; s16 vals[4]; };

struct Obj_800472D4 { u8 pad[0x30]; u32 flags; u8 pad1[0xb8 - 0x34]; s16 anim; u8 pad2[0x37c - 0xba]; s32 state; };

struct R_80045010 { s32 a, b, c; };

struct S_80045010 {
    u8 pad0[0x39c];
    s16 cnt;
    u8 pad39e[0x3a8 - 0x39e];
    R_80045010 recs[4];
    u8 pad3d8[0x3e4 - 0x3d8];
    void *ptr[4];
};

struct S_80047714 { u8 pad0[0x326]; s16 st; };

typedef struct Volopt_80044498 {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x32C - 0x34];
    s16 hp;
    u8 pad32E[0x33E - 0x32E];
    s16 prevHp;
    u8 pad340[0x388 - 0x340];
    u32 flags388;
    u8 pad38C[0x4AC - 0x38C];
    s16 parts[4];
} Volopt_80044498;

typedef struct Vec_80044EDC {
    f32 x, y, z;
} Vec_80044EDC;

typedef struct Player_80044EDC {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[4];
    Vec_80044EDC pos;
    u8 pad44[0x2FC - 0x44];
    Vec_80044EDC pos2;
} Player_80044EDC;

typedef struct Volopt_80044EDC {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    Vec_80044EDC pos2;
    u8 pad308[0x39C - 0x308];
    s16 count;
    u16 ids[4];
    u8 pad3A6[2];
    Vec_80044EDC targets[4];
} Volopt_80044EDC;

typedef struct Vec_8004512C {
    f32 x, y, z;
} Vec_8004512C;

typedef struct Obj_8004512C {
    u8 pad0[0x38];
    Vec_8004512C pos;
} Obj_8004512C;

typedef struct Vec_8004550C {
    f32 x, y, z;
} Vec_8004550C;

typedef struct Player_8004550C {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x2FC - 0x34];
    Vec_8004550C pos2;
} Player_8004550C;

typedef struct Volopt_8004550C {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    Vec_8004550C pos2;
    u8 pad308[0x38C - 0x308];
    u16 ids[4];
    s16 count;
} Volopt_8004550C;

struct Vec_80045390 { f32 x, y, z; };

struct Player_80045390 {
    u8 pad0[0x30];
    s32 flags;
    u8 pad34[0x2FC - 0x34];
    Vec_80045390 pos2;
};

struct Volopt_80045390 {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    Vec_80045390 pos2;
};

struct Cam_80045B54 {
    s8 a;
    s8 b;
    s16 c;
    f32 d;
    f32 e;
};

struct Vec_80046CB8 { f32 x, y, z; };

struct VBase_80046CB8 { char pad[0x18]; };

struct VObj_80046CB8 : VBase_80046CB8 {
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
    virtual s32 m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62();
    virtual s32 m63(s16, void *);
};

typedef struct Msg_80044CE4 {
    u8 hdr[4];
    s16 unk4;
    s16 vals[3];
    u8 pad[0xC];
} Msg_80044CE4;

extern "C" {
u32 find_entity_by_id(u16);
s32 fn_80048C04();
extern u16 TBoss3Volopt__cage_entity_id;
f32 sin_table_lookup(s32);
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;
void update_state__12TBoss3VoloptFPv(void *arg0);
s32 obj_testFlags30(void*, s32);
s32 obj_testFlags30(void*, s32);
s32 obj_testFlags30(void*, s32);
s32 obj_testFlags30(void*, s32);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
extern s32 model_render_flags;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;
void render__12TBoss3VoloptFPv(u8 *arg0);
void *__nw__7TObjectFUl(s32);
void *fn_800480B0(void *, void *, void *);
extern void *tl_04;
void *TBoss3Volopt__sub_80047DD4(void *arg0);
void free_collision_body_parts(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void queue_destruction__7TObjectFv(void *);
extern s32 volopt_boss_dispatch_table[];
s32 spawn_particle_effect(s32, s32);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 actor_frame_tick;
extern const f32 lbl_805D87BC;
extern const f32 lbl_805D87C8;
extern const f32 lbl_805D87CC;
extern const f32 lbl_805D87D0;
extern const f32 lbl_805D87D4;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 lbl_805D87DC;
s32 obj_testFlags30(void*, s32);
f32 fabs_float(f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 minimap_render_dot(void *, s32, s16, s32);
f32 sin_table_lookup(s32);
s32 reset_status_effect_row(void *);
s32 obj_clearFlags30(void *, int);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 update_obstruction_fade(void *);
s32 submit_cursor_candidate(void *, int);
extern u8 *TBoss3Volopt__data_805D4D00;
extern const f32 TBoss3Volopt__data_805D87E4;
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__breakup_model_ids;
extern RecoveredGlobal_80045628_lbl_804FF14C volopt_breakup_flag_list;
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__breakup_model_ids;
extern RecoveredGlobal_800456E4_lbl_804FF10C lbl_804FF10C;
void TBoss3Volopt__sub_800456E4(u8 *arg0);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__breakup_model_ids;
extern RecoveredGlobal_800457A0_lbl_804FF0CC lbl_804FF0CC;
void TBoss3Volopt__sub_800457A0(u8 *arg0);
void advance_animation_playback(void *);
extern u8 *TBoss3Volopt__data_805D4D00;
extern u8 *TBoss3Volopt__data_805D4D08;
extern const f32 lbl_805D87B0;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 TBoss3Volopt__data_805D87E8;
extern const f32 lbl_805D87F4;
extern const f32 lbl_805D87F8;
extern const f32 lbl_805D87FC;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__breakup_model_ids;
extern RecoveredGlobal_8004585C_lbl_804FF04C TBoss3Volopt__breakup_flag_list;
extern s16 TBoss3Volopt__phase2_position_table[];
void dispatch_state__12TBoss3VoloptFPv(V_80047408 *self);
f32 receive_physical_attack__10TObjPlayerFv(void *, void *, f32);
void *__nw__7TObjectFUl(s32);
void queue_destruction__7TObjectFv(void *);
void destroy_sub_objects__12TBoss3VoloptFPv(void *arg0);
void receive_direct_attack__10TObjPlayerFv(void *, void *, V2_80044DD4, void *, s32, s32);
void receive_direct_attack_with_part_mask__12TBoss3VoloptFPvPviPv(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3);
void queue_destruction__7TObjectFv(void *);
void destroy_children__12TBoss3VoloptFPv(void *arg0);
extern s32 lbl_804845C4[];
extern V3_80045928 lbl_804845AC;
extern u32 *TBoss3Volopt__data_805D4CFC;
extern u32 *TBoss3Volopt__data_805D4CEC;
extern u8 *TBoss3Volopt__data_805D4D00;
extern u8 *TBoss3Volopt__data_805D4D08;
void TBoss3Volopt__sub_8004824C(void *);
void advance_animation_playback(void *);
void queue_destruction__7TObjectFv(void *);
void *__nw__7TObjectFUl(s32);
void TBoss3Volopt__sub_80044680(void *);
void TBoss3Volopt__sub_80046260(void *);
void TBoss3Volopt__sub_800465B0(void *);
void update_state__12TBoss3VoloptFPv(void *arg0);
void dispatch_state__12TBoss3VoloptFPv(V_80047408 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
f32 xz_distance_squared(Vec_8004512C *, Vec_8004512C *);
u16 TObjRoomId__sub_801A1DB8(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
extern const f32 lbl_805D87C0;
extern const f32 lbl_805D87C4;
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
void queue_destruction__7TObjectFv(void *);
s32 TBoss3Volopt__sub_8003CB48();
s32 is_volopt_death_active();
void destroy_children__12TBoss3VoloptFPv(void *arg0);
s32 restore_player_cameras();
s32 activate_camera_mode(int, int, f32);
s32 TCameraCtrl__sub_8006A044(int, f32);
s32 set_scripted_camera_pose(void *, void *, void *);
u8 *get_scripted_camera_playback(s16);
void advance_animation_playback(void *);
s32 TObjPlayer__sub_801BA42C();
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern u8 volopt_death_breakup_params[];
extern u8 boss3_volopt_spawn_pos[];
extern s32 volopt_death_active;
extern s32 TBoss3Volopt__data_805D4CE8;
extern u32 *TBoss3Volopt__data_805D4CEC;
extern u32 *TBoss3Volopt__data_805D4CFC;
extern const f32 lbl_805D87E0;
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 TBoss3Volopt__data_805D87E8;
extern const f32 lbl_805D87EC;
extern const f32 lbl_805D87F0;
s32 get_main_phase();
s32 TBoss3Volopt__sub_80049E9C(void *, void *, Vec_80046260 *, s32, u16);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
extern s16 lbl_8048441C[];
extern const f32 TBoss3Volopt__data_805D87A8;
extern const f32 lbl_805D8810;
void queue_destruction__7TObjectFv(void *);
s32 TBoss3Volopt__sub_8003F398(void);
void destroy_children__12TBoss3VoloptFPv(void *arg0);
s16 TObjVoloptPillar__sub_80048118(int);
s32 TObjVoloptPillar__ct(void *, void *, void *);
void *create_particle_emitter(void *, int);
s32 turn_toward_point__12TBoss3VoloptFPvPvPvi(void *, void *, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
u32 get_player_by_client_id(u16);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 play_sound_effect(s32, u32, s16, s32);
void *__nw__7TObjectFUl(s32);
void vec3_add_to(void *, void *);
s32 matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern Vec_80046CB8 lbl_80436660[];
extern s16 TBoss3Volopt__phase2_position_table[];
extern u8 identity_matrix[];
extern const f32 lbl_805D87A4;
extern const f32 TBoss3Volopt__data_805D87A8;
void TBoss3Volopt__sub_80046CB8(void *arg0_);
f32 TBoss3Volopt__sub_8004812C(s32);
void TBoss3Volopt__sub_800481B4(void *);
s32 rand(void);
extern const f32 lbl_805D87BC;
}

extern "C" {

s32 TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 get_player_by_client_id(u16);
void *__nw__7TObjectFUl(s32);
s32 obj_testFlags30(void*, s32);

extern f32 lbl_805D87B8;

struct Obj_80045328;
void TUnk_80484610::distribute_part_damage() {
    Volopt_80044498 *self = (Volopt_80044498 *)this;
    s32 v;
    u32 flags;
    s32 n;
    u32 bit;
    s32 i;
    s32 dmg;
    u32 mask;
    self->flags30 &= ~0x200000;
    flags = self->flags388;
    if (flags & 0x400000) {
        n = 0;
        bit = 0x800000;
        for (i = 0; i < 4; i++) {
            if (self->parts[i] > 0) {
                if (flags & bit) {
                    n++;
                }
                bit <<= 1;
            }
        }
        if (n > 0) {
            mask = 0x800000;
            dmg = (n + (self->prevHp - self->hp) - 1) / n;
            dmg = dmg > 0 ? dmg : 0;
            for (i = 0; i < 4; i++) {
                if (self->flags388 & mask) {
                    self->flags388 &= ~mask;
                    s16 *p = &self->parts[i];
                    v = *p - dmg;
                    *p = v > 0 ? v : 0;
                }
                mask <<= 1;
            }
            ((TBoss3Volopt *)self)->broadcast_values();
        }
    }
    self->prevHp = self->hp;
}

void destroy_sub_objects__12TBoss3VoloptFPv(void *arg0) {
    Obj_800445A4 *self = (Obj_800445A4 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] != 0) {
            queue_destruction__7TObjectFv(self->objs[i]);
            self->objs[i] = 0;
        }
    }
}

void TBoss3Volopt::spawn_sub_objects() {
    Obj_80044600 *self = (Obj_80044600 *)this;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] == 0) {
            void *o = __nw__7TObjectFUl((s32)(0x28));
            if (o != 0) {
                o = ((TUnk_80484870 *)o)->ct(self->target, &self->pos[i]);
            }
            self->objs[i] = o;
        }
    }
}

void TBoss3Volopt::apply_hit_reaction(f32 farg0) {
    if ((obj_testFlags30(this, 0x800) == 0) && !(*(s32 *)&this->m_388 & 0x20000) && ((s16) this->mode != 0xC)) {
        TBoss3Volopt::check_and_notify((s32)(this));
        *(f32 *)((s8 *)this + 0x508) = (f32) (lbl_805D87B8 + farg0);
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        ((TObjEneMe1GiGue *)this)->update_if_active(0xC);
    }
}

void TBoss3Volopt::copy_phase2_positions_to_global() {
    s32 i;
    for (i = 0; i < 3; i++) {
        TBoss3Volopt__phase2_position_table[i] = ((O_80044CB8 *)this)->arr[i];
    }
}

#pragma fp_contract on
void TBoss3Volopt::send_random_params() {
    Msg_80044CE4 msg;
    s32 i;
    f32 base;
    f32 range;
    TBoss3Volopt__sub_800481B4(&msg);
    msg.unk4 = 0;
    for (i = 0; i < 3; i++) {
        base = TBoss3Volopt__sub_8004812C(4);
        range = TBoss3Volopt__sub_8004812C(5);
        { f32 r = lbl_805D87BC * (f32)rand(); msg.vals[i] = (s16)(r * range + base); }
    }
    ((TBoss3Volopt *)(&msg))->update_and_send_60();
}

void receive_direct_attack_with_part_mask__12TBoss3VoloptFPvPviPv(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3) {
    u32 m = 0x800000;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->parts[i].flags & 0x04000000) {
            self->mask |= m;
        }
        m <<= 1;
    }
    receive_direct_attack__10TObjPlayerFv(self, a1, v, a3, -1, -1);
}

f32 TUnk_80484610::receive_physical_attack(void *a1, f32 x) {
    Obj_80044E4C *self = (Obj_80044E4C *)this;
    u32 m = 0x800000;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->parts[i].flags & 0x04000000) {
            self->mask |= m;
        }
        m <<= 1;
    }
    return receive_physical_attack__10TObjPlayerFv(self, a1, x);
}

s32 TBoss3Volopt::count_dead_parts() {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)this + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

void TBoss3Volopt::collect_targets_in_arc() {
    Volopt_80044EDC *self = (Volopt_80044EDC *)this;
    s32 t;
    s32 limit;
    s32 i;
    Player_80044EDC *pl;
    t = TBoss3Volopt__sub_8003F398();
    limit = 0x31C7;
    if (t != 0) {
        limit = 0x471C;
    }
    self->count = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (Player_80044EDC *)get_player_data__10TObjPlayerFi(i);
        if (pl == NULL) {
            continue;
        }
        if (obj_getField1c(pl) >= 0x1000) {
            continue;
        }
        if (pl->flags & 0x02000800) {
            continue;
        }
        {
            Vec_80044EDC v = pl->pos2;
            subtract_vector(&v, &self->pos2);
            if (angle_difference_abs(self->angle + 0x4000, (s32)(TBoss3Volopt__data_804366B0 * atan2_float(v.x, v.z))) > limit) {
                continue;
            }
        }
        self->ids[self->count] = obj_getField1c(pl);
        VecCopy__FP3VecPC3Vec(&self->targets[self->count], &pl->pos);
        self->count++;
        if (self->count >= 4) {
            break;
        }
    }
}

void TBoss3Volopt::rebuild_parts() {
    S_80045010 *o = (S_80045010 *)this;
    s32 i;
    void *p;
    for (i = 0; i < o->cnt; i++) {
        if (o->ptr[i] != 0) {
            queue_destruction__7TObjectFv(o->ptr[i]);
        }
        p = __nw__7TObjectFUl((s32)(0x28));
        if (p != 0) {
            p = ((TUnk_80484870 *)p)->ct(o->pad3d8, &o->recs[i]);
        }
        o->ptr[i] = p;
    }
    for (; i < 4; i++) {
        if (o->ptr[i] != 0) {
            queue_destruction__7TObjectFv(o->ptr[i]);
            o->ptr[i] = 0;
        }
    }
}

void destroy_children__12TBoss3VoloptFPv(void *arg0) {
    Obj_800450D0 *self = (Obj_800450D0 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] != 0) {
            queue_destruction__7TObjectFv(self->objs[i]);
            self->objs[i] = 0;
        }
    }
}

void TBoss3Volopt::push_players_out_of_radius() {
    Obj_8004512C *self = (Obj_8004512C *)this;
    s32 i;
    Obj_8004512C *pl;
    s32 ang;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (Obj_8004512C *)get_player_data__10TObjPlayerFi(i);
        if (pl == NULL) {
            continue;
        }
        obj_getField1c(pl);
        if (TObjRoomId__sub_801A1DB8() != 0) {
            continue;
        }
        if (xz_distance_squared(&self->pos, &pl->pos) <= lbl_805D87C0) {
            Vec_8004512C v = pl->pos;
            subtract_vector(&v, &self->pos);
            ang = (s32)(TBoss3Volopt__data_804366B0 * atan2_float(v.z, v.x));
            v.x = lbl_805D87C4 * cos_table_lookup(ang);
            v.z = lbl_805D87C4 * sin_table_lookup(ang);
            vec3_add_to(&v, &self->pos);
            pl->pos.x = v.x;
            pl->pos.z = v.z;
        }
    }
}

void TUnk_80484610::vfunc_79() {  }

extern u16 TBoss3Volopt__cage_entity_id;
extern s32 lbl_805D2714;

typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80045628_lbl_804FF14C_size[sizeof(RecoveredGlobal_80045628_lbl_804FF14C) == 0x40 ? 1 : -1];

void TBoss3Volopt::broadcast_values() {
    Msg_80045328 m;
    s32 i;
    TBoss3Volopt__sub_8004824C(&m);
    m.id = ((Obj_80045328 *)this)->id;
    for (i = 0; i < 4; i++) {
        m.vals[i] = ((Obj_80045328 *)this)->vals[i];
    }
    ((TBoss3Volopt *)(&m))->broadcast_state();
}

#define ABS_80045390(x) ((x) < 0 ? -(x) : (x))
u16 TBoss3Volopt::find_facing_player() {
    Volopt_80045390 *self = (Volopt_80045390 *)this;
    s32 best = 0x10000;
    u16 id = 0xFFFF;
    s32 i;
    Player_80045390 *pl;
    s32 d;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (Player_80045390 *)get_player_data__10TObjPlayerFi(i);
        if (pl == NULL || obj_getField1c(pl) >= 0x1000) {
            break;
        }
        if (((TBoss3Volopt *)pl)->get_field_3e0() != 0xD) {
            continue;
        }
        if (pl->flags & 0x02000800) {
            continue;
        }
        {
            Vec_80045390 v = pl->pos2;
            subtract_vector(&v, &self->pos2);
            d = ABS_80045390(angle_difference_abs(self->angle + 0x8000, (s32)(TBoss3Volopt__data_804366B0 * atan2_float(v.x, v.z))));
            if (d <= best) {
                best = d;
                id = obj_getField1c(pl);
            }
        }
    }
    return id;
}

s16 TBoss3Volopt::collect_targets_in_front() {
    Volopt_8004550C *self = (Volopt_8004550C *)this;
    s32 i;
    Player_8004550C *pl;
    self->count = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (Player_8004550C *)get_player_data__10TObjPlayerFi(i);
        if (pl == NULL || obj_getField1c(pl) >= 0x1000) {
            break;
        }
        if (((TBoss3Volopt *)pl)->get_field_3e0() != 0xD) {
            continue;
        }
        if (pl->flags & 0x02000800) {
            continue;
        }
        {
            Vec_8004550C v = pl->pos2;
            subtract_vector(&v, &self->pos2);
            if (angle_difference_abs(self->angle + 0x8000, (s32)(TBoss3Volopt__data_804366B0 * atan2_float(v.x, v.z))) > 0x1C71) {
                continue;
            }
        }
        self->ids[self->count++] = obj_getField1c(pl);
        if (self->count >= 4) {
            break;
        }
    }
    return self->count;
}

void TBoss3Volopt::trigger_breakup() {
    s32 sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = *(s32 *)&this->m_388;
    if (!(temp_r4 & 0x80000)) {
        *(s32 *)&this->m_388 = (s32) (temp_r4 | 0x80000);
        temp_r5 = (u8 *)(*(u8 * *)&this->m_a4);
        *(s32 *)((s8 *)temp_r5 + 0x9C) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x9C) & 0xEFFFFFFE);
        ((TObjEneGyaranzo *)((u8 *)this))->render_anim_model_at_pos();
        ((VObj_18_f1aa6a *)(((u8 *)this)))->m63(0x29, &sp8);
        TBoss3Volopt::create_breakup_mdl(*(s32 *)((s8 *)(&TBoss3Volopt__breakup_model_ids.value) + 0x10), (s32) &TBoss3Volopt__data_804845E8.value, this->texture_id, (s32) (((u8 *)this) + 0x2FC), this->rotation_y);
        TBoss3Volopt::set_flag8_list((u32 **)(&volopt_breakup_flag_list.value));
        play_sound_effect(0x4003A80F, (u32) (((u8 *)this) + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_lbl_804FF10C_size[sizeof(RecoveredGlobal_800456E4_lbl_804FF10C) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800456E4(u8 *arg0) {
    s32 sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x388);
    if (!(temp_r4 & 0x40000)) {
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (temp_r4 | 0x40000);
        temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
        *(s32 *)((s8 *)temp_r5 + 0x70) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x70) & 0xEFFFFFFE);
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        ((VObj_18_f1aa6a *)(arg0))->m63(0x22, &sp8);
        TBoss3Volopt::create_breakup_mdl(*(s32 *)((s8 *)(&(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__breakup_model_ids).value) + 0xC), (s32) &(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, *(s32 *)((s8 *)arg0 + 0x24), (s32) &sp8, *(s32 *)((s8 *)arg0 + 0x60));
        TBoss3Volopt::set_flag8_list((u32 **)(&lbl_804FF10C.value));
        play_sound_effect(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_lbl_804FF0CC_size[sizeof(RecoveredGlobal_800457A0_lbl_804FF0CC) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800457A0(u8 *arg0) {
    s32 sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x388);
    if (!(temp_r4 & 0x20000)) {
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (temp_r4 | 0x20000);
        temp_r5 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
        *(s32 *)((s8 *)temp_r5 + 0x44) = (s32) (*(s32 *)((s8 *)temp_r5 + 0x44) & 0xEFFFFFFE);
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        ((VObj_18_f1aa6a *)(arg0))->m63(0x32, &sp8);
        TBoss3Volopt::create_breakup_mdl(*(s32 *)((s8 *)(&(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__breakup_model_ids).value) + 8), (s32) &(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, *(s32 *)((s8 *)arg0 + 0x24), (s32) &sp8, *(s32 *)((s8 *)arg0 + 0x60));
        TBoss3Volopt::set_flag8_list((u32 **)(&lbl_804FF0CC.value));
        play_sound_effect(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8004585C_lbl_804FF04C_size[sizeof(RecoveredGlobal_8004585C_lbl_804FF04C) == 0x80 ? 1 : -1];
void TBoss3Volopt::spawn_breakup_models() {
    s32 sp8;
    s32 temp_r4;
    temp_r4 = *(s32 *)&this->m_388;
    if (!(temp_r4 & 0x10000)) {
        *(s32 *)&this->m_388 = (s32) (temp_r4 | 0x10000);
        ((TObjEneGyaranzo *)((u8 *)this))->render_anim_model_at_pos();
        ((VObj_18_f1aa6a *)(((u8 *)this)))->m63(2, &sp8);
        TBoss3Volopt::create_breakup_mdl((s32)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__breakup_model_ids).value) + 0))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (this->texture_id)), (s32)((void *) (&sp8)), (s32)((int) (this->rotation_y)));
        ((VObj_18_f1aa6a *)(((u8 *)this)))->m63(0x12, &sp8);
        TBoss3Volopt::create_breakup_mdl((s32)((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__breakup_model_ids).value) + 4))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (this->texture_id)), (s32)((void *) (&sp8)), (s32)((int) (this->rotation_y)));
        TBoss3Volopt::set_flag8_list((u32 **)(&TBoss3Volopt__breakup_flag_list.value));
    }
}
#pragma pop

void TUnk_80484610::reset_visual_state() {
    Obj_80045928 *self = (Obj_80045928 *)this;
    self->color = lbl_804845C4[0];
    self->scale.x = lbl_804845AC.x;
    self->scale.y = lbl_804845AC.y;
    self->scale.z = lbl_804845AC.z;
    *TBoss3Volopt__data_805D4CFC &= ~8;
    *TBoss3Volopt__data_805D4CEC &= ~8;
    TBoss3Volopt__data_805D4D00[7] = 0xff;
    TBoss3Volopt__data_805D4D08[7] = 0xff;
}

void TBoss3Volopt::create_cage(u16 arg1) {
    void *temp_r3;
    this->targetId = arg1;
    *(u32 *)&this->target = get_player_by_client_id(this->targetId);
    if ((u32) *(u32 *)&this->target != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, this, arg1, TBoss3Volopt__cage_entity_id, lbl_805D2714);
        }
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 0x200000);
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt::spawn_ambient_particles() {
    Stack_80045A04 stack;
    f32 temp_f31;
    s32 temp_r31;
    if (actor_frame_tick & 1) {
        temp_f31 = (lbl_805D87CC * (lbl_805D87BC * (f32) rand())) + lbl_805D87C8;
        temp_r31 = (s32) (lbl_805D87D0 * (lbl_805D87D4 * (lbl_805D87BC * (f32) rand())));
        stack.sp8 = (temp_f31 * cos_table_lookup(temp_r31)) + *(f32 *)((s8 *)((u8 *)this) + 0x38);
        stack.spC = (lbl_805D87DC * (lbl_805D87BC * (f32) rand())) + TBoss3Volopt__data_805D87D8;
        stack.sp10 = (temp_f31 * sin_table_lookup(temp_r31)) + *(f32 *)((s8 *)((u8 *)this) + 0x40);
        spawn_particle_effect((s32) &stack.sp8, 0xFB);
    }
    play_persistent_sound(0x4003AD21, (s32) ((u8 *)this), (u32) (((u8 *)this) + 0x38), 0, 0);
}
#pragma pop

void TBoss3Volopt::update_death_sequence() {
    u8 *arg0 = (u8 *)this;
    Cam_80045B54 cam;
    switch (*(s32 *)&this->state) {
    case 0:
        destroy_children__12TBoss3VoloptFPv(arg0);
        this->m_b8 = 0;
        advance_animation_playback(arg0);
        *(s16 *)&this->timer = 0x3C;
        TCameraCtrl__sub_8006A044(0xB4, lbl_805D87E0);
        *(s32 *)&this->state = 1;
        TBoss3Volopt::alloc_idle_event();
        break;
    case 1:
        cam.b = 1;
        cam.a = 2;
        cam.c = 0;
        cam.d = TBoss3Volopt__data_805D87E4;
        cam.e = TBoss3Volopt__data_805D87E8;
        ((s32 (*)(int, f32))activate_camera_mode)(5, TBoss3Volopt__data_805D87E4);
        ((TCameraCtrl *)(&cam))->cache_target_and_forward(0x160A);
        this->rotation_y = 0;
        set_scripted_camera_pose(boss3_volopt_spawn_pos, boss3_volopt_spawn_pos, arg0 + 0x5C);
        TObjPlayer::freeze_all_players();
        TWindowCtrl::init_all_slots();
        *(s32 *)&this->state = 2;
        break;
    case 2:
        if ((*(u16 *)((s8 *)(get_scripted_camera_playback((*(s16 *)&this->timer)--)) + 2) & 1) ||
            *(s16 *)&this->timer < 0) {
            restore_player_cameras();
            TWindowCtrl::init_all_slots2();
            TObjPlayer__sub_801BA42C();
            *TBoss3Volopt__data_805D4CFC |= 8;
            *TBoss3Volopt__data_805D4CEC |= 8;
            this->m_b8 = 4;
            *(s32 *)&this->state = 3;
        }
        ((TBoss3Volopt *)arg0)->spawn_ambient_particles();
        break;
    case 3:
        advance_animation_playback(arg0);
        ((TBoss3Volopt *)arg0)->spawn_ambient_particles();
        *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805D87EC * this->m_c0;
        if (this->m_c0 >= lbl_805D87F0) {
            TBoss3Volopt::create_breakup_mdl(TBoss3Volopt__data_805D4CE8, (s32)volopt_death_breakup_params, this->texture_id, (s32)(arg0 + 0x2FC), this->rotation_y);
            ((TObjPlayer *)(arg0 + 0x2FC))->trigger_dell_biter_events();
            ((TObjPlayer *)arg0)->refresh_lobby_state();
            volopt_death_active = 1;
            if (is_volopt_death_active() != 0) {
                ((TObjEnemy *)arg0)->send_entity_set_flags();
            }
            TBoss3Volopt::update_phase();
            TBoss3Volopt__sub_8003CB48();
            *(s32 *)&this->state = 4;
            *(s16 *)&this->timer = 0x10;
        }
        break;
    case 4:
        if (!(*(s16 *)&this->timer & 3)) {
            play_sound_effect(0x4003A80F, (u32)(arg0 + 0x38), 0, 1);
        }
        if (--*(s16 *)&this->timer <= 0) {
            TObjPlayer__sub_801BA42C();
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    case -1:
        return;
    }
    play_persistent_sound(0x4003AD21, (s32)arg0, 0, 0, 0);
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt::update_fade_state() {
    f32 temp_f1;
    s32 temp_r0;
    s8 var_r4;
    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags | 0x40000);
        this->m_b8 = 8;
        *(s32 *)&this->state = 2;
    case 2:
        advance_animation_playback(((u8 *)this));
        temp_f1 = this->m_c0;
        var_r4 = 0;
        if (temp_f1 >= TBoss3Volopt__data_805D87D8) {
            var_r4 = (s8) (lbl_805D87F4 * (temp_f1 - TBoss3Volopt__data_805D87D8));
        }
        *(s8 *)((s8 *)TBoss3Volopt__data_805D4D00 + 7) = var_r4;
        *(s8 *)((s8 *)TBoss3Volopt__data_805D4D08 + 7) = var_r4;
        *(s32 *)((s8 *)((u8 *)this) + 0x47C) = 0x4000;
        *(f32 *)((s8 *)((u8 *)this) + 0x3C) = (f32) (lbl_805D87B0 * -((lbl_805D87F8 * this->m_c0) - TBoss3Volopt__data_805D87E8));
        if (this->m_c0 >= lbl_805D87FC) {
            *(f32 *)((s8 *)((u8 *)this) + 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
            ((VObj_18_62ff9d *)(((u8 *)this)))->m56();
            break;
        }
    case 1:
        break;
    case -1:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFBFFFF);
        break;
    }
}
#pragma pop

struct Vec_80045EEC { f32 x, y, z; };
s32 TBoss3Volopt__sub_800FD344(void *, int, int, void *, int);
extern Vec_80045EEC lbl_80436684[];
extern u8 *lbl_805D4D04;
extern const f32 lbl_805D8800;
extern const f32 lbl_805D8804;
extern const f32 lbl_805D8808;
extern s32 lbl_805D880C;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs off
inline f32 max_80045EEC(f32 a, f32 b) { return (a > b) ? a : b; }
inline s32 imin_80045EEC(s32 a, s32 b) { return (a < b) ? a : b; }
inline f32 min_80045EEC(f32 a, f32 b) { return (a < b) ? a : b; }
#define arg0 ((u8 *)arg0_)
void TBoss3Volopt::update_pillar_heal_state(void *arg0_) {
    if (*(s32 *)((s8 *)arg0 + 0x388) & 0x40000) {
        *(s32 *)((s8 *)arg0 + 0x374) = 0;
    }
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0xB8) = 5;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        ((TBoss3Volopt *)arg0)->push_players_out_of_radius();
        play_sound_effect(0x4003A817, (u32) (arg0 + 0x38), 0, 0);
        break;
    case 1: {
        f32 f;
        f32 t;
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, TBoss3Volopt__data_805D87D8) != 0) {
            play_sound_effect(0x4003A80B, (u32) (arg0 + 0x38), 0, 0);
        }
        t = lbl_805D8800 * (*(f32 *)((s8 *)arg0 + 0xC0) - lbl_805D8804);
        f = min_80045EEC(max_80045EEC(t, TBoss3Volopt__data_805D87E4), TBoss3Volopt__data_805D87E8);
        lbl_805D4D04[7] = (s8) (lbl_805D8808 * f);
        if (*(f32 *)((s8 *)arg0 + 0xC0) >= lbl_805D87FC) {
            Vec_80045EEC out;
            push_matrix_from(identity_matrix);
            Vec_80045EEC v = lbl_80436684[0];
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            matrix_mult_vec(0, &v, &out);
            vec3_add_to(&out, arg0 + 0x38);
            pop_matrix();
            *(void **)((s8 *)arg0 + 0x474) = create_particle_emitter(&out, 0x1A1);
            *(s16 *)((s8 *)arg0 + 0x33C) = 0x1E;
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        }
        break;
    }
    case 2: {
        play_sound_effect(0x4003A819, (u32) (arg0 + 0x38), 0, 0);
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            s32 n;
            if (*(u32 *)((s8 *)arg0 + 0x474) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x474));
                *(u32 *)((s8 *)arg0 + 0x474) = 0U;
            }
            n = ((s32 (*)(int))TObjVoloptPillar__sub_80048118)(3) / 5;
            TBoss3Volopt__sub_800FD344(arg0 + 0x2FC, 0xFF00FF00, 0x1E, &lbl_805D880C, n);
            *(s16 *)((s8 *)arg0 + 0x32C) = imin_80045EEC(*(s16 *)((s8 *)arg0 + 0x32C) + n, *(s16 *)((s8 *)arg0 + 0x2B8));
            for (s32 i = 0; i < 4; i++) {
                s16 c;
                u8 *q = arg0 + i * 2;
                c = *(s16 *)((s8 *)q + 0x4AC);
                if (c > 0) {
                    s32 v = c + n;
                    s32 lim = *(s16 *)((s8 *)q + 0x4B4);
                    if (v < lim) {
                        lim = v;
                    }
                    *(s16 *)((s8 *)q + 0x4AC) = lim;
                }
            }
            *(s16 *)((s8 *)arg0 + 0x33C) = 0x3C;
            *(s16 *)((s8 *)arg0 + 0x32C) = imin_80045EEC(*(s16 *)((s8 *)arg0 + 0x32C) + 0xA, *(s16 *)((s8 *)arg0 + 0x2B8));
            *(void **)((s8 *)arg0 + 0x474) = create_particle_emitter(arg0 + 0x38, 0x1A2);
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
            play_sound_effect(0x4002AB0E, (u32) (arg0 + 0x38), 0, 0);
        }
        break;
    }
    case 3: {
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            if (*(u32 *)((s8 *)arg0 + 0x474) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x474));
                *(u32 *)((s8 *)arg0 + 0x474) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
            play_sound_effect(0x4003A817, (u32) (arg0 + 0x38), 0, 0);
        }
        break;
    }
    case 4:
        advance_animation_playback(arg0);
        if (*(u32 *)((s8 *)arg0 + 0xB4) != 4U) {
            ((VObj_18_62ff9d *)(arg0))->m56();
        }
        break;
    case -1:
        if (*(u32 *)((s8 *)arg0 + 0x474) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x474));
            *(u32 *)((s8 *)arg0 + 0x474) = 0U;
        }
        break;
    }
}
#undef arg0
#pragma pop

#define arg0 ((u8 *)arg0_)
#define F(t, o) (*(t *)((s8 *)(arg0) + (o)))
#define VO ((VObj_18_b5cc36 *)(arg0))

void TBoss3Volopt__sub_80046260(void *arg0_) {
    s32 n;
    s32 i;

    if (F(s32, 0x388) & 0x80000) {
        F(s32, 0x374) = 0;
    }
    F(u32, 0x2A8) = get_player_by_client_id(F(u16, 0x338));
    switch (F(s32, 0x37C)) {
    case 0:
        F(s16, 0x33C) = 0x3C;
        F(s16, 0x396) = 0;
        F(s32, 0x37C) = 1;
    case 1:
        if (F(u8 *, 0x2A8) != NULL) {
            Vec_80046260 v = *(Vec_80046260 *)(F(u8 *, 0x2A8) + 0x38);
            subtract_vector(&v, arg0 + 0x38);
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), (s32)(TBoss3Volopt__data_804366B0 * atan2_float(v.x, v.z)) + 0x8000, 0x566);
        }
        if (--F(s16, 0x33C) <= 0) {
            F(s16, 0xB8) = 7;
            advance_animation_playback(arg0);
            F(s32, 0x37C) = 2;
        }
        ((TBoss3Volopt *)arg0)->push_players_out_of_radius();
        break;
    case 2:
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, TBoss3Volopt__data_805D87A8) != 0) {
            play_sound_effect(0x4003A811, (u32)(arg0 + 0x38), 0, 0);
        }
        if (F(f32, 0xC0) >= lbl_805D8810) {
            F(s16, 0x33C) = 0xA;
            F(s32, 0x37C) = 3;
        }
        break;
    case 3:
        if (--F(s16, 0x33C) <= 0) {
            F(s32, 0x37C) = 4;
        }
        break;
    case 4: {
        Vec_80046260 pos;
        s16 cnt;
        F(s16, 0x396)++;
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        ((TBoss3Volopt *)arg0)->collect_targets_in_front();
        for (i = 0; i < (cnt = F(s16, 0x394)); i++) {
            void *o;
            VO->m63(lbl_8048441C[i], &pos);
            o = __nw__7TObjectFUl(0xF0);
            if (o != NULL) {
                TBoss3Volopt__sub_80049E9C(o, arg0, &pos, F(s32, 0x60) + 0x8000, ((u16 *)arg0)[i + 0x1C6]);
            }
        }
        if (cnt > 0) {
            play_sound_effect(0x4003AD13, (u32)(arg0 + 0x38), 0, 0);
        }
        F(s16, 0x33C) = 0xF;
        F(s32, 0x37C) = 5;
    }
    case 5:
        if (--F(s16, 0x33C) <= 0) {
            s32 ph = get_main_phase();
            n = 4;
            if (ph == 0xF) {
                n = 2;
            }
            if (F(s16, 0x396) < n) {
                F(s32, 0x37C) = 4;
            } else {
                F(s32, 0x37C) = 6;
                play_sound_effect(0x4003A312, (u32)(arg0 + 0x38), 0, 0);
            }
        }
        break;
    case 6:
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805D87C8) != 0) {
            play_sound_effect(0x4003A312, (u32)(arg0 + 0x38), 0, 0);
        }
        if (F(u32, 0xB4) != 4) {
            VO->m56();
        }
        break;
    case -1:
        break;
    }
}
#undef arg0
#undef F
#undef VO

void TBoss3Volopt::check_and_notify(s32 _w0) {
    if (find_entity_by_id(TBoss3Volopt__cage_entity_id) != 0U) {
        fn_80048C04();
    }
}

#pragma push
#pragma opt_common_subs off
struct Volopt_80044EDC;
struct S_80045010;
struct Obj_8004512C;
#define SELF ((VObj_80046CB8 *)arg0)
#define arg0 ((u8 *)arg0_)
void TBoss3Volopt__sub_80046CB8(void *arg0_) {
    Vec_80046CB8 pos;
    Vec_80046CB8 out;
    s32 off;
    s32 i;
    if (*(s32 *)((s8 *)arg0 + 0x388) & 0x20000) {
        *(s32 *)((s8 *)arg0 + 0x374) = 0;
    }
    *(u32 *)((s8 *)arg0 + 0x2A8) = get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x338));
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case 0:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        *(s16 *)((s8 *)arg0 + 0x398) = 0;
    case 1:
        *(s16 *)((s8 *)arg0 + 0x33C) = 0x5A;
        *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        ((TBoss3Volopt *)arg0)->push_players_out_of_radius();
    case 2:
        if (*(u32 *)((s8 *)arg0 + 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(*(u32 *)((s8 *)arg0 + 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003A60E, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        advance_animation_playback(arg0);
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        SELF->m63(0x3C, arg0 + 0x3D8);
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            *(s16 *)((s8 *)arg0 + 0xB8) = 2;
            play_sound_effect(0x4003A817, (u32)(arg0 + 0x38), 0, 0);
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
        }
        ((TBoss3Volopt *)arg0)->collect_targets_in_arc();
        ((TBoss3Volopt *)arg0)->rebuild_parts();
        break;
    case 3:
        if (*(u32 *)((s8 *)arg0 + 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(*(u32 *)((s8 *)arg0 + 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003A60E, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        advance_animation_playback(arg0);
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        SELF->m63(0x3C, arg0 + 0x3D8);
        if (*(f32 *)((s8 *)arg0 + 0xC0) >= lbl_805D87A4) {
            ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
            SELF->m63(0x39, &pos);
            *(void **)((s8 *)arg0 + 0x478) = create_particle_emitter(&pos, 0x1A0);
            *(s16 *)((s8 *)arg0 + 0x33C) = 0x1E;
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
        }
        ((TBoss3Volopt *)arg0)->collect_targets_in_arc();
        ((TBoss3Volopt *)arg0)->rebuild_parts();
        if (objInBand__FP7GameObjf(arg0, TBoss3Volopt__data_805D87A8) != 0) {
            play_sound_effect(0x4003A818, (u32)(arg0 + 0x38), 0, 0);
        }
        break;
    case 4:
        if (*(u32 *)((s8 *)arg0 + 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(*(u32 *)((s8 *)arg0 + 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        ((TObjEneGyaranzo *)arg0)->render_anim_model_at_pos();
        SELF->m63(0x3C, arg0 + 0x3D8);
        push_matrix_from(identity_matrix);
        {
            Vec_80046CB8 v = lbl_80436660[0];
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            matrix_mult_vec(0, &v, &out);
        }
        vec3_add_to(&out, arg0 + 0x38);
        pop_matrix();
        if (*(void **)((s8 *)arg0 + 0x478) != NULL) {
            ((TNowLoading *)(*(void **)((s8 *)arg0 + 0x478)))->copy_pos(&out);
        }
        play_persistent_sound(0x4003AD1A, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            if (*(void **)((s8 *)arg0 + 0x478) != NULL) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x478));
                *(void **)((s8 *)arg0 + 0x478) = NULL;
            }
            *(s16 *)((s8 *)arg0 + 0x39A) = 0;
            *(s32 *)((s8 *)arg0 + 0x37C) = 5;
        }
        ((TBoss3Volopt *)arg0)->collect_targets_in_arc();
        ((TBoss3Volopt *)arg0)->rebuild_parts();
        break;
    case 5:
        if (*(u32 *)((s8 *)arg0 + 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        *(s16 *)((s8 *)arg0 + 0x33C) = TObjVoloptPillar__sub_80048118(5);
        ((TBoss3Volopt *)arg0)->collect_targets_in_arc();
        for (i = 0, off = 0; i < *(s16 *)((s8 *)arg0 + 0x39C); i++, off += 0xC) {
            void *p = __nw__7TObjectFUl(0xC0);
            if (p != NULL) {
                TObjVoloptPillar__ct(p, arg0 + off + 0x3A8, arg0);
            }
        }
        play_sound_effect(0x4003B722, (u32)(arg0 + 0x38), 0, 0);
        *(s32 *)((s8 *)arg0 + 0x37C) = 6;
        ((TBoss3Volopt *)arg0)->push_players_out_of_radius();
    case 6:
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            destroy_children__12TBoss3VoloptFPv(arg0);
            if (TBoss3Volopt__sub_8003F398() != 0) {
                *(s16 *)((s8 *)arg0 + 0x33C) = TBoss3Volopt__phase2_position_table[*(s16 *)((s8 *)arg0 + 0x39A)];
            } else {
                *(s16 *)((s8 *)arg0 + 0x33C) = 0x14;
            }
            *(s32 *)((s8 *)arg0 + 0x37C) = 7;
        }
        break;
    case 7:
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                *(s16 *)((s8 *)arg0 + 0x33C) = 0;
            } else {
                *(s16 *)((s8 *)arg0 + 0x33C) = 5;
            }
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            *(s32 *)((s8 *)arg0 + 0x37C) = 8;
            play_sound_effect(0x4003A817, (u32)(arg0 + 0x38), 0, 0);
        }
        break;
    case 8:
        advance_animation_playback(arg0);
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            if (++*(s16 *)((s8 *)arg0 + 0x39A) < 3) {
                *(s32 *)((s8 *)arg0 + 0x37C) = 5;
            } else if (++*(s16 *)((s8 *)arg0 + 0x398) < 2) {
                *(s32 *)((s8 *)arg0 + 0x37C) = 1;
            } else {
                SELF->m56();
            }
        }
        break;
    case -1:
        destroy_children__12TBoss3VoloptFPv(arg0);
        if (*(void **)((s8 *)arg0 + 0x478) != NULL) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x478));
            *(void **)((s8 *)arg0 + 0x478) = NULL;
        }
        break;
    }
}
#undef arg0
#pragma pop

void TUnk_80484610::sub_800472D4() {
    Obj_800472D4 *self = (Obj_800472D4 *)this;
    switch (self->state) {
    case 0:
        self->flags &= ~0x40000;
        self->anim = 0;
        ((TUnk_80484610 *)self)->reset_visual_state();
        self->state = 1;
    case 1:
        advance_animation_playback(self);
        break;
    case -1:
        break;
    }
}

void update_state__12TBoss3VoloptFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x46C) = 6;
        ((TUnk_80484610 *)arg0)->distribute_part_damage();
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (lbl_805D8818 * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x46C) * 0x3000));
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x46C) - 1;
        *(s32 *)((s8 *)arg0 + 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
            *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
            temp_r0_3 = *(s32 *)((s8 *)arg0 + 0x380);
            *(s32 *)((s8 *)arg0 + 0x374) = temp_r0_3;
            *(s16 *)((s8 *)arg0 + 0x326) = (s16) temp_r0_3;
            *(s32 *)((s8 *)arg0 + 0x37C) = (s32) *(s32 *)((s8 *)arg0 + 0x470);
        }
        break;
    case -1:
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}

void dispatch_state__12TBoss3VoloptFPv(V_80047408 *self) {
    switch (self->state) {
    case 0:
        self->m56();
        break;
    case -1:
        break;
    }
}

void TBoss3Volopt::set_action_wait(u16 arg1) {
    if ((obj_testFlags30((void*)((void *)(this)), (s32)((s32)(0x800))) == 0) && !(*(s32 *)&this->m_388 & 0x80000) && ((s16) this->mode != 0xA)) {
        TBoss3Volopt::check_and_notify((s32)(this));
        if ((u16) arg1 != 0xFFFF) {
            this->targetId = arg1;
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
            ((TObjEneMe1GiGue *)this)->update_if_active(0xA);
        }
    }
}
void TBoss3Volopt::set_motion(s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(this)), (s32)((s32)(0x800))) == 0) && !(*(s32 *)&this->m_388 & 0x10000) && ((s16) this->mode != 9)) {
        *(s16 *)&this->targetId = arg1;
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        ((TObjEneMe1GiGue *)this)->update_if_active(9);
    }
}
void TBoss3Volopt::check_and_trigger() {
    if ((obj_testFlags30((void*)((void *)(this)), (s32)((s32)(0x800))) == 0) && !(*(s32 *)&this->m_388 & 0x40000)) {
        TBoss3Volopt::check_and_notify((s32)(this));
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        ((TObjEneMe1GiGue *)this)->update_if_active(0xB);
    }
}
void TBoss3Volopt::set_action(s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(this)), (s32)((s32)(0x800))) == 0) && !(*(s32 *)&this->m_388 & 0x20000) && ((s16) this->mode != 2)) {
        TBoss3Volopt::check_and_notify((s32)(this));
        *(s16 *)&this->targetId = arg1;
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        ((VObj_800475A0_80044498 *)this)->m58();
    }
}
void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x02000000) && (((VObjA_80044498 *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (((RenderFadeState*)(arg0 + 0x490))->updateFromCamera((const f32*)(arg0 + 0x2FC)) != 0) {
            ((VObjB_80044498 *)(arg0 + 0x490))->n6();
        }
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
        select_actor_lighting(arg0);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
        } else {
            ((TObjEneRe7Berura *)arg0)->draw();
        }
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
        ((VObjB_80044498 *)(arg0 + 0x490))->n7();
    }
}

void TUnk_80484610::run_state() {
    S_80047714 *o = (S_80047714 *)this;
    switch (o->st) {
    case 0: ((TUnk_80484610 *)o)->sub_800472D4(); return;
    case 1: dispatch_state__12TBoss3VoloptFPv((V_80047408 *)(o)); return;
    case 2: TBoss3Volopt__sub_80046CB8((void *)(o)); return;
    case 4: update_state__12TBoss3VoloptFPv(o); return;
    case 5: ((TBoss3Volopt *)o)->update_death_sequence(); return;
    case 9: TBoss3Volopt__sub_800465B0(o); return;
    case 10: TBoss3Volopt__sub_80046260(o); return;
    case 11: TBoss3Volopt::update_pillar_heal_state(o); return;
    case 7: ((TBoss3Volopt *)o)->update_fade_state(); return;
    case 12: TBoss3Volopt__sub_80044680(o); return;
    case 3: return;
    case 6: return;
    case 8: return;
    }
}

#pragma push
#pragma fp_contract on
void TUnk_80484610::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = sin_table_lookup(this->m_47c);
    *(s8 *)((s8 *)TBoss3Volopt__data_805D4D00 + 6) = (s8) fabs_float(temp_f1 * this->m_484);
    *(s8 *)((s8 *)TBoss3Volopt__data_805D4D00 + 5) = (s8) fabs_float(temp_f1 * *(f32 *)&this->unk_488);
    *(s8 *)((s8 *)TBoss3Volopt__data_805D4D00 + 4) = (s8) fabs_float(temp_f1 * this->m_48c);
    this->m_47c = (s32) (this->m_47c + *(s32 *)&this->unk_480);
    if (TObjPlayer::check_demo_mode() != 1) {
        if (this->has_flag_0x800() != 0) {
            this->vfunc_63();
        } else if (this->test_flag30_512() != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                ((TUnk_80484610 *)arg0)->distribute_part_damage();
                *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFFFDFF);
                *(f32 *)((s8 *)arg0 + 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            } else {
                this->vfunc_62();
            }
        }
        if (obj_testFlags30((void*)(arg0), (s32)(0x4000)) != 0) {
            if (((TObjPlayer *)arg0)->add_status_effect_timer((int) (4), (int) (-1)) <= 0) {
                reset_status_effect_row((void *) (arg0 + 0x284));
                obj_clearFlags30((void *) (arg0), (int) (0x4000));
            }
        } else {
            if ((s16) this->mode != (s32) *(s32 *)&this->next_action) {
                temp_r0 = *(s32 *)&this->state;
                if (temp_r0 != -1) {
                    this->m_470 = temp_r0;
                    *(s32 *)&this->state = -1;
                    ((TUnk_80484610 *)arg0)->run_state();
                }
                *(s32 *)&this->m_380 = (s32) this->mode;
                this->mode = (s16) *(s32 *)&this->next_action;
                *(s32 *)&this->state = 0;
            }
            ((TUnk_80484610 *)arg0)->run_state();
            ((TObjEnemy *)arg0)->update_prev_position();
            copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
            submit_cursor_candidate((void *) (arg0), (int) (-1));
            minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
            update_obstruction_fade((void *) (arg0 + 0x490));
            this->clear_all_status_effects();
        }
    }
}
#pragma pop

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl((s32)(0x510));
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}
void *TUnk_80484610::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = volopt_boss_dispatch_table;
        free_collision_body_parts(this);
        if (*(void **)((s8 *)this + 0x474) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x474)); }
        if (this->m_478 != NULL) { queue_destruction__7TObjectFv(this->m_478); }
        destroy_children__12TBoss3VoloptFPv((void *)(this));
        destroy_sub_objects__12TBoss3VoloptFPv((void *)(this));
        TObjPlayer__sub_800D7C58((s8 *)this + 0x490, -1);
        __dt__15TObjEnemyCustomFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
