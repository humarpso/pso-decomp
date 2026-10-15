struct Obj_800ED4BC;

#include "types.h"

struct VBase_18_f9c8ca
{
  char pad[0x18];
};

struct VObj_18_f9c8ca : VBase_18_f9c8ca {
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
    virtual void m99();
    virtual s32 m100();
};

struct VBase_14_c143b1 { char pad[0x14]; };

struct VObj_14_c143b1 : VBase_14_c143b1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
};

struct Vec_800ECA40 { f32 x, y, z; };

struct LBase_800ECA40 { char pad[0x14]; };

struct Light_800ECA40 : LBase_800ECA40 {
    virtual void l0();
    virtual void l1();
    virtual void l2();
    virtual void l3();
    virtual void l4();
    virtual void l5();
    virtual void l6();
    virtual void l7();
};

struct Ent_800ECA40 { s32 a; s32 b; s32 c; };

struct Model_800ECA40 {
    Ent_800ECA40 ents[3];
    u8 pad24[0x2C - 0x24];
    s32 x2C;
};

struct VBase_800ECA40 { char pad[0x18]; };

struct Bit_800ECA40 : VBase_800ECA40 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
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
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    u8 pad1C[0x24 - 0x1C];
    Model_800ECA40 **x24;
    u8 pad28[0x34 - 0x28];
    void *x34;
    Vec_800ECA40 pos;
    u8 pad44[0x60 - 0x44];
    s32 x60;
    u8 pad64[0x300 - 0x64];
    f32 x300;
    u8 pad304[0x3CC - 0x304];
    s32 flags;
    s32 idx;
    u8 pad3D4[0x3DC - 0x3D4];
    Light_800ECA40 light;
};

extern "C" {
s32 transition_enemy_state(void *, s32);
void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0);
void set_hold_flags__18TObjEneRe4SorcererFPv(u8 *arg0);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 play_sound_effect(s32, void *, int, int);
extern const f32 TObjEneRe4Bit__data_805DA770;
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
s32 clear_attack_receipts(void *);
s32 transition_enemy_state(void *, s32);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void clear_state_flags_when_done__13TObjEneRe4BitFPv(u8 *arg0);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
void update_homing_velocity__13TObjEneRe4BitFPv(Obj_800ED4BC *arg0);
void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0);
extern const f32 lbl_805DA76C;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1);
void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1);
s32 transition_enemy_state(void *, s32);
void handle_state_message__13TObjEneRe4BitFPvi(void *self, s32 msg);
int render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
int clear_global_flag_400__9TObjEneDDFv();
f32 update_primary_light__9TObjEneDDFPv(void *);
int update_secondary_light__9TObjEneDDFPv(void *);
int toggle_particle_effect__10TObjPlayerFv();
int end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
int scale_matrix(int, f32, f32, f32);
int rotate_matrix_y(int, int);
int translate_matrix(int, f32, f32, f32);
int push_matrix();
int pop_matrix();
int post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void *);
int draw_chunk_object(void *);
extern Vec_800ECA40 re4_bit_render_vec;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805DA768;
extern const f32 lbl_805DA76C;
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA774;
void render__13TObjEneRe4BitFv(Bit_800ECA40 *self);
}

