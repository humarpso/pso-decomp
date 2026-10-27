#define TOBJECT_OUT_OF_LINE_HELPERS
#include "types.h"
#include "pso/boss/TBoss3VoloptP01.h"
#include "pso/TMainTask.h"
#include "pso/TParticleCtrl.h"
#include "pso/TTecZondeEff.h"
#include "pso/animation/ActorAnimationState.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/boss/TBoss3Volopt_80040F7C.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/boss/TBoss4Type2_800874F4.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/math/AngleLookup.h"
#include "pso/math/MatrixTransforms.h"
#include "pso/misc/TBreakUpMdl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TOTrapAncient01_80226534.h"
#include "pso/misc/TTecFoie.h"
#include "pso/misc/TTecGiBarta.h"
#include "pso/misc/TTecGiZonde.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/object/TObjLight_80133568.h"
#include "pso/object/TObjVoloptShutter.h"
#include "pso/TObjVoloptShutter.h"
#include "pso/player/TObjPlayer.h"
#include "pso/system/vector.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/unk/text_803E2D70.h"

extern "C" {
u16 obj_getField1c(void *obj);
void obj_setFlags30(void *obj, u32 flags);
s32 play_sound_effect(s32 id, void *pos, s32 a2, s32 a3);
s32 subtract_vector(Vec *a, const Vec *b);
f32 normalize_vector(Vec *v);
void vec3_add_to(Vec *a, const Vec *b);
void matrix_mult_vec(s32 matrix, const Vec *in, Vec *out);
s32 rotate_matrix_y(s32 matrix, s32 angle);
s32 push_matrix();
s32 post_translate_matrix(const void *pos);
s32 advance_animation_playback(void *obj);
void *find_entity_by_id(u16 id);
void init_collision_body_parts(void *obj, void *parts, s32 count);
void free_collision_body_parts(void *obj);
s32 submit_cursor_candidate(void *obj, s32 a1);
s32 minimap_render_dot(void *pos, s32 color, s32 a2, s32 a3);
f32 fabs_float(f32 x);
void *__construct_array(void *array, void *ctor, void *dtor, u32 size, u32 count);
extern Mtx34 identity_matrix;
extern Mtx34 *anim_model_matrix_array;
extern s32 lbl_805D586C;

// TBoss3Volopt.cpp defines these; its header does not declare them yet.
extern Vec boss3_volopt_spawn_pos;
extern BmlResource *boss3_volopt_resources;
extern s32 volopt_active_player_id;
extern u16 lbl_805D271A;
s32 TBoss3Volopt__sub_8003F398(void);
void link_photon__10TObjPlayerFUs(u16 id, s32 a1);
void TObjEnemyCustom__ct(void *obj);
void *__dt__15TObjEnemyCustomFv(void *obj, s16 flags);
void *__dt__15TBoss3VoloptP01Fv(TBoss3VoloptP01 *self, s16 flags);
void run_task__15TBoss3VoloptP01Fv();
void render__15TBoss3VoloptP01Fv();
}
void reset_status_effect_row(u8 *row);

#pragma readonly_strings on
static const char *TBoss3VoloptP01_class_name = "TBoss3VoloptP01";
static const Vec volopt_p01_node_origin = { 0.0f, 0.0f, 0.0f };
static const DirectAttackPayload volopt_p01_zonde_attack = { 3, 0.0f };

static void *volopt_p01_boss_stat_handle_a;
static void *volopt_p01_shared_handler_b;
static void *volopt_p01_object_handle;
static TBoss3VoloptP01Params *volopt_p01_shared_handler_handle;
static BmlResource *TBoss3VoloptP01__resource_bundle;
static TBoss3VoloptBreakupPieces *TBoss3VoloptP01__breakup_model;
static TBoss3VoloptChunkList *volopt_p01_chunk_list;
static u8 *volopt_p01_breakup_color_ptr;

static AnimationAction volopt_p01_action_table[6] = {
    { 1, 0, 0xF, 0.7f, 0x0 },
    { 1, 0, 0xF, 1.0f, 0x1 },
    { 2, 0, 0x0, 0.5f, 0x4 },
    { 2, 0, 0x3, 1.4f, 0x8 },
    { 1, 0, 0xF, 1.0f, 0x10 },
    { 2, 2, 0xC, 1.0f, 0x0 },
};
static TBoss3VoloptP01Movement volopt_p01_movement = { 150.0f, 0.5555555f, 0x400, 0x1E0000, 0, 1, 0 };
static TBoss3VoloptP01CollisionPart volopt_p01_collision_parts = { 0, 18.0f, 0, 8.0f, 0, 0, 0x8003, 0, 0, 0, 0 };
static TBoss3VoloptBreakupParams volopt_p01_breakup_params = { 0x14, { 0.06f, 1.5f, 0.9f, 0.12f, 0.55f, 0.5f } };

