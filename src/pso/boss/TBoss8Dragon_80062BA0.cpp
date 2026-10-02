#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80065370_80062BA0 { char pad[0x18]; };
struct VObj_80065370_80062BA0 : Base_80065370_80062BA0 {
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
    virtual void vcall(s16 a, int b);
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct Stack_80063F34 {
    M2C_UNK sp8;
    f32 spC;
};

#include <stddef.h>
struct Stack_800646F0 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_800646F0_lbl_80437944 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800646F0_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8006435C {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_8006435C_lbl_80437D2C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8006435C_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064CFC_lbl_80487848 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80064CFC_lbl_804FF5A0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_80064694_lbl_80437CF0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct RecoveredGlobal_80064114_lbl_80437D68 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80064114_lbl_804FF5B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_80064AB0 { u8 pad[0x1c]; u16 id; u8 pad2[0x38c - 0x1e]; u16 kind; u8 pad3[6]; f32 x; u8 pad4[4]; f32 z; };

struct P_80064AB0 { u16 a; u16 id; u32 kind; f32 x; f32 z; };

struct VBase_8006369C { u8 pad[0x18]; };

struct Obj_8006369C : VBase_8006369C {
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
    u8 pad1C[0xB8 - 0x1C];
    s16 f_B8;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_80064968 { f32 x, y, z; };

struct Atk_80064968 {
    u8 pad0[8];
    s32 f8;
};

struct Obj_80064968 {
    u8 pad0[0x3c0];
    Vec_80064968 parts[16];
    u8 pad480[0x578 - 0x480];
    s32 f578;
    u8 pad57c[0x5f0 - 0x57c];
    Atk_80064968 *f5f0;
};

struct VBase_80065658 { char pad[0x18]; };

struct VObj_80065658 : VBase_80065658 {
    virtual ~VObj_80065658();
};

struct Obj_80065658 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x4c4 - 0x1c];
    u8 f4c4[0x578 - 0x4c4];
    u32 f578;
    VObj_80065658 *f57c;
    u8 f580[0x734 - 0x580];
    void *objs[16];
};

struct VBase_80063570 { char pad[0x18]; };

struct VObj_80063570 : VBase_80063570 {
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
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Obj_80063570 {
    u8 pad0[0xb8];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4c0 - 0x494];
    s32 flags;
};

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D8EBC;
void TBoss8Dragon__sub_80063EF4(s32 arg0);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TBoss8Dragon__sub_80063EF4(s32 arg0);
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1);
int VecCopy__FP3VecPC3Vec(void*, void*);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
u8 *csnVecterUnder(M2C_UNK *, M2C_UNK);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D8D70;
void TBoss8Dragon__sub_80063F34(u8 *arg0);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8D80;
extern const f32 lbl_805D8E00;
extern const f32 lbl_805D8E0C;
void TBoss8Dragon__sub_80064828(u8 *arg0);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D8D50;
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8DF8;
extern const f32 lbl_805D8EC0;
void TBoss8Dragon__sub_800648C8(u8 *arg0);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8D80;
extern const f32 lbl_805D8E00;
extern const f32 lbl_805D8E0C;
void TBoss8Dragon__sub_80064DB8(u8 *arg0);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
s32 objInBand__FP7GameObjf(void *, f32);
extern const f32 lbl_805D8D50;
extern const f32 lbl_805D8D54;
extern const f32 lbl_805D8DF8;
extern const f32 lbl_805D8EC0;
void TBoss8Dragon__sub_80064E3C(u8 *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1);
s32 transition_enemy_state(void *, int);
f32 TBoss6Type1__sub_803D9370(void *, void *);
void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
M2C_UNK TBoss8Dragon__sub_80064C94(void *, void *);
M2C_UNK TBoss8Dragon__sub_80067074(void *, void *);
M2C_UNK TObjEneDD__sub_800BA498(void *, void *);
extern RecoveredGlobal_800646F0_lbl_80437944 lbl_80437944;
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
void TBoss8Dragon__sub_800646F0(s32 arg0);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
M2C_UNK fn_8002B094(int);
M2C_UNK TBoss8Dragon__sub_800670E0(int, void *);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
extern RecoveredGlobal_8006435C_lbl_80437D2C lbl_80437D2C;
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
extern const f32 lbl_805D8DD0;
extern const f32 lbl_805D8EAC;
void TBoss8Dragon__sub_8006435C(u8 *arg0);
s32 TObjEneDD__sub_800B9E84(void *, int, int, int);
extern RecoveredGlobal_80064CFC_lbl_80487848 lbl_80487848;
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
extern M2C_UNK lbl_805D4D98;
extern M2C_UNK lbl_805D4D9C;
void TBoss8Dragon__sub_80064CFC(s32 arg0);
M2C_UNK TBoss8Dragon__sub_800670E0(int, void *);
extern RecoveredGlobal_80064694_lbl_80437CF0 lbl_80437CF0;
void TBoss8Dragon__sub_80064694(s32 arg0);
M2C_UNK TBoss8Dragon__sub_80067074(void *, void *);
void setup_instance__9TObjEneDDFiiPvi(s32, s32, void *, s32);
extern RecoveredGlobal_80064114_lbl_80437D68 lbl_80437D68;
extern RecoveredGlobal_800646F0_lbl_804FF5B4 lbl_804FF5B4;
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1);
void TBoss8Dragon__sub_800660A4(void *);
void TBoss8Dragon__sub_8006602C(void *);
void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self);
void reset_angle__12TBoss8DragonFPv(void* a0);
void clear_timer__12TBoss8DragonFPv(void* p);
void advance_animation_playback(void *);
void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1);
M2C_UNK fn_8002B094(int);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
extern M2C_UNK lbl_80437D54[];
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
extern const f32 lbl_805D8E00;
void TBoss8Dragon__sub_800641A8(u8 *arg0);
M2C_UNK fn_8002B094(int);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
M2C_UNK TBoss8Dragon__sub_80067074(void *, void *);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK emit_enemy_effect__9TObjEneDDFiiPvi(void *, int, void *, int);
extern s32 lbl_80437CCC[];
extern M2CCopy_14 lbl_80437CDC;
extern RecoveredGlobal_8006435C_lbl_804FF5A0 lbl_804FF5A0;
int TBoss8Dragon__sub_80064968(void *arg0, int arg1);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void __dt__9TObjEneDDFv(void *, int);
void TBoss8Dragon__sub_800BC5A0(u32, int);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800D7C58(void);
extern u8 lbl_804882C8[];
extern Obj_80065658 *lbl_805D4DBC;
Obj_80065658 *TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void TBoss8Dragon__sub_800648C8(u8 *arg0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void clear_timer__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_80064E3C(u8 *arg0);
void TObjEneEpsilon__sub_800B9384(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
f32 get_speed_or_default__10TObjPlayerFPv(void *arg0);
void advance_animation_playback(void *);
extern const f32 lbl_805D8DCC;
extern const f32 lbl_805D8DF4;
extern const f32 lbl_805D8E10;
extern const f32 lbl_805D8E5C;
extern const f32 lbl_805D8EB4;
void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_80063714(void);
void TBoss8Dragon__sub_80065360(void);
void TBoss8Dragon__sub_80065364(void);
void TBoss8Dragon__sub_80065368(void);
void TBoss8Dragon__sub_8006536C(void);
int attack_default__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);
void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1);
void handle_6x9F_gal_gryphon_boss_actions(void *arg0);
void handle_6xA0_gal_gryphon_boss_actions(void *arg0);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
int query_default__12TBoss8DragonFPv(void* p);
void reset_angle__12TBoss8DragonFPv(void* a0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void reset_radius__12TBoss8DragonFPv(void* a0);
void run_default_state__12TBoss8DragonFPv(void* p);
void set_anim_speed__12TBoss8DragonFPv(void* a0);
void set_attack_phase__12TBoss8DragonFPv(void* p);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void set_phase__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
void spawn_switch_attack__12TBoss8DragonFPv(void *arg0);
void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj);
void update_epsilon_position__12TBoss8DragonFv(void);
int update_state_3__12TBoss8DragonFPv(void* p);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
int TBoss8Dragon__sub_80065F4C(void*);
void TBoss8Dragon__sub_80065F80(void *);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK attach_particle_model(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
int VecCopy__FP3VecPC3Vec(void*, void*);
void bswap_boss_actions__12TBoss8DragonFi(void *);
void *get_enemy_entity(int);
M2C_UNK set_animation_by_state__12TBoss8DragonFPv();
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void TBoss8Dragon__sub_80063570(Obj_80063570 *arg0, s32 arg1) {
    f32 spd;
    switch (arg1) {
    case 4:
        arg0->fb8 = 1;
        ((VObj_80063570 *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv((void*)(arg0));
        reset_angle__12TBoss8DragonFPv((void*)(arg0));
        arg0->flags |= 0x10;
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        advance_animation_playback(arg0);
        TBoss8Dragon__sub_80064E3C((u8 *)arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        TBoss8Dragon__sub_800648C8((u8 *)arg0);
        spd = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (spd < lbl_805D8DCC) {
            TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
        } else if (!(spd < lbl_805D8E10)) {
            if (spd < lbl_805D8E5C) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            } else if (!(spd < lbl_805D8DF4)) {
                TObjEneEpsilon__sub_800B9384((u8 *)arg0, 0x100, lbl_805D8EB4);
            }
        }
        break;
    case 5:
        arg0->flags &= ~0x10;
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void TBoss8Dragon__sub_8006369C(Obj_8006369C *self, u32 arg1) {
    switch (arg1) {
    case 4:
        self->f_B8 = 0;
        self->m94();
        clear_timer__12TBoss8DragonFPv((void*)(self));
        reset_angle__12TBoss8DragonFPv((void*)(self));
        return;
    case 0:
        advance_animation_playback(self);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void TBoss8Dragon__sub_80063714(void) {  }

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_switch_attack__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

}
extern "C" {
struct Base_80098E4C_80098DB0 { char pad[0x18]; };
struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
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
    virtual int m97();
};
void TBoss8Dragon__sub_80063EF4(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (lbl_805D8EBC)) != 0) {
        TBoss8Dragon__sub_80063F34((u8 *)((void *) (arg0)));
    }
}

void TBoss8Dragon__sub_80063F34(u8 *arg0) {
    Stack_80063F34 stack;
    f32 temp_f1;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void*)((void *) (&stack.sp8)), (void*)((void *) (arg0 + 0x38)));
    temp_r3 = csnVecterUnder(&stack.sp8, 0x16EF);
    if (temp_r3 != NULL) {
        temp_f1 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        if (!(temp_f1 > lbl_805D8D70)) {
            stack.spC = temp_f1;
            spawn_particle_effect_with_flags((void *)((void *) (&stack.sp8)), (M2C_UNK)((void *) (*M2C_FIELD(arg0, s32 **, 0x5F0))), (M2C_UNK)((int) (0x40)));
            play_se__12TBoss8DragonFii((s32)((void *) (arg0)), (s32)((int) (0x40032D01)));
        }
    }
}

typedef char RecoveredGlobal_800646F0_lbl_80437944_size[sizeof(RecoveredGlobal_800646F0_lbl_80437944) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_800646F0_lbl_804FF5B4_size[sizeof(RecoveredGlobal_800646F0_lbl_804FF5B4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8006435C_lbl_80437D2C_size[sizeof(RecoveredGlobal_8006435C_lbl_80437D2C) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8006435C_lbl_804FF5A0_size[sizeof(RecoveredGlobal_8006435C_lbl_804FF5A0) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80064114_lbl_80437D68_size[sizeof(RecoveredGlobal_80064114_lbl_80437D68) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80064114_lbl_804FF5B4_size[sizeof(RecoveredGlobal_80064114_lbl_804FF5B4) == 0xC ? 1 : -1];
void TBoss8Dragon__sub_80064114(s32 arg0, s32 arg1) {
    struct CopyStack_80064114 { u8 bytes[0x14]; };
    CopyStack_80064114 copy_storage_80064114;
    u8 *temp_r4;
    temp_r4 = (u8 *)&lbl_80437D68.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064114.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    (*(f32 *)(copy_storage_80064114.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_80064114_lbl_804FF5B4 *)&lbl_804FF5B4).value, u8 **, 8), f32 *, 4);
    TBoss8Dragon__sub_80067074((void *)(arg1), (void *)((s32) (copy_storage_80064114.bytes)));
    setup_instance__9TObjEneDDFiiPvi(arg0, arg1, (copy_storage_80064114.bytes), 0);
}

void TBoss8Dragon__sub_800641A8(u8 *arg0) {
    struct CopyStack_800641A8 { u8 bytes[0x14]; };
    CopyStack_800641A8 copy_storage_800641A8;
    u8 *temp_r4;
    u8 *pos;
    temp_r4 = (u8 *)lbl_80437D54 - 4;
    *(M2CCopy_14 *)(copy_storage_800641A8.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    pos = arg0 + 0x468;
    if (!(M2C_FIELD(arg0, f32 *, 0x46C) > lbl_805D8E00)) {
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 4)), (int) (0));
        emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (pos), (void *) ((copy_storage_800641A8.bytes)), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
        reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
    }
}

void TBoss8Dragon__sub_8006435C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8006435C, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006435C, sp10) == 0x8) ? 1 : -1];
    Stack_8006435C stack;
    u8 *temp_r31;
    u8 *temp_r31_2;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437D2C.value));
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0xC)), (int) (0));
    temp_r31 = (u8 *)(arg0 + 0x444);
    stack.sp10 = lbl_805D8EAC;
    TBoss8Dragon__sub_800670E0((int) (temp_r31), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    temp_r31_2 = (u8 *)(arg0 + 0x3C0);
    stack.sp10 = lbl_805D8DD0;
    TBoss8Dragon__sub_800670E0((int) (temp_r31_2), (void *) (&stack.sp8));
    emit_enemy_effect__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r31_2), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x578)));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0)), (int) (0));
}