extern "C" {

void reset_transform__13TObjEneRe4BitFPv(void *arg0);
void transform_part_positions__9TObjEneDDFPv(void *);
s32 transition_enemy_state(void *, s32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt86();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt92();
extern "C" void TObjEneDD__vt93();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt101();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneRe4Bit__vt103();
extern "C" void TObjEneRe4Bit__vt104();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_object_set_data();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern "C" void update_shock_clock__10TObjPlayerFPv();

extern "C" {

}

extern "C" {
void TObjEneRe4Bit__vt26(void);
void TObjEneRe4Bit__vt42(void);
void TObjEneRe4Bit__vt43(void);
void TObjEneRe4Bit__vt44(void);
void TObjEneRe4Bit__vt45(void);
void TObjEneRe4Bit__vt46(void);
void TObjEneRe4Bit__vt47(void);
void TObjEneRe4Bit__vt48(void);
void TObjEneRe4Bit__vt49(void);
void TObjEneRe4Bit__vt50(void);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt60(u8 *arg0);
void TObjEneRe4Bit__vt61(u8 *arg0);
void TObjEneRe4Bit__vt86(void *arg0);
void * __dt__13TObjEneRe4BitFv(void *arg0, s16 arg1);
void run_task__13TObjEneRe4BitFv(u8 *arg0);
}

void *re4_bit_init_params[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *re4_bit_model_node_desc[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *__vt__13TObjEneRe4Bit[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__13TObjEneRe4BitFv, (void *)&run_task__13TObjEneRe4BitFv,
    (void *)&render__13TObjEneRe4BitFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneRe4Bit__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&TObjEneRe4Bit__vt42, (void *)&TObjEneRe4Bit__vt43, (void *)&TObjEneRe4Bit__vt44, (void *)&TObjEneRe4Bit__vt45,
    (void *)&TObjEneRe4Bit__vt46, (void *)&TObjEneRe4Bit__vt47, (void *)&TObjEneRe4Bit__vt48, (void *)&TObjEneRe4Bit__vt49,
    (void *)&TObjEneRe4Bit__vt50, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneRe4Bit__vt59, (void *)&TObjEneRe4Bit__vt60, (void *)&TObjEneRe4Bit__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneRe4Bit__vt85,
    (void *)&TObjEneRe4Bit__vt86, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&TObjEneRe4Bit__vt103, (void *)&TObjEneRe4Bit__vt104,
};
#define re4_bit_init_params ((u8 *)re4_bit_init_params)
#define re4_bit_model_node_desc ((u8 *)re4_bit_model_node_desc)
#define __vt__13TObjEneRe4Bit ((s32 *)__vt__13TObjEneRe4Bit)

void render__13TObjEneRe4BitFv(Bit_800ECA40 *self) {
    f32 range;
    s32 saved;
    s32 draw;
    Model_800ECA40 *m;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        self->m104();
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        range = lbl_805D9E84;
    } else {
        range = lbl_805DA768;
    }
    if (!(self->flags & 0x100)) {
        return;
    }
    if (self->m8(range, lbl_805DA76C) == 0) {
        return;
    }
    if (self->flags & 0x800) {
        Vec_800ECA40 v = re4_bit_render_vec;
        render_with_position_override__10TObjPlayerFPvPvi(self, &v, 0);
    }
    update_secondary_light__9TObjEneDDFPv(self);
    m = *self->x24;
    saved = m->x2C;
    m->x2C = m->ents[self->idx].c;
    set_global_param__8TObjFishFi(self->x24);
    lbl_805D5660 = model_render_flags;
    clear_global_flag_400__9TObjEneDDFv();
    toggle_particle_effect__10TObjPlayerFv();
    draw = 1;
    if (self->flags & 0x200) {
        self->light.l6();
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(self) != 0) {
            draw = 0;
        }
    }
    if (draw != 0) {
        push_matrix();
        post_translate_matrix(&self->pos);
        translate_matrix(0, TObjEneRe4Bit__data_805DA770, self->x300 - self->pos.y, TObjEneRe4Bit__data_805DA770);
        rotate_matrix_y(0, self->x60);
        scale_matrix(0, lbl_805DA774, lbl_805DA774, lbl_805DA774);
        draw_chunk_object(self->x34);
        pop_matrix();
    }
    self->light.l7();
    model_render_flags = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    update_primary_light__9TObjEneDDFPv(self);
    (*self->x24)->x2C = saved;
}

#pragma push
#pragma fp_contract on
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        *(s32 *)((s8 *)arg0 + 0x408) = 0;
        ((s32 (*)(void *))set_hold_flags__18TObjEneRe4SorcererFPv)((void *) (arg0));
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x400);
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A815)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 3:
        if (*(s32 *)((s8 *)arg0 + 0x3CC) & 8) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD16)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            transition_enemy_state((void *)((void *) (arg0)), (s32)((int) (1)));
        }
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x408) = (s32) (*(s32 *)((s8 *)arg0 + 0x408) + 1);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x408) >= 0x384) {
            temp_r4 = *(s32 *)((s8 *)arg0 + 0x3CC);
            if (!(temp_r4 & 0x10)) {
                *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r4 & 0xFFFFFBFF);
                ((s32 (*)(void *))set_state_flags__18TObjEneRe4SorcererFPv)((void *) (arg0));
                return;
            }
        }
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFF7FF);
        *(s16 *)((s8 *)arg0 + 0x32C) = (s16) *(s16 *)((s8 *)arg0 + 0x2B8);
        ((s32 (*)())TObjEneRe4Sorcerer__sub_800ED47C)();
        *(f32 *)((s8 *)arg0 + 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        break;
    }
}
#pragma pop

