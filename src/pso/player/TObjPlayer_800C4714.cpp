#include "types.h"
#include "pso/enemy/TObjEnemy.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_90ef41 { char pad[0x18]; };

struct VObj_18_90ef41 : VBase_18_90ef41 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual M2C_UNK m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual M2C_UNK m96();
};

struct CBase_800c63cc { char pad[0x18]; };

struct CV_800c63cc : CBase_800c63cc {
    virtual void pad00(); virtual void pad01(); virtual void pad02(); virtual void pad03(); virtual void pad04(); virtual void pad05(); virtual void pad06(); virtual void pad07(); virtual void pad08(); virtual void pad09(); virtual void pad10(); virtual void pad11(); virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15(); virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19(); virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23(); virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27(); virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31(); virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35(); virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39(); virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43(); virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47(); virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51(); virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55(); virtual void pad56(); virtual void pad57(); virtual void pad58(); virtual void pad59(); virtual void pad60(); virtual void pad61(); virtual void pad62(); virtual void pad63(); virtual void pad64(); virtual void pad65(); virtual void pad66(); virtual void pad67(); virtual void pad68(); virtual void pad69(); virtual void pad70(); virtual void pad71(); virtual void pad72(); virtual void pad73(); virtual void pad74(); virtual void pad75(); virtual void pad76(); virtual void pad77(); virtual void pad78(); virtual void pad79(); virtual void pad80(); virtual void pad81(); virtual void pad82(); virtual void pad83(); virtual void pad84(); virtual void pad85(); virtual void pad86(); virtual void pad87(); virtual void pad88(); virtual void pad89(); virtual void pad90(); virtual void pad91(); virtual void pad92(); virtual void pad93(); virtual void pad94(); virtual void pad95(); virtual void pad96(); virtual void pad97(); virtual void pad98(); virtual void pad99();
    virtual void vf100();
};

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99();
};

typedef s32 M2C_UNK;
typedef struct Vec_800C4A5C {
    f32 x, y, z;
} Vec_800C4A5C;

typedef struct Coll_800C4A5C {
    u8 pad0[0xC];
    f32 radius;
} Coll_800C4A5C;

typedef struct Obj_800C4A5C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vptr;
    u8 pad1C[0x38 - 0x1C];
    Vec_800C4A5C pos;
    u8 pad44[0xA4 - 0x44];
    Coll_800C4A5C *coll;
    u8 padA8[0xB0 - 0xA8];
    u16 ownerId;
    u8 padB2[0xB4 - 0xB2];
    Vec_800C4A5C start;
    Vec_800C4A5C velA;
    Vec_800C4A5C velB;
    Vec_800C4A5C accel;
    f32 fE4;
    s32 fE8;
    s32 angle;
    f32 fF0;
    s32 fF4;
    s32 fF8;
    s32 fFC;
    s32 f100;
} Obj_800C4A5C;

typedef struct Vec_800C4B78 {
    f32 x, y, z;
} Vec_800C4B78;

typedef struct Ent_800C4B78 {
    u8 pad0[0x38];
    Vec_800C4B78 pos;
} Ent_800C4B78;

typedef struct Obj_800C4B78 {
    u8 pad0[0x1C];
    s32 timer;
    Ent_800C4B78 *target;
    s32 effect;
} Obj_800C4B78;

typedef struct Obj_800C55E0 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Obj_800C55E0;

struct VBase_18_d4e8d1 { char pad[0x18]; };

struct VObj_18_d4e8d1 : VBase_18_d4e8d1 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual f64 m93();
};

struct Vec_800C5900 { f32 x, y, z; };

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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

struct VBase_800C53DC { char pad[0x18]; };

struct Tgt_800C53DC : VBase_800C53DC {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual void m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual void m23(void *, f32);
};