// Hand-written until the base slot implementations carry their classes' names.
extern "C" {
void has_flag_0x800__13TUnk_804806E8Fv();
void test_flag30_512__13TUnk_804806E8Fv();
void test_flag_1000__13TUnk_804806E8Fv();
void test_flag_256__13TUnk_804806E8Fv();
void vfunc_65__15TObjEnemyCustomFll();
void vfunc_6__13TUnk_804B9870FPsl();
void vfunc_63__15TObjEnemyCustomFv();
void vfunc_62__15TObjEnemyCustomFv();
void vfunc_61__15TObjEnemyCustomFv();
void vfunc_58__15TObjEnemyCustomFv();
void vfunc_28__15TObjEnemyCustomFv();
void vfunc_29__13TUnk_804806E8Fv();
void vfunc_73__13TUnk_804806E8Fv();
void consume_timer_field__13TUnk_804806E8Fl();
void vfunc_67__13TUnk_804806E8Ff();
void vfunc_66__13TUnk_804806E8Fv();
void apply_slow_status__13TUnk_804806E8Fv();
void update_shock_clock__13TUnk_804806E8Fv();
void vfunc_43__13TUnk_804806E8Fv();
void vfunc_18__13TUnk_804806E8FPUc();
void vfunc_13__13TUnk_804AF8A0Fl();
void vfunc_74__9TObjEnemyFl();
void apply_hit_message_flags__9TObjEnemyFPv();
void add_actor_exp__13TUnk_804806E8Fl();
void apply_action_hold_status__13TUnk_804806E8Ff();
void apply_anti_technique__13TUnk_804806E8Fl();
void apply_attack_stat_status__13TUnk_804806E8FPv();
void apply_confusion_status__13TUnk_804806E8Fv();
void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
void apply_movement_ailment__13TUnk_804806E8Fl();
void apply_object_set_data__13TUnk_804B9870FPv();
void apply_paralysis__13TUnk_804806E8Fv();
void apply_poison_status__13TUnk_804806E8Fv();
void apply_set_data__9TObjEnemyFPv();
void apply_shock_status__13TUnk_804806E8Fv();
void apply_switch_attack__13TUnk_804806E8Fv();
void calc_distance_accuracy_penalty__13TUnk_804806E8FPvPvPvf();
void vfunc_79__15TObjEnemyCustomFv();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void clear_all_status_effects__13TUnk_804806E8Fv();
void clear_harmful_statuses__13TUnk_804806E8Fv();
void cure_paralysis__13TUnk_804806E8Fv();
void cure_poison_ailment__13TUnk_804806E8Fv();
void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
void vfunc_78__13TUnk_804806E8Fl();
void vfunc_77__13TUnk_804806E8Fv();
void vfunc_76__13TUnk_804806E8Fv();
void vfunc_75__13TUnk_804806E8Ff();
void clear_lobby_object_state__9TObjEnemyFv();
void vfunc_9__13TUnk_804806E8Fv();
void get_actor_level_index__13TUnk_804806E8Fv();
void vfunc_12__9TObjEnemyFv();
void get_pos__13TUnk_804806E8Fl();
void is_actor_cadence_frame__13TUnk_804806E8Fl();
void is_target_in_attack_range__13TUnk_804806E8Fv();
void receive_direct_attack__13TUnk_804806E8FPvPvPvll();
void receive_physical_attack__13TUnk_804806E8FPvf();
void receive_weapon_special_attack__10TObjPlayerFv();
void render_shadows__9TObjEnemyFv();
void reset_motion_fields__13TUnk_804806E8Fv();
void reset_pose__13TUnk_804806E8Fv();
void roll_physical_accuracy__13TUnk_804806E8FPvlf();
void select_melee_contact_body__13TUnk_804806E8FPvf();
void trigger_switch_attack__10TObjPlayerFi();
void try_start_action__13TUnk_804806E8Fll();
void update_action_hold_status__13TUnk_804806E8Fv();
void vfunc_37__13TUnk_804806E8Fv();
void update_actor_ground_y__13TUnk_804806E8Fv();
void update_attack_stat_status__13TUnk_804806E8Fv();
void update_defense_stat_status();
void update_flag30_timer__13TUnk_804806E8Fv();
void vfunc_60__15TObjEnemyCustomFv();
void vfunc_59__15TObjEnemyCustomFv();
void update_movement_status__13TUnk_804806E8Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void update_poison_status__13TUnk_804806E8Fv();
void *__vt__15TBoss3VoloptP01[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__15TBoss3VoloptP01Fv, (void *)&run_task__15TBoss3VoloptP01Fv,
    (void *)&render__15TBoss3VoloptP01Fv, (void *)&render_shadows__9TObjEnemyFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
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
}

void TBoss3VoloptP01::cast_tech_on_players() {
    Vec pos;
    s32 n;
    s32 i;
    TObjPlayer *player;
    s32 j;
    TObjPlayer *target;
    s32 k;

    get_node_position(12, &pos);
    switch (volopt_active_player_id) {
    case 0:
        fn_80044330(&targets);
        n = 0;
        for (i = 0; i < lbl_805D586C; i++) {
            player = TObjPlayer::get_player_data(i);
            if (player != NULL && obj_getField1c(player) < 0x1000 && !(player->actorFlags & 0x02000800)) {
                targets.records[n].id = obj_getField1c(player);
                targets.records[n].flag = 1;
                n++;
            }
        }
        targets.count = n;
        if (n > 0) {
            ((TTecGiZonde *)this)->create(&pos, &targets, (void *)0x1D);
        }
        break;
    case 1:
        for (j = 0; j < lbl_805D586C; j++) {
            player = TObjPlayer::get_player_data(j);
            if (player != NULL && obj_getField1c(player) < 0x1000 && !(player->actorFlags & 0x02000800)) {
                TTecFoie::create_ex(this, &pos, &player->m_2fc, (void *)0x1D);
            }
        }
        break;
    case 2:
        for (k = 0; k < lbl_805D586C; k++) {
            target = TObjPlayer::get_player_data(k);
            if (target != NULL && obj_getField1c(target) < 0x1000 && !(target->actorFlags & 0x02000800)) {
                ((TTecGiBarta *)this)->create(&pos, &target->m_2fc, (void *)0x1D);
            }
        }
        break;
    }
}

s32 TBoss3VoloptP01::fire_zonde_at_players() {
    TObjPlayer *list[4];
    Vec pos;
    Vec dir;
    s32 n;
    TObjPlayer *player;
    Vec *target_pos;
    TObjPlayer *target;
    s32 i;
    s32 j;
    TBoss3VoloptHiraisin *hiraisin;
    f32 len;
    TTecZondeEff *bolt;
    DirectAttackPayload attack = volopt_p01_zonde_attack;

    attack.power = sub_800443DC(0);
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        player = TObjPlayer::get_player_data(i);
        if (player == NULL || obj_getField1c(player) >= 0x1000) {
            break;
        }
        if (!(player->actorFlags & 0x02000800)) {
            list[n] = player;
            n++;
        }
    }
    if (n > 0) {
        get_node_position(12, &pos);
        for (j = 0; j < n; j++) {
            target = list[j];
            target_pos = (Vec *)&target->m_2fc;
            VecCopy(&dir, target_pos);
            subtract_vector(&dir, &pos);
            len = normalize_vector(&dir);
            bolt = (TTecZondeEff *)TObject::operator new(0x260);
            if (bolt != NULL) {
                bolt->construct((u8 *)tl_07, (u8 *)&pos, (u8 *)&dir, len);
            }
            VecCopy(&pos, target_pos);
            {
                DirectAttackPayload hit = attack;
                target->receive_direct_attack(this, &hit, NULL, -1, -1);
            }
        }
        hiraisin = (TBoss3VoloptHiraisin *)find_entity_by_id(lbl_805D271A);
        if (hiraisin != NULL) {
            Vec to_hiraisin = *(Vec *)hiraisin->position;
            subtract_vector(&to_hiraisin, &pos);
            len = normalize_vector(&to_hiraisin);
            bolt = (TTecZondeEff *)TObject::operator new(0x260);
            if (bolt != NULL) {
                bolt->construct((u8 *)tl_07, (u8 *)&pos, (u8 *)&to_hiraisin, len);
            }
            if (TBoss3Volopt__sub_80040FCC(hiraisin) != 0) {
                TBoss3VoloptActionPacket packet;
                ((TBoss3Volopt *)&packet)->set_type();
                packet.id = m_1c;
                packet.action = 2;
                ((TBoss3Volopt *)&packet)->finalize_and_send_60();
            }
        }
        play_sound_effect(0x4002A509, NULL, 0, 0);
    }
    return n;
}

