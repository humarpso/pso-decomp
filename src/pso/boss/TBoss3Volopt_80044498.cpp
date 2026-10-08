#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(s16, void *);
};

struct Vec_80046260 { f32 x, y, z; };

#include "pso/misc/RenderFadeState.h"
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
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct BaseB_80044498 { char pad[0x14]; };

struct VObjB_80044498 : BaseB_80044498 {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

struct Stack_80045A04 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_b8f5cb { char pad[0x18]; };

struct VObj_18_b8f5cb : VBase_18_b8f5cb {
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual M2C_UNK m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
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
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80045628_lbl_804FF14C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800456E4_lbl_804FF10C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800457A0_lbl_804FF0CC {
    M2C_UNK value;
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
    virtual M2C_UNK m56();
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8004585C_lbl_804FF04C {
    M2C_UNK value;
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

typedef s32 M2C_UNK;
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
    virtual M2C_UNK m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62();
    virtual M2C_UNK m63(s16, void *);
};

typedef struct Msg_80044CE4 {
    u8 hdr[4];
    s16 unk4;
    s16 vals[3];
    u8 pad[0xC];
} Msg_80044CE4;

extern "C" {
u32 find_entity_by_id(u16);
M2C_UNK fn_80048C04();
extern u16 TBoss3Volopt__cage_entity_id;
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
f32 sin_table_lookup(s32);
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;
void update_state__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void check_and_trigger__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;
void render__12TBoss3VoloptFPv(u8 *arg0);
void *__nw__7TObjectFUl(M2C_UNK);
void *fn_800480B0(void *, void *, void *);
extern void *tl_04;
void *TBoss3Volopt__sub_80047DD4(void *arg0);
void free_collision_body_parts(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_80484610[];
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
s32 spawn_particle_effect(s32, s32);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 lbl_805D53A4;
extern const f32 lbl_805D87BC;
extern const f32 lbl_805D87C8;
extern const f32 lbl_805D87CC;
extern const f32 lbl_805D87D0;
extern const f32 lbl_805D87D4;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 lbl_805D87DC;
void spawn_ambient_particles__12TBoss3VoloptFPv(u8 *arg0);
s32 obj_testFlags30(void*, M2C_UNK);
f32 get_random_float__8TObjFishFv(f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 minimap_render_dot(void *, s32, s16, s32);
f32 sin_table_lookup(s32);
M2C_UNK reset_status_effect_row(void *);
s32 add_status_effect_timer__10TObjPlayerFPvii(void *, int, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
extern u8 *TBoss3Volopt__data_805D4D00;
extern const f32 TBoss3Volopt__data_805D87E4;
void TBoss3Volopt__sub_800477A0(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_80045628_lbl_804FF14C lbl_804FF14C;
void trigger_breakup__12TBoss3VoloptFPv(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_800456E4_lbl_804FF10C lbl_804FF10C;
void TBoss3Volopt__sub_800456E4(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
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
void TBoss3Volopt__sub_80045DC4(u8 *arg0);
void set_flag8_list__12TBoss3VoloptFPv(void *);
void render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8 TBoss3Volopt__data_804845E8;
extern RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038 TBoss3Volopt__data_804FF038;
extern RecoveredGlobal_8004585C_lbl_804FF04C lbl_804FF04C;
void spawn_breakup_models__12TBoss3VoloptFPv(u8 *arg0);
extern s16 lbl_804FF030[];
void TBoss3Volopt__sub_80044CB8(O_80044CB8 *self);
void TBoss3Volopt__sub_80047408(V_80047408 *self);
f32 receive_physical_attack__10TObjPlayerFv(void *, void *, f32);
f32 TBoss3Volopt__sub_80044E4C(Obj_80044E4C *self, void *a1, f32 x);
void *__nw__7TObjectFUl(M2C_UNK);
void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void spawn_sub_objects__12TBoss3VoloptFPv(void *arg0);
void queue_destruction__7TObjectFv(void *);
void destroy_sub_objects__12TBoss3VoloptFPv(void *arg0);
void receive_direct_attack__10TObjPlayerFv(void *, void *, V2_80044DD4, void *, s32, s32);
void TBoss3Volopt__sub_80044DD4(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3);
void queue_destruction__7TObjectFv(void *);
void destroy_children__12TBoss3VoloptFPv(void *arg0);
extern s32 lbl_804845C4[];
extern V3_80045928 lbl_804845AC;
extern u32 *TBoss3Volopt__data_805D4CFC;
extern u32 *TBoss3Volopt__data_805D4CEC;
extern u8 *TBoss3Volopt__data_805D4D00;
extern u8 *TBoss3Volopt__data_805D4D08;
void TBoss3Volopt__sub_80045928(void *arg0);
void TBoss3Volopt__sub_8004824C(void *);
void broadcast_state__12TBoss3VoloptFPv(void *);
void broadcast_values__12TBoss3VoloptFPv(Obj_80045328 *self);
void TBoss3Volopt__sub_80045928(void *arg0);
void advance_animation_playback(void *);
void TBoss3Volopt__sub_800472D4(Obj_800472D4 *self);
void queue_destruction__7TObjectFv(void *);
void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(M2C_UNK);
void rebuild_parts__12TBoss3VoloptFPv(S_80045010 *o);
void TBoss3Volopt__sub_80044680(void *);
void TBoss3Volopt__sub_80045DC4(u8 *arg0);
void TBoss3Volopt__sub_80045EEC(void *);
void TBoss3Volopt__sub_80046260(void *);
void TBoss3Volopt__sub_800465B0(void *);
void TBoss3Volopt__sub_800472D4(Obj_800472D4 *self);
void update_state__12TBoss3VoloptFPv(void *arg0);
void TBoss3Volopt__sub_80047408(V_80047408 *self);
void run_state__12TBoss3VoloptFPv(S_80047714 *o);
void broadcast_values__12TBoss3VoloptFPv(Obj_80045328 *self);
void distribute_part_damage__12TBoss3VoloptFPv(Volopt_80044498 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
void collect_targets_in_arc__12TBoss3VoloptFPv(Volopt_80044EDC *self);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
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
void push_players_out_of_radius__12TBoss3VoloptFPv(Obj_8004512C *self);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
s16 collect_targets_in_front__12TBoss3VoloptFPv(Volopt_8004550C *self);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
s32 angle_difference_abs(s32, s32);
void subtract_vector(void *, void *);
extern const f64 TBoss3Volopt__data_804366B0;
extern s32 lbl_805D586C;
u16 find_facing_player__12TBoss3VoloptFPv(Volopt_80045390 *self);
void queue_destruction__7TObjectFv(void *);
M2C_UNK update_phase__12TBoss3VoloptFv();
M2C_UNK TBoss3Volopt__sub_8003CB48();
M2C_UNK alloc_idle_event__12TBoss3VoloptFv();
s32 TBoss3Volopt__sub_8003CB94();
void destroy_children__12TBoss3VoloptFPv(void *arg0);
void spawn_ambient_particles__12TBoss3VoloptFPv(u8 *arg0);
M2C_UNK restore_player_cameras();
M2C_UNK activate_camera_mode(int, int, f32);
M2C_UNK TCameraCtrl__sub_8006A044(int, f32);
M2C_UNK set_scripted_camera_pose(void *, void *, void *);
M2C_UNK cache_target_and_forward__11TCameraCtrlFii(Cam_80045B54 *, int);
u8 *get_scripted_camera_playback(s16);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
void advance_animation_playback(void *);
M2C_UNK TObjPlayer__sub_801BA42C();
M2C_UNK freeze_all_players__10TObjPlayerFv();
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 play_sound_effect(s32, u32, s16, s32);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
extern u8 lbl_804845CC[];
extern u8 lbl_804FEE68[];
extern s32 lbl_805D4C24;
extern s32 TBoss3Volopt__data_805D4CE8;
extern u32 *TBoss3Volopt__data_805D4CEC;
extern u32 *TBoss3Volopt__data_805D4CFC;
extern const f32 lbl_805D87E0;
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 TBoss3Volopt__data_805D87E8;
extern const f32 lbl_805D87EC;
extern const f32 lbl_805D87F0;
s32 get_main_phase();
M2C_UNK TBoss3Volopt__sub_80049E9C(void *, void *, Vec_80046260 *, s32, u16);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
extern s16 lbl_8048441C[];
extern const f32 TBoss3Volopt__data_805D87A8;
extern const f32 lbl_805D8810;
void update_death_sequence__12TBoss3VoloptFPv(void *arg0_);
void queue_destruction__7TObjectFv(void *);
s32 TBoss3Volopt__sub_8003F398(void);
void collect_targets_in_arc__12TBoss3VoloptFPv(Volopt_80044EDC *self);
void rebuild_parts__12TBoss3VoloptFPv(S_80045010 *o);
void destroy_children__12TBoss3VoloptFPv(void *arg0);
void push_players_out_of_radius__12TBoss3VoloptFPv(Obj_8004512C *self);
s16 TObjVoloptPillar__sub_80048118(int);
M2C_UNK TObjVoloptPillar__ct(void *, void *, void *);
void *create_particle_emitter(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK turn_toward_point__12TBoss3VoloptFPvPvPvi(void *, void *, int, int);
void render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
u32 get_player_by_client_id(u16);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 play_sound_effect(s32, u32, s16, s32);
void *__nw__7TObjectFUl(M2C_UNK);
void vec3_add_to(void *, void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_80046CB8 lbl_80436660[];
extern s16 lbl_804FF030[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805D87A4;
extern const f32 TBoss3Volopt__data_805D87A8;
void TBoss3Volopt__sub_80046CB8(void *arg0_);
f32 TBoss3Volopt__sub_8004812C(s32);
void update_and_send_60__12TBoss3VoloptFPv(void *);
void TBoss3Volopt__sub_800481B4(void *);
s32 rand(void);
extern const f32 lbl_805D87BC;
void send_random_params__12TBoss3VoloptFv(void);
}

extern "C" {

void TBoss3Volopt__sub_80045234(void);
void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0);
s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0);
void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
M2C_UNK TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 get_player_by_client_id(u16);
void *__nw__7TObjectFUl(M2C_UNK);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

extern f32 lbl_805D87B8;

struct Obj_80045328;
void distribute_part_damage__12TBoss3VoloptFPv(Volopt_80044498 *self) {
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
            broadcast_values__12TBoss3VoloptFPv((Obj_80045328 *)((struct Obj_80045328 *)self));
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

void spawn_sub_objects__12TBoss3VoloptFPv(void *arg0) {
    Obj_80044600 *self = (Obj_80044600 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->objs[i] == 0) {
            void *o = __nw__7TObjectFUl((M2C_UNK)(0x28));
            if (o != 0) {
                o = ct__12TBoss3VoloptFPvPvPv(o, self->target, &self->pos[i]);
            }
            self->objs[i] = o;
        }
    }
}

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, f32 *, 0x508) = (f32) (lbl_805D87B8 + farg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
    }
}

void TBoss3Volopt__sub_80044CB8(O_80044CB8 *self) {
    s32 i;
    for (i = 0; i < 3; i++) {
        lbl_804FF030[i] = self->arr[i];
    }
}

#pragma fp_contract on
void send_random_params__12TBoss3VoloptFv(void) {
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
    update_and_send_60__12TBoss3VoloptFPv(&msg);
}

void TBoss3Volopt__sub_80044DD4(Obj_80044DD4 *self, void *a1, V2_80044DD4 v, void *a3) {
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

f32 TBoss3Volopt__sub_80044E4C(Obj_80044E4C *self, void *a1, f32 x) {
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

s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)arg0 + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

void collect_targets_in_arc__12TBoss3VoloptFPv(Volopt_80044EDC *self) {
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
            if (angle_difference_abs(self->angle + 0x4000, (s32)(TBoss3Volopt__data_804366B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) > limit) {
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

void rebuild_parts__12TBoss3VoloptFPv(S_80045010 *o) {
    s32 i;
    void *p;
    for (i = 0; i < o->cnt; i++) {
        if (o->ptr[i] != 0) {
            queue_destruction__7TObjectFv(o->ptr[i]);
        }
        p = __nw__7TObjectFUl((M2C_UNK)(0x28));
        if (p != 0) {
            p = ct__12TBoss3VoloptFPvPvPv(p, o->pad3d8, &o->recs[i]);
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

void push_players_out_of_radius__12TBoss3VoloptFPv(Obj_8004512C *self) {
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
            ang = (s32)(TBoss3Volopt__data_804366B0 * get_ad_end_text_start__10TObjPlayerFv(v.z, v.x));
            v.x = lbl_805D87C4 * cos_table_lookup(ang);
            v.z = lbl_805D87C4 * sin_table_lookup(ang);
            vec3_add_to(&v, &self->pos);
            pl->pos.x = v.x;
            pl->pos.z = v.z;
        }
    }
}

void TBoss3Volopt__sub_80045234(void) {  }

extern u16 TBoss3Volopt__cage_entity_id;
extern s32 lbl_805D2714;

typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_80045628_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80045628_lbl_804FF14C_size[sizeof(RecoveredGlobal_80045628_lbl_804FF14C) == 0x40 ? 1 : -1];

void broadcast_values__12TBoss3VoloptFPv(Obj_80045328 *self) {
    Msg_80045328 m;
    s32 i;
    TBoss3Volopt__sub_8004824C(&m);
    m.id = self->id;
    for (i = 0; i < 4; i++) {
        m.vals[i] = self->vals[i];
    }
    broadcast_state__12TBoss3VoloptFPv(&m);
}

#define ABS_80045390(x) ((x) < 0 ? -(x) : (x))
u16 find_facing_player__12TBoss3VoloptFPv(Volopt_80045390 *self) {
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
        if (get_field_3e0__12TBoss3VoloptFPv(pl) != 0xD) {
            continue;
        }
        if (pl->flags & 0x02000800) {
            continue;
        }
        {
            Vec_80045390 v = pl->pos2;
            subtract_vector(&v, &self->pos2);
            d = ABS_80045390(angle_difference_abs(self->angle + 0x8000, (s32)(TBoss3Volopt__data_804366B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))));
            if (d <= best) {
                best = d;
                id = obj_getField1c(pl);
            }
        }
    }
    return id;
}

s16 collect_targets_in_front__12TBoss3VoloptFPv(Volopt_8004550C *self) {
    s32 i;
    Player_8004550C *pl;
    self->count = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (Player_8004550C *)get_player_data__10TObjPlayerFi(i);
        if (pl == NULL || obj_getField1c(pl) >= 0x1000) {
            break;
        }
        if (get_field_3e0__12TBoss3VoloptFPv(pl) != 0xD) {
            continue;
        }
        if (pl->flags & 0x02000800) {
            continue;
        }
        {
            Vec_8004550C v = pl->pos2;
            subtract_vector(&v, &self->pos2);
            if (angle_difference_abs(self->angle + 0x8000, (s32)(TBoss3Volopt__data_804366B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) > 0x1C71) {
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

void trigger_breakup__12TBoss3VoloptFPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x80000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x80000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x9C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x9C) & 0xEFFFFFFE);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x29, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&TBoss3Volopt__data_804FF038.value, s32 *, 0x10), (s32) &TBoss3Volopt__data_804845E8.value, M2C_FIELD(arg0, s32 *, 0x24), (s32) (arg0 + 0x2FC), M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF14C.value);
        play_sound_effect(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800456E4_lbl_804FF10C_size[sizeof(RecoveredGlobal_800456E4_lbl_804FF10C) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800456E4(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x40000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x40000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x70) & 0xEFFFFFFE);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x22, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 0xC), (s32) &(*(RecoveredGlobal_800456E4_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, M2C_FIELD(arg0, s32 *, 0x24), (s32) &sp8, M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF10C.value);
        play_sound_effect(0x4003A80F, (u32) (arg0 + 0x38), 0, 1);
    }
}

typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038_size[sizeof(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800457A0_lbl_804FF0CC_size[sizeof(RecoveredGlobal_800457A0_lbl_804FF0CC) == 0x40 ? 1 : -1];
void TBoss3Volopt__sub_800457A0(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    u8 *temp_r5;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x20000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x20000);
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r5, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x44) & 0xEFFFFFFE);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        ((VObj_18_f1aa6a *)(arg0))->m63(0x32, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii(M2C_FIELD(&(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 8), (s32) &(*(RecoveredGlobal_800457A0_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value, M2C_FIELD(arg0, s32 *, 0x24), (s32) &sp8, M2C_FIELD(arg0, s32 *, 0x60));
        set_flag8_list__12TBoss3VoloptFPv(&lbl_804FF0CC.value);
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
void spawn_breakup_models__12TBoss3VoloptFPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (!(temp_r4 & 0x10000)) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 | 0x10000);
        render_anim_model_at_pos__12TBoss3VoloptFPv((void *) (arg0));
        ((VObj_18_f1aa6a *)(arg0))->m63(2, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 0))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))), (s32)((void *) (&sp8)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
        ((VObj_18_f1aa6a *)(arg0))->m63(0x12, &sp8);
        create_breakup_mdl__12TBoss3VoloptFiiiii((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804FF038 *)&TBoss3Volopt__data_804FF038).value, s32 *, 4))), (s32)((void *) (&(*(RecoveredGlobal_8004585C_TBoss3Volopt__data_804845E8 *)&TBoss3Volopt__data_804845E8).value)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))), (s32)((void *) (&sp8)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
        set_flag8_list__12TBoss3VoloptFPv((void *) (&lbl_804FF04C.value));
    }
}
#pragma pop

void TBoss3Volopt__sub_80045928(void *arg0) {
    Obj_80045928 *self = (Obj_80045928 *)arg0;
    self->color = lbl_804845C4[0];
    self->scale.x = lbl_804845AC.x;
    self->scale.y = lbl_804845AC.y;
    self->scale.z = lbl_804845AC.z;
    *TBoss3Volopt__data_805D4CFC &= ~8;
    *TBoss3Volopt__data_805D4CEC &= ~8;
    TBoss3Volopt__data_805D4D00[7] = 0xff;
    TBoss3Volopt__data_805D4D08[7] = 0xff;
}

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, u16 *, 0x338) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2A8) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x338));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, arg0, arg1, TBoss3Volopt__cage_entity_id, lbl_805D2714);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x200000);
    }
}