typedef char RecoveredGlobal_80064694_lbl_80437CF0_size[sizeof(RecoveredGlobal_80064694_lbl_80437CF0) == 0x14 ? 1 : -1];
void TBoss8Dragon__sub_80064694(s32 arg0) {
    struct CopyStack_80064694 { u8 bytes[0x14]; };
    CopyStack_80064694 copy_storage_80064694;
    u8 *temp_r5;
    temp_r5 = (u8 *)&lbl_80437CF0.value - 4;
    *(M2CCopy_14 *)(copy_storage_80064694.bytes) = *(const M2CCopy_14 *)((s32) temp_r5 + 4);
    TBoss8Dragon__sub_800670E0((int)((void *) (arg0 + 0x3C0)), (void *)((void *) ((copy_storage_80064694.bytes))));
}

void TBoss8Dragon__sub_800646F0(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800646F0, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800646F0, sp10) == 0x8) ? 1 : -1];
    Stack_800646F0 stack;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_80437944.value));
    stack.sp10 = M2C_FIELD(M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8), f32 *, 0x10);
    TBoss8Dragon__sub_80064C94((void *) (arg0), (void *) (M2C_FIELD(&lbl_804FF5B4.value, u8 **, 8)));
    TBoss8Dragon__sub_80067074((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    TObjEneDD__sub_800BA498((void *) (arg0), (void *) (&stack.sp8));
    TBoss8Dragon__sub_80064CFC((s32)((void *) (arg0)));
}

void run_default_state__12TBoss8DragonFPv(void* p) { query_default__12TBoss8DragonFPv((void*)((void*)(p))); attack_default__12TBoss8DragonFPv((void*)((void*)(p))); }
int update_state_3__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(3)); }
int set_state_2__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(2)); }
int attack_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(1)); }
int query_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968((void *)(p), (int)(0)); }