void TBoss3VoloptP01::set_primary(s32 primary) {
    if (obj_testFlags30(0x800) == 0) {
        m_388 &= ~1;
        ((TObjEneMe1GiGue *)this)->update_if_active(2);
        is_primary = primary;
    }
}

void TBoss3VoloptP01::push_nearby_players() {
    f32 radius_sq;
    s32 i;
    TObjPlayer *player;

    radius_sq = 64.0f;
    for (i = 0; i < lbl_805D586C; i++) {
        player = TObjPlayer::get_player_data(i);
        if (player == NULL || obj_getField1c(player) >= 0x1000) {
            break;
        }
        {
            Vec v = *(Vec *)player->position;
            subtract_vector(&v, (Vec *)position);
            if (v.x * v.x + v.z * v.z <= radius_sq) {
                v.y = 0.0f;
                ((TObjGyaranzoMissile *)&v)->scale_velocity(13.0f);
                vec3_add_to((Vec *)player->position, &v);
            }
        }
    }
}

BOOL TBoss3VoloptP01::is_mode_0() {
    return mode == 0;
}

void TBoss3VoloptP01::get_node_position(s32 node, Vec *out) {
    push_matrix_from(identity_matrix);
    translate_matrix(0, position[0], position[1] + y_offset, position[2]);
    rotate_matrix_y(0, rotation_y);
    render_anim_model(m_c0);
    pop_matrix();
    Vec origin = volopt_p01_node_origin;
    push_matrix_from(anim_model_matrix_array[node]);
    matrix_mult_vec(0, &origin, out);
    pop_matrix();
}

