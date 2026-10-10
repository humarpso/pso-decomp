#include "types.h"
struct E_8035959C { s32 a; s32 b; f32 c; };

struct O_8035959C { u8 pad[0x1c]; s32 idx; E_8035959C e[2]; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
typedef struct Ent_803594EC
{
  s32 active;
  u32 color;
  f32 alpha;
} Ent_803594EC;

typedef struct Fade_803594EC
{
  u8 pad0[0x1C];
  s32 cur;
  Ent_803594EC ent[2];
} Fade_803594EC;

typedef struct Quad_803594EC
{
  void *tex;
  u32 *colors;
  s32 a;
  s32 b;
  u32 col[4];
} Quad_803594EC;

extern "C" {
void run_task__10TBoss4FadeFv(O_8035959C *self);
M2C_UNK set_depth_buffer_settings_1__Fv(void);
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK draw_strip_swap_color__15TWindowCtrlMainFPviif(void *, int, int, f32);
extern u8 TBoss4Fade__fullscreen_vertices[];
extern const f32 lbl_805E0098;
extern const f32 lbl_805E009C;
void render__10TBoss4FadeFv(Fade_803594EC *self);
}

extern "C" {

typedef struct Ent_803594EC Ent_803594EC;
typedef struct Fade_803594EC Fade_803594EC;
typedef struct Quad_803594EC Quad_803594EC;
void render__10TBoss4FadeFv(Fade_803594EC *self) {
  u32 c;
  int new_var;
  Quad_803594EC q;
  s32 i = self->cur ^ 1;
  if (self->ent[i].active != 0)
  {
    c = (self->ent[i].color & (~0xFF000000)) | (((u32) (lbl_805E0098 * self->ent[i].alpha)) << 24);
    q.colors = q.col;
    q.col[3] = c;
    q.col[2] = c;
    new_var = 0;
    q.col[1] = c;
    q.col[new_var] = c;
    q.a = new_var;
    q.b = 4;
    q.tex = TBoss4Fade__fullscreen_vertices;
    set_depth_buffer_settings_1__Fv();
    draw_strip_swap_color__15TWindowCtrlMainFPviif(&q, 4, 6, lbl_805E009C);
    restore_saved_depth_alpha_state();
  }
}

void run_task__10TBoss4FadeFv(O_8035959C *self) {
    self->idx ^= 1;
    self->e[self->idx].a = 0;
}

}