typedef struct VBase_18_f9c8ca VBase_18_f9c8ca;
typedef struct VObj_18_f9c8ca VObj_18_f9c8ca;
#define PSO_VCALL_VObj_18_f9c8ca_m100(_self) (((VObj_18_f9c8ca *)(_self))->m100())
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s32 *) (((s8 *) arg0) + 0x408)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x408)))) > 0xF)
    {
      transition_enemy_state((void *)((void *) arg0), (s32)((int) 1));
    }
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x408)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x408))) + 1);
      VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x2FC)), (void *)((int) (*((s32 *) (((s8 *) arg0) + 0x3C0)))));
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) + (*((f32 *) (((s8 *) arg0) + 0x3D8))));
      *((f32 *) (((s8 *) arg0) + 0x2FC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2FC))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      *((f32 *) (((s8 *) arg0) + 0x304)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x304))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      PSO_VCALL_VObj_18_f9c8ca_m100(arg0);
      return;
    case 5:
      clear_attack_receipts((void *) arg0);
      return;
      break;
  }
}

#pragma push
#pragma opt_common_subs off
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (s32)(3));
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFEFFF);
        *(s32 *)((s8 *)arg0 + 0x3D0) = 3;
        break;
    case 3:
        if (*(f32 *)((s8 *)arg0 + 0x3D8) <= TObjEneRe4Bit__data_805DA770) {
            transition_enemy_state((void *)(arg0), (s32)(1));
            break;
        }
    case 5:
        break;
    case 0:
        *(f32 *)((s8 *)arg0 + 0x3D8) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D8) - lbl_805DA778);
        if (*(f32 *)((s8 *)arg0 + 0x3D8) < TObjEneRe4Bit__data_805DA770) {
            *(f32 *)((s8 *)arg0 + 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        }
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) - 0x1800);
        ((s32 (*)(void *))update_homing_velocity__13TObjEneRe4BitFPv)(arg0);
        ((void (*)(void *))update_position_flag__13TObjEneRe4BitFPv)(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x1000);
        *(s32 *)((s8 *)arg0 + 0x408) = 0;
        *(s32 *)((s8 *)arg0 + 0x404) = 1;
        *(s32 *)((s8 *)arg0 + 0x3D0) = (s32) *(s32 *)((s8 *)arg0 + 0x3D4);
        return;
    case 3:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x3CC);
        if (temp_r4 & 2) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            transition_enemy_state(arg0, 3);
        }
        return;
    case 0:
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x408);
        switch (temp_r0) {
        case 1:
            break;
        case 0:
            *(f32 *)((s8 *)arg0 + 0x3D8) = *(f32 *)((s8 *)arg0 + 0x3D8) + lbl_805DA778;
            if (*(f32 *)((s8 *)arg0 + 0x3D8) > lbl_805DA76C) {
                *(f32 *)((s8 *)arg0 + 0x3D8) = lbl_805DA76C;
                *(s32 *)((s8 *)arg0 + 0x408) = 1;
                *(s32 *)((s8 *)arg0 + 0x404) = 2;
            }
            *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) + 0x1800);
            break;
        }
        ((s32 (*)(void *))update_homing_velocity__13TObjEneRe4BitFPv)((void *)(arg0));
        ((void (*)(void *))update_position_flag__13TObjEneRe4BitFPv)(arg0);
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x404) = 0;
        break;
    }
}
#pragma pop

s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x3CC);
        if (temp_r4 & 1) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            transition_enemy_state(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            transition_enemy_state(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        ((s32 (*)(void *))update_homing_velocity__13TObjEneRe4BitFPv)((void *)(arg0));
        ((void (*)(void *))update_position_flag__13TObjEneRe4BitFPv)((void *)(arg0));
        break;
    }
}