void TBoss8Dragon__sub_80064828(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}

void TBoss8Dragon__sub_800648C8(u8 *arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) {
        query_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) {
        attack_default__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) {
        set_state_2__12TBoss8DragonFPv((void*)(arg0));
        return;
    }
    if (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) {
        update_state_3__12TBoss8DragonFPv((void*)(arg0));
    }
}

#define O_80064968 ((Obj_80064968 *)arg0)
int TBoss8Dragon__sub_80064968(void *arg0, int arg1) {
    M2CCopy_14 prm;
    Vec_80064968 *p;
    prm = lbl_80437CDC;
    fn_8002B094(O_80064968->f578);
    p = &O_80064968->parts[lbl_80437CCC[arg1]];
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    TBoss8Dragon__sub_80067074(p, &prm);
    emit_enemy_effect__9TObjEneDDFiiPvi(arg0, (int)p, &prm, O_80064968->f578);
    reset_hp__9TObjEneDDFPv(arg0, 0, M2C_FIELD(&lbl_804FF5A0.value, s32 *, 0), 0);
    spawn_particle_effect_with_flags(p, O_80064968->f5f0->f8, 0x40);
    spawn_attack_effect__12TBoss8DragonFPv(p);
}
#undef O_80064968

void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((void*)((char*)a1 + 0x4), (void*)((char*)p + 0x38)); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); TBoss8Dragon__sub_80065F4C(a1); }