struct Self_800C53DC : VBase_800C53DC {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    u8 pad1C[0x38 - 0x1C];
    u8 pos[0xB4 - 0x38];
    u32 fB4;
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    Tgt_800C53DC *target;
    u8 pad2AC[0x328 - 0x2AC];
    s16 f328;
    u8 pad32A[0x338 - 0x32A];
    u16 f338;
    u8 pad33A[0x33C - 0x33A];
    s16 f33C;
    u8 pad33E[0x350 - 0x33E];
    s32 *f350;
};

extern "C" {
M2C_UNK enemy_wander_home(void *, int, f32, f32, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_random_float__8TObjFishFv(f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK TObjPlayer__sub_800F6E2C(void *, void *, void *);
M2C_UNK TObjPlayer__sub_800F7118(void *);
s32 is_action_available__10TObjPlayerFv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 TObjPlayer__sub_801423A4(int, int, int);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
s32 project_actor_to_ground(void *, void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK TCameraCtrl__sub_803D9858(int);
extern const f64 lbl_8043BC88;
extern M2C_UNK lbl_8050BEE0;
extern M2C_UNK lbl_8050BF00;
extern M2C_UNK lbl_8058D490;

M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK move_with_wall_slide(void *);
s32 obj_testFlags30(void *, int);
M2C_UNK spawn_particle_effect(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA038;
extern const f32 lbl_805DA03C;
extern const f32 lbl_805DA040;
void beast_update_dead(u8 *arg0);
s32 obj_testFlags30(void *, int);
void TObjPlayer__sub_800C4E08(u8 *arg0);
int TObjPlayer__sub_800F6EB0(void*);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void enter_state_8__10TObjPlayerFPv(void* p);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
void enter_state7__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_800C53B4(void);
s32 obj_clearFlags30(void * a0, s32 a1);
int clear_flag_0x100__10TObjPlayerFPv(void* p);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
void tick_freeze_state__10TObjPlayerFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
extern M2C_UNK lbl_80493450[];
void *TObjPlayer__sub_800C68FC(void *arg0, s16 arg1);
int initialize__9TObjEnemyFPv(void);
extern M2C_UNK lbl_80493450[];
extern const f32 lbl_805DA034;
    extern const float lbl_805DA058;
    extern const float lbl_805DA05C;
    extern const float lbl_805DA060;
    extern const float lbl_805DA064;
void* init_enemy_base__10TObjPlayerFPv(void* a0);
s32 TObjPlayer__sub_80016D78(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
s32 TObjPlayer__sub_800C56E8(u8 *arg0);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
extern const f32 lbl_805DA048;
void run_task__12TObjEneBeastFPv(u8 *arg0);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 TObjPlayer__sub_80016FF8(void *);
s32 TObjPlayer__sub_800C576C(u8 *arg0);
extern u8 lbl_80500C30[];
extern void *lbl_805D5188;
void TLobby__sub_803DA16C(void *);
void free__11TOBoss4RockFUi(void *);
void TObjPlayer__sub_800C4D44(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
u8 *fn_800BC4C8(u8 *arg0, M2C_UNK arg1, u32 arg2);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const Vec_800C4A5C lbl_8043BC10[];
extern M2C_UNK lbl_804933D8[];
extern s32 lbl_805D2A50;
extern const f32 lbl_805DA014;
extern const f32 lbl_805DA018;
extern const f32 lbl_805DA01C;
Obj_800C4A5C *TObjPlayer__sub_800C4A5C(Obj_800C4A5C *o, void *owner, Vec_800C4A5C *start, s32 angle);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 is_alive__9TObjEneDDFPv(s32);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DA020;
extern const f32 lbl_805DA024;
void TObjPlayer__sub_800C4B78(Obj_800C4B78 *o);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
extern const f32 lbl_805DA03C;
void TObjPlayer__sub_800C55E0(Obj_800C55E0 *o);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_80017700(void *, s32, void *, int, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_clearFlags30(void * a0, s32 a1);
void TObjPlayer__sub_800C4E08(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
s32 test_elt_flag__10TObjPlayerFPvii(void *, int, int);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA044;
extern const f32 lbl_805DA054;
void beast_update_approach(u8 *arg0);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DA028;
extern const f32 lbl_805DA02C;
extern const f32 lbl_805DA030;
M2C_UNK TObjPlayer__sub_800C4E64(void *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_80018660(void *, s32);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
Tgt_800C53DC *get_enemy_entity(u16);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
Tgt_800C53DC *get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA048;
extern const f32 lbl_805DA04C;
extern const f32 lbl_805DA050;
void TObjPlayer__sub_800C53DC(Self_800C53DC *arg0);
}

extern "C" {

int TObjPlayer__sub_800C4FB4(void* p);
void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0);
s32 spawn_continuous_particle_effect_with_flags(s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
s32 is_alive__9TObjEneDDFPv(s32);
int queue_destruction__7TObjectFv(void*);

void update_equip_effect_if_active__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x100) != 0) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

extern M2C_UNK lbl_804933D8[];

void *destroy_and_free__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804933D8;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0xFC))); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];

Obj_800C4A5C *TObjPlayer__sub_800C4A5C(Obj_800C4A5C *o, void *owner, Vec_800C4A5C *start, s32 angle) {
    f32 s;
    f32 c;
    fn_800BC4C8((u8 *)o, (M2C_UNK)owner, (u32)owner);
    o->vptr = lbl_804933D8;
    o->f0 = lbl_805D2A50;
    o->coll->radius = lbl_8043BC10[0].z;
    o->angle = angle;
    o->ownerId = obj_getField1c(owner);
    VecCopy__FP3VecPC3Vec(&o->start, start);
    VecCopy__FP3VecPC3Vec(&o->pos, &o->start);
    o->accel.x = lbl_805DA014;
    o->accel.y = lbl_805DA014;
    o->accel.z = lbl_805DA014;
    s = TBoss8Dragon__sub_803D64C0(o->angle);
    c = TBoss8Dragon__sub_803D64DC(o->angle);
    o->velA.x = lbl_805DA018 * s;
    o->velA.y = lbl_805DA014;
    o->velA.z = lbl_805DA018 * c;
    o->velB.x = lbl_805DA01C * s;
    o->velB.y = lbl_805DA014;
    o->velB.z = lbl_805DA01C * c;
    o->fE4 = lbl_805DA014;
    o->fE8 = 1;
    o->fF0 = lbl_805DA014;
    o->fF4 = 0;
    o->fF8 = 0;
    o->fFC = 0;
    o->f100 = 1;
    return o;
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800C4B78(Obj_800C4B78 *o) {
    Vec_800C4B78 a;
    Vec_800C4B78 b;
    o->timer++;
    if (o->timer > 20) {
        queue_destruction__7TObjectFv((void*)(o));
        return;
    }
    if (is_alive__9TObjEneDDFPv((s32)o->target) != 0) {
        VecCopy__FP3VecPC3Vec(&a, &o->target->pos);
        a.y += lbl_805DA020;
        VecCopy__FP3VecPC3Vec(&b, lbl_805D4DF0 + 0x178);
        TBoss6Type1__sub_803D9370(&b, &a);
        update_scale__15TObjBoss2TunnelFPv(&b);
        a.x = lbl_805DA024 * b.x + a.x;
        a.y = lbl_805DA024 * b.y + a.y;
        a.z = lbl_805DA024 * b.z + a.z;
        copy_pos__11TNowLoadingFPvPv(o->effect, &a);
    }
}
#pragma pop

void *dt_with_child_destroy__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x24))); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80493438[];
extern s32 lbl_805D2A58;

void *init_target_ref__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493438;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A58;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = spawn_continuous_particle_effect_with_flags(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0xDE, 0x40);
    }
    return arg0;
}

