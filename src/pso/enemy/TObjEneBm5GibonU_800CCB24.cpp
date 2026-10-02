#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800CCC4C { char pad[0x18]; };
struct VObj_CE_800CCC4C : Base_VT_800CCC4C {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    PADV
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
};

struct VBase_18_9e83f9
{
  char pad[0x18];
};

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_18_7b3d65
{
  char pad[0x18];
};

struct VObj_18_7b3d65 : VBase_18_7b3d65 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_18_599a64
{
  char pad[0x18];
};

struct VObj_18_599a64 : VBase_18_599a64 {
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
    virtual M2C_UNK m93();
};

struct Sub_800CCB24 { u8 pad[0x18]; s32 f18; };

struct Obj_800CCB24 { u8 pad[0x2b0]; Sub_800CCB24 *f2b0; };

struct Dmg_800D086C { s32 kind; f32 amount; };

struct B_800D086C { u8 pad[0x18]; };

struct V_800D086C : B_800D086C {
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
    virtual void m21(u8 *r, Dmg_800D086C d, s32 a, s32 b, s32 c);
};

struct Obj_800D086C : V_800D086C { u8 pad2[0x474 - 0x1c]; u16 f474; };

struct Dmg_800D08E4 { s32 kind; f32 amount; };

struct B_800D08E4 { u8 pad[0x18]; };

struct V_800D08E4 : B_800D08E4 {
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
    virtual void m21(u8 *r, Dmg_800D08E4 d, s32 a, s32 b, s32 c);
};

struct Obj_800D08E4 : V_800D08E4 { u8 pad2[0x474 - 0x1c]; u16 f474; };

struct Base_800CCB74 {
    char pad[0x18];
};

struct Ene_800CCB74 : Base_800CCB74 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86();
    virtual void m87();
    u8 pad1C[0x60 - 0x1C];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    struct Col_800CCB74 *col;
    u8 padA8[0x464 - 0xA8];
    s32 f464;
};

struct Col_800CCB74 {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    u32 flags;
};

typedef struct Vec_800CCC6C {
    f32 x, y, z;
} Vec_800CCC6C;

typedef struct Hit_800CCC6C {
    u32 flags;
    u8 *obj;
} Hit_800CCC6C;

typedef struct Ene_800CCC6C {
    u8 pad0[0x38];
    Vec_800CCC6C pos;
    u8 pad44[0x120 - 0x44];
    u8 f120[0x464 - 0x120];
    s32 f464;
} Ene_800CCC6C;

struct Base_800D02F8 {
    char pad[0x18];
};

struct Ene_800D02F8 : Base_800D02F8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void m86();
    virtual void v87(); virtual void v88(); virtual void v89(); virtual void v90();
    virtual void v91(); virtual void v92();
    virtual void m93();
    virtual void v94(); virtual void v95(); virtual void v96(); virtual void v97();
    virtual void v98(); virtual void v99();
    virtual void m100();
};

struct SubBase_800D02F8 {
    char pad[0x14];
};

struct Sub_800D02F8 : SubBase_800D02F8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4();
    virtual s32 m5();
};

typedef struct Gibon_800D02F8 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 fB8;
    u8 padBA[0x3D8 - 0xBA];
    Sub_800D02F8 sub;
    u8 pad3F0[0x478 - 0x3F0];
    s32 f478;
    u8 pad47C[0x4AC - 0x47C];
    u32 f4AC;
    u8 pad4B0[0x540 - 0x4B0];
    f32 home[3];
} Gibon_800D02F8;

struct Node_800CFE34 { void *obj; Node_800CFE34 *next; };

struct List_800CFE34 { Node_800CFE34 *head; u8 pad[8]; };

struct VBase_18_4225ac { char pad[0x18]; };

struct VObj_18_4225ac : VBase_18_4225ac {
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
};

struct Vec_800CE370 { f32 x, y, z; };

