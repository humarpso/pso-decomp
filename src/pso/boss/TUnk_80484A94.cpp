#include "pso/boss/TUnk_80484A94.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss3Volopt_8004812C.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/object/TObjVoloptCage.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TObjPlayer_80141D1C.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/system/vector.h"
#include "pso/unk/text_800870BC.h"
#include "pso/unk/text_803D96A8.h"

extern "C" {
void rotate_matrix_y(s32 matrix, s32 angle);
void rotate_vector_by_matrix(s32 matrix, const Vec *src, Vec *dst);
void vec3_add_to(Vec *v, const Vec *add);
void subtract_vector(Vec *v, const Vec *sub);
u32 csnVector(const Vec *from, const Vec *to, s32 mask);
void play_persistent_sound(s32 id, void *owner, const Vec *pos, s32 a3, s32 flags);
TObjPlayer *get_player_by_client_id(s32 id);
s32 obj_is_hit_receivable(TUnk_804806E8 *actor);
u16 obj_getField1c(TObject *object);
void init_collision_body_parts(TUnk_804AF8A0 *actor, const CollisionBody *bodies, s32 count);
void free_collision_body_parts(TUnk_804AF8A0 *actor);
TUnk_804AF8A0 *construct_collider_proxy__13TUnk_804AF8A0Fv(TUnk_804AF8A0 *actor, TObject *parent);
extern GC_Mtx identity_matrix;
extern void *__vt__13TUnk_80484A94[];
}

static const Vec volopt_shot_forward = {0.0f, 0.0f, 0.0f};

static CollisionBody volopt_shot_collision_body[1] = {
    {{0.0f, 0.0f, 0.0f}, 5.0f, {0}, 0x10103, {0}},
};

s32 TUnk_80484A94::try_capture_target() {
    s32 i;
    TUnk_804806E8 *target;
    TObject *owner;
    TObjPlayer::init_all_slots();
    ((TObjPlayer *)this)->check_object_collisions();
    if (m_a4->flags & 0x80000) {
        for (i = 0; i < 16; i++) {
            target = (TUnk_804806E8 *)TObjPlayer::get_battle_param(i);
            if (target == NULL) {
                break;
            }
            if (obj_is_hit_receivable(target) != 0) {
                DirectAttackPayload hit = {0, 0.0f};
                target->receive_direct_attack(m_up, &hit, NULL, -1, -1);
                owner = m_up;
                if (owner != NULL) {
                    ((TBoss3Volopt *)owner)->create_cage(obj_getField1c(target));
                }
                return 1;
            }
        }
    }
    return 0;
}

void TUnk_80484A94::render() {}

void TUnk_80484A94::run_task() {
    TObjPlayer *player = get_player_by_client_id(target_id);
    if (player != NULL) {
        Vec steer = *(Vec *)&player->m_2fc;
        subtract_vector(&steer, (Vec *)position);
        ((TObjGyaranzoMissile *)&steer)->scale_velocity(fn_800499FC(1));
        vec3_add_to(&velocity, &steer);
        ((TObjGyaranzoMissile *)&velocity)->scale_velocity(fn_800499FC(0));
    }
    VecCopy((Vec *)&m_44, (Vec *)position);
    vec3_add_to((Vec *)position, &velocity);
    direction_to_rotation_yx((u8 *)&velocity, &rotation_y, &rotation_z);
    rotation_z -= 0x4000;
    if (trail != NULL) {
        ((TNowLoading *)trail)->copy_pos(position);
        ((TBoss4Type2 *)trail)->copy_vec3(&m_5c);
    }
    if (glow != NULL) {
        ((TNowLoading *)glow)->copy_pos(position);
        ((TBoss4Type2 *)glow)->copy_vec3(&m_5c);
    }
    if (csnVector((Vec *)&m_44, (Vec *)position, -1) != 0) {
        queue_destruction();
        return;
    }
    if (position[1] < 25.0f && try_capture_target() != 0) {
        queue_destruction();
    }
    if (--lifetime <= 0) {
        queue_destruction();
        return;
    }
    play_persistent_sound(0x4003C11D, this, (Vec *)position, 0, 0);
}

extern "C" TUnk_80484A94 *__dt__13TUnk_80484A94Fv(TUnk_80484A94 *shot, s16 flags) {
    if (shot != NULL) {
        *(void ***)((u8 *)shot + 0x18) = __vt__13TUnk_80484A94;
        free_collision_body_parts(shot);
        if (shot->trail != NULL) {
            ((TObject *)shot->trail)->queue_destruction();
        }
        if (shot->glow != NULL) {
            ((TObject *)shot->glow)->queue_destruction();
        }
        if (shot->m_up != NULL) {
            fn_80049A0C((TObjEnemyCustom *)shot->m_up);
        }
        shot->destroy_particle_controller(0);
        if (flags > 0) {
            TObject::operator delete(shot);
        }
    }
    return shot;
}

TUnk_80484A94 *TUnk_80484A94__ct(TUnk_80484A94 *shot, TObjEnemy *owner, Vec *pos, s32 target_id) {
    construct_collider_proxy__13TUnk_804AF8A0Fv(shot, (TObject *)owner);
    *(void ***)((u8 *)shot + 0x18) = __vt__13TUnk_80484A94;
    init_collision_body_parts(shot, volopt_shot_collision_body, 1);
    shot->entity_id = obj_getField1c((TObject *)owner);
    VecCopy((Vec *)shot->position, pos);
    shot->target_id = target_id;
    shot->m_5c = 0;
    shot->trail = spawn_particle_effect_with_rotation(shot->position, &shot->m_5c, 0x11C, 2);
    shot->glow = spawn_particle_effect_with_rotation(shot->position, &shot->m_5c, 0x11D, 2);
    push_matrix_from(identity_matrix);
    {
        Vec dir = volopt_shot_forward;
        dir.z = fn_800499FC(0);
        rotate_matrix_y(0, ((TUnk_804B9870 *)owner)->rotation_y);
        rotate_vector_by_matrix(0, &dir, &shot->velocity);
    }
    pop_matrix();
    shot->lifetime = TBoss3Volopt__sub_8004816C(0);
    return shot;
}

f32 fn_800499FC(s32 index) {
    return ((f32 *)volopt_cage_params)[index];
}

void fn_80049A0C(TObjEnemyCustom *boss) {
    boss->m_388 &= ~0x100000;
}