void TObjPlayer__sub_800C4D44(void) {
    void *p = lbl_80500C30;
    if (p != 0) {
        TLobby__sub_803DA16C(p);
    }
    if (lbl_805D5188 != 0) {
        free__11TOBoss4RockFUi(lbl_805D5188);
        lbl_805D5188 = 0;
    }
}

void TObjPlayer__sub_800C4E08(u8 *arg0) {
    if (obj_testFlags30((void *)(arg0), (int)(0x100000)) != 0) {
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x39C);
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x398);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x3A0);
}

M2C_UNK TObjPlayer__sub_800C4E64(void *arg0) {
    f32 temp_f31;
    u8 *temp_r0;
    u8 *temp_r31;
    temp_r0 = M2C_FIELD(arg0, u8 **, 0x2A8);
    if (temp_r0 == NULL) {
        obj_clearFlags30(arg0, 0x100000);
        return;
    }
    if ((obj_getField1c(temp_r0) < 0x1000U) && (((VObj_18 *)(arg0))->m17(0x1E) != 0)) {
        temp_r31 = M2C_FIELD(arg0, u8 **, 0x2A8);
        temp_f31 = horizontal_distance_squared((void *) (temp_r31 + 0x38), (void *) ((u8 *)arg0 + 0x38));
        switch (M2C_FIELD(temp_r31, s32 *, 0x890) & 0xE0) {
        case 0x20:
            if (obj_testFlags30(arg0, 0x100000) != 0) {
                if (lbl_805DA028 < temp_f31) {
                    obj_clearFlags30(arg0, 0x100000);
                }
            } else if (temp_f31 < lbl_805DA02C) {
                obj_setFlags30(arg0, 0x100000);
            }
            break;
        default:
            if (obj_testFlags30(arg0, 0x100000) != 0) {
                if (lbl_805DA030 < temp_f31) {
                    obj_clearFlags30(arg0, 0x100000);
                }
            } else if (temp_f31 < lbl_805DA028) {
                obj_setFlags30(arg0, 0x100000);
            }
            break;
        }
    } else {
        obj_setFlags30(arg0, 0x100000);
    }
}