#pragma push
#pragma fp_contract on
void spawn_ambient_particles__12TBoss3VoloptFPv(u8 *arg0) {
    Stack_80045A04 stack;
    f32 temp_f31;
    s32 temp_r31;
    if (lbl_805D53A4 & 1) {
        temp_f31 = (lbl_805D87CC * (lbl_805D87BC * (f32) rand())) + lbl_805D87C8;
        temp_r31 = (s32) (lbl_805D87D0 * (lbl_805D87D4 * (lbl_805D87BC * (f32) rand())));
        stack.sp8 = (temp_f31 * cos_table_lookup(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.spC = (lbl_805D87DC * (lbl_805D87BC * (f32) rand())) + TBoss3Volopt__data_805D87D8;
        stack.sp10 = (temp_f31 * sin_table_lookup(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x40);
        spawn_particle_effect((s32) &stack.sp8, 0xFB);
    }
    play_persistent_sound(0x4003AD21, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}
#pragma pop

void update_death_sequence__12TBoss3VoloptFPv(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    Cam_80045B54 cam;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        destroy_children__12TBoss3VoloptFPv(arg0);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        advance_animation_playback(arg0);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x3C;
        TCameraCtrl__sub_8006A044(0xB4, lbl_805D87E0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        alloc_idle_event__12TBoss3VoloptFv();
        break;
    case 1:
        cam.b = 1;
        cam.a = 2;
        cam.c = 0;
        cam.d = TBoss3Volopt__data_805D87E4;
        cam.e = TBoss3Volopt__data_805D87E8;
        ((M2C_UNK (*)(int, f32))activate_camera_mode)(5, TBoss3Volopt__data_805D87E4);
        cache_target_and_forward__11TCameraCtrlFii(&cam, 0x160A);
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        set_scripted_camera_pose(lbl_804FEE68, lbl_804FEE68, arg0 + 0x5C);
        freeze_all_players__10TObjPlayerFv();
        init_all_slots__11TWindowCtrlFv();
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        break;
    case 2:
        if ((M2C_FIELD(get_scripted_camera_playback(M2C_FIELD(arg0, s16 *, 0x33C)--), u16 *, 2) & 1) ||
            M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
            restore_player_cameras();
            init_all_slots2__11TWindowCtrlFv();
            TObjPlayer__sub_801BA42C();
            *TBoss3Volopt__data_805D4CFC |= 8;
            *TBoss3Volopt__data_805D4CEC |= 8;
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        spawn_ambient_particles__12TBoss3VoloptFPv(arg0);
        break;
    case 3:
        advance_animation_playback(arg0);
        spawn_ambient_particles__12TBoss3VoloptFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D87EC * M2C_FIELD(arg0, f32 *, 0xC0);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D87F0) {
            create_breakup_mdl__12TBoss3VoloptFiiiii(TBoss3Volopt__data_805D4CE8, (s32)lbl_804845CC, M2C_FIELD(arg0, s32 *, 0x24), (s32)(arg0 + 0x2FC), M2C_FIELD(arg0, s32 *, 0x60));
            trigger_dell_biter_events__10TObjPlayerFPv(arg0 + 0x2FC);
            refresh_lobby_state__10TObjPlayerFPv(arg0);
            lbl_805D4C24 = 1;
            if (TBoss3Volopt__sub_8003CB94() != 0) {
                send_entity_set_flags__6TLobbyFPv(arg0);
            }
            update_phase__12TBoss3VoloptFv();
            TBoss3Volopt__sub_8003CB48();
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x10;
        }
        break;
    case 4:
        if (!(M2C_FIELD(arg0, s16 *, 0x33C) & 3)) {
            play_sound_effect(0x4003A80F, (u32)(arg0 + 0x38), 0, 1);
        }
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
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
void TBoss3Volopt__sub_80045DC4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s8 var_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
    case 2:
        advance_animation_playback(arg0);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
        var_r4 = 0;
        if (temp_f1 >= TBoss3Volopt__data_805D87D8) {
            var_r4 = (s8) (lbl_805D87F4 * (temp_f1 - TBoss3Volopt__data_805D87D8));
        }
        M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 7) = var_r4;
        M2C_FIELD(TBoss3Volopt__data_805D4D08, s8 *, 7) = var_r4;
        M2C_FIELD(arg0, s32 *, 0x47C) = 0x4000;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D87B0 * -((lbl_805D87F8 * M2C_FIELD(arg0, f32 *, 0xC0)) - TBoss3Volopt__data_805D87E8));
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D87FC) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj_18_62ff9d *)(arg0))->m56();
            break;
        }
    case 1:
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}
#pragma pop

