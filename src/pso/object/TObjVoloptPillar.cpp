#pragma fp_contract on

#include "pso/object/TObjVoloptPillar.h"
#include "pso/TMainTask.h"
#include "pso/TParticleCtrl.h"
#include "pso/math/MatrixTransforms.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjLight_80133568.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TObjPlayer_800F0810.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/system/BmlResource.h"
#include "pso/system/vector.h"
#include "pso/unk/text_80048118.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/unk/text_803E2D70.h"
#include "pso/boss/TBoss3Volopt_8004812C.h"
#include "pso/boss/TUnk_80484888.h"
#include "pso/unk/text_80049FD8.h"
#include "pso/boss/TBoss3Volopt.h"

extern "C" {
f32 atan2_float(f32 y, f32 x);
s32 obj_is_hit_receivable(TUnk_804806E8 *actor);
s32 push_matrix(void);
void post_translate_matrix(const Vec *v);
void rotate_matrix_x(s32 matrix, s32 angle);
void rotate_matrix_y(s32 matrix, s32 angle);
void scale_matrix(s32 matrix, f32 x, f32 y, f32 z);
void matrix_mult_vec(s32 matrix, const Vec *src, Vec *dst);
void subtract_vector(Vec *v, const Vec *sub);
void play_sound_effect(s32 id, const Vec *pos, s32 a2, s32 a3);
void init_collision_body_parts(TUnk_804AF8A0 *actor, const CollisionBody *bodies, s32 count);
void free_collision_body_parts(TUnk_804AF8A0 *actor);
TUnk_804AF8A0 *construct_collider_proxy__13TUnk_804AF8A0Fv(TUnk_804AF8A0 *actor, TObject *parent);
extern GC_Mtx identity_matrix;
extern void *__vt__16TObjVoloptPillar[];
}


static s32 volopt_pillar_model;
static s32 volopt_pillar_base_model;
static s32 volopt_pillar_textures;
static s32 volopt_pillar_base_textures;

static CollisionBody volopt_pillar_collision_body[1] = {
    {{0.0f, 18.0f, 0.0f}, 5.0f, {0}, 0x8005, {0}},
};

void TObjVoloptPillar::render() {
    f32 scale;
    if (update_object_view_visibility(400.0f, 40.0f) != 0) {
        select_actor_lighting((s32)this);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        post_translate_matrix((Vec *)position);
        TObjFish::set_global_param(volopt_pillar_textures);
        draw_chunk_object((void *)volopt_pillar_model);
        pop_matrix();
        push_matrix();
        translate_matrix(0, position[0], start_y, position[2]);
        TObjFish::set_global_param(volopt_pillar_base_textures);
        draw_chunk_object((void *)volopt_pillar_base_model);
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
        scale = 0.011111111f * (90.0f - position[1]) + 1.0f;
        push_matrix();
        translate_matrix(0, position[0], 0.3f, position[2]);
        rotate_matrix_y(0, rotation_y);
        rotate_matrix_x(0, -0x4000);
        scale_matrix(0, scale, scale, scale);
        draw_blob_shadow(0);
        pop_matrix();
    }
}

void TObjVoloptPillar::run_task() {
    s32 i;
    TUnk_804806E8 *target;
    s32 angle;
    switch (state) {
    case 0:
        timer = TObjVoloptPillar__sub_80048118(5);
        state = 1;
    case 1:
        if (--timer <= 0) {
            fn_80049FD8(this);
            state = 2;
        }
        break;
    case 2:
        position[1] += -16.0f;
        if (position[1] <= 0.0f) {
            timer = 15;
            state = 3;
            m_a4->flags |= 2;
            TObjPlayer::init_all_slots();
            ((TObjPlayer *)this)->check_object_collisions();
            if (m_a4->flags & 0x80000) {
                for (i = 0; i < 16; i++) {
                    target = (TUnk_804806E8 *)TObjPlayer::get_battle_param(i);
                    if (target == NULL) {
                        break;
                    }
                    if (obj_is_hit_receivable(target) != 0) {
                        DirectAttackPayload attack = volopt_pillar_attack;
                        attack.power = TObjVoloptPillar__sub_80048118(1);
                        {
                            DirectAttackPayload hit = attack;
                            target->receive_direct_attack(owner, &hit, NULL, -1, -1);
                        }
                        if (!(target->actorFlags & 0x04000000)) {
                            push_matrix_from(identity_matrix);
                            {
                                Vec away = *(Vec *)target->position;
                                subtract_vector(&away, &boss3_volopt_spawn_pos);
                                angle = volopt_pillar_rad_to_angle * atan2_float(away.x, away.z);
                                {
                                    Vec push = volopt_pillar_push;
                                    push.x = TBoss3Volopt__sub_8004812C(2);
                                    rotate_matrix_y(0, angle);
                                    matrix_mult_vec(0, &push, (Vec *)target->unk_308);
                                }
                            }
                            pop_matrix();
                        }
                    }
                }
            }
            m_a4->flags &= ~1;
            {
                Vec pos = *(Vec *)position;
                pos.y = 5.0f;
                new TUnk_80484888(&pos, 0x11E, 0xF, NULL, 0.25f, 40.0f);
            }
            TCameraCtrl::set_shake_preset(1);
            play_sound_effect(0x4003AD09, (Vec *)position, 0, 0);
        }
        break;
    case 3:
        if (--timer <= 0) {
            state = 4;
        }
        break;
    case 4:
        position[1] += 16.0f;
        if (position[1] >= 90.0f) {
            queue_destruction();
        }
        break;
    }
}

void TObjVoloptPillar::cache_target_values() {
    volopt_pillar_model = boss3_volopt_resources->models[0x17].model;
    volopt_pillar_textures = boss3_volopt_resources->models[0x17].m_c;
    volopt_pillar_base_model = boss3_volopt_resources->models[0x15].model;
    volopt_pillar_base_textures = boss3_volopt_resources->models[0x15].m_c;
}

extern "C" TObjVoloptPillar *__dt__16TObjVoloptPillarFv(TObjVoloptPillar *pillar, s16 flags) {
    if (pillar != NULL) {
        *(void ***)((u8 *)pillar + 0x18) = __vt__16TObjVoloptPillar;
        free_collision_body_parts(pillar);
        pillar->destroy_particle_controller(0);
        if (flags > 0) {
            TObject::operator delete(pillar);
        }
    }
    return pillar;
}

TObjVoloptPillar *TObjVoloptPillar__ct(TObjVoloptPillar *pillar, Vec *pos, TObject *owner) {
    f32 dist;
    construct_collider_proxy__13TUnk_804AF8A0Fv(pillar, tl_04);
    *(void ***)((u8 *)pillar + 0x18) = __vt__16TObjVoloptPillar;
    pillar->m_name = TObjVoloptPillar_name;
    init_collision_body_parts(pillar, volopt_pillar_collision_body, 1);
    VecCopy((Vec *)pillar->position, pos);
    dist = ((TObjPlayer *)pillar->position)->horizontal_distance((u8 *)&boss3_volopt_spawn_pos);
    if (dist < 60.0f) {
        pillar->position[1] = 90.0f;
    } else {
        pillar->position[1] = 90.0f - 0.33333334f * (dist - 60.0f);
    }
    pillar->start_y = pillar->position[1];
    pillar->state = 0;
    pillar->owner = owner;
    return pillar;
}