int TObjPlayer__sub_800C4FB4(void* p) { return queue_destruction__7TObjectFv((void*)(p)); }
void beast_update_dead(u8 *arg0) {
    advance_animation_playback();
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA034)) != 0) {
        ((VObj_18_90ef41 *)(arg0))->m96();
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DA038)) != 0) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
        ((VObj_18_90ef41 *)(arg0))->m92();
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < (lbl_805DA03C * (lbl_805DA040 * M2C_FIELD(arg0, f32 *, 0xC8)))) {
        move_with_wall_slide((void *) (arg0));
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805DA03C);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805DA03C);
    } else if (obj_testFlags30((void *) (arg0), (int) (0x800000)) == 0) {
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA034));
    }
    M2C_FIELD(arg0, f32 *, 0x380) = (f32) (M2C_FIELD(arg0, f32 *, 0x380) - M2C_FIELD(arg0, f32 *, 0x384));
    if (M2C_FIELD(arg0, f32 *, 0x380) <= M2C_FIELD(arg0, f32 *, 0x388)) {
        ((VObj_18_90ef41 *)(arg0))->m90();
    }
}
void enter_state_8__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x326) != 8) { *(short*)((char*)p + 0x326) = 8; *(short*)((char*)p + 0xb8) = 8; TObjPlayer__sub_800F6EB0(p); clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)1); refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); } }
void enter_state7__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
    }
    obj_clearFlags30(arg0, 0x240000);
}
void TObjPlayer__sub_800C53B4(void) {  }
int clear_flag_0x100__10TObjPlayerFPv(void* p) { return obj_clearFlags30(p, 256); }

