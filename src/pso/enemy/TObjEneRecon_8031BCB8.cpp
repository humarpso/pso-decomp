#include "types.h"

extern "C" {
s32 TObjFish__sub_8001EDB0(u32, s32);
s32 get_bml_model(u32, s32);
s32 rotate_matrix_zyx(s32, s32, s32, s32);
s32 scale_matrix(s32, f32, f32, f32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFi(s32);
s32 draw_chunk_object(s32);
extern u32 TObjEneRecon__recobox_static_instance;
extern const f32 lbl_805DF3B8;
void render_shadows__12TObjEneReconFv(void *arg0);
}

extern "C" {

void render_shadows__12TObjEneReconFv(void *arg0) {
  s32 temp_r31;
  if (((u32) TObjEneRecon__recobox_static_instance) != 0U)
  {
    s32 temp_r30;
    temp_r31 = get_bml_model(TObjEneRecon__recobox_static_instance, 2);
    temp_r30 = TObjFish__sub_8001EDB0(TObjEneRecon__recobox_static_instance, 2);
    push_matrix();
    translate_matrix(0, *((f32 *) (((s8 *) arg0) + 0x38)), *((f32 *) (((s8 *) arg0) + 0x3C)), *((f32 *) (((s8 *) arg0) + 0x40)));
    rotate_matrix_zyx(0, *((s32 *) (((s8 *) arg0) + 0x5C)), *((s32 *) (((s8 *) arg0) + 0x60)), *((s32 *) (((s8 *) arg0) + 0x64)));
    scale_matrix(0, lbl_805DF3B8, lbl_805DF3B8, lbl_805DF3B8);
    set_global_param__8TObjFishFi(temp_r30);
    draw_chunk_object(temp_r31);
    pop_matrix();
  }
}

}