extern const f32 TObjEneRe4Bit__data_805DA770;

void handle_state_message__13TObjEneRe4BitFPvi(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        transition_enemy_state((void *)(self), (s32)(1));
        return;
    }
}

void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        handle_state_message__13TObjEneRe4BitFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        handle_event__13TObjEneRe4BitFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 2:
        TObjEneRe4Bit__sub_800ECED0((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneRe4Bit__sub_800ECE04((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 5:
        TObjEneRe4Bit__sub_800ECD28((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 6:
        TObjEneRe4Bit__sub_800ECC14((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
    default:
        return;
    }
}

void clear_state_flags_when_done__13TObjEneRe4BitFPv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x3CC);
    if (temp_r3 & 4) {
        if (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m4() != 0) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFB);
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFDFF);
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFEFF);
        }
    } else if ((temp_r3 & 8) && (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m5() != 0)) {
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF7);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFDFF);
    }
}

void reset_transform__13TObjEneRe4BitFPv(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), *(void **)((s8 *)arg0 + 0x3C0));
    *(f32 *)((s8 *)arg0 + 0x3F8) = TObjEneRe4Bit__data_805DA770;
    *(f32 *)((s8 *)arg0 + 0x3FC) = TObjEneRe4Bit__data_805DA770;
    *(f32 *)((s8 *)arg0 + 0x400) = TObjEneRe4Bit__data_805DA770;
    ((void (*)(void *))update_position_flag__13TObjEneRe4BitFPv)((void *)(arg0));
    transform_part_positions__9TObjEneDDFPv(arg0);
}

}

#include "types.h"

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
    virtual s32 m90();
    virtual s32 m91();
};
struct VBase_18_bcad77 { char pad[0x18]; };

struct VObj_18_bcad77 : VBase_18_bcad77 {
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
    virtual s32 m89();
    virtual void m90();
    virtual void m91();
    virtual s32 m92();
};

extern "C" {
void call_vt_90_91__18TObjEneRe4SorcererFPv(u8 *arg0);
void invoke_state_callbacks__18TObjEneRe4SorcererFPv(u8 *arg0);
}

extern "C" {

struct ED300Base_800ed300_800ED258 { char pad[0x14]; };
struct ED300Obj_800ed300_800ED258 : ED300Base_800ed300_800ED258 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3(void *);
};

void set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void* p);
void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0);

void set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2000; }

void call_vt_90_91__18TObjEneRe4SorcererFPv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m90();
    ((VObj_18 *)(arg0))->m91();
}

void invoke_state_callbacks__18TObjEneRe4SorcererFPv(u8 *arg0) {
    ((VObj_18_bcad77 *)(arg0))->m89();
    ((VObj_18_bcad77 *)(arg0))->m92();
}

void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFB);
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x308);
    ((ED300Obj_800ed300_800ED258*)(arg0 + 0x3DC))->m3(arg0);
}

}

#include "types.h"

extern "C" {

struct ED384Base_800ed384_800ED34C { char pad[0x14]; };
struct ED384Obj_800ed384_800ED34C : ED384Base_800ed384_800ED34C {
    virtual void m0();
    virtual void m1();
    virtual void m2(void *);
};

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0);
void set_hold_flags__18TObjEneRe4SorcererFPv(u8 *arg0);

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFEF);
    if (!(*(s32 *)((s8 *)arg0 + 0x3CC) & 0x408)) {
        ((s32 (*)())set_state_flags__18TObjEneRe4SorcererFPv)();
    }
}

void set_hold_flags__18TObjEneRe4SorcererFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x204);
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF7);
    ((ED384Obj_800ed384_800ED34C*)(arg0 + 0x3DC))->m2(arg0);
}

}

#include "types.h"

extern "C" {
void set_state_flag_and_mode__18TObjEneRe4SorcererFPvi(u8 *arg0, s32 arg1);
int TObjEneRe4Sorcerer__sub_800ED498(u8 *arg0);
}

extern "C" {

void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p);
s32 get_state__18TObjEneRe4SorcererFPv(void* p);
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p);
void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0);