void TBoss3VoloptP01::sub_80042F84() {
    if (obj_testFlags30(0x04000800) == 0) {
        ((TObjEneMe1GiGue *)this)->update_if_active(9);
    }
}

#pragma push
#pragma opt_common_subs off
s32 TBoss3VoloptP01::update_sink() {
    y_offset -= 2.9333334f;
    if (y_offset <= -40.0f) {
        y_offset = -40.0f;
        rise_phase = 0;
        ((TBoss3VoloptP01Collision *)m_a4)->flags &= ~1;
        return 1;
    }
    return 0;
}
#pragma pop

s32 TBoss3VoloptP01::update_rise() {
    switch (rise_phase) {
    case 0:
        y_offset += 2.9333334f;
        if (y_offset >= 4.0f) {
            rise_phase = 1;
        }
        break;
    case 1: {
        f32 rest = 0.0f;
        y_offset += -0.6666667f;
        if (y_offset <= rest) {
            y_offset = rest;
            return 1;
        }
        break;
    }
    default:
        rise_phase = 0;
        break;
    }
    return 0;
}

void TBoss3VoloptP01::start_rise() {
    rise_phase = 0;
    y_offset = -40.0f;
    ((TBoss3VoloptP01Collision *)m_a4)->flags |= 1;
}