extern "C" {
void TObjEneEpsilon__sub_800B96A4(void *);
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_flag__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK advance_animation_playback(void *);
u8 *find_entity_by_id(u16);
void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805DA1A8;
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 TObjEneBm5GibonU__data_805DA170;
extern const f32 TObjEneBm5GibonU__data_805DA174;
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA178;
void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0);
s32 objInBand__FP7GameObjf(void *, f32);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 lbl_805DA17C;
void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0);
s32 enemy_validate_retained_target(void *);
void TObjEneEpsilon__sub_800B96A4(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA184;
void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
u8 *TObjEneBm5GibonU__sub_800D1D78(u32);
void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void TObjEneEpsilon__sub_800B96A4(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
s32 transform_relative_position__9TObjEneDDFPvPv(void *, int);
s32 is_active__16TObjEneBm5GibonUFPv(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f64 TObjEneBm5GibonU__data_8043C0F8;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA170;
extern const f32 TObjEneBm5GibonU__data_805DA188;
extern const f32 lbl_805DA238;
extern const f32 lbl_805DA23C;
s32 TObjEneBm5GibonU__sub_800D0968(u8 *arg0);
void queue_destruction__7TObjectFv(void *self);
void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg);
extern s32 lbl_805D5550;
s32 TObjEneBm5GibonU__sub_800CCB24(Obj_800CCB24 *self);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5GibonU__data_805DA16C;
void TObjEneBm5GibonU__sub_800D086C(Obj_800D086C *self);
u8 *find_entity_by_id(u16);
extern const f32 TObjEneBm5GibonU__data_805DA16C;
void TObjEneBm5GibonU__sub_800D08E4(Obj_800D08E4 *self);
s32 fn_8002B630(Col_800CCB74 *, void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
extern u8 lbl_80493CBC[];
extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA160;
u8 TObjEneBm5GibonU__sub_800CCB74(Ene_800CCB74 *arg0, s32 arg1, f32 scale);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 attach_particle_model(void *, s32, s32, s32, s32, f32);
Hit_800CCC6C *csnVectorUnder(Vec_800CCC6C *, void *, s32);
s32 set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
s32 TParticleCtrl__sub_80086884(int);
s32 get_instance__13TParticleCtrlFv();
void *spawn_particle_effect(void *, s32);
s32 fn_800D88E4(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA164;
extern const f32 TObjEneBm5GibonU__data_805DA168;
extern const f32 TObjEneBm5GibonU__data_805DA16C;
int TObjEneBm5GibonU__sub_800CCC6C(Ene_800CCC6C *arg0, void *arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void TBoss3Volopt__sub_800D8E80(void *);
M2C_UNK advance_animation_playback(void *);
void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1);
void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1);
void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFE30(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CFA48(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CF7CC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CF4BC(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CEEE8(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CEBD8(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CE978(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CE694(u8 *arg0, s32 arg1);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CE060(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg);
void TObjEneBm5GibonU__sub_800CDB98(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800CD5F4(u8 *arg0, s32 arg1);
void TObjEneBm5GibonU__sub_800D0738(u8 *arg0, u32 arg1, s32 arg2);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 enemy_validate_retained_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *);
void set_flag__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D0F44(void *);
void *update_photon_mylla__16TObjEneBm5GibonUFPv(void *);
s32 TObjEneBm5GibonU__sub_800D1D70();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern List_800CFE34 TObjEneBm5GibonU__data_80500EC4;
extern const f32 TObjEneBm5GibonU__data_805DA184;
void TObjEneBm5GibonU__sub_800CFE34(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK clear_field_388__9TObjEneDDFPv(void *);
M2C_UNK set_active__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK clear_attack_receipts(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D0AE8(void *, void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 approach_angle_limited(s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 lbl_805DA1B4;
extern const f32 TObjEneBm5GibonU__data_805DA1BC;
void TObjEneBm5GibonU__sub_800CE370(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void enemy_clear_target(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0);
s32 update_target__16TObjEneBm5GibonUFPv(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEneBm5GibonU__data_805DA160;
extern const f32 TObjEneBm5GibonU__data_805DA174;
extern const f32 TObjEneBm5GibonU__data_805DA1B8;
extern const f32 lbl_805DA1DC;
extern const f32 lbl_805DA230;
extern const f32 lbl_805DA234;
void TObjEneBm5GibonU__sub_800D0420(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void advance_anim_frame__16TObjEneBm5GibonUFv(void);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1);
void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK play_sound_effect(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

s32 TObjEneBm5GibonU__sub_800CCB24(Obj_800CCB24 *self) {
    Sub_800CCB24 *p = self->f2b0;
    s32 v = 0;
    if (p != 0) {
        v = p->f18;
        if (v < 0) {
            v = 0;
        } else if (lbl_805D5550 == 3) {
            if (v > 0x1d) {
                v = 0x1d;
            }
        } else if (v > 0xe) {
            v = 0xe;
        }
    }
    return v;
}

u8 TObjEneBm5GibonU__sub_800CCB74(Ene_800CCB74 *arg0, s32 arg1, f32 scale) {
    Col_800CCB74 *col;
    u8 hit;
    s32 saved60;
    u32 savedFlags;
    f32 r;
    r = scale * TObjEneBm5GibonU__data_805DA158;
    col = arg0->col;
    saved60 = arg0->f60;
    savedFlags = col->flags;
    col->f0 = TObjEneBm5GibonU__data_805DA15C;
    col->f8 = r;
    col->fC = r;
    col->f10 = TObjEneBm5GibonU__data_805DA160;
    col->f14 = 1;
    col->flags = 0x9D01;
    arg0->f60 = arg1;
    arg0->m87();
    update_enemy_collision_flags__10TObjPlayerFPv(arg0);
    hit = (col->flags & 0x380000) != 0;
    if (arg0->f464 == 1) {
        fn_8002B630(col, lbl_80493CBC + 0x2C);
    } else {
        fn_8002B630(col, lbl_80493CBC);
    }
    col->flags = savedFlags;
    arg0->f60 = saved60;
    return hit;
}

int get_attack_state__16TObjEneBm5GibonUFPv(void* p, void * _w1) { return TObjEneBm5GibonU__sub_800CCC6C((Ene_800CCC6C *)((void *)(p)), (void *)((void *)(_w1))); }

int TObjEneBm5GibonU__sub_800CCC6C(Ene_800CCC6C *arg0, void *arg1) {
    Vec_800CCC6C v;
    Hit_800CCC6C *hit;
    void *p;
    VecCopy__FP3VecPC3Vec(&v, arg1);
    v.y += TObjEneBm5GibonU__data_805DA164;
    hit = csnVectorUnder(&v, arg0->f120, 5);
    if (hit != NULL && (hit->flags & 4)) {
        p = spawn_particle_effect(hit->obj + 0x38, 0x49);
        if (p != NULL) {
            attach_particle_model(p, TParticleCtrl__sub_80086884(2), get_instance__13TParticleCtrlFv(), 0, 1, TObjEneBm5GibonU__data_805DA168);
            if (arg0->f464 == 1) {
                set_position_xy__10TObjPlayerFPvff(p, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA168);
            }
        }
        p = spawn_particle_effect(hit->obj + 0x38, 0xA4);
        if (p != NULL && arg0->f464 == 1) {
            set_position_xy__10TObjPlayerFPvff(p, TObjEneBm5GibonU__data_805DA16C, TObjEneBm5GibonU__data_805DA168);
        }
        return fn_800D88E4(&arg0->pos);
    }
    return ((s32)play_sound_effect((void *)((void *)((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)(arg0), (M2C_UNK)(0x3BC21)))), (void *)(&arg0->pos), (M2C_UNK)(0), (M2C_UNK)(0)));
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800CCD8C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA170) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        TObjEneBm5GibonU__sub_800CCC6C((Ene_800CCC6C *)((void *)((void *) (arg0))), (void *)((void *)((void *) (arg0 + 0x38))));
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800CCDE4(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void TObjEneBm5GibonU__sub_800CCE28(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA17C) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA174) != 0)) {
        get_attack_state__16TObjEneBm5GibonUFPv((void*)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)));
    }
}

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        rotate_matrix_y(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void TObjEneBm5GibonU__sub_800CD5B8(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        queue_destruction__7TObjectFv(self);
        return;
    }
}

void TObjEneBm5GibonU__sub_800CE370(u8 *arg0, s32 arg1) {
    Vec_800CE370 sp8;
    switch (arg1) {
    case 4:
        ((VObj_18_4225ac *)(arg0))->m94();
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        M2C_FIELD(arg0, s32 *, 0x528) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        if (M2C_FIELD(arg0, s16 *, 0x33E) - M2C_FIELD(arg0, s16 *, 0x32C) < 0x14) {
            play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A824), arg0 + 0x38, 0, 0);
        }
        set_active__9TObjEneDDFPv(arg0);
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            switch (M2C_FIELD(arg0, s32 *, 0x378)) {
            case 12:
                transition_enemy_state(arg0, 0xE);
                break;
            case 3:
                transition_enemy_state(arg0, 8);
                break;
            default:
                transition_enemy_state(arg0, M2C_FIELD(arg0, s32 *, 0x378));
                break;
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x308);
        {
            f32 v = clamp_velocity__15TObjBoss2TunnelFPv(&sp8);
            TObjEneDD__sub_800BACE0(arg0, sp8.x, sp8.z, v);
        }
        if (M2C_FIELD(arg0, s32 *, 0x518) == 0) {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5GibonU__data_805DA158;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5GibonU__data_805DA158;
        } else {
            M2C_FIELD(arg0, f32 *, 0x308) *= TObjEneBm5GibonU__data_805DA1BC;
            M2C_FIELD(arg0, f32 *, 0x310) *= TObjEneBm5GibonU__data_805DA1BC;
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x528), 0x300);
            M2C_FIELD(arg0, s32 *, 0x60) = (s16) M2C_FIELD(arg0, s32 *, 0x60);
            if (objInBand__FP7GameObjf(arg0, lbl_805DA1B4) != 0) {
                TObjEneBm5GibonU__sub_800D0AE8(arg0, &sp8);
            }
        }
        ((VObj_18_4225ac *)(arg0))->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFPv(arg0);
        break;
    }
}

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE_800CCC4C *)arg0)->m95();
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 8);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            TObjEneBm5GibonU__sub_800D08E4((Obj_800D08E4 *)(arg0));
        } else if (temp_r0 == 0x28) {
            TObjEneBm5GibonU__sub_800D086C((Obj_800D086C *)(arg0));
        }
        ((VObj_CE_800CCC4C *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFE30(u8 * _w0, s32 _w1) {  }

typedef struct VBase_18_9e83f9 VBase_18_9e83f9;
typedef struct VObj_18_9e83f9 VObj_18_9e83f9;
#define PSO_VCALL_VObj_18_9e83f9_m94(_self) (((VObj_18_9e83f9 *)(_self))->m94())
#define PSO_VCALL_VObj_18_9e83f9_m100(_self) (((VObj_18_9e83f9 *)(_self))->m100())
#define PSO_VCALL_VObj_18_9e83f9_m86(_self) (((VObj_18_9e83f9 *)(_self))->m86())

typedef struct VBase_18_7b3d65 VBase_18_7b3d65;
typedef struct VObj_18_7b3d65 VObj_18_7b3d65;
#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())

#define PSO_VCALL_VObj_18_7b3d65_m93(_self) (((VObj_18_7b3d65 *)(_self))->m93())
#define PSO_VCALL_VObj_18_7b3d65_m100(_self) (((VObj_18_7b3d65 *)(_self))->m100())
#define PSO_VCALL_VObj_18_7b3d65_m86(_self) (((VObj_18_7b3d65 *)(_self))->m86())

void TObjEneBm5GibonU__sub_800CFE34(u8 *arg0, s32 arg1) {
    Node_800CFE34 *n;
    void *o;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xE;
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        ((VObj_18_7b3d65 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 8);
        }
        break;
    case 5:
        break;
    case 0:
        ((void (*)(void *, s32))advance_animation_playback)(arg0, M2C_FIELD(arg0, s32 *, 0x518)++);
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA184) != 0) {
            play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A523), arg0 + 0x38, 0, 0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x518) == 0x3C) {
            for (n = TObjEneBm5GibonU__data_80500EC4.head; n != NULL; n = n->next) {
                o = update_photon_mylla__16TObjEneBm5GibonUFPv(n);
                if (M2C_FIELD(arg0, s32 *, 0x46C) == TObjEneBm5GibonU__sub_800D1D70()) {
                    set_flag__16TObjEneBm5GibonUFPv(o);
                }
            }
        }
        if (enemy_validate_retained_target(arg0) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xE) {
                TObjEneBm5GibonU__sub_800D0F44(arg0);
            } else {
                M2C_FIELD(arg0, s32 *, 0x478) = 0;
            }
        } else {
            play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
        }
        ((VObj_18_7b3d65 *)(arg0))->m100();
        ((VObj_18_7b3d65 *)(arg0))->m86();
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFFBC(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 5;
      set_field_378__9TObjEneDDFPvi((void *)((void *) arg0), (M2C_UNK)((int) 8));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x518)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x518)))) > 0x3C)
    {
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 8));
    }
    case 5:
      return;
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x518))) + 1);
      advance_animation_playback((void *) arg0);
      if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjEneBm5GibonU__data_805DA184) != 0)
    {
      play_sound_effect((void *)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x3A523)))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) 0), (M2C_UNK)((int) 0));
    }
      if (enemy_validate_retained_target((void *) arg0) != 0)
    {
      TObjEneEpsilon__sub_800B96A4((void *) arg0);
      update_velocity__9TObjEneDDFPv((void *) arg0);
      TObjEneBm5GibonU__sub_800D0F44((void *) arg0);
    }
    else
    {
      play_sound_variant__16TObjEneBm5GibonUFPv((void *) arg0);
    }
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D00F0(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) - -0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(5));
      PSO_VCALL_VObj_18_7b3d65_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
      return;
      return;
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) (((s32) (lbl_805DA1A8 * calc_boss4_scale__10TObjPlayerFi((s32) arg0))) + 0xA);
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x518)))) <= 0)
    {
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
    }
    case 5:
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x518)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x518))) - 1);
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      advance_animation_playback((void *) arg0);
      PSO_VCALL_VObj_18_7b3d65_m100(arg0);
      PSO_VCALL_VObj_18_7b3d65_m86(arg0);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D01DC(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  switch (arg1)
  {
    case 4:
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 4;
      set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
      PSO_VCALL_VObj_18_9e83f9_m94(arg0);
      enemy_clear_target(arg0);
      *((s32 *) (((s8 *) arg0) + 0x478)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      return;
    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 1)
    {
      transition_enemy_state((void *)(arg0), (M2C_UNK)(5));
      return;
    }
      if (((u32) (*((u32 *) (((s8 *) arg0) + 0x390)))) != 0U)
    {
      TObjEneEpsilon__sub_800B96A4(arg0);
      set_anim_by_state__16TObjEneBm5GibonUFPv(arg0);
      temp_r3 = (u8 *) find_entity_by_id(*((u16 *) (((s8 *) arg0) + 0x474)));
      if (temp_r3 != 0)
      {
        set_flag__16TObjEneBm5GibonUFPv(temp_r3);
      }
    }
      return;
    case 0:
      play_sound_variant__16TObjEneBm5GibonUFPv(arg0);
      advance_animation_playback(arg0);
      PSO_VCALL_VObj_18_9e83f9_m100(arg0);
      PSO_VCALL_VObj_18_9e83f9_m86(arg0);
      return;
      return;
    case 5:
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) & 0xFFFFFFFE);
      break;
  }
}