void set_flag_and_notify__18TObjEneRe4SorcererFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x10);
    if (!(*(s32 *)((s8 *)arg0 + 0x3CC) & 4)) {
        ((s32 (*)())set_hold_flags__18TObjEneRe4SorcererFPv)();
    }
}
void TObjEneRe4Sorcerer__sub_800ED408(void* p) { *(u32*)((char*)p + 0x3cc) &= 0xfffffeff; }
void set_attack_flag__18TObjEneRe4SorcererFPv(void* p) { *(u32*)((char*)p + 0x3cc) |= 0x2; }

void set_state_flag_and_mode__18TObjEneRe4SorcererFPvi(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 1);
    switch (arg1) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x3D4) = 4;
        return;
    case 1:
        *(s32 *)((s8 *)arg0 + 0x3D4) = 5;
        return;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x3D4) = 6;
        return;
    }
}

void TObjEneRe4Sorcerer__sub_800ED47C(void* p) { *(s32*)((char*)p + 0x3d0) = 3; }
void* get_spell_data__18TObjEneRe4SorcererFPv(void* p) { return (char*)p + 0x2fc; }
s32 get_state__18TObjEneRe4SorcererFPv(void* p) { return *(s32*)((char*)p + 0x404); }
int TObjEneRe4Sorcerer__sub_800ED498(u8 *arg0) {
    s16 temp_r3;
    u8 var_r0;
    temp_r3 = *(s16 *)((s8 *)arg0 + 0x326);
    var_r0 = 0;
    if ((temp_r3 != 5) && (temp_r3 != 6)) {
        var_r0 = 1;
    }
    return var_r0;
}

}

#include "types.h"

struct BaseV_800ed578 { char pad[0x18]; };
struct VObjV_800ed578 : BaseV_800ed578 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8();
    virtual s32 m9();
    virtual s32 m10();
    virtual s32 m11();
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual s32 m17();
    virtual s32 m18();
    virtual s32 m19();
    virtual s32 m20();
    virtual s32 m21();
    virtual s32 m22();
    virtual s32 m23();
    virtual s32 m24();
    virtual s32 m25();
    virtual s32 m26();
    virtual s32 m27();
    virtual s32 m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual s32 m33();
    virtual s32 m34();
    virtual s32 m35();
    virtual s32 m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual s32 m39();
    virtual s32 m40();
    virtual s32 m41();
    virtual s32 m42();
    virtual s32 m43();
    virtual s32 m44();
    virtual s32 m45();
    virtual s32 m46();
    virtual s32 m47();
    virtual s32 m48();
    virtual s32 m49();
    virtual s32 m50();
    virtual s32 m51();
    virtual s32 m52();
    virtual s32 m53();
    virtual s32 m54();
    virtual s32 m55();
    virtual s32 m56();
    virtual s32 m57();
    virtual s32 m58();
    virtual s32 m59();
    virtual s32 m60();
    virtual s32 m61();
    virtual s32 m62();
    virtual s32 m63();
    virtual s32 m64();
    virtual s32 m65();
    virtual s32 m66();
    virtual s32 m67();
    virtual s32 m68();
    virtual s32 m69();
    virtual s32 m70();
    virtual s32 m71();
    virtual s32 m72();
    virtual s32 m73();
    virtual s32 m74();
    virtual s32 m75();
    virtual s32 m76();
    virtual s32 m77();
    virtual s32 m78();
    virtual s32 m79();
    virtual s32 m80();
    virtual s32 m81();
    virtual s32 m82();
    virtual s32 m83();
    virtual s32 m84();
    virtual s32 m85();
    virtual s32 m86();
    virtual s32 m87();
    virtual s32 m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual s32 m91();
    virtual s32 m92();
    virtual s32 m93();
    virtual s32 m94();
    virtual s32 m95();
    virtual s32 m96();
    virtual s32 m97();
    virtual s32 m98();
    virtual s32 m99(s32 *);
};

struct VBase_18_p4 { char pad[0x18]; };
struct VObj_18_p4 : VBase_18_p4 {
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
    virtual s32 m81();
    virtual void m82();
    virtual s32 m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
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
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
};