void TBoss3VoloptP01::update_attack() {
    sub_8004292C();
    switch (state) {
    case 0:
        charge_effect = NULL;
        if (m_388 & 0x10000) {
            state = resume_state;
            switch (state) {
            case 2:
            case 3:
                m_b8 = 5;
                break;
            case 5: {
                Vec v;
                get_node_position(5, &v);
                charge_effect = (TObject *)create_particle_emitter(&v, 0x11A);
                m_b8 = 2;
                break;
            }
            case 6:
                m_b8 = 2;
                advance_animation_playback(this);
                m_c0 = 8.0f;
                state = 7;
                break;
            }
        } else {
            quarter_hp = hpmax / 4;
            m_b8 = 5;
            start_rise();
            m_388 |= 0x10000;
            shutter->open();
            *(s16 *)&timer = 0x14;
            resume_state = 1;
            state = 1;
            push_nearby_players();
            cast_count = 0;
        }
        if (is_primary != 0) {
            m_388 |= 0x80000;
        } else {
            m_388 &= ~0x80000;
        }
        advance_animation_playback(this);
        break;
    case 1:
        set_flags_30();
        if (--*(s16 *)&timer <= 0) {
            play_sound_effect(0x4003A306, position, 0xA, 0);
            state = 2;
        }
        break;
    case 2:
        set_flags_30();
        if (update_rise() == 1) {
            resume_state = 3;
            state = 3;
        }
        break;
    case 3:
        advance_animation_playback(this);
        if (m_b8 == 2) {
            if (is_primary != 0) {
                resume_state = 4;
                state = 4;
            } else {
                resume_state = 0xC;
                state = 0xC;
                m_388 &= ~0x10000;
                attack_timer = 0xAF;
            }
        }
        break;
    case 4: {
        Vec v;
        attack_timer = 0x19;
        get_node_position(5, &v);
        charge_effect = (TObject *)create_particle_emitter(&v, 0x11A);
        resume_state = 5;
        state = 5;
    }
    case 5:
        play_persistent_sound(0x4002B51E, (s32)this, (u32)position, 0, 0);
        if (--attack_timer <= 0) {
            if (charge_effect != NULL) {
                charge_effect->queue_destruction();
                charge_effect = NULL;
            }
            resume_state = 6;
            state = 6;
        }
        break;
    case 6:
        advance_animation_playback(this);
        if (m_c0 >= 8.0f) {
            state = 7;
        }
        break;
    case 7:
        if (is_primary != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                cast_tech_on_players();
            } else {
                fire_zonde_at_players();
            }
            cast_count++;
        }
        m_388 &= ~0x10000;
        *(s16 *)&timer = 0x78;
        state = 8;
    case 8:
        (*(s16 *)&timer)--;
        if (*(s16 *)&timer <= 0) {
            state = 9;
        }
        break;
    case 9:
        advance_animation_playback(this);
        if (m_b4 != 4) {
            if (cast_count >= 2) {
                state = 0xA;
            } else {
                state = 4;
            }
        }
        break;
    case 10:
        set_flags_30();
        play_sound_effect(0x4003A810, position, 0xA, 0);
        state = 0xB;
    case 11:
        set_flags_30();
        if (update_sink() == 1) {
            shutter->close();
            vfunc_58();
            m_388 &= ~0x80000;
        }
        break;
    case 12:
        if (--attack_timer <= 0) {
            state = 0xA;
        }
        break;
    case -1:
        if (charge_effect != NULL) {
            charge_effect->queue_destruction();
            charge_effect = NULL;
        }
        break;
    }
    submit_cursor_candidate(this, -1);
    minimap_render_dot(position, -0x5DB4, 1, 0);
    if ((s32)state != -1) {
        last_state = state;
    }
}

#pragma push
#pragma fp_contract on
void TBoss3VoloptP01::run_state_machine() {
    sub_8004292C();
    switch (state) {
    case 0:
        m_b8 = 0;
        advance_animation_playback(this);
        glow_effect = NULL;
        if (!(m_388 & 0x20000)) {
            effect_timer = 0x96;
            m_388 |= 0x20000;
        }
        if (y_offset >= 0.0f) {
            state = 2;
        } else {
            start_rise();
            shutter->open();
            push_nearby_players();
            state = 1;
        }
        m_388 &= ~0x80000;
        break;
    case 1:
        set_flags_30();
        if (update_rise() == 1) {
            state = 2;
        }
        break;
    case 2:
        if (glow_effect == NULL) {
            glow_effect = (TObject *)create_particle_emitter(&m_2fc, 0x21);
            ((TBoss4Type2 *)glow_effect)->set_flags(0x40U);
        }
        state = 3;
    case 3:
        if (glow_effect != NULL) {
            ((TNowLoading *)glow_effect)->copy_pos(&m_2fc);
        }
        effect_timer--;
        if (effect_timer <= 0) {
            if (glow_effect != NULL) {
                glow_effect->queue_destruction();
                glow_effect = NULL;
            }
            state = 4;
            m_388 &= ~0x20000;
        }
        break;
    case 4:
        set_flags_30();
        if (update_sink() == 1) {
            shutter->close();
            vfunc_58();
        }
        break;
    case -1:
        if (glow_effect != NULL) {
            glow_effect->queue_destruction();
            glow_effect = NULL;
        }
        break;
    }
    submit_cursor_candidate(this, -1);
    minimap_render_dot(position, -0x5DB4, 1, 0);
}
#pragma pop

