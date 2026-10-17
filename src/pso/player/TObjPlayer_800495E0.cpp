#include "types.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TUnk_80484AFC.h"
#include "pso/player/TUnk_80484A94.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjGyaranzoMissile.h"

struct Stack_800496D8
{
  s32 sp8;
  s32 spC;
  s32 sp10;
};

typedef struct Vec_800498E8 {
    f32 x, y, z;
} Vec_800498E8;

typedef struct Obj_800498E8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x38 - 0x1c];
    Vec_800498E8 pos;
    u8 pad44[0x5c - 0x44];
    s32 f5c;
    s32 f60;
    u8 pad64[0xb4 - 0x64];
    Vec_800498E8 fb4;
    u8 padc0[0xcc - 0xc0];
    s32 fcc;
    s32 fd0;
    s32 fd4;
    s32 fd8;
    s16 fdc;
} Obj_800498E8;

struct Dmg_80049A1C { s32 type; f32 val; };

struct VBase_80049A1C { char pad[0x18]; };

struct VObj_80049A1C : VBase_80049A1C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(s32, Dmg_80049A1C *, s32, s32, s32);
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
u32 csnVector(void *, void *, int);
s32 direction_to_rotation_yx(void *, void *, void *);
u8 *get_player_by_client_id(s32);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *, int);
extern const f32 lbl_805D8890;
extern s32 lbl_805D4D1C;
f32 TObjPlayer__sub_800499FC(s32 arg0);
s16 obj_getField1c(void *);
s32 TBoss3Volopt__sub_8004816C(int);
s32 spawn_particle_effect_with_rotation(void *, void *, int, int);
void init_collision_body_parts(void *, void *, int);
void construct_collider_proxy__13TUnk_804AF8A0Fv();
void rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
s32 pop_matrix();
extern Vec_800498E8 lbl_804366F8;
extern u8 player_collision_body_desc[];
extern s32 lbl_80484A94[];
extern u8 identity_matrix[];
Obj_800498E8 *TObjPlayer__sub_800498E8(Obj_800498E8 *arg0, Obj_800498E8 *arg1, void *arg2, s32 arg3);
s32 obj_is_hit_receivable(void *);
s32 TBoss3Volopt__sub_8003F398();
VObj_80049A1C *get_battle_param__10TObjPlayerFi(s32);
s32 TObjVoloptPillar__sub_80048118(s32);
s32 spawn_particle_effect(void *, s32);
s32 play_sound_effect(s32, void *, s32, s32);
s32 rand();
extern Dmg_80049A1C lbl_80436710[];
extern const f32 lbl_805D8898;
extern const f32 lbl_805D889C;
extern const f32 lbl_805D88A0;
void explode_and_destroy__12TBoss3VoloptFPv(u8 *arg0);
extern Dmg_80049A1C lbl_80436704[];
void TObjPlayer__sub_80049A0C(void* p);
s32 post_translate_matrix(void *);
s32 rotate_matrix_x(s32, s32);
void free_collision_body_parts(void *);
s32 draw_chunk_object(s32);
s32 push_matrix();
void __dl__7TObjectFPv(void *);

u8 TObjPlayer::check_flag(s32 arg1) {
    return (u8) ((*(s32 *)&this->m_334 & arg1) != 0);
}

s32 TUnk_80484A94::sub_800495F8() {
    s32 i;
    VObj_80049A1C *p;
    void *cage;
    TObjPlayer::init_all_slots();
    ((TObjPlayer *)this)->check_object_collisions();
    if (*(s32 *)((s8 *)(*(u8 * *)&this->m_a4) + 0x18) & 0x80000) {
        for (i = 0; i < 0x10; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if (obj_is_hit_receivable(p) != 0) {
                Dmg_80049A1C t = lbl_80436704[0];
                p->m21(*(s32 *)&this->m_up, &t, 0, -1, -1);
                cage = *(void * *)&this->m_up;
                if (cage != NULL) {
                    ((TBoss3Volopt *)cage)->create_cage(((u16 (*)(void *))obj_getField1c)(p));
                }
                return 1;
            }
        }
    }
    return 0;
}

void TUnk_80484A94::render() {  }