typedef struct VBase_18_599a64 VBase_18_599a64;
typedef struct VObj_18_599a64 VObj_18_599a64;
#define PSO_VCALL_VObj_18_599a64_m93(_self) (((VObj_18_599a64 *)(_self))->m93())

void TObjEneBm5GibonU__sub_800D02F8(Gibon_800D02F8 *g, s32 arg1) {
    f32 *home = g->home;
    switch (arg1) {
    case 4:
        g->fB8 = 0;
        set_field_378__9TObjEneDDFPvi((void *)(g), (M2C_UNK)(8));
        ((Ene_800D02F8 *)g)->m93();
        g->f4AC &= ~3;
        enemy_clear_target(g);
        g->f478 = 0;
        VecCopy__FP3VecPC3Vec(home, g->pos);
        TObjEneMe3SinowZoa__sub_800D758C(&g->sub);
        TBoss3Volopt__sub_800D8E80(g->pos);
        break;
    case 3:
        if (g->sub.m5() != 0) {
            if (update_target__16TObjEneBm5GibonUFPv(g) != 0) {
                transition_enemy_state((void *)(g), (M2C_UNK)(8));
            } else {
                transition_enemy_state((void *)(g), (M2C_UNK)(3));
            }
        }
        break;
    case 5:
        break;
    case 0:
        ((s32)advance_animation_playback(g));
        ((Ene_800D02F8 *)g)->m100();
        ((Ene_800D02F8 *)g)->m86();
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800D0420(u8 *arg0, s32 arg1) {
    u8 *home = arg0 + 0x540;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xF;
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        ((VObj_18_7b3d65 *)(arg0))->m93();
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) & 0xFFFFFFFC);
        enemy_clear_target((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x478) = 0;
        VecCopy__FP3VecPC3Vec(home, (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, f32 *, 0x38) -= lbl_805DA230 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, f32 *, 0x40) -= lbl_805DA230 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, f32 *, 0x530) = lbl_805DA234;
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if (update_target__16TObjEneBm5GibonUFPv((void *) (arg0)) != 0) {
                transition_enemy_state(arg0, 8);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
            TObjEneBm5GibonU__sub_800CCD8C(arg0);
            if (objInBand__FP7GameObjf((void *) (arg0), TObjEneBm5GibonU__data_805DA160) != 0) {
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A828), arg0 + 0x38, 0, 0);
            }
            if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DA1DC) != 0) {
                play_sound_effect((void *) copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3A529), arg0 + 0x38, 0, 0);
            }
            if (M2C_FIELD(arg0, f32 *, 0xC0) > TObjEneBm5GibonU__data_805DA174) {
                M2C_FIELD(arg0, f32 *, 0x530) *= TObjEneBm5GibonU__data_805DA1B8;
            }
            M2C_FIELD(arg0, f32 *, 0x38) += M2C_FIELD(arg0, f32 *, 0x530) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
            M2C_FIELD(arg0, f32 *, 0x40) += M2C_FIELD(arg0, f32 *, 0x530) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
        }
        ((VObj_18_7b3d65 *)(arg0))->m100();
        ((VObj_18_7b3d65 *)(arg0))->m86();
        break;
    }
}
#pragma pop

