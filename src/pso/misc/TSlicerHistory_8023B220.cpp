#include "types.h"
#include "pso/TSlicerHistory.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DC950;
extern const f32 lbl_805DC94C;
u32 query_game_join_id__10TObjPlayerFv(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 notify_fish_if_valid__10TObjPlayerFUl(u32);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_z(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
s32 set_chunk_material_color(void *);
typedef struct { f32 r, g, b, a; } Col_8023B220;
extern Col_8023B220 chunk_material_color_half_alpha_f32;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805DC948;

}

extern "C" {

void TSlicerHistory::render() {
    u8 *arg0 = (u8 *)this;
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0 || query_game_join_id__10TObjPlayerFv((int) (*(s32 *)((s8 *)arg0 + 0x58))) == 0U) {
        return;
    }
    {
        lbl_805D5660 = model_render_flags;
        Col_8023B220 col = *(Col_8023B220 *)((s8 *)arg0 + 0x3C);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x5C) != 0) {
            model_render_flags |= 0x10;
        } else {
            model_render_flags |= 0x20;
            col.r -= lbl_805DC948;
        }
        if (((u32) *(u32 *)((s8 *)arg0 + 0x38) != 0U) && ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U)) {
            notify_fish_if_valid__10TObjPlayerFUl(*(u32 *)((s8 *)arg0 + 0x38));
            begin_effect_render__13TParticleCtrlFv();
            push_matrix();
            post_translate_matrix((void *) ((u8 *)(arg0) + 0x28));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x20)));
            rotate_matrix_z((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x24)));
            rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x1C)));
            scale_current_matrix((void *) ((u8 *)(arg0) + 0x4C));
            set_chunk_material_color((void *) (&col));
            draw_ginja_object((int) (*(u32 *)((s8 *)arg0 + 0x34)));
            set_chunk_material_color((void *) (&chunk_material_color_half_alpha_f32));
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
        model_render_flags = lbl_805D5660;
    }
}

void TSlicerHistory::run_task() {
    u8 *arg0 = (u8 *)this;
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3c))) - lbl_805DC94C);
  if ((*((f32 *) (((s8 *) arg0) + 0x3c))) < (*(new_var = &lbl_805DC950)))
  {
    *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) (*new_var);
    queue_destruction__7TObjectFv(arg0);
  }
}

}