struct LBase_800ED7FC { char pad[0x14]; };
struct Light_800ED7FC : LBase_800ED7FC {
    virtual void l0();
    virtual void l1();
    virtual void l2();
    virtual void l3(f32);
};

struct VBase_800ED7FC { char pad[0x18]; };
struct Bit_800ED7FC : VBase_800ED7FC {
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
    virtual void m85(s16, s32);
    u8 pad1C[0x24 - 0x1C];
    s32 x24;
    u8 pad28[0x34 - 0x28];
    s32 x34;
    u8 pad38[0x326 - 0x38];
    s16 state;
    u8 pad328[0x350 - 0x328];
    void *x350;
    u8 pad354[0x37C - 0x354];
    f32 x37C;
    u8 pad380[0x3C8 - 0x380];
    s32 kind;
    s32 x3CC;
    s32 x3D0;
    s32 x3D4;
    f32 x3D8;
    Light_800ED7FC light;
    u32 pad3F4;
    f32 x3F8;
    f32 x3FC;
    f32 x400;
    s32 x404;
    s32 x408;
    s32 x40C;
};

extern "C" {
__declspec(section ".data") s32 TObjEneRe4Bit_boss_handles[2];
__declspec(section ".data") s32 lbl_80501058[2];
__declspec(section ".data") s32 lbl_80501060[2];
__declspec(section ".data") s32 lbl_80501068[2];
}

struct Vec_800ED4BC { f32 x, y, z; };

struct Obj_800ED4BC { u8 pad0[0x38]; f32 f38; u8 pad3C[4]; f32 f40; u8 pad44[0x2FC - 0x44]; Vec_800ED4BC v2FC; u8 pad308[0x3C0 - 0x308]; Vec_800ED4BC *f3C0; u8 pad3C4[0x3D8 - 0x3C4]; f32 f3D8; u8 pad3DC[0x3F8 - 0x3DC]; Vec_800ED4BC v3F8; };

extern "C" {
void TObjEneRe4Bit__vt60(u8 *arg0);
void TObjEneRe4Bit__vt61(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
s32 set_player_state_default__12TBoss8DragonFPv(void *);
void copy_pos__13TObjEneRe4BitFPv(void* p);
void run_task__13TObjEneRe4BitFv(u8 *arg0);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void vec3_add_to(void *, void *);
void subtract_vector(void *, void *);
extern const f32 lbl_805DA77C;
extern const f32 lbl_805DA780;
void update_homing_velocity__13TObjEneRe4BitFPv(Obj_800ED4BC *arg0);
}

extern "C" {

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6);
void TObjEneRe4Bit__vt26(void);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt86(void *arg0);
void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1);
void copy_pos__13TObjEneRe4BitFPv(void* p);
void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0);
void free_collision_body_parts(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 init_object__9TObjEneDDFPv();
s32 init_vtable_and_field18__10TObjPlayerFPv(void *);
s16 obj_getField1c(void *);

#pragma push
#pragma fp_contract on
void update_homing_velocity__13TObjEneRe4BitFPv(Obj_800ED4BC *arg0) {
    Vec_800ED4BC sp;
    f32 s;
    ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((void*)(&sp), (void*)(arg0->f3C0));
    sp.y = sp.y + arg0->f3D8;
    subtract_vector(&sp, &arg0->v2FC);
    s = lbl_805DA77C * update_scale__15TObjBoss2TunnelFPv(&sp);
    arg0->v3F8.x = lbl_805DA780 * (sp.x * s + arg0->v3F8.x);
    arg0->v3F8.y = lbl_805DA780 * (sp.y * s + arg0->v3F8.y);
    arg0->v3F8.z = lbl_805DA780 * (sp.z * s + arg0->v3F8.z);
    vec3_add_to(&arg0->v2FC, &arg0->v3F8);
    arg0->f38 = arg0->v2FC.x;
    arg0->f40 = arg0->v2FC.z;
}
#pragma pop

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0) {
    s32 sp8;

    ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((void*)(&sp8), (void*)(arg0 + 0x2FC));
    if (((VObjV_800ed578 *)arg0)->m99(&sp8) == 0U) {
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFF7FF);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x800);
}