struct Vec_80045EEC { f32 x, y, z; };
M2C_UNK TBoss3Volopt__sub_800FD344(void *, int, int, void *, int);
extern Vec_80045EEC lbl_80436684[];
extern u8 *lbl_805D4D04;
extern const f32 lbl_805D8800;
extern const f32 lbl_805D8804;
extern const f32 lbl_805D8808;
extern M2C_UNK lbl_805D880C;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs off
inline f32 max_80045EEC(f32 a, f32 b) { return (a > b) ? a : b; }
inline s32 imin_80045EEC(s32 a, s32 b) { return (a < b) ? a : b; }
inline f32 min_80045EEC(f32 a, f32 b) { return (a < b) ? a : b; }
#define arg0 ((u8 *)arg0_)
void TBoss3Volopt__sub_80045EEC(void *arg0_) {
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        push_players_out_of_radius__12TBoss3VoloptFPv((Obj_8004512C *) arg0);
        play_sound_effect(0x4003A817, (u32) (arg0 + 0x38), 0, 0);
        break;
    case 1: {
        f32 f;
        f32 t;
        advance_animation_playback(arg0);
        if (objInBand__FP7GameObjf(arg0, TBoss3Volopt__data_805D87D8) != 0) {
            play_sound_effect(0x4003A80B, (u32) (arg0 + 0x38), 0, 0);
        }
        t = lbl_805D8800 * (M2C_FIELD(arg0, f32 *, 0xC0) - lbl_805D8804);
        f = min_80045EEC(max_80045EEC(t, TBoss3Volopt__data_805D87E4), TBoss3Volopt__data_805D87E8);
        lbl_805D4D04[7] = (s8) (lbl_805D8808 * f);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D87FC) {
            Vec_80045EEC out;
            push_matrix_from(lbl_8058D490);
            Vec_80045EEC v = lbl_80436684[0];
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            matrix_mult_vec(0, &v, &out);
            vec3_add_to(&out, arg0 + 0x38);
            pop_matrix();
            M2C_FIELD(arg0, void **, 0x474) = create_particle_emitter(&out, 0x1A1);
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        break;
    }
    case 2: {
        play_sound_effect(0x4003A819, (u32) (arg0 + 0x38), 0, 0);
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            s32 n;
            if (M2C_FIELD(arg0, u32 *, 0x474) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474));
                M2C_FIELD(arg0, u32 *, 0x474) = 0U;
            }
            n = ((s32 (*)(int))TObjVoloptPillar__sub_80048118)(3) / 5;
            TBoss3Volopt__sub_800FD344(arg0 + 0x2FC, 0xFF00FF00, 0x1E, &lbl_805D880C, n);
            M2C_FIELD(arg0, s16 *, 0x32C) = imin_80045EEC(M2C_FIELD(arg0, s16 *, 0x32C) + n, M2C_FIELD(arg0, s16 *, 0x2B8));
            for (s32 i = 0; i < 4; i++) {
                s16 c;
                u8 *q = arg0 + i * 2;
                c = M2C_FIELD(q, s16 *, 0x4AC);
                if (c > 0) {
                    s32 v = c + n;
                    s32 lim = M2C_FIELD(q, s16 *, 0x4B4);
                    if (v < lim) {
                        lim = v;
                    }
                    M2C_FIELD(q, s16 *, 0x4AC) = lim;
                }
            }
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x3C;
            M2C_FIELD(arg0, s16 *, 0x32C) = imin_80045EEC(M2C_FIELD(arg0, s16 *, 0x32C) + 0xA, M2C_FIELD(arg0, s16 *, 0x2B8));
            M2C_FIELD(arg0, void **, 0x474) = create_particle_emitter(arg0 + 0x38, 0x1A2);
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            play_sound_effect(0x4002AB0E, (u32) (arg0 + 0x38), 0, 0);
        }
        break;
    }
    case 3: {
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            if (M2C_FIELD(arg0, u32 *, 0x474) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474));
                M2C_FIELD(arg0, u32 *, 0x474) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
            play_sound_effect(0x4003A817, (u32) (arg0 + 0x38), 0, 0);
        }
        break;
    }
    case 4:
        advance_animation_playback(arg0);
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            ((VObj_18_62ff9d *)(arg0))->m56();
        }
        break;
    case -1:
        if (M2C_FIELD(arg0, u32 *, 0x474) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474));
            M2C_FIELD(arg0, u32 *, 0x474) = 0U;
        }
        break;
    }
}
#undef arg0
#pragma pop