void TBoss8Dragon__sub_80064AB0(O_80064AB0 *self) {
    P_80064AB0 p;
    TBoss8Dragon__sub_800660A4(&p);
    p.id = self->id;
    p.kind = self->kind;
    p.x = self->x;
    p.z = self->z;
    TBoss8Dragon__sub_8006602C(&p);
}

void TBoss8Dragon__sub_80064B08(u8 *arg0, u8 *arg1) {
    s16 temp_r4;
    VecCopy__FP3VecPC3Vec((void*)((void *) (arg0 + 0x484)), (void*)((void *) (arg1 + 4)));
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x484), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    TBoss8Dragon__sub_80064B90((u8 *)((void *) (arg0 + 0x494)), (u8 *)((void *) (arg1 + 0x14)));
    M2C_FIELD(arg0, s16 **, 0x4BC) = (s16 *) (arg0 + 0x494);
    temp_r4 = *M2C_FIELD(arg0, s16 **, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != temp_r4) {
        transition_enemy_state((void *) (arg0), (int) (temp_r4));
    }
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 2);
}

void TBoss8Dragon__sub_80064B90(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    *(M2CCopy_10 *)((s32) arg0 + 4) = *(const M2CCopy_10 *)((s32) arg1 + 4);
}

void handle_6xA0_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    TBoss8Dragon__sub_80065F80(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss8Dragon__sub_80064B08((u8 *)(x), (u8 *)(arg0));
    }
}