void TObjPlayer__sub_800C53DC(Self_800C53DC *arg0) {
    Tgt_800C53DC *p;
    if (arg0->f338 < 0x1000) {
        p = get_player_by_client_id(arg0->f338);
        if (p != NULL && get_field_3e4__10TObjPlayerFPv(p) == get_current_floor()) {
            arg0->target = p;
        } else {
            arg0->target = NULL;
        }
    } else if (arg0->f338 < 0x4000) {
        arg0->target = get_enemy_entity(arg0->f338);
    } else {
        arg0->target = NULL;
    }
    ((M2C_UNK (*)(void *))advance_animation_playback)(arg0);
    switch (arg0->f328) {
    case 0:
        arg0->f328 = 1;
    case 1:
        if (objInBand__FP7GameObjf(arg0, lbl_805DA04C) != 0) {
            if (arg0->target != NULL && arg0->target->m18(arg0, lbl_805DA048) != 0) {
                arg0->target->m20(arg0, lbl_805DA048);
                arg0->target->m23(arg0, lbl_805DA050);
            }
            arg0->m94();
        }
        arg0->m91();
        if (arg0->fB4 != 4) {
            arg0->f328 = 2;
            arg0->fB8 = 0;
            arg0->f33C = 0xF;
        }
        break;
    case 2:
        arg0->f33C--;
        if (arg0->f33C < 0) {
            obj_clearFlags30(arg0, 0x200000);
            arg0->f33C = 0;
            arg0->m98();
        }
        break;
    }
    apply_actor_gravity(arg0, 0, lbl_805DA034);
    TObjPlayer__sub_80018660(arg0, arg0->f350[2]);
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0->pos, -0x5DB4, 1, 0);
}

void TObjPlayer__sub_800C55E0(Obj_800C55E0 *o) {
    switch (o->state) {
    case 0:
        break;
    case 1:
        o->f328 = 0;
        if (o->f34C == NULL) {
            o->state = 3;
            o->fB8 = 7;
        } else {
            o->state = 2;
            o->fB8 = 10;
        }
        obj_clearFlags30(o, 0x04040000);
        clear_player_status_flag__10TObjPlayerFPviUi(o, (void *)0, (void *)0x0A000000);
        break;
    case 2:
        break;
    default:
        o->state = 5;
        o->f328 = 1;
        if (lbl_805DA03C < calc_boss4_scale__10TObjPlayerFi(o)) {
            o->fB8 = 3;
        } else {
            o->fB8 = 4;
        }
        obj_setFlags30(o, 0x200000);
        obj_clearFlags30(o, 0x04040000);
        clear_player_status_flag__10TObjPlayerFPviUi(o, (void *)0, (void *)0x0A000000);
        break;
    }
}

s32 TObjPlayer__sub_800C56E8(u8 *arg0) {
  if (TObjPlayer__sub_80016D78((void *) arg0) != 0)
  {
    if ((*((s16 *) (((s8 *) arg0) + 0x326))) != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 0;
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x04040000));
      clear_player_status_flag__10TObjPlayerFPviUi((void*)((void *) arg0), (void*)((int) 0), (void*)((int) 0x0A000000));
    }
    return 1;
  }
  return 0;
}

s32 TObjPlayer__sub_800C576C(u8 *arg0) {
  if (TObjPlayer__sub_80016FF8((void *) arg0) != 0)
  {
    if ((*((s16 *) (((s8 *) arg0) + 0x326))) != 0)
    {
      if (((!arg0) && (!arg0)) && (!arg0))
      {
      }
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 0;
      obj_clearFlags30((void *)((void *) arg0), (s32)((int) 0x04040000));
      clear_player_status_flag__10TObjPlayerFPviUi((void*)((void *) arg0), (void*)((int) 0), (void*)((int) 0x0A000000));
    }
    return 1;
  }
  return 0;
}
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())