#define arg0 ((u8 *)arg0_)
#define F(t, o) M2C_FIELD(arg0, t *, o)
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
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), (s32)(TBoss3Volopt__data_804366B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)) + 0x8000, 0x566);
        }
        if (--F(s16, 0x33C) <= 0) {
            F(s16, 0xB8) = 7;
            advance_animation_playback(arg0);
            F(s32, 0x37C) = 2;
        }
        push_players_out_of_radius__12TBoss3VoloptFPv((Obj_8004512C *)arg0);
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
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        collect_targets_in_front__12TBoss3VoloptFPv((Volopt_8004550C *)arg0);
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

void check_and_notify__12TBoss3VoloptFv(s32 _w0) {
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
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
    M2C_FIELD(arg0, u32 *, 0x2A8) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x338));
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s16 *, 0x398) = 0;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x5A;
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        push_players_out_of_radius__12TBoss3VoloptFPv((Obj_8004512C *)arg0);
    case 2:
        if (M2C_FIELD(arg0, u32 *, 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(M2C_FIELD(arg0, u32 *, 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003A60E, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        advance_animation_playback(arg0);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        SELF->m63(0x3C, arg0 + 0x3D8);
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            play_sound_effect(0x4003A817, (u32)(arg0 + 0x38), 0, 0);
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        collect_targets_in_arc__12TBoss3VoloptFPv((Volopt_80044EDC *)arg0);
        rebuild_parts__12TBoss3VoloptFPv((S_80045010 *)arg0);
        break;
    case 3:
        if (M2C_FIELD(arg0, u32 *, 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(M2C_FIELD(arg0, u32 *, 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003A60E, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        advance_animation_playback(arg0);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        SELF->m63(0x3C, arg0 + 0x3D8);
        if (M2C_FIELD(arg0, f32 *, 0xC0) >= lbl_805D87A4) {
            render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
            SELF->m63(0x39, &pos);
            M2C_FIELD(arg0, void **, 0x478) = create_particle_emitter(&pos, 0x1A0);
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
        }
        collect_targets_in_arc__12TBoss3VoloptFPv((Volopt_80044EDC *)arg0);
        rebuild_parts__12TBoss3VoloptFPv((S_80045010 *)arg0);
        if (objInBand__FP7GameObjf(arg0, TBoss3Volopt__data_805D87A8) != 0) {
            play_sound_effect(0x4003A818, (u32)(arg0 + 0x38), 0, 0);
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, u32 *, 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        turn_toward_point__12TBoss3VoloptFPvPvPvi(arg0, (void *)(M2C_FIELD(arg0, u32 *, 0x2A8) + 0x38), 0x566, -0x4000);
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
        SELF->m63(0x3C, arg0 + 0x3D8);
        push_matrix_from(lbl_8058D490);
        {
            Vec_80046CB8 v = lbl_80436660[0];
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            matrix_mult_vec(0, &v, &out);
        }
        vec3_add_to(&out, arg0 + 0x38);
        pop_matrix();
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x478), &out);
        }
        play_persistent_sound(0x4003AD1A, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            if (M2C_FIELD(arg0, void **, 0x478) != NULL) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478));
                M2C_FIELD(arg0, void **, 0x478) = NULL;
            }
            M2C_FIELD(arg0, s16 *, 0x39A) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 5;
        }
        collect_targets_in_arc__12TBoss3VoloptFPv((Volopt_80044EDC *)arg0);
        rebuild_parts__12TBoss3VoloptFPv((S_80045010 *)arg0);
        break;
    case 5:
        if (M2C_FIELD(arg0, u32 *, 0x2A8) == 0) {
            SELF->m56();
            break;
        }
        M2C_FIELD(arg0, s16 *, 0x33C) = TObjVoloptPillar__sub_80048118(5);
        collect_targets_in_arc__12TBoss3VoloptFPv((Volopt_80044EDC *)arg0);
        for (i = 0, off = 0; i < M2C_FIELD(arg0, s16 *, 0x39C); i++, off += 0xC) {
            void *p = __nw__7TObjectFUl(0xC0);
            if (p != NULL) {
                TObjVoloptPillar__ct(p, arg0 + off + 0x3A8, arg0);
            }
        }
        play_sound_effect(0x4003B722, (u32)(arg0 + 0x38), 0, 0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 6;
        push_players_out_of_radius__12TBoss3VoloptFPv((Obj_8004512C *)arg0);
    case 6:
        play_persistent_sound(0x4003C616, (s32)arg0, (u32)(arg0 + 0x38), 0, 0);
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            destroy_children__12TBoss3VoloptFPv(arg0);
            if (TBoss3Volopt__sub_8003F398() != 0) {
                M2C_FIELD(arg0, s16 *, 0x33C) = lbl_804FF030[M2C_FIELD(arg0, s16 *, 0x39A)];
            } else {
                M2C_FIELD(arg0, s16 *, 0x33C) = 0x14;
            }
            M2C_FIELD(arg0, s32 *, 0x37C) = 7;
        }
        break;
    case 7:
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x33C) = 5;
            }
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            M2C_FIELD(arg0, s32 *, 0x37C) = 8;
            play_sound_effect(0x4003A817, (u32)(arg0 + 0x38), 0, 0);
        }
        break;
    case 8:
        advance_animation_playback(arg0);
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            if (++M2C_FIELD(arg0, s16 *, 0x39A) < 3) {
                M2C_FIELD(arg0, s32 *, 0x37C) = 5;
            } else if (++M2C_FIELD(arg0, s16 *, 0x398) < 2) {
                M2C_FIELD(arg0, s32 *, 0x37C) = 1;
            } else {
                SELF->m56();
            }
        }
        break;
    case -1:
        destroy_children__12TBoss3VoloptFPv(arg0);
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478));
            M2C_FIELD(arg0, void **, 0x478) = NULL;
        }
        break;
    }
}
#undef arg0
#pragma pop