void TObjEneBm5GibonU__sub_800D062C(u8 *arg0, s32 arg1) {
  int new_var;
  switch (arg1)
  {
    case 4:
      *((s32 *) (((s8 *) arg0) + 0x51C)) = 0;
      set_field_378__9TObjEneDDFPvi((void *)((void *) arg0), (M2C_UNK)((int) 0));
      PSO_VCALL_VObj_18_599a64_m93(arg0);
      *((s32 *) (((s8 *) arg0) + 0x4AC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x4AC))) | 2);
      return;
    case 3:
      u32 temp_r3;
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x51C)))) > 0)
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x470)))) < 1)
      {
        transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 1));
        return;
      }
      transition_enemy_state((void *)((void *) arg0), (M2C_UNK)((int) 2));
    }
    case 5:
      return;
      return;
    case 0:
      new_var = 0x51C;
      temp_r3 = ((u32)TObjEneBm5GibonU__sub_800D17E8((s32)((int) (*((s32 *) (((s8 *) arg0) + 0x46C))))));
      if (temp_r3)
    {
      *((s16 *) (((s8 *) arg0) + 0x474)) = obj_getField1c((int) temp_r3);
    }
      if ((((s32) (*((s32 *) (((s8 *) arg0) + 0x464)))) != 0) || (temp_r3 == 0U))
    {
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x488), (void *) (arg0 + 0x47C));
    }
    else
    {
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x488), (void *) TObjEneBm5GibonU__sub_800D1D78(temp_r3));
    }
      *((s32 *) (((s8 *) arg0) + new_var)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x51C))) + 1);
      break;
  }
}