void beast_update_approach(u8 *arg0) {
    Vec_800C5900 sp14;
    f32 r;
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        apply_actor_gravity(arg0, 0, lbl_805DA034);
        ((void (*)(void *))advance_animation_playback)(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA034) != 0) {
            ((VObj_18_d4e8d1 *)(arg0))->m93();
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        }
        break;
    default:
        if (M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
            if (test_elt_flag__10TObjPlayerFPvii(arg0, 0, 0x300000) != 0) {
                if ((f32) M2C_FIELD(arg0, u32 *, 0x38C)++ < lbl_805DA054) {
                    VecCopy__FP3VecPC3Vec(&sp14, arg0 + 0x50);
                } else {
                    VecCopy__FP3VecPC3Vec(&sp14, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
                }
            } else {
                M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
                VecCopy__FP3VecPC3Vec(&sp14, (void *) (M2C_FIELD(arg0, u32 *, 0x2A8) + 0x2FC));
            }
            TObjPlayer__sub_800C4E64((void *)(arg0));
            TObjPlayer__sub_800C4E08(arg0);
            ((void (*)(void *))advance_animation_playback)(arg0);
            {
                Vec_800C5900 sp8 = sp14;
                TObjPlayer__sub_80017700(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &sp8, 0, M2C_FIELD(arg0, f32 *, 0x394));
            }
            if (M2C_FIELD(arg0, u16 *, 0x338) == 0xFFFF) {
                if (horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x38) < (r = M2C_FIELD(arg0, f32 *, 0x394) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC)) * r ||
                    lbl_805DA044 < (f32) M2C_FIELD(arg0, s32 *, 0x2AC)++) {
                    M2C_FIELD(arg0, u32 *, 0x2A8) = 0U;
                    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
                }
            }
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    obj_clearFlags30(arg0, 0x200000);
}

