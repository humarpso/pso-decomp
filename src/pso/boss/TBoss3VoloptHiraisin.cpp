#include "types.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/math/AngleLookup.h"
#include "pso/math/MatrixTransforms.h"
#include "pso/misc/TBreakUpMdl.h"
#include "pso/misc/TLobby.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjLight_80133568.h"
#include "pso/player/TObjPlayer.h"
#include "pso/system/BmlResource.h"
#include "pso/system/vector.h"
#include "pso/TParticleCtrl.h"
#include "pso/unk/text_803E2D70.h"

extern "C" {
void advance_animation_playback(TObjMotion *obj);
s32 play_sound_effect(s32 id, Vec *pos, s32 a2, s32 flags);
s32 TObjFish__sub_8001EDB0(BmlResource *resource, s32 index);
void obj_setFlags30(TObject *obj, u32 mask);
void submit_cursor_candidate(TObject *obj, s32 a1);
s32 minimap_render_dot(Vec *pos, s32 color, s16 a2, s32 a3);
void init_collision_body_parts(TObject *obj, void *parts, s32 count);
void free_collision_body_parts(TObject *obj);
void push_matrix(void);
s32 pop_matrix(void);
void post_translate_matrix(const f32 *pos);
void rotate_matrix_y(void *mtx, s32 angle);
void scale_matrix(void *mtx, f32 x, f32 y, f32 z);

TObjEnemyCustom *TObjEnemyCustom__ct(TObjEnemyCustom *obj, TObject *parent);
TObjEnemyCustom *__dt__15TObjEnemyCustomFv(TObjEnemyCustom *obj, s16 flag);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32 size);
TUnk_8048FA00 *init_from_model__11TBreakUpMdlFl(TUnk_8048FA00 *obj, s32 model);
TBoss3VoloptHiraisin *TBoss3VoloptHiraisin__sub_80041AA0(TBoss3VoloptHiraisin *hiraisin, TObject *parent, void *set_data);
void trigger_dell_biter_events__10TObjPlayerFv(Vec *pos);
void update_collisions__10TObjPlayerFv(TObjEnemy *obj);
void init_params__20TBoss3VoloptHiraisinFv(TBoss3VoloptHiraisin *hiraisin, Vec *spawn, const char *name);

extern BmlResource *boss3_volopt_resources;
extern Vec boss3_volopt_spawn_pos;
extern u32 model_render_flags;
extern u32 lbl_805D5660;
extern TObject *tl_04;
}

struct BreakupParams {
    s32 pad_0;
    f32 pad_4;
    f32 pad_8;
    f32 pad_c;
    f32 pad_10;
    f32 pad_14;
    f32 pad_18;
};

struct MotionAction {
    s32 pad_0;
    s32 pad_4;
    f32 pad_8;
    s32 pad_c;
};

struct EnemyMovementParams {
    f32 pad_0;
    f32 pad_4;
    s32 pad_8;
    s32 pad_c;
    s32 pad_10;
    s32 pad_14;
    s32 pad_18;
};

struct CollisionBodyPart {
    Vec offset;
    f32 radius;
    u8 pad_10[0x8];
    s32 flags;
    u8 pad_1c[0x10];
};

struct CollisionState {
    u8 pad_0[0x18];
    u32 flags;
};

struct HiraisinParams {
    BreakupParams breakup;
    MotionAction actions[5];
    EnemyMovementParams movement;
    CollisionBodyPart collision;
};

// A model node: evaluation flags, then the node's rotation at 0x14.
struct ModelNode {
    u32 flags;
    u8 pad_4[0x14];
    s32 rotation_y;
};

#pragma readonly_strings on

static const char *TBoss3VoloptHiraisin_name = "TBoss3VoloptHiraisin";

static HiraisinParams volopt_hiraisin_params = {
    { 0x14, 0.06f, 1.5f, 0.9f, 0.12f, 0.55f, 0.5f },
    {
        { 0x10000, 6, 0.7f, 0 },
        { 0x10000, 6, 0.7f, 1 },
        { 0x20000, 6, 0.7f, 4 },
        { 0x20000, 8, 0.7f, 8 },
        { 0x30004, 7, 0.5f, 0x10 },
    },
    { 150.0f, 0.5555555f, 0x400, 0x1E0000, 0, 1, 0 },
    { { 0.0f, -5.0f, 0.0f }, 6.0f, { 0 }, 0x8005 },
};