void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

void handle_6x9F_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    bswap_boss_actions__12TBoss8DragonFi(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_target_from_action__12TBoss8DragonFPvPv((void *)(x), (void *)(arg0));
    }
}

    extern const float lbl_805D8EC4;

typedef char RecoveredGlobal_80064CFC_lbl_80487848_size[sizeof(RecoveredGlobal_80064CFC_lbl_80487848) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80064CFC_lbl_804FF5A0_size[sizeof(RecoveredGlobal_80064CFC_lbl_804FF5A0) == 0x14 ? 1 : -1];
void TBoss8Dragon__sub_80064CFC(s32 arg0) {
    TObjEneDD__sub_800B9E84((void *) (arg0), (int) (M2C_FIELD(&lbl_805D4D98, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x48) * 4))), (int) (M2C_FIELD(&(*(RecoveredGlobal_80064CFC_lbl_804FF5A0 *)&lbl_804FF5A0).value, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x54) * 4))), (int) (M2C_FIELD(&lbl_805D4D9C, M2C_UNK *, (M2C_FIELD(&lbl_80487848.value, s32 *, 0x60) * 4))));
}

void reset_radius__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }

    extern const float lbl_805D8E20;
void set_anim_speed__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }

    extern const float lbl_805D8DEC;
void reset_float_3c__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }

    extern const float lbl_805D8D84;
void reset_angle__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }

void set_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
void set_attack_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
void set_flag_4e4__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
void clear_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }

void TBoss8Dragon__sub_80064DB8(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8D80) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E00) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8E0C) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}

void TBoss8Dragon__sub_80064E3C(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D8EC0) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8DF8) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D50) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805D8D54) != 0)) {
        play_se__12TBoss8DragonFii((s32) arg0, 0x40032D08);
    }
}

void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x560, 0, 0);
}

void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x560, 0, 0);
}

extern const f32 lbl_805D8EC8;

void update_epsilon_position__12TBoss8DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D8EC8);
}

void shift_position_history__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x2FC), (void*)(arg0 + 0x3C0));
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x74), (void*)(arg0 + 0x2FC));
}
void TBoss8Dragon__sub_80065360(void) {  }
void TBoss8Dragon__sub_80065364(void) {  }
void TBoss8Dragon__sub_80065368(void) {  }
void TBoss8Dragon__sub_8006536C(void) {  }

void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370_80062BA0 *obj) {
    if (!(M2C_FIELD(obj, s32 *, 0x4C0) & 0xC) && (M2C_FIELD(obj, s16 *, 0x32C) <= 0)) {
        set_animation_by_state__12TBoss8DragonFPv();
    } else {
        obj->vcall(M2C_FIELD(obj, s16 *, 0x326), 9);
    }
}
Obj_80065658 *TBoss8Dragon__sub_80065658(Obj_80065658 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_804882C8;
        for (i = 15; i >= 0; i--) {
            if (o->objs[i] != 0) {
                queue_destruction__7TObjectFv(o->objs[i]);
                o->objs[i] = 0;
            }
        }
        if (o->f57c != 0) {
            delete o->f57c;
            o->f57c = 0;
        }
        if (o->f578 != 0) {
            TBoss8Dragon__sub_800BC5A0(o->f578, 1);
            o->f578 = 0;
        }
        TObjEneGibbles__sub_80156720(o);
        if (lbl_805D4DBC == o) {
            lbl_805D4DBC = 0;
        }
        __destroy_arr(o->f580, (void *)TObjPlayer__sub_800D7C58, 0x1c, 4);
        __dt__7TObjectFv(o->f4c4, -1);
        __dt__9TObjEneDDFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

}
