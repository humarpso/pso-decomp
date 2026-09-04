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

extern "C" {
M2C_UNK TBoss8Dragon__sub_80063F34(void *);
s32 objInBand__FP7GameObjf(f32);
extern const f32 lbl_805D8EBC;
void TBoss8Dragon__sub_80063EF4(s32 arg0);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TBoss8Dragon__sub_80063EF4(s32 arg0);
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
int TBoss8Dragon__sub_80064968(void*, int);
void TBoss8Dragon__sub_80064B08(void *, void *);
int TBoss8Dragon__sub_80065F4C(void*);
void TBoss8Dragon__sub_80065F80(void *);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
s32 TOSwitchAttack__sub_80087278(void *, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjFish__sub_800660D4(s32, s32, s32, M2C_UNK, M2C_UNK, f32);
int VecCopy__FP3VecPC3Vec(void*, void*);
void bswap_boss_actions__12TBoss8DragonFi(void *);
void *get_enemy_entity(int);
M2C_UNK set_animation_by_state__12TBoss8DragonFPv();
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void TBoss8Dragon__sub_80063714(void) {  }

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_switch_attack__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        TObjFish__sub_800660D4(temp_r3, TObjFish__sub_8001EDC4(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        TObjFish__sub_800660D4(temp_r3, TObjFish__sub_8001EDC4(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
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
    if (objInBand__FP7GameObjf((f32) (lbl_805D8EBC)) != 0) {
        TBoss8Dragon__sub_80063F34((void *) (arg0));
    }
}

void run_default_state__12TBoss8DragonFPv(void* p) { query_default__12TBoss8DragonFPv((void*)((void*)(p))); attack_default__12TBoss8DragonFPv((void*)((void*)(p))); }
int update_state_3__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 3); }
int set_state_2__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 2); }
int attack_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 1); }
int query_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 0); }

void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((void*)((char*)a1 + 0x4), (void*)((char*)p + 0x38)); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); TBoss8Dragon__sub_80065F4C(a1); }

void handle_6xA0_gal_gryphon_boss_actions(void *arg0) {
    void *x;
    TBoss8Dragon__sub_80065F80(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss8Dragon__sub_80064B08(x, arg0);
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

}