extern "C" {
TBoss3VoloptHiraisin *__dt__20TBoss3VoloptHiraisinFv(TBoss3VoloptHiraisin *hiraisin, s16 flag);
void run_task__20TBoss3VoloptHiraisinFv();
void render__20TBoss3VoloptHiraisinFv();
void render_shadows__9TObjEnemyFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data__13TUnk_804B9870FPv();
void reset_motion_fields__13TUnk_804806E8Fv();
void vfunc_9__13TUnk_804806E8Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void vfunc_12__9TObjEnemyFv();
void vfunc_13__13TUnk_804AF8A0Fl();
void add_actor_exp__13TUnk_804806E8Fl();
void consume_timer_field__13TUnk_804806E8Fl();
void get_actor_level_index__13TUnk_804806E8Fv();
void update_actor_ground_y__13TUnk_804806E8Fv();
void vfunc_18__13TUnk_804806E8FPUc();
void is_actor_cadence_frame__13TUnk_804806E8Fl();
void select_melee_contact_body__13TUnk_804806E8FPvf();
void calc_distance_accuracy_penalty__13TUnk_804806E8FPvPvPvf();
void receive_physical_attack__13TUnk_804806E8FPvf();
void receive_direct_attack__13TUnk_804806E8FPvPvPvll();
void receive_weapon_special_attack__10TObjPlayerFv();
void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
void try_start_action__13TUnk_804806E8Fll();
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
void vfunc_28__15TObjEnemyCustomFv();
void vfunc_29__13TUnk_804806E8Fv();
void is_target_in_attack_range__13TUnk_804806E8Fv();
void test_flag_256__13TUnk_804806E8Fv();
void test_flag30_512__13TUnk_804806E8Fv();
void has_flag_0x800__13TUnk_804806E8Fv();
void test_flag_1000__13TUnk_804806E8Fv();
void update_poison_status__13TUnk_804806E8Fv();
void update_action_hold_status__13TUnk_804806E8Fv();
void vfunc_37__13TUnk_804806E8Fv();
void update_flag30_timer__13TUnk_804806E8Fv();
void update_movement_status__13TUnk_804806E8Fv();
void update_shock_clock__13TUnk_804806E8Fv();
void update_attack_stat_status__13TUnk_804806E8Fv();
void update_defense_stat_status();
void vfunc_43__13TUnk_804806E8Fv();
void apply_poison_status__13TUnk_804806E8Fv();
void apply_paralysis__13TUnk_804806E8Fv();
void apply_slow_status__13TUnk_804806E8Fv();
void apply_confusion_status__13TUnk_804806E8Fv();
void apply_movement_ailment__13TUnk_804806E8Fl();
void apply_shock_status__13TUnk_804806E8Fv();
void clear_harmful_statuses__13TUnk_804806E8Fv();
void apply_attack_stat_status__13TUnk_804806E8FPv();
void cure_poison_ailment__13TUnk_804806E8Fv();
void cure_paralysis__13TUnk_804806E8Fv();
void clear_all_status_effects__13TUnk_804806E8Fv();
void apply_action_hold_status__13TUnk_804806E8Ff();
void apply_anti_technique__13TUnk_804806E8Fl();
void vfunc_58__15TObjEnemyCustomFv();
void vfunc_59__15TObjEnemyCustomFv();
void vfunc_60__15TObjEnemyCustomFv();
void vfunc_61__15TObjEnemyCustomFv();
void vfunc_62__15TObjEnemyCustomFv();
void vfunc_63__15TObjEnemyCustomFv();
void reset_pose__13TUnk_804806E8Fv();
void vfunc_65__15TObjEnemyCustomFll();
void vfunc_66__13TUnk_804806E8Fv();
void vfunc_67__13TUnk_804806E8Ff();
void get_pos__13TUnk_804806E8Fl();
void apply_switch_attack__13TUnk_804806E8Fv();
void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
void trigger_switch_attack__10TObjPlayerFi();
void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
void vfunc_73__13TUnk_804806E8Fv();
void vfunc_74__9TObjEnemyFl();
void vfunc_75__13TUnk_804806E8Ff();
void vfunc_76__13TUnk_804806E8Fv();
void vfunc_77__13TUnk_804806E8Fv();
void vfunc_78__13TUnk_804806E8Fl();
void vfunc_79__15TObjEnemyCustomFv();
void apply_hit_message_flags__9TObjEnemyFPv();
void apply_set_data__9TObjEnemyFPv();
void clear_lobby_object_state__9TObjEnemyFv();
}