void TObjEneBm5GibonU__sub_800D0738(u8 *arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneBm5GibonU__sub_800D062C(arg0, arg2);
        break;
    case 1:
        TObjEneBm5GibonU__sub_800D0420((u8 *)(arg0), (s32)(arg2));
        break;
    case 2:
        TObjEneBm5GibonU__sub_800D02F8((Gibon_800D02F8 *)(arg0), (s32)(arg2));
        break;
    case 3:
        TObjEneBm5GibonU__sub_800D01DC(arg0, arg2);
        break;
    case 4:
        TObjEneBm5GibonU__sub_800CFE30((u8 *)(arg0), (s32)(arg2));
        break;
    case 5:
        TObjEneBm5GibonU__sub_800D00F0(arg0, arg2);
        break;
    case 6:
        TObjEneBm5GibonU__sub_800CFFBC(arg0, arg2);
        break;
    case 7:
        TObjEneBm5GibonU__sub_800CFE34((u8 *)(arg0), (s32)(arg2));
        break;
    case 8:
        TObjEneBm5GibonU__sub_800CFA48(arg0, arg2);
        break;
    case 9:
        TObjEneBm5GibonU__sub_800CF7CC(arg0, arg2);
        break;
    case 10:
        TObjEneBm5GibonU__sub_800CF4BC(arg0, arg2);
        break;
    case 11:
        TObjEneBm5GibonU__sub_800CEEE8(arg0, arg2);
        break;
    case 12:
        TObjEneBm5GibonU__sub_800CEBD8(arg0, arg2);
        break;
    case 13:
        TObjEneBm5GibonU__sub_800CE978(arg0, arg2);
        break;
    case 14:
        TObjEneBm5GibonU__sub_800CE694(arg0, arg2);
        break;
    case 15:
        action__16TObjEneBm5GibonUFPvi(arg0, arg2);
        break;
    case 16:
        TObjEneBm5GibonU__sub_800CE370((u8 *)(arg0), (s32)(arg2));
        break;
    case 17:
        TObjEneBm5GibonU__sub_800CE060(arg0, arg2);
        break;
    case 18:
        TObjEneBm5GibonU__sub_800CD5B8(arg0, arg2);
        break;
    case 19:
        TObjEneBm5GibonU__sub_800CDB98(arg0, arg2);
        break;
    case 20:
        TObjEneBm5GibonU__sub_800CD5F4(arg0, arg2);
        break;
    }
}