void TBoss3Volopt__sub_800472D4(Obj_800472D4 *self) {
    switch (self->state) {
    case 0:
        self->flags &= ~0x40000;
        self->anim = 0;
        TBoss3Volopt__sub_80045928(self);
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        distribute_part_damage__12TBoss3VoloptFPv((Volopt_80044498 *)((void *)(arg0)));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D8818 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x46C) * 0x3000));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x46C) - 1;
        M2C_FIELD(arg0, s32 *, 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x380);
            M2C_FIELD(arg0, s32 *, 0x374) = temp_r0_3;
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) temp_r0_3;
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x470);
        }
        break;
    case -1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}

void TBoss3Volopt__sub_80047408(V_80047408 *self) {
    switch (self->state) {
    case 0:
        self->m56();
        break;
    case -1:
        break;
    }
}

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        if ((u16) arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x338) = arg1;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
        }
    }
}
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9)) {
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
    }
}
void check_and_trigger__12TBoss3VoloptFPv(void *arg0) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
    }
}
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        ((VObj_800475A0_80044498 *)arg0)->m58();
    }
}
void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA_80044498 *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (((RenderFadeState*)(arg0 + 0x490))->updateFromCamera((const f32*)(arg0 + 0x2FC)) != 0) {
            ((VObjB_80044498 *)(arg0 + 0x490))->n6();
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        select_actor_lighting(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        some_id_805c6f74 &= 0xFFFFFBFF;
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        pop_matrix();
        restore_scene_lighting();
        end_effect_render__13TParticleCtrlFv();
        ((VObjB_80044498 *)(arg0 + 0x490))->n7();
    }
}

