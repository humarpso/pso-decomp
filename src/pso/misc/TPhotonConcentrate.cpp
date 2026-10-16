#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/object/TObjMotion.h"

struct Slot_801A8868 { u8 pad[0x18]; };
struct Counts_801A8868 { s32 v[4]; };
struct Rec_801A8868 { u8 pad[0x20]; s32 f20; };

struct Hit_801A86E0 { s32 kind; f32 value; };
struct VBase_18_b27ba1 { char pad[0x18]; };
struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual void m21(void *, struct Hit_801A86E0 *, s32, s32, s32);
};

extern "C" {

s16 TObjPlayer__sub_80113D90(void *);
extern const f32 lbl_805DC110;
extern const f32 lbl_805DC114;
extern const f32 lbl_805DC118;
extern const f32 lbl_805DC11C;
extern const f32 lbl_805DC120;
extern const f32 lbl_805DC124;
extern const f32 lbl_805DC128;
extern const f32 lbl_805DC12C;

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void *__dt__18TPhotonConcentrateFv(void *arg0, s16 arg1);
void render__18TPhotonConcentrateFv(void);
s32 create_particle_emitter(void *, s32);
s32 construct_collider_proxy__13TUnk_804AF8A0Fv(s32, s32);
s32 find_entity_by_id(s32, f32);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);
extern s32 __vt__18TPhotonConcentrate[];
extern s32 lbl_805D34D0;

s32 get_current_floor();
s32 get_photon_blast_chain(void *, s32);
void *get_player_by_client_id(u32);

extern s32 photon_blast_donation_flags[];
void clear_photon_blast_donations(void);
s32 is_split_screen();
extern s32 local_client_id;
s32 is_photon_blast_presentation_admitted(u32 owner_id, void *records);
u16 obj_getField1c(void *);
s32 TObjPlayer__sub_801A9E10(void *, int, void *, void *, int, int);
s32 TObjPlayer__sub_801AA528(void *, int);
s32 init_arrays__10TObjPlayerFi(void *);
void *TObjPlayer__sub_801AA66C(void *, void *);
void *__nw__7TObjectFUl(int);
s16 TObjPlayer__sub_80313114(void *);
extern Counts_801A8868 photon_blast_result_counts_init;
extern Rec_801A8868 photon_blast_sequence_table[];
void admit_photon_blast_sequence(u8 *players, void *self);

int get_player_data__10TObjPlayerFi(int);
void apply_photon_blast_action_hold(s32 arg0, s32 arg1, s32 arg2);

void render__18TPhotonConcentrateFv(void) { TParticleCtrl::begin_effect_render(); TParticleCtrl::end_effect_render(); }

#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