void TObjEneRe4Bit__vt86(void *arg0) {
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 4) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) - *(f32 *)((s8 *)arg0 + 0x3C));
}
void copy_pos__13TObjEneRe4BitFPv(void* p) { ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((void*)((char*)p + 0x74), (void*)((char*)p + 0x2fc)); }
void TObjEneRe4Bit__vt59(void) {  }

void TObjEneRe4Bit__vt60(u8 *arg0) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 5) {
        if (*(s32 *)((s8 *)arg0 + 0x3CC) & 0x1000) {
            ((s32 (*)())clear_attack_receipts)();
            return;
        }
        ((s32 (*)(void *, int))transition_enemy_state)((void *)(arg0), (int) (5));
    }
}

void TObjEneRe4Bit__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    if (temp_r0 != 6) {
        if (temp_r0 == 2) {
            ((s32 (*)(void *, int))transition_enemy_state)((void *)(arg0), (int) (6));
            *(s32 *)((s8 *)arg0 + 0x404) = 3;
            return;
        }
        ((s32 (*)(void *, int))transition_enemy_state)((void *)(arg0), (int) (6));
    }
}

void TObjEneRe4Bit__vt26(void) {  }

void run_task__13TObjEneRe4BitFv(u8 *arg0) {
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_p4 *)(arg0))->m103();
        return;
    }
    if ((((VObj_18_p4 *)(arg0))->m81() == 1) || (temp_r3 = *(s32 *)((s8 *)arg0 + 0x3CC), (((temp_r3 & 0x2000) == 0) != 0))) {
        ((VObj_18_p4 *)(arg0))->m83();
        ((s32 (*)(void *))clear_state_flags_when_done__13TObjEneRe4BitFPv)((void *) (arg0));
    } else {
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r3 & 0xFFFFDFFF);
    }
    copy_pos__13TObjEneRe4BitFPv((void*)((void *) (arg0)));
    ((VObj_18_p4 *)(arg0))->m86();
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
}

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjEneRe4Bit;
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x3DC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
int initialize_enemy_state__9TObjEneDDFPv(void *, int);
int set_state_8__9TObjEneDDFPv(void *);
int init_model__9TObjEneDDFPv(void *, void *, int);
int init_position_vectors__9TObjEneDDFPv(void *);
struct Tbl_800ED7FC { s32 a[2]; s32 b[2]; s32 c[2]; };
extern s32 TObjEneRe4Bit__model;
extern s32 re4_bit_texture_list;
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA784;

void init__13TObjEneRe4BitFPv(Bit_800ED7FC *self) {
    s32 i;

    init_position_vectors__9TObjEneDDFPv(self);
    self->x34 = TObjEneRe4Bit__model;
    self->x24 = re4_bit_texture_list;
    init_model__9TObjEneDDFPv(self, re4_bit_model_node_desc, 1);
    i = self->kind == 1 ? 0 : 1;
    reset_hp__9TObjEneDDFPv(self, TObjEneRe4Bit_boss_handles[i], lbl_80501058[i], lbl_80501060[i]);
    set_state_8__9TObjEneDDFPv(self);
    self->x350 = re4_bit_init_params;
    if (self->kind == 1) {
        initialize_enemy_state__9TObjEneDDFPv(self, 0x20);
    } else {
        initialize_enemy_state__9TObjEneDDFPv(self, 0x21);
    }
    self->x37C = lbl_805DA784;
    self->x3CC = 0;
    self->x3D0 = 3;
    self->x3D4 = 3;
    self->x3D8 = TObjEneRe4Bit__data_805DA770;
    self->light.l3(lbl_805DA784);
    self->x3F8 = TObjEneRe4Bit__data_805DA770;
    self->x3FC = TObjEneRe4Bit__data_805DA770;
    self->x400 = TObjEneRe4Bit__data_805DA770;
    self->x404 = 0;
    self->x408 = 0;
    self->x40C = 0;
    ((int (*)(void *))TObjEneRe4Sorcerer__sub_800ED408)(self);
    ((int (*)(void *))call_vt_90_91__18TObjEneRe4SorcererFPv)(self);
    self->state = 0;
    self->m85(self->state, 4);
}

