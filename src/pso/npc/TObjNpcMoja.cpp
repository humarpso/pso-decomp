#include "types.h"
#include "pso/npc/TObjNpcNFM00.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct VBase_8014C780 { char pad[0x18]; };
struct VObj_8014C780 : VBase_8014C780 {
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
    virtual s32 m79(s32);
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual s32 m85(s32, s32);
};

extern "C" {
void *create_named_object(const char *name);
void *load_gvm_texture_file(const char *name);
extern u32 TObjNpcNFM00__shared_named_model_object;
extern u32 TObjNpcNFM00__texture_gvm_handle;
extern char lbl_8043FD20[];
extern char lbl_8043FD34[];
}

extern "C" {

void * TObjNpcNFM00__create(void *arg0);
void * create__11TObjNpcMojaFPv(void *arg0);
void *dt__11TObjNpcMojaFPvs(void *arg0, s16 arg1);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcMoja__ct(void *, void *, void *);
void *TObjNpcNFM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);
void *__nw__7TObjectFUl(int);

void set_motion_params__10TObjPlayerFPvPv(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void TObjNpcBase__ct(void *, void *);
void init_collision_body_parts(void *, void *, s32);
extern u8 npc_default_battle_stats[];
extern u8 npc_movement_parameters[];
struct Tbl_8014C780 { u8 anim[0x20]; u8 x20[0x2C]; u8 vt[0x10]; };
extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_93__11TObjNpcBaseFv();
extern "C" void vfunc_30__11TObjNpcBaseFv();
extern "C" void vfunc_92__11TObjNpcBaseFv();
extern "C" void vfunc_91__11TObjNpcBaseFv();
extern "C" void vfunc_89__11TObjNpcBaseFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void vfunc_65__13TUnk_804806E8Fll();
extern "C" void vfunc_63__13TUnk_804806E8Fv();
extern "C" void vfunc_62__13TUnk_804806E8Fv();
extern "C" void vfunc_61__13TUnk_804806E8Fv();
extern "C" void vfunc_60__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void vfunc_83__11TObjNpcBaseFv();
extern "C" void vfunc_58__11TObjNpcBaseFv();
extern "C" void vfunc_88__11TObjNpcMojaFv();
extern "C" void vfunc_59__11TObjNpcBaseFv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_set_params__11TObjNpcBaseFll();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__9TObjEnemyFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void draw_if_visible__10TObjPlayerFv();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void handle_message_event__17TObjNpcFemaleBaseFUs();
extern "C" void is_actor_cadence_frame();
extern "C" void play_voice__11TObjNpcBaseFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void run_task__11TObjNpcBaseFPv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void vfunc_28__11TObjNpcBaseFv();
extern "C" void update_conversation__11TObjNpcBaseFv();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
extern "C" void update_standing__11TObjNpcBaseFv();
extern "C" void update_wandering__11TObjNpcBaseFv();
void *lbl_804AABB8[8] = {
    (void *)0x10000, (void *)0x0, (void *)0x3f000000, (void *)0x1,
    (void *)0x10000, (void *)0x1, (void *)0x3f19999a, (void *)0x1,
};
void *lbl_804AABD8[11] = {
    (void *)0x0, (void *)0x40f00000, (void *)0x0, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x30203, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *__vt__11TObjNpcMoja[95] = {
    (void *)0x0, (void *)0x0, (void *)&dt__11TObjNpcMojaFPvs, (void *)&run_task__11TObjNpcBaseFPv,
    (void *)&draw_if_visible__10TObjPlayerFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&handle_message_event__17TObjNpcFemaleBaseFUs, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&vfunc_28__11TObjNpcBaseFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&vfunc_30__11TObjNpcBaseFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&vfunc_58__11TObjNpcBaseFv, (void *)&vfunc_59__11TObjNpcBaseFv,
    (void *)&vfunc_60__13TUnk_804806E8Fv, (void *)&vfunc_61__13TUnk_804806E8Fv, (void *)&vfunc_62__13TUnk_804806E8Fv, (void *)&vfunc_63__13TUnk_804806E8Fv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&vfunc_65__13TUnk_804806E8Fll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&update_and_send_enemy_hit_state, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__9TObjEnemyFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__11TObjNpcBaseFv,
    (void *)&update_standing__11TObjNpcBaseFv, (void *)&update_wandering__11TObjNpcBaseFv, (void *)&update_conversation__11TObjNpcBaseFv, (void *)&apply_set_params__11TObjNpcBaseFll,
    (void *)&vfunc_88__11TObjNpcMojaFv, (void *)&vfunc_89__11TObjNpcBaseFv, (void *)&play_voice__11TObjNpcBaseFv, (void *)&vfunc_91__11TObjNpcBaseFv,
    (void *)&vfunc_92__11TObjNpcBaseFv, (void *)&vfunc_93__11TObjNpcBaseFv, (void *)0x0,
};
extern s32 TObjNpcMoja__name;
extern u8 *lbl_805D50D8;

extern void *tl_04;

void * create__11TObjNpcMojaFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcMoja__ct(o2, o, arg0);
    }
    return o2;
}

void *dt__11TObjNpcMojaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__11TObjNpcMoja;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define self ((u8 *)selfv)
#define arg2 ((s32)arg2v)
void *TObjNpcMoja__ct(void *selfv, void *parent, void *arg2v) {
    TObjNpcBase__ct(self, parent);
    *(u8 **)(self + 0x18) = (u8 *)__vt__11TObjNpcMoja;
    *(s32 *)(self + 0) = TObjNpcMoja__name;
    ((VObj_8014C780 *)self)->m79(arg2);
    ((TObjPlayer *)self)->init_position_vectors();
    ((VObj_8014C780 *)self)->m85(0, 1);
    *(s32 *)(self + 0x34) = get_bml_model(lbl_805D50D8, 0);
    *(s32 *)(self + 0x24) = TObjFish__sub_8001EDB0(lbl_805D50D8, 0);
    ((TObjPlayer *)self)->init_npc_animation((void*)lbl_804AABB8, (void*)(*(s32 *)(lbl_805D50D8 + 0x430)), (void*)(*(s16 *)(self + 0xB8)));
    *(u8 **)(self + 0x350) = npc_movement_parameters;
    set_motion_params__10TObjPlayerFPvPv(self, npc_default_battle_stats);
    init_collision_body_parts(self, lbl_804AABD8, 1);
    ((TObjPlayer *)self)->reset_photon_effect();
    ((TObjPlayer *)self)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi(self);
    return self;
}

#undef self
#undef arg2

extern void *tl_04;

void * TObjNpcNFM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcNFM00__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcNFM00__shared_named_model_object;
extern u32 TObjNpcNFM00__texture_gvm_handle;

void TObjNpcNFM00::free_resources() {
    if ((u32) TObjNpcNFM00__texture_gvm_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNFM00__texture_gvm_handle);
        TAdSinglePlyChrSelectGC::safe_free(TObjNpcNFM00__texture_gvm_handle);
        TObjNpcNFM00__texture_gvm_handle = 0U;
    }
    if ((u32) TObjNpcNFM00__shared_named_model_object != 0U) {
        TLobby::free_nodes_with_id((u32)((void*)TObjNpcNFM00__shared_named_model_object));
        TObjNpcNFM00__shared_named_model_object = 0U;
    }
}
void TObjNpcNFM00::load_assets() {
    TObjNpcNFM00__shared_named_model_object = (u32)create_named_object(lbl_8043FD20);
    TObjNpcNFM00__texture_gvm_handle = (u32)load_gvm_texture_file(lbl_8043FD34);
}

}
