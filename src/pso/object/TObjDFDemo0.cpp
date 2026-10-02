#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Rec_8004E2C8 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004E2C8;

typedef struct Obj_8004E2C8 {
    u8 pad0[0xA0];
    Rec_8004E2C8 recs[6];
    u8 pade8[0x100 - 0xE8];
    f32 f100[3];
    s32 f10c;
    s32 f110;
    f32 f114;
} Obj_8004E2C8;

struct Rec_8004E068
{
  s32 a;
  s32 b;
  s32 c;
};

struct Tbl_8004E068
{
  s32 idx;
  s32 id;
  s32 slot;
};

struct Inner_8004E068
{
  u8 pad[4];
  s16 *col;
};

struct Outer_8004E068
{
  u8 pad[4];
  Inner_8004E068 *in;
};

struct Self_8004E068
{
  u8 pad0[0xE8];
  Rec_8004E068 recs[2];
  u8 f100[0xC];
  s32 f10C;
  s32 f110;
  f32 f114;
  f32 f118;
};

extern "C" {
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805D8988;
extern const f32 lbl_805D898C;
extern const f32 lbl_805D89A0;
void TObjPlayer__sub_8004E2C8(Obj_8004E2C8 *arg0);
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
Outer_8004E068 *collect_and_count__12TBoss3VoloptFUii(s32, s32);
void TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern Tbl_8004E068 lbl_8048561C[];
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8988;
extern const f32 lbl_805D898C;
extern const f32 lbl_805D8990;
extern const f32 lbl_805D8994;
extern const f32 lbl_805D8998;
extern const f32 lbl_805D899C;
void TObjPlayer__sub_8004E068(Self_8004E068 *self);
}

extern "C" {

void TObjPlayer__sub_8004E3F4(void* p);
void *create__11TObjDFDemo0FPv(void *arg0);
void *TObjDFDemo0__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__11TObjDFDemo0FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjDFDemo0__ct(o, arg0);
    }
    return o;
}

typedef struct Inner_8004E068 Inner_8004E068;
typedef struct Outer_8004E068 Outer_8004E068;
typedef struct Rec_8004E068 Rec_8004E068;
typedef struct Self_8004E068 Self_8004E068;
typedef struct Tbl_8004E068 Tbl_8004E068;
void TObjPlayer__sub_8004E068(Self_8004E068 *self) {
  f32 alpha;
  unsigned int new_var2;
  s32 hi;
  s32 i;
  s32 t;
  s16 *new_var;
  s16 *col;
  f32 f;
  Tbl_8004E068 *e;
  s32 j;
  alpha = lbl_805D8988;
  t = self->f110;
  if (t <= 0x7C)
  {
    return;
  }
  if (t < 0x88)
  {
    alpha = ((f32) (t - 0x7C)) / lbl_805D898C;
  }
  col = collect_and_count__12TBoss3VoloptFUii(self->recs[1].a, 0x6A)->in->col;
  t = self->f110;
  f = lbl_805D8990;
  if (t >= 0xF0)
  {
    f = lbl_805D8988;
  }
  else
    if (t > 0xE6)
  {
    f = ((f32) (t - 0xE6)) / lbl_805D8994;
  }
  col[3] = ((((s32) (lbl_805D8998 * f)) << 1) << 7) | (col[3] & 0xFF);
  t = self->f110;
  f = lbl_805D8990;
  if (t >= 0x104)
  {
    f = lbl_805D8988;
  }
  else
    if (t > 0xF0)
  {
    f = ((f32) (t - 0xF0)) / lbl_805D899C;
  }
  hi = ((s32) (lbl_805D8998 * f)) << 8;
  for (i = 0; i < 3; i++)
  {
    e = &lbl_8048561C[i];
    col = collect_and_count__12TBoss3VoloptFUii(self->recs[e->idx].a, e->id)->in->col;
    new_var = col;
    new_var2 = new_var[e->slot];
    col[e->slot] = (new_var2 & 0xFF) | hi;
  }
  t = self->f110;
  if (alpha < lbl_805D8988)
  {
    TObjPlayer__sub_80052390(alpha);
  }
  some_id_805c6f74 |= 0x20000;
  TObjEneRe4Sorcerer__sub_801E3F1C(lbl_805D8990, self->f118);
  TObjPlayer__sub_803D9B2C();
  set_global_flag__10TObjPlayerFv();
  TOHangerMachine01__sub_803D9C00(self->f100);
  rotate_matrix_y(0, self->f10C);
  for (j = 0; j < 2; j++)
  {
    set_global_param__8TObjFishFi(self->recs[j].b);
    TObjEneSlimeOne__sub_803E4AF4((*(&self->recs[j])).a, self->recs[j].c, self->f114);
  }
  clear_global_state__10TObjPlayerFv();
  TObjPlayer__sub_803D9B78();
  some_id_805c6f74 &= ~0x20000;
  if (alpha < lbl_805D8988)
  {
    sync_player_globals__10TObjPlayerFv();
  }
}

void TObjPlayer__sub_8004E2C8(Obj_8004E2C8 *arg0) {
    f32 max;
    f32 alpha;
    f32 f;
    s32 i;
    alpha = lbl_805D8988;
    if (arg0->f110 >= 0x88) {
        return;
    }
    if (arg0->f110 > 0x7C) {
        alpha = (f32)(0x88 - arg0->f110) / lbl_805D898C;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0->f100);
    rotate_matrix_y(0, arg0->f10c);
    max = lbl_805D89A0;
    for (i = 0; i < 6; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        f = arg0->f114;
        switch (i) {
        case 0:
        case 1:
            if (f > max) {
                f = max;
            }
            break;
        }
        TObjEneSlimeOne__sub_803E4AF4(arg0->recs[i].a, arg0->recs[i].c, f);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_8004E3F4(void* p) { TObjPlayer__sub_8004E2C8((Obj_8004E2C8 *)(p)); TObjPlayer__sub_8004E068((Self_8004E068 *)(p)); }

}