void run_state__12TBoss3VoloptFPv(S_80047714 *o) {
    switch (o->st) {
    case 0: TBoss3Volopt__sub_800472D4((Obj_800472D4 *)(o)); return;
    case 1: TBoss3Volopt__sub_80047408((V_80047408 *)(o)); return;
    case 2: TBoss3Volopt__sub_80046CB8((void *)(o)); return;
    case 4: update_state__12TBoss3VoloptFPv(o); return;
    case 5: update_death_sequence__12TBoss3VoloptFPv((void *)(o)); return;
    case 9: TBoss3Volopt__sub_800465B0(o); return;
    case 10: TBoss3Volopt__sub_80046260(o); return;
    case 11: TBoss3Volopt__sub_80045EEC(o); return;
    case 7: TBoss3Volopt__sub_80045DC4((u8 *)(o)); return;
    case 12: TBoss3Volopt__sub_80044680(o); return;
    case 3: return;
    case 6: return;
    case 8: return;
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_800477A0(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x47C));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 6) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 5) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x488));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 4) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (M2C_FIELD(arg0, s32 *, 0x47C) + M2C_FIELD(arg0, s32 *, 0x480));
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (((VObj_18_b8f5cb *)(arg0))->m31() != 0) {
            ((VObj_18_b8f5cb *)(arg0))->m61();
        } else if (((VObj_18_b8f5cb *)(arg0))->m30() != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                distribute_part_damage__12TBoss3VoloptFPv((Volopt_80044498 *)((void *)((void *) (arg0))));
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            } else {
                ((VObj_18_b8f5cb *)(arg0))->m60();
            }
        }
        if (obj_testFlags30((void*)(arg0), (M2C_UNK)(0x4000)) != 0) {
            if (add_status_effect_timer__10TObjPlayerFPvii((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
                reset_status_effect_row((void *) (arg0 + 0x284));
                obj_clearFlags30((void *) (arg0), (int) (0x4000));
            }
        } else {
            if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
                if (temp_r0 != -1) {
                    M2C_FIELD(arg0, s32 *, 0x470) = temp_r0;
                    M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                    run_state__12TBoss3VoloptFPv((S_80047714 *)((void *) (arg0)));
                }
                M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s16 *, 0x326);
                M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
                M2C_FIELD(arg0, s32 *, 0x37C) = 0;
            }
            run_state__12TBoss3VoloptFPv((S_80047714 *)((void *) (arg0)));
            update_prev_position__10TObjPlayerFPv((void *) (arg0));
            copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
            submit_cursor_candidate((void *) (arg0), (int) (-1));
            minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
            update_obstruction_fade((void *) (arg0 + 0x490));
            ((VObj_18_b8f5cb *)(arg0))->m53();
        }
    }
}
#pragma pop

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl((M2C_UNK)(0x510));
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484610;
        free_collision_body_parts(arg0);
        if (M2C_FIELD(arg0, void **, 0x474) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474)); }
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); }
        destroy_children__12TBoss3VoloptFPv((void *)(arg0));
        destroy_sub_objects__12TBoss3VoloptFPv((void *)(arg0));
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x490, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