void TBoss3VoloptP01::sub_80043758() {
    switch (state) {
    case 0:
        actorFlags |= 0x40000;
        m_b8 = 0;
        advance_animation_playback(this);
        y_offset = -40.0f;
        shutter->close();
        is_primary = 0;
        m_388 &= ~0x80000;
        state = 1;
        break;
    case 1:
        break;
    case -1:
        actorFlags &= ~0x40000;
        break;
    }
}

void TBoss3VoloptP01::update_breakup() {
    switch (state) {
    case 0:
        set_flags_30();
        actorFlags |= 0x44040000;
        actorFlags &= ~0x20000000;
        ((TBoss3VoloptP01Collision *)m_a4)->flags |= 0x1000;
        m_b8 = 4;
        state = 1;
        *(s16 *)&timer = 0x5A;
        TObjPlayer::spawn_effect_f8((s32)&m_2fc, *(s16 *)&timer);
        if (is_primary != 0) {
            volopt_breakup_flag = 1;
            link_photon__10TObjPlayerFUs(m_2d4, 0);
            TObjPlayer::set_grabbed_state(0x12C);
        }
        state = 1;
    case 1:
        advance_animation_playback(this);
        (*(s16 *)&timer)--;
        if (*(s16 *)&timer < 0) {
            TBoss3Volopt::create_breakup_mdl((s32)TBoss3VoloptP01__breakup_model, (s32)&volopt_p01_breakup_params, texture_id, (s32)&m_2fc, rotation_y);
            ((TObjPlayer *)&m_2fc)->trigger_dell_biter_events();
            m_388 |= 0x40000;
            play_sound_effect(0x4003AD07, position, 0, 0);
            state = 2;
            actorFlags &= ~0x800;
        }
        break;
    case -1:
        return;
    case 2:
        break;
    }
    ((TObjPlayer *)this)->update_collisions();
}

void TBoss3VoloptP01::update_state() {
    u32 flags;

    switch (state) {
    case 0:
        actorFlags &= ~0x00200200;
        referenceHp = hp;
        if (is_primary != 0) {
            volopt_breakup_flag = 1;
            link_photon__10TObjPlayerFUs(m_2d4, 0);
            TObjPlayer::set_grabbed_state(0x12C);
        }
        if (TBoss3Volopt__sub_8003F398() != 0) {
            flags = m_388;
            if (flags & 0x10000) {
                m_388 = flags & ~1;
                next_action = 2;
                mode = 2;
                state = last_state;
            } else if (flags & 0x20000) {
                m_388 = flags & ~1;
                sub_80042F84();
            } else {
                play_sound_effect(0x4003A810, position, 0xA, 0);
                state = 2;
            }
        } else {
            m_b8 = 3;
            state = 1;
        case 1:
            advance_animation_playback(this);
            if (m_b4 != 8) {
                flags = m_388;
                if (flags & 0x10000) {
                    m_388 = flags & ~1;
                    vfunc_60();
                } else if (flags & 0x20000) {
                    m_388 = flags & ~1;
                    sub_80042F84();
                } else {
                    play_sound_effect(0x4003A810, position, 0xA, 0);
                    state = 2;
                }
            }
        }
        break;
    case 2:
        if (update_sink() == 1) {
            m_388 &= ~1;
            vfunc_58();
        }
        break;
    case -1:
        m_388 &= ~1;
        break;
    }
    submit_cursor_candidate(this, -1);
    minimap_render_dot(position, -0x5DB4, 1, 0);
}

void TBoss3VoloptP01::render() {
    u32 flags;

    if (!(actorFlags & 0x02000000) && update_object_view_visibility(400.0f, 40.0f) != 0) {
        TObjFish::set_global_param(texture_id);
        select_actor_lighting((s32)this);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        if (TObjPlayer::check_demo_mode() == 1) {
            post_translate_matrix(position);
            rotate_matrix_y(0, rotation_y);
            draw_chunk_object(model);
        } else {
            translate_matrix(0, position[0], position[1] + y_offset, position[2]);
            rotate_matrix_y(0, rotation_y);
            flags = m_388;
            if (flags & 0x40000) {
                draw_chunk_model(((TBoss3VoloptP01Model *)model)->pieces->root);
            } else {
                if (flags & 0x80000) {
                    volopt_p01_breakup_color_ptr[7] = 255.0f * fabs_float(sin_table_lookup(pulse_angle));
                    volopt_p01_breakup_color_ptr[4] = 0;
                    volopt_p01_breakup_color_ptr[5] = 0;
                } else {
                    volopt_p01_breakup_color_ptr[7] = 0;
                    volopt_p01_breakup_color_ptr[4] = 0xCC;
                    volopt_p01_breakup_color_ptr[5] = 0xFF;
                }
                draw();
            }
        }
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
    }
}