void TObjEneBm5GibonU__sub_800D086C(Obj_800D086C *self) {
    u8 *r = find_entity_by_id(self->f474);
    if (r != 0) {
        Dmg_800D086C d;
        d.kind = 9;
        d.amount = TObjEneBm5GibonU__data_805DA16C;
        self->m21(r, d, 0, -1, -1);
    }
}

void TObjEneBm5GibonU__sub_800D08E4(Obj_800D08E4 *self) {
    u8 *r = find_entity_by_id(self->f474);
    if (r != 0) {
        Dmg_800D08E4 d;
        d.kind = 10;
        d.amount = TObjEneBm5GibonU__data_805DA16C;
        self->m21(r, d, 0, -1, -1);
    }
}

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s16 *, 0x514) = arg2;
}
#pragma push
#pragma fp_contract on
s32 TObjEneBm5GibonU__sub_800D0968(u8 *arg0) {
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f0;
    if (transform_relative_position__9TObjEneDDFPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x390))) != 0) {
        TObjEneEpsilon__sub_800B96A4((void *) (arg0));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        if (is_active__16TObjEneBm5GibonUFPv((void *) (arg0)) != 0) {
            var_f0 = TObjEneBm5GibonU__data_805DA170;
        } else {
            var_f0 = lbl_805DA238;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x3A8);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x3A0);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + ((TObjEneBm5GibonU__data_805DA188 * temp_f4) + (temp_f5 * var_f0)));
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) + ((TObjEneBm5GibonU__data_805DA188 * temp_f5) - (temp_f4 * var_f0)));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        return (s32) (TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
    }
    M2C_FIELD(arg0, f32 *, 0x3A0) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneBm5GibonU__data_805DA15C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x394), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((lbl_805DA23C * M2C_FIELD(arg0, f32 *, 0x3A0)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((lbl_805DA23C * M2C_FIELD(arg0, f32 *, 0x3A8)) + M2C_FIELD(arg0, f32 *, 0x39C));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA23C;
    return M2C_FIELD(arg0, s32 *, 0x60);
}
#pragma pop

}