extern "C" void *__vt__20TBoss3VoloptHiraisin[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__20TBoss3VoloptHiraisinFv, (void *)&run_task__20TBoss3VoloptHiraisinFv,
    (void *)&render__20TBoss3VoloptHiraisinFv, (void *)&render_shadows__9TObjEnemyFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&select_melee_contact_body__13TUnk_804806E8FPvf, (void *)&calc_distance_accuracy_penalty__13TUnk_804806E8FPvPvPvf, (void *)&receive_physical_attack__13TUnk_804806E8FPvf, (void *)&receive_direct_attack__13TUnk_804806E8FPvPvPvll,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__13TUnk_804806E8Fv, (void *)&test_flag_256__13TUnk_804806E8Fv,
    (void *)&test_flag30_512__13TUnk_804806E8Fv, (void *)&has_flag_0x800__13TUnk_804806E8Fv, (void *)&test_flag_1000__13TUnk_804806E8Fv, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&vfunc_37__13TUnk_804806E8Fv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status__13TUnk_804806E8Fv, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Ff,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__13TUnk_804806E8Fv, (void *)&enemy_spawn_jellen_effect__13TUnk_804806E8Fv, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect__13TUnk_804806E8Fv, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};

static void *volopt_hiraisin_stats;
static void *volopt_hiraisin_stats_b;
static void *volopt_hiraisin_object_params;
static void *volopt_hiraisin_stat_table;
static BmlResource *volopt_hiraisin_resources;
static ModelNode *volopt_hiraisin_spin_node;
static TUnk_8048FA00 *volopt_hiraisin_breakup_model;

void TBoss3VoloptHiraisin::clear_flag_08000000() {
    clear_player_status_flag(0, 0x08000000);
}

void TBoss3VoloptHiraisin::set_flag_08000000() {
    set_indexed_flags(0, 0x08000000);
}

s32 TBoss3VoloptHiraisin::sub_80040FCC() {
    return (((ActorCollisionState *)m_a4)->flags >> 1) & 1;
}

void TBoss3VoloptHiraisin::sub_80040FDC() {
    switch (state) {
    case -1:
        break;
    case 0:
        m_388 |= 1;
        m_b8 = 0;
        advance_animation_playback(this);
        position[1] = 80.0f;
        actorFlags |= 0x40000;
        ((CollisionState *)m_a4)->flags |= 4;
        ((CollisionState *)m_a4)->flags &= ~2;
        play_sound_effect(0x4003A306, (Vec *)position, 0, 0);
        state = 1;
    case 1:
        position[1] -= 0.5f;
        if (position[1] <= 50.0f) {
            position[1] = 50.0f;
            m_388 &= ~1;
            actorFlags &= ~0x40000;
            vfunc_59();
        }
        break;
    }
    refresh_collision_body_centers();
}

void TBoss3VoloptHiraisin::start_attack() {
    s16 max_hp;
    u32 flags;
    TBoss3Volopt::create_breakup_mdl((s32)volopt_hiraisin_breakup_model, (s32)&volopt_hiraisin_params,
                                     TObjFish__sub_8001EDB0(volopt_hiraisin_resources, 0x10), (s32)&m_2fc, rotation_y);
    trigger_dell_biter_events__10TObjPlayerFv((Vec *)&m_2fc);
    play_sound_effect(0x4001C112, (Vec *)position, 0, 0);
    m_388 &= ~1;
    max_hp = hpmax;
    referenceHp = max_hp;
    hp = max_hp;
    flags = actorFlags;
    actorFlags = flags & ~0xA00;
    sub_800C7860();
}

void TBoss3VoloptHiraisin::sub_8004118C() {
    switch (state) {
    case 0:
        m_b8 = 0;
        state = 1;
        break;
    case 1:
        break;
    case -1:
        break;
    }
    refresh_collision_body_centers();
    hover_angle += 0x800;
}

void TBoss3VoloptHiraisin::update_drop() {
    switch (state) {
    case 0:
        m_b8 = 4;
        y_speed = -2.27f;
        state = 1;
        hover_angle = 0;
        break;
    case 1:
        advance_animation_playback(this);
        position[1] = position[1] + y_speed;
        if (position[1] <= 4.6f) {
            position[1] = 4.6f;
            state = 2;
            ((CollisionState *)m_a4)->flags &= ~4;
            ((CollisionState *)m_a4)->flags |= 2;
            play_sound_effect(0x4003A808, (Vec *)position, 0, 0);
        }
        break;
    case 2:
        advance_animation_playback(this);
        if (m_c0 >= anim_end_frame - 1.5f) {
            state = 3;
        }
        break;
    case -1:
        return;
    case 3:
        break;
    }
    update_collisions__10TObjPlayerFv(this);
}