void TBoss3VoloptP01::sub_80043CA8() {}

void TBoss3VoloptP01::dispatch_state() {
    switch (mode) {
    case 0: sub_80043758(); return;
    case 2: update_attack(); return;
    case 4: update_state(); return;
    case 9: run_state_machine(); return;
    case 5: update_breakup(); break;
    }
}

void TBoss3VoloptP01::run_task() {
    f32 y;
    s32 angle;

    if (TObjPlayer::check_demo_mode() == 1) {
        sub_80043CA8();
        return;
    }
    if (has_flag_0x800() != 0) {
        vfunc_63();
    } else if (test_flag30_512() != 0 && !(actorFlags & 0x04000000)) {
        vfunc_62();
    }
    if (obj_testFlags30(0x4000) != 0) {
        if (((TObjPlayer *)this)->add_status_effect_timer(4, -1) <= 0) {
            reset_status_effect_row(unk_284);
            obj_clearFlags30(0x4000);
        }
    } else {
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
        y = m_300;
        m_300 = y + (18.0f + y_offset);
        ((TBoss3VoloptP01Collision *)m_a4)->height = 18.0f + y_offset;
        ((TBoss3VoloptHiraisin *)this)->copy_position();
        angle = pulse_angle;
        pulse_angle = angle + 0x400;
        clear_all_status_effects();
    }
}

void TBoss3VoloptP01::destroy() {
    delete TBoss3VoloptP01__breakup_model;
    TBoss3VoloptP01__breakup_model = NULL;
}