extern s32 lbl_805D2AE8;

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6) {
    init_object__9TObjEneDDFPv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjEneRe4Bit;
    init_vtable_and_field18__10TObjPlayerFPv((void *) (arg0 + 0x3DC));
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2AE8;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    *(s16 *)((s8 *)arg0 + 0x3C4) = obj_getField1c((void *) (arg2));
    *(s16 *)((s8 *)arg0 + 0x1C) = arg5;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg6;
    *(s32 *)((s8 *)arg0 + 0x3C0) = arg3;
    *(s32 *)((s8 *)arg0 + 0x3C8) = arg4;
    ((int (*)(void*, void*))VecCopy__FP3VecPC3Vec)((void*)((void *) (arg0 + 0x38)), (void*)((void *) (arg3)));
    init__13TObjEneRe4BitFPv((Bit_800ED7FC *) (arg0));
    return arg0;
}

}

struct Inner_800EDAB4 { u8 pad0[0xC]; s32 fC; u8 pad10[8]; s32 f18; };

struct Obj_800EDAB4 { u8 pad0[0x42C]; Inner_800EDAB4 *f42C; };

struct Dst_800EDAB4 { s32 a[2]; s32 b[2]; s32 c[2]; s32 d[2]; };

extern "C" {
s32 register_boss__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
extern s32 lbl_8043D2B0[];
extern s32 lbl_8043D2B8[];
extern s32 lbl_8043D2C0[];
extern s32 lbl_8043D2C8[];
extern s32 TObjEneRe4Bit__model;
extern s32 re4_bit_texture_list;
extern Obj_800EDAB4 *sorcerer_bml_resource;
}

extern "C" {

void TObjEneRe4Bit__sub_800EDAB0(void);
void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void create_disabled__13TObjEneRe4BitFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void create_enabled__13TObjEneRe4BitFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void *__nw__7TObjectFUl(int);

void create_enabled__13TObjEneRe4BitFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(1), (void *)(arg2), (void *)(arg3));
}

void create_disabled__13TObjEneRe4BitFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    create__13TObjEneRe4BitFPvPvPvPvPv((void *)(arg0), (void *)(arg1), (void *)(0), (void *)(arg2), (void *)(arg3));
}

extern void *tl_04;

void * create__13TObjEneRe4BitFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x410);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *, void *, void *, void *, void *)) TObjEneRe4Bit__ct)(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

void TObjEneRe4Bit__sub_800EDAB0(void) {  }
void TObjEneRe4Bit__sub_800EDAB4(void) {
    s32 i;
    TObjEneRe4Bit__model = sorcerer_bml_resource->f42C->f18;
    re4_bit_texture_list = sorcerer_bml_resource->f42C->fC;
    for (i = 0; i < 2; i++) {
        TObjEneRe4Bit_boss_handles[i] = register_boss__6TLobbyFPv(lbl_8043D2B0[i]);
        lbl_80501058[i] = dispatch_shared_handler_b__6TLobbyFPv(lbl_8043D2B8[i]);
        lbl_80501060[i] = register_object__6TLobbyFPv(lbl_8043D2C0[i]);
        lbl_80501068[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_8043D2C8[i]);
    }
}

}

#include "types.h"

extern "C" {

void TObjEneRe4Bit__vt42(void);
void TObjEneRe4Bit__vt43(void);
void TObjEneRe4Bit__vt44(void);
void TObjEneRe4Bit__vt45(void);
void TObjEneRe4Bit__vt46(void);
void TObjEneRe4Bit__vt47(void);
void TObjEneRe4Bit__vt48(void);
void TObjEneRe4Bit__vt49(void);
void TObjEneRe4Bit__vt50(void);

void TObjEneRe4Bit__vt42(void) {  }
void TObjEneRe4Bit__vt43(void) {  }
void TObjEneRe4Bit__vt44(void) {  }
void TObjEneRe4Bit__vt45(void) {  }
void TObjEneRe4Bit__vt46(void) {  }
void TObjEneRe4Bit__vt47(void) {  }
void TObjEneRe4Bit__vt48(void) {  }
void TObjEneRe4Bit__vt49(void) {  }
void TObjEneRe4Bit__vt50(void) {  }

}