void TBoss3VoloptHiraisin::sub_80041314() {
    switch (state) {
    case -1:
        break;
    case 0:
        actorFlags &= ~0x200000;
        m_b8 = 3;
        state = 1;
    case 1:
        advance_animation_playback(this);
        if (m_b4 != 8) {
            referenceHp = hp;
            actorFlags &= ~0x200;
            m_388 &= ~1;
            vfunc_59();
        }
        break;
    }
    refresh_collision_body_centers();
}

#pragma push
#pragma fp_contract on
void TBoss3VoloptHiraisin::render() {
    f32 scale;
    if (!(actorFlags & 0x02000000) && update_object_view_visibility(400.0f, 40.0f) != 0) {
        TObjFish::set_global_param(texture_id);
        lbl_805D5660 = model_render_flags;
        model_render_flags |= 0x01000000;
        select_actor_lighting((s32)this);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        model_render_flags &= ~0x400;
        post_translate_matrix(position);
        if (m_b4 == 8) {
            translate_matrix(0, 0.0f, 20.0f, 0.0f);
        }
        translate_matrix(0, 0.0f, sin_table_lookup(hover_angle), 0.0f);
        rotate_matrix_y(NULL, rotation_y);
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_chunk_object(model);
        } else {
            draw();
        }
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
        model_render_flags = lbl_805D5660;
        if (position[1] < 50.0f) {
            push_matrix();
            scale = 1.0f - 0.02202643f * (position[1] - 4.6f);
            translate_matrix(0, position[0], 4.5f, position[2]);
            scale_matrix(NULL, scale, scale, scale);
            TObjFish::set_global_param(TObjFish__sub_8001EDB0(volopt_hiraisin_resources, 0));
            draw_chunk_object((void *)get_bml_model(volopt_hiraisin_resources, 0));
            pop_matrix();
        }
    }
}
#pragma pop

void TBoss3VoloptHiraisin::dispatch_state() {
    switch (mode) {
    case 0:
    case 1:
        sub_8004118C();
        break;
    case 4:
        sub_80041314();
        break;
    case 5:
        update_drop();
        break;
    case 7:
        sub_80040FDC();
        break;
    }
}

void TBoss3VoloptHiraisin::run_task() {
    if (TObjPlayer::check_demo_mode() != 1) {
        if (mode != 5) {
            if (has_flag_0x800() != 0) {
                vfunc_63();
            } else if (test_flag30_512() != 0) {
                vfunc_62();
            }
        }
        if (mode != (s32)next_action) {
            if ((s32)state != -1) {
                state = -1;
                dispatch_state();
            }
            mode = next_action;
            state = 0;
        }
        dispatch_state();
        VecCopy((Vec *)&m_2fc, (Vec *)position);
        if (mode != 5) {
            m_300 -= 30.0f;
        }
        copy_position();
        submit_cursor_candidate(this, -1);
        minimap_render_dot((Vec *)position, -0x5DB4, 1, 0);
        volopt_hiraisin_spin_node->rotation_y += 0x4000;
        clear_all_status_effects();
    }
}

void TBoss3VoloptHiraisin::destroy() {
    delete volopt_hiraisin_breakup_model;
    volopt_hiraisin_breakup_model = NULL;
}

void TBoss3VoloptHiraisin::init_models() {
    TUnk_8048FA00 *breakup;
    volopt_hiraisin_resources = boss3_volopt_resources;
    volopt_hiraisin_spin_node = (ModelNode *)TBoss3Volopt::collect_and_count(get_bml_model(boss3_volopt_resources, 0x10), 0xB);
    volopt_hiraisin_spin_node->flags &= ~2;
    breakup = (TUnk_8048FA00 *)alloc__23TAdSinglePlyChrSelectGCFv(0x10);
    if (breakup != NULL) {
        breakup = init_from_model__11TBreakUpMdlFl(breakup, get_bml_model(volopt_hiraisin_resources, 0x10));
    }
    volopt_hiraisin_breakup_model = breakup;
    volopt_hiraisin_stats = TLobby::register_boss(0x24);
    volopt_hiraisin_stats_b = TLobby::dispatch_shared_handler_b(0x24);
    volopt_hiraisin_object_params = TLobby::register_object(0x24);
    volopt_hiraisin_stat_table = TLobby::dispatch_shared_handler_a(0x24);
}