typedef struct Stack_800496D8 Stack_800496D8;
void TUnk_80484A94::run_task() {
    u8 *arg0 = (u8 *)this;
  Stack_800496D8 stack;
  s32 temp_r0;
  s32 temp_r5;
  u8 *player;
  s32 new_var;
  u8 *temp_r3_2;
  u8 *temp_r3_3;
  player = (u8 *) get_player_by_client_id(this->m_cc);
  if (player)
  {
    temp_r5 = *((s32 *) (((s8 *) player) + 0x2FC));
    new_var = *((s32 *) (((s8 *) player) + 0x300));
    stack.sp8 = temp_r5;
    stack.spC = new_var;
    stack.sp10 = *((s32 *) (((s8 *) player) + 0x304));
    subtract_vector((void *) (&stack.sp8), (void *) (arg0 + 0x38), (int) temp_r5);
    ((TObjGyaranzoMissile *)(&stack.sp8))->scale_velocity(TObjPlayer__sub_800499FC((s32)((int) 1)));
    vec3_add_to((void *) (arg0 + 0xB4), (void *) (&stack.sp8));
    ((TObjGyaranzoMissile *)(arg0 + 0xB4))->scale_velocity(TObjPlayer__sub_800499FC((s32)((int) 0)));
  }
  VecCopy((Vec *)(arg0 + 0x44), (const Vec *)(arg0 + 0x38));
  vec3_add_to((void *) (arg0 + 0x38), (void *) (arg0 + 0xB4));
  direction_to_rotation_yx((void *) (arg0 + 0xB4), (void *) (arg0 + 0x60), (void *) (arg0 + 0x64));
  this->rotation_z = (s32) ((this->rotation_z) - 0x4000);
  temp_r3_2 = (u8 *) (*(u8 * *)&this->m_d4);
  if (temp_r3_2 != 0)
  {
    ((TNowLoading *)temp_r3_2)->copy_pos((u8 *)&this->position);
    ((TBoss4Type2 *)(*(u8 * *)&this->m_d4))->copy_vec3((u8 *)&this->m_5c);
  }
  temp_r3_3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)));
  if (temp_r3_3 != 0)
  {
    ((TNowLoading *)temp_r3_3)->copy_pos((u8 *)&this->position);
    ((TBoss4Type2 *)(*((u8 **) (((s8 *) arg0) + 0xD8))))->copy_vec3((u8 *)&this->m_5c);
  }
  if (csnVector((void *) (arg0 + 0x44), (void *) (arg0 + 0x38), (int) (-1)) != 0U)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  if (((*((f32 *) (((s8 *) arg0) + 0x3C))) < lbl_805D8890) && (((TUnk_80484A94 *)arg0)->sub_800495F8() != 0))
  {
    queue_destruction__7TObjectFv(arg0);
  }
  temp_r0 = (*((s32 *) (((s8 *) arg0) + 0xD0))) - 1;
  *((s32 *) (((s8 *) arg0) + 0xD0)) = temp_r0;
  if (temp_r0 <= 0)
  {
    queue_destruction__7TObjectFv(arg0);
    return;
  }
  play_persistent_sound((int) 0x4003C11D, (void *) arg0, (void *) (arg0 + 0x38), (int) 0, (int) 0);
}

void *TUnk_80484A94::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_80484A94;
        free_collision_body_parts(this);
        if (this->m_d4 != NULL) { queue_destruction__7TObjectFv(this->m_d4); }
        if (*(void * *)&(*(s32 *)((u8 *)this + 0xD8)) != NULL) { queue_destruction__7TObjectFv(*(void * *)&(*(s32 *)((u8 *)this + 0xD8))); }
        if (*(void * *)&this->m_up != NULL) { TObjPlayer__sub_80049A0C((void*)(*(void * *)&this->m_up)); }
        destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

Obj_800498E8 *TObjPlayer__sub_800498E8(Obj_800498E8 *arg0, Obj_800498E8 *arg1, void *arg2, s32 arg3) {
    construct_collider_proxy__13TUnk_804AF8A0Fv();
    arg0->vt = lbl_80484A94;
    init_collision_body_parts(arg0, player_collision_body_desc, 1);
    arg0->fdc = obj_getField1c(arg1);
    VecCopy((Vec *)&arg0->pos, (const Vec *)arg2);
    arg0->fcc = arg3;
    arg0->f5c = 0;
    arg0->fd4 = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->f5c, 0x11C, 2);
    arg0->fd8 = spawn_particle_effect_with_rotation(&arg0->pos, &arg0->f5c, 0x11D, 2);
    push_matrix_from(identity_matrix);
    Vec_800498E8 v = lbl_804366F8;
    v.z = TObjPlayer__sub_800499FC(0);
    rotate_matrix_y(0, arg1->f60);
    rotate_vector_by_matrix(0, &v, &arg0->fb4);
    pop_matrix();
    arg0->fd0 = TBoss3Volopt__sub_8004816C(0);
    return arg0;
}

f32 TObjPlayer__sub_800499FC(s32 arg0) {
    return *(f32 *)((s8 *)(lbl_805D4D1C + (arg0 * 4)) + 0);
}

void TObjPlayer__sub_80049A0C(void* p) { *(u32*)((char*)p + 0x388) &= 0xffefffff; }

extern s32 model_render_flags;

void explode_and_destroy__12TBoss3VoloptFPv(u8 *arg0) {
    Dmg_80049A1C d = lbl_80436710[0];
    s32 i;
    VObj_80049A1C *p;
    d.val = TObjVoloptPillar__sub_80048118(0);
    if (TBoss3Volopt__sub_8003F398() != 0 && lbl_805D8898 * (f32)rand() < lbl_805D889C) {
        d.type = 0x11;
    }
    play_sound_effect(0x4003AD15, arg0 + 0x38, 0, 0);
    play_sound_effect(0x4001C112, arg0 + 0x38, 0, 0);
    *(f32 *)((s8 *)(*(u8 * *)&((TUnk_80484AFC *)arg0)->m_a4) + 0xC) = lbl_805D88A0;
    TObjPlayer::init_all_slots();
    ((TObjPlayer *)arg0)->check_object_collisions();
    if (*(s32 *)((s8 *)(*(u8 * *)&((TUnk_80484AFC *)arg0)->m_a4) + 0x18) & 0x80000) {
        for (i = 0; i < 0x10; i++) {
            p = get_battle_param__10TObjPlayerFi(i);
            if (p == NULL) {
                break;
            }
            if (obj_is_hit_receivable(p) != 0) {
                Dmg_80049A1C t = d;
                p->m21(*(s32 *)((s8 *)arg0 + 0x10), &t, 0, -1, -1);
            }
        }
    }
    spawn_particle_effect(arg0 + 0x38, 0xFB);
    queue_destruction__7TObjectFv(arg0);
}

void TUnk_80484AFC::render() {
    TObjFish::set_global_param(this->m_b0);
    push_matrix();
    post_translate_matrix((u8 *)&this->position);
    rotate_matrix_x(0, *(s32 *)&this->m_5c);
    rotate_matrix_y(0, this->rotation_y);
    model_render_flags &= 0xFFFFFBFF;
    draw_chunk_object(*(s32 *)&this->unk_AC);
    pop_matrix();
}

}