void beast_idle_update(u8 *arg0) {
    f32 distance;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f3;
    f64 temp_f1;
    s32 temp_r0;
    s32 temp_r30;
    s32 var_r28;
    s32 var_r30;
    u8 *temp_r28;
    u8 *temp_r4;

    TObjPlayer__sub_800C4E64((void *)(arg0));
    TObjPlayer__sub_800C4E08(arg0);
    ((void (*)(void*))advance_animation_playback)(arg0);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) != 1) {
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TObjPlayer__sub_800F7118((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x378) = is_action_available__10TObjPlayerFv((void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x37C) = ((TObjEnemy*)arg0)->countChildren();
    temp_r28 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x348));
    if (temp_r28 != NULL) {
        temp_r0 = M2C_FIELD(temp_r28, s32 *, 0x37C) - M2C_FIELD(arg0, s32 *, 0x37C);
        if (temp_r0 > 1) {
            TObjPlayer__sub_800F6E2C((void *) (arg0), (void *) (temp_r28), (void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) (M2C_FIELD(arg0, s32 *, 0x37C) + 1);
            M2C_FIELD(temp_r28, s32 *, 0x37C) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x37C) - 1);
        } else if (temp_r0 < -1) {
            TObjPlayer__sub_800F6E2C((void *) (arg0), (void *) (arg0), (void *) (temp_r28));
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) (M2C_FIELD(arg0, s32 *, 0x37C) - 1);
            M2C_FIELD(temp_r28, s32 *, 0x37C) = (s32) (M2C_FIELD(temp_r28, s32 *, 0x37C) + 1);
        }
    }
    distance=horizontal_distance_squared(arg0+0x38,arg0+0x50);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x358);
    temp_f0 = temp_f3 + (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC));
    if ((temp_f0 * temp_f0) < distance) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x29C), (void *) (arg0 + 0x50));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x290), (void *) (arg0 + 0x2FC));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (&lbl_8050BEE0), (void *) (arg0 + 0x50));
        TBoss6Type1__sub_803D9370((void *) (&lbl_8050BEE0), (void *) (arg0 + 0x38));
        temp_f1 = get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(&lbl_8050BEE0, f32 *, 0)), (f32) (M2C_FIELD(&lbl_8050BEE0, f32 *, 8)));
        M2C_FIELD(&lbl_8050BF00, f32 *, 4) = (f32) lbl_805DA034;
        M2C_FIELD(&lbl_8050BF00, f32 *, 0) = (f32) lbl_805DA034;
        M2C_FIELD(&lbl_8050BF00, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x394);
        temp_r30 = (s32) (lbl_8043BC88 * temp_f1);
        push_matrix_from(&lbl_8058D490);
        rotate_matrix_y((int) (0), (int) (temp_r30));
        rotate_vector_by_matrix((int) (0), (void *) (&lbl_8050BF00), (void *) (&lbl_8050BF00));
        TCameraCtrl__sub_803D9858((int) (1));
        TBoss4Zako__sub_803D8910((void *) (&lbl_8050BF00), (void *) (arg0 + 0x38));
        if (project_actor_to_ground((void *) (arg0), (void *) (&lbl_8050BF00), (int) (0)) == 1) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&lbl_8050BF00));
            M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (temp_r30), (int) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)));
        } else {
            temp_f31 = get_random_float__8TObjFishFv(M2C_FIELD(&lbl_8050BEE0, f32 *, 8));
            if (get_random_float__8TObjFishFv(M2C_FIELD(&lbl_8050BEE0, f32 *, 0)) < temp_f31) {
                var_r30 = (s32) (lbl_8043BC88 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(&lbl_8050BEE0, f32 *, 0)), (f32) (lbl_805DA034)));
            } else {
                var_r30 = (s32) (lbl_8043BC88 * get_ad_end_text_start__10TObjPlayerFv(lbl_805DA034, M2C_FIELD(&lbl_8050BEE0, f32 *, 8)));
            }
            M2C_FIELD(&lbl_8050BF00, f32 *, 4) = (f32) lbl_805DA034;
            M2C_FIELD(&lbl_8050BF00, f32 *, 0) = (f32) lbl_805DA034;
            M2C_FIELD(&lbl_8050BF00, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x394);
            push_matrix_from(&lbl_8058D490);
            rotate_matrix_y((int) (0), (int) (var_r30));
            rotate_vector_by_matrix((int) (0), (void *) (&lbl_8050BF00), (void *) (&lbl_8050BF00));
            TCameraCtrl__sub_803D9858((int) (1));
            TBoss4Zako__sub_803D8910((void *) (&lbl_8050BF00), (void *) (arg0 + 0x38));
            if (project_actor_to_ground((void *) (arg0), (void *) (&lbl_8050BF00), (int) (0)) == 1) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&lbl_8050BF00));
                M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (var_r30), (int) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)));
            } else {
                temp_f31_2 = get_random_float__8TObjFishFv(M2C_FIELD(&lbl_8050BEE0, f32 *, 8));
                if (get_random_float__8TObjFishFv(M2C_FIELD(&lbl_8050BEE0, f32 *, 0)) < temp_f31_2) {
                    var_r28 = (s32) (lbl_8043BC88 * get_ad_end_text_start__10TObjPlayerFv(lbl_805DA034, M2C_FIELD(&lbl_8050BEE0, f32 *, 8)));
                } else {
                    var_r28 = (s32) (lbl_8043BC88 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(&lbl_8050BEE0, f32 *, 0)), (f32) (lbl_805DA034)));
                }
                M2C_FIELD(&lbl_8050BF00, f32 *, 4) = (f32) lbl_805DA034;
                M2C_FIELD(&lbl_8050BF00, f32 *, 0) = (f32) lbl_805DA034;
                M2C_FIELD(&lbl_8050BF00, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x394);
                push_matrix_from(&lbl_8058D490);
                rotate_matrix_y((int) (0), (int) (var_r28));
                rotate_vector_by_matrix((int) (0), (void *) (&lbl_8050BF00), (void *) (&lbl_8050BF00));
                TCameraCtrl__sub_803D9858((int) (1));
                TBoss4Zako__sub_803D8910((void *) (&lbl_8050BF00), (void *) (arg0 + 0x38));
                if (project_actor_to_ground((void *) (arg0), (void *) (&lbl_8050BF00), (int) (0)) == 1) {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&lbl_8050BF00));
                    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (var_r28), (int) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8)));
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 2;
                }
            }
        }
    } else if (((s32) M2C_FIELD(arg0, s32 *, 0x37C) == 0) && (lbl_805DA034 < temp_f3)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x358);
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x350));
        enemy_wander_home((void *) (arg0), (int) (M2C_FIELD(temp_r4, s32 *, 8)), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) (temp_f2), (f32) (temp_f2));
    } else {
        ((CV_800c63cc*)arg0)->vf100();
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x800000)) == 0) {
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805DA034));
    }
    TObjPlayer__sub_80154E3C((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    obj_clearFlags30((void *) (arg0), (int) (0x04240000));
    clear_player_status_flag__10TObjPlayerFPviUi(arg0,0,(void*)0x0A000000);
}

void tick_freeze_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        }
        break;
    case 0:
        switch ((s16) M2C_FIELD(arg0, s16 *, 0x328)) {
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
            }
            break;
        }
        break;
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        ((CV_800c63cc *)arg0)->vf100();
        obj_setFlags30(arg0, 0x04040000);
        set_indexed_flags(arg0, 0, 0x0A000000);
        break;
    }
}

typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
void run_task__12TObjEneBeastFPv(u8 *arg0) {
  s16 temp_r0;
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    PSO_VCALL_VObj_18_477421_m99(arg0);
    return;
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        PSO_VCALL_VObj_18_477421_m81(arg0);
        break;
      case 1:
        PSO_VCALL_VObj_18_477421_m82(arg0);
        break;
      case 2:
        PSO_VCALL_VObj_18_477421_m83(arg0);
        break;
      case 3:
        PSO_VCALL_VObj_18_477421_m84(arg0);
        break;
      case 4:
        PSO_VCALL_VObj_18_477421_m85(arg0);
        break;
      case 5:
        PSO_VCALL_VObj_18_477421_m86(arg0);
        break;
      case 6:
        PSO_VCALL_VObj_18_477421_m87(arg0);
        break;
      case 7:
        PSO_VCALL_VObj_18_477421_m88(arg0);
        break;
      case 8:
        PSO_VCALL_VObj_18_477421_m89(arg0);
        break;
      case 9:
        PSO_VCALL_VObj_18_477421_m90(arg0);
        break;
    }
  }
  update_prev_position__10TObjPlayerFPv((void *) arg0);
  copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
  submit_cursor_candidate((void *) arg0, (int) (-1));
  *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2B4))) + lbl_805DA048);
}

void *TObjPlayer__sub_800C68FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80493450;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init_enemy_base__10TObjPlayerFPv(void* a0) { initialize__9TObjEnemyFPv(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_80493450); *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0x328) = 0; *(short*)((char*)a0 + 0x374) = 0; *(short*)((char*)a0 + 0x376) = 0; *(int*)((char*)a0 + 0x378) = 0; *(int*)((char*)a0 + 0x37c) = 0; *(float*)((char*)a0 + 0x380) = (*(const float *)&lbl_805DA034); *(float*)((char*)a0 + 0x384) = lbl_805DA058; *(float*)((char*)a0 + 0x388) = lbl_805DA05C; *(int*)((char*)a0 + 0x38c) = 0; *(int*)((char*)a0 + 0x390) = 0; *(float*)((char*)a0 + 0x398) = lbl_805DA060; *(float*)((char*)a0 + 0x39c) = lbl_805DA064; *(float*)((char*)a0 + 0x394) = lbl_805DA060; *(float*)((char*)a0 + 0x3a0) = lbl_805DA060; *(float*)((char*)a0 + 0x3a4) = lbl_805DA064; return a0; }

}