void *TBoss3VoloptHiraisin::create(void *set_data) {
    TBoss3VoloptHiraisin *hiraisin = (TBoss3VoloptHiraisin *)TObject::operator new(sizeof(TBoss3VoloptHiraisin));
    if (hiraisin != NULL) {
        hiraisin = TBoss3VoloptHiraisin__sub_80041AA0(hiraisin, tl_04, set_data);
    }
    return hiraisin;
}

extern "C" TBoss3VoloptHiraisin *__dt__20TBoss3VoloptHiraisinFv(TBoss3VoloptHiraisin *hiraisin, s16 flag) {
    if (hiraisin != NULL) {
        *(void ***)((u8 *)hiraisin + 0x18) = __vt__20TBoss3VoloptHiraisin;
        free_collision_body_parts(hiraisin);
        __dt__15TObjEnemyCustomFv(hiraisin, 0);
        if (flag > 0) {
            TObject::operator delete(hiraisin);
        }
    }
    return hiraisin;
}

#pragma push
#pragma opt_propagation off
void TBoss3VoloptHiraisin::init_params() {
    HiraisinParams *params = &volopt_hiraisin_params;
    VecCopy((Vec *)&m_2fc, (Vec *)position);
    m_300 -= 30.0f;
    copy_position();
    motion_list = volopt_hiraisin_resources->motions;
    action_table = params->actions;
    set_field_d8((s32)action_table);
    init_collision_body_parts(this, &params->collision, 1);
    variant = 0;
    movementParameters = &params->movement;
    recalc_combat_stats(volopt_hiraisin_stats, volopt_hiraisin_stats_b, volopt_hiraisin_object_params, 1.0f, 1.0f);
    m_b8 = 0;
    set_animation(m_b8);
    set_field_b8(m_b8);
    hp = hpmax;
    m_32e = m_2ba;
    referenceHp = hp;
    set_param(0x2E);
    ((TBoss3Volopt *)this)->reset_photon_effect();
    load_params_from_table(0x10);
    sub_800C7860();
    add_flags_2e4(4);
    obj_setFlags30(this, 0x8000);
    clear_lobby_object_state();
}

extern "C" TBoss3VoloptHiraisin *TBoss3VoloptHiraisin__ct(TBoss3VoloptHiraisin *hiraisin, TUnk_804B9870 *parent, u16 id, s16 group) {
    const char *name;
    TObjEnemyCustom__ct(hiraisin, parent);
    *(void ***)((u8 *)hiraisin + 0x18) = __vt__20TBoss3VoloptHiraisin;
    name = TBoss3VoloptHiraisin_name;
    hiraisin->m_name = name;
    hiraisin->m_1c = id;
    hiraisin->group_index = group;
    hiraisin->m_80 = NULL;
    hiraisin->group_ids[0] = parent->group_ids[0];
    hiraisin->group_ids[1] = parent->group_ids[1];
    hiraisin->position[1] = 80.0f;
    hiraisin->position[0] = boss3_volopt_spawn_pos.x;
    hiraisin->position[2] = boss3_volopt_spawn_pos.z;
    init_params__20TBoss3VoloptHiraisinFv(hiraisin, &boss3_volopt_spawn_pos, name);
    return hiraisin;
}
#pragma pop

extern "C" TBoss3VoloptHiraisin *TBoss3VoloptHiraisin__sub_80041AA0(TBoss3VoloptHiraisin *hiraisin, TObject *parent, void *set_data) {
    TObjEnemyCustom__ct(hiraisin, parent);
    *(void ***)((u8 *)hiraisin + 0x18) = __vt__20TBoss3VoloptHiraisin;
    hiraisin->m_name = TBoss3VoloptHiraisin_name;
    hiraisin->apply_set_data(set_data);
    hiraisin->init_params();
    return hiraisin;
}

void TBoss3VoloptHiraisin::copy_position() {
    VecCopy((Vec *)&m_74, (Vec *)&m_2fc);
}

void TBoss3VoloptHiraisin::load_params_from_table(s32 index) {
    model = (void *)volopt_hiraisin_resources->models[index].model;
    texture_id = volopt_hiraisin_resources->models[index].m_c;
}