typedef struct Owner_801A7E7C Owner_801A7E7C;
typedef struct PC_801A7E7C PC_801A7E7C;
typedef struct Vec_801A7E7C Vec_801A7E7C;
typedef struct Vec_801A7E7C
{
  f32 x;
  f32 y;
  f32 z;
} Vec_801A7E7C;
typedef struct Owner_801A7E7C
{
  u8 pad[0x60];
  u32 angle;
} Owner_801A7E7C;
typedef struct PC_801A7E7C
{
  u8 pad0[0xAC];
  Vec_801A7E7C origin;
  Vec_801A7E7C pos;
  Vec_801A7E7C vel;
  Vec_801A7E7C target;
  f32 dist;
  f32 total;
  f32 range;
  u8 padE8[4];
  u32 angle;
  u8 padF0[8];
  void *emitter;
  Owner_801A7E7C *owner;
} PC_801A7E7C;
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void *spawn_particle_effect(void *, s32);
f32 sin_table_lookup(s32);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void rotate_vector_by_matrix(void *, void *, void *);
void rotate_matrix_y(void *, s32);
void rotate_matrix_z(void *, s32);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
void pop_matrices(s32);
f32 xyz_distance(void *, void *);
extern u8 identity_matrix[];
extern const f32 lbl_805DC0F8;
extern const f32 lbl_805DC0FC;
extern const f32 lbl_805DC100;
extern const f32 lbl_805DC104;
extern const f32 lbl_805DC108;
extern const f32 lbl_805DC10C;
void run_task__18TPhotonConcentrateFv(PC_801A7E7C *self) {
  f32 sn;
  Vec_801A7E7C delta;
  float new_var;
  Owner_801A7E7C *owner;
  u32 a;
  VecCopy__FP3VecPC3Vec(&delta, &self->pos);
  subtract_vector(&delta, &self->target);
  self->dist = vector_length(&delta);
  if (self->dist < lbl_805DC0F8)
  {
    queue_destruction__7TObjectFv(self->emitter);
    self->emitter = 0;
    spawn_particle_effect(&self->pos, 0xC6);
    queue_destruction__7TObjectFv(self);
    return;
  }
  if (xyz_distance(&self->origin, &self->pos) > self->range)
  {
    queue_destruction__7TObjectFv(self);
    return;
  }
  vec3_add_to(&self->pos, &self->vel);
  {
    Vec_801A7E7C d2 = self->target;
    subtract_vector(&d2, &self->origin);
    self->total = vector_length(&d2);
    if (lbl_805DC0FC == self->total)
    {
      self->total = lbl_805DC100;
    }
    a = lbl_805DC10C * (self->dist / self->total);
    sn = sin_table_lookup(lbl_805DC108 * ((f32) a));
    {
      f32 scale = self->total / lbl_805DC0F8;
      Vec_801A7E7C off;
      Vec_801A7E7C xf;
      new_var = lbl_805DC104 * scale;
      off.y = (off.z = lbl_805DC0FC);
      off.x = new_var * sn;
      push_matrix_from(identity_matrix);
      rotate_matrix_z(0, lbl_805DC108 * ((f32) self->angle));
      rotate_vector_by_matrix(0, &off, &xf);
      pop_matrices(1);
      VecCopy__FP3VecPC3Vec(&off, &xf);
      push_matrix_from(identity_matrix);
      owner = self->owner;
      if (owner != 0)
      {
        rotate_matrix_y(0, lbl_805DC108 * ((f32) ((s32) (owner->angle - 0x5A))));
        rotate_vector_by_matrix(0, &off, &xf);
      }
      pop_matrices(1);
      {
        Vec_801A7E7C posn = self->pos;
        vec3_add_to(&posn, &xf);
        if (self->emitter != 0)
        {
          ((TNowLoading *)(self->emitter))->copy_pos(&posn);
        }
      }
    }
  }
}

}

void *__dt__18TPhotonConcentrateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TPhotonConcentrate;
        if (*(void **)((s8 *)arg0 + 0xF8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xF8)); *(s32 *)((s8 *)arg0 + 0xF8) = 0; }
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TPhotonConcentrate__ct(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;

    construct_collider_proxy__13TUnk_804AF8A0Fv((s32)arg0, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TPhotonConcentrate;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D34D0;
    VecCopy__FP3VecPC3Vec(arg0 + 0xAC, VecCopy__FP3VecPC3Vec(arg0 + 0xB8, arg1));
    VecCopy__FP3VecPC3Vec(arg0 + 0xD0, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC4, arg1 + 0x18);
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (*(f32 *)((s8 *)arg0 + 0xC4) * *(f32 *)((s8 *)arg1 + 0x28));
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) (*(f32 *)((s8 *)arg0 + 0xC8) * *(f32 *)((s8 *)arg1 + 0x28));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xCC);
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) (temp_f1 * *(f32 *)((s8 *)arg1 + 0x28));
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) *(f32 *)((s8 *)arg1 + 0x24);
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) *(f32 *)((s8 *)arg1 + 0x2C);
    *(s32 *)((s8 *)arg0 + 0xF0) = (s32) *(s32 *)((s8 *)arg1 + 0x30);
    *(s32 *)((s8 *)arg0 + 0xEC) = (s32) *(s32 *)((s8 *)arg1 + 0x34);
    *(s32 *)((s8 *)arg0 + 0xFC) = find_entity_by_id(arg3, temp_f1);
    *(s32 *)((s8 *)arg0 + 0xF8) = create_particle_emitter(arg0 + 0xB8, 0x135);
    return arg0;
}

}