void TBoss3VoloptP01::init_breakup_effect() {
    TBoss3VoloptBreakupPieces *pieces;

    TBoss3VoloptP01__resource_bundle = boss3_volopt_resources;
    pieces = (TBoss3VoloptBreakupPieces *)((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    if (pieces != NULL) {
        pieces = (TBoss3VoloptBreakupPieces *)((TBreakUpMdl *)pieces)->init_from_model(TBoss3VoloptP01__resource_bundle->models[17].model);
    }
    TBoss3VoloptP01__breakup_model = pieces;
    volopt_p01_chunk_list = (TBoss3VoloptChunkList *)TBoss3Volopt::collect_and_count(TBoss3VoloptP01__resource_bundle->models[17].model, 0xD);
    volopt_p01_boss_stat_handle_a = TLobby::register_boss(0x22);
    volopt_p01_shared_handler_b = TLobby::dispatch_shared_handler_b(0x22);
    volopt_p01_object_handle = TLobby::register_object(0x22);
    volopt_p01_shared_handler_handle = (TBoss3VoloptP01Params *)TLobby::dispatch_shared_handler_a(0x22);
    volopt_p01_breakup_color_ptr = volopt_p01_chunk_list->first->color;
}

void *TBoss3VoloptP01::create(void *set_data) {
    TBoss3VoloptP01 *o = (TBoss3VoloptP01 *)TObject::operator new(0x418);
    if (o != NULL) {
        o = TBoss3VoloptP01__sub_800442A0(o, tl_04, set_data);
    }
    return o;
}

void *__dt__15TBoss3VoloptP01Fv(TBoss3VoloptP01 *self, s16 flags) {
    if (self != NULL) {
        *(void **)((u8 *)self + 0x18) = __vt__15TBoss3VoloptP01;
        free_collision_body_parts(self);
        __dt__15TObjEnemyCustomFv(self, 0);
        if (flags > 0) {
            TObject::operator delete(self);
        }
    }
    return self;
}

void TBoss3VoloptP01::init_params() {
    motion_list = TBoss3VoloptP01__resource_bundle->motions;
    action_table = volopt_p01_action_table;
    set_field_d8((s32)action_table);
    init_collision_body_parts(this, &volopt_p01_collision_parts, 1);
    variant = 0;
    movementParameters = &volopt_p01_movement;
    recalc_combat_stats(volopt_p01_boss_stat_handle_a, volopt_p01_shared_handler_b, volopt_p01_object_handle, 1.0f, 1.0f);
    m_b8 = 0;
    set_animation(m_b8);
    set_field_b8(m_b8);
    hp = hpmax;
    m_32e = m_2ba;
    referenceHp = hp;
    set_param(0x2E);
    update_prev_position();
    ((TBoss3Volopt *)this)->reset_photon_effect();
    load_model(17);
    start_rise();
    ((TBoss3VoloptP01Collision *)m_a4)->flags &= ~1;
    charge_effect = NULL;
    glow_effect = NULL;
    add_flags_2e4(4);
    obj_setFlags30(this, 0x8000);
    clear_lobby_object_state();
}

#pragma push
#pragma fp_contract on
TBoss3VoloptP01 *TBoss3VoloptP01__ct(TBoss3VoloptP01 *self, TBoss3Volopt *parent, s32 index, u16 id, s32 angle_param) {
    s32 angle;
    TObjVoloptShutter *shutter;

    TObjEnemyCustom__ct(self);
    *(void **)((u8 *)self + 0x18) = __vt__15TBoss3VoloptP01;
    ((TObjPlayer *)&self->targets)->construct_target_cursor_records();
    self->m_name = TBoss3VoloptP01_class_name;
    self->m_1c = id;
    *(s16 *)&self->m_2c = angle_param;
    self->m_80 = NULL;
    *(s16 *)&self->m_28 = *(s16 *)&parent->m_28;
    *((s16 *)&self->m_28 + 1) = *((s16 *)&parent->m_28 + 1);
    self->init_params();
    angle = (s32)(182.04445f * (f32)(index * 60));
    self->position[0] = 76.0f * cos_table_lookup(angle) + boss3_volopt_spawn_pos.x;
    self->position[2] = 76.0f * sin_table_lookup(angle) + boss3_volopt_spawn_pos.z;
    self->position[1] = 0.0f;
    self->rotation_y = -0x4000 - angle;
    shutter = (TObjVoloptShutter *)TObject::operator new(0x34);
    if (shutter != NULL) {
        shutter = (TObjVoloptShutter *)__ct__17TObjVoloptShutterFv((u8 *)shutter, index);
    }
    self->shutter = shutter;
    return self;
}
#pragma pop

TBoss3VoloptP01 *TBoss3VoloptP01__sub_800442A0(TBoss3VoloptP01 *self, TObject *parent, void *set_data) {
    TObjVoloptShutter *shutter;

    TObjEnemyCustom__ct(self);
    *(void **)((u8 *)self + 0x18) = __vt__15TBoss3VoloptP01;
    ((TObjPlayer *)&self->targets)->construct_target_cursor_records();
    self->m_name = TBoss3VoloptP01_class_name;
    self->apply_set_data(set_data);
    self->init_params();
    shutter = (TObjVoloptShutter *)TObject::operator new(0x34);
    if (shutter != NULL) {
        shutter = (TObjVoloptShutter *)__ct__17TObjVoloptShutterFv((u8 *)shutter, 0);
    }
    self->shutter = shutter;
    return self;
}

void fn_80044330(TargetCursorList *list) {
    list->count = 0;
}

int TObjPlayer::construct_target_cursor_records() {
    TargetCursorList *list = (TargetCursorList *)this;

    __construct_array(list->records, (void *)fn_8004438C, NULL, sizeof(TargetCursorRecord), 11);
    fn_80044330(list);
    return (int)list;
}

TargetCursorRecord *fn_8004438C(TargetCursorRecord *record) {
    record->init_cursor_record();
    return record;
}

void TargetCursorRecord::init_cursor_record() {
    id = 0xFFFF;
    flag = 0;
    value = 0.0f;
}

s32 TBoss3VoloptP01::sub_800443DC(s32 index) {
    return volopt_p01_shared_handler_handle->values[index];
}

void TBoss3VoloptP01::load_model(s32 index) {
    model = (void *)TBoss3VoloptP01__resource_bundle->models[index].model;
    texture_id = TBoss3VoloptP01__resource_bundle->models[index].m_c;
}

void TObjVoloptShutter::close() {
    state = 1;
    substate = 0;
}

void TObjVoloptShutter::open() {
    state = 2;
    substate = 0;
}
