#include "types.h"

typedef struct Rec_8004F2A8 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004F2A8;

typedef struct Obj_8004F2A8 {
    u8 pad0[0xAC];
    Rec_8004F2A8 recs[2];
    u8 padc4[0xE8 - 0xC4];
    f32 fe8[3];
    s32 ff4;
    s32 ff8;
} Obj_8004F2A8;

struct Vec_8004F3D4
{
  f32 x;
  f32 y;
  f32 z;
};

struct Self_8004F3D4
{
  u8 pad0[0xA4];
  u32 hA4;
  u32 hA8;
  u8 padac[0xE8 - 0xAC];
  Vec_8004F3D4 pos;
  s32 fF4;
  s32 fF8;
  f32 fFC;
  u8 pad100[4];
  Vec_8004F3D4 vecs[2];
};

extern "C" {
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805D89F0;
extern const f32 lbl_805D89F4;
extern const f32 lbl_805D89F8;
void TObjPlayer__sub_8004F2A8(Obj_8004F2A8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void TBoss4Type2__sub_8004A98C(void *);
void set_scripted_camera_pose(void *, void *, void *);
u32 spawn_particle_effect(void *, s32);
u32 TBoss4Type2__sub_800874F4(void *, s32);
void set_flags__11TBoss4Type2FPvUi(u32, u32);
void copy_pos__11TNowLoadingFPvPv(u32, void *);
void TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
extern Vec_8004F3D4 lbl_804373F4[];
extern Vec_8004F3D4 lbl_80437400[];
extern const f32 lbl_805D89FC;
extern const f32 lbl_805D8A00;
void TBoss4Type2__sub_8004F3D4(Self_8004F3D4 *self);
}

extern "C" {

void TObjPlayer__sub_8004F3A0(void* p);
int fn_8004F1FC(void*);

void TObjPlayer__sub_8004F2A8(Obj_8004F2A8 *arg0) {
    f32 alpha;
    s32 i;
    alpha = lbl_805D89F0;
    if (arg0->ff8 > 0x4C) {
        return;
    }
    if (arg0->ff8 > 0x44) {
        alpha = (f32)(0x4C - arg0->ff8) * lbl_805D89F4;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0->fe8);
    rotate_matrix_y(0, arg0->ff4);
    for (i = 0; i < 2; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        TObjEneSlimeOne__sub_803E4AF4(arg0->recs[i].a, arg0->recs[i].c, lbl_805D89F8);
    }
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_8004F3A0(void* p) { TObjPlayer__sub_8004F2A8((Obj_8004F2A8 *)(p)); fn_8004F1FC(p); }
typedef struct Self_8004F3D4 Self_8004F3D4;
typedef struct Vec_8004F3D4 Vec_8004F3D4;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TBoss4Type2__sub_8004F3D4(Self_8004F3D4 *self) {
  f32 f;
  const f32 *new_var;
  u32 r;
  u32 *p;
  s32 i;
  if ((self->fF8 <= 0x3C) && ((r = spawn_particle_effect(&self->pos, 0x14E)) != 0))
  {
    set_flags__11TBoss4Type2FPvUi(r, 0x40);
  }
  if (self->fF8 == 0x44)
  {
    if ((r = spawn_particle_effect(&self->pos, 0x17B)) != 0)
    {
      set_flags__11TBoss4Type2FPvUi(r, 0x40);
    }
    if ((r = spawn_particle_effect(&self->pos, 0x17C)) != 0)
    {
      set_flags__11TBoss4Type2FPvUi(r, 0x40);
    }
  }
  if (self->fF8 == 0x48)
  {
    if ((r = spawn_particle_effect(&self->pos, 0x17A)) != 0)
    {
      set_flags__11TBoss4Type2FPvUi(r, 0x40);
    }
    TBoss3Volopt__sub_8022675C(0x40039E09, &self->pos, 0, 1);
    queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
  }
  if (self->fF8 == 0x72)
  {
    TBoss3Volopt__sub_8022675C(0x4003B227, &self->pos, 0, 1);
  }
  if (self->fF8 >= 0xAA)
  {
    p = &self->hA4;
    for (i = 0; i < 2; i++)
    {
      Vec_8004F3D4 *v = &self->vecs[i];
      if ((*p) == 0)
      {
        *p = TBoss4Type2__sub_800874F4(v, 0x147);
        if ((*p) != 0)
        {
          set_flags__11TBoss4Type2FPvUi(*p, 0x40);
        }
      }
      else
      {
        copy_pos__11TNowLoadingFPvPv(*p, v);
      }
      p = &self->hA8;
    }
  }
  if (self->fF8 == 0x72)
  {
    Vec_8004F3D4 a = lbl_804373F4[0];
    Vec_8004F3D4 b = lbl_80437400[0];
    VecCopy__FP3VecPC3Vec(&self->pos, &a);
    self->fF4 = 0;
    set_scripted_camera_pose(&self->pos, &self->pos, &b);
  }
  f = self->fFC + lbl_805D89FC;
  self->fFC = f;
  if (f > (*(new_var = &lbl_805D8A00)))
  {
    self->fFC = *new_var;
  }
  TBoss4Type2__sub_8004A98C(((u8 *) self) - -0x90);
  if ((++self->fF8) >= 0xF0)
  {
    queue_destruction__7TObjectFv(self);
  }
}

}
