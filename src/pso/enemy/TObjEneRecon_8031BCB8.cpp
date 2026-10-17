#include "types.h"
#include "pso/enemy/TObjEneRecon.h"
#include "pso/object/TObjFish.h"

extern "C" {
s32 TObjFish__sub_8001EDB0(u32, s32);
s32 get_bml_model(u32, s32);
void rotate_matrix_zyx(void *m, s32 x, s32 y, s32 z);
s32 scale_matrix(s32, f32, f32, f32);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 push_matrix();
s32 pop_matrix();
void draw_chunk_object(void *child);
extern u32 TObjEneRecon__recobox_static_instance;
extern const f32 lbl_805DF3B8;
void TObjEneRecon::render_shadows() {
  s32 bml_model;
  if (((u32) TObjEneRecon__recobox_static_instance) != 0U)
  {
    s32 temp_r30;
    bml_model = get_bml_model(TObjEneRecon__recobox_static_instance, 2);
    temp_r30 = TObjFish__sub_8001EDB0(TObjEneRecon__recobox_static_instance, 2);
    push_matrix();
    translate_matrix(0, *((f32 *) (((s8 *) this) + 0x38)), *((f32 *) (((s8 *) this) + 0x3C)), *((f32 *) (((s8 *) this) + 0x40)));
    rotate_matrix_zyx(0, *((s32 *) (((s8 *) this) + 0x5C)), this->rotation_y, this->rotation_z);
    scale_matrix(0, lbl_805DF3B8, lbl_805DF3B8, lbl_805DF3B8);
    TObjFish::set_global_param(temp_r30);
    draw_chunk_object((void *)bml_model);
    pop_matrix();
  }
}

}
