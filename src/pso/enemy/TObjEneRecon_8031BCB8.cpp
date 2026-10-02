#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 TObjFish__sub_8001EDB0(u32, M2C_UNK);
s32 get_bml_model(u32, M2C_UNK);
M2C_UNK TBoss7Tentacle__sub_803D8A6C(M2C_UNK, s32, s32, s32);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
extern u32 TObjEneRecon__data_805D6B00;
extern const f32 lbl_805DF3B8;
void render_shadows__12TObjEneReconFv(void *arg0);
}

extern "C" {

void render_shadows__12TObjEneReconFv(void *arg0) {
  s32 temp_r31;
  if (((u32) TObjEneRecon__data_805D6B00) != 0U)
  {
    s32 temp_r30;
    temp_r31 = get_bml_model(TObjEneRecon__data_805D6B00, 2);
    temp_r30 = TObjFish__sub_8001EDB0(TObjEneRecon__data_805D6B00, 2);
    TObjPlayer__sub_803D9B2C();
    translate_matrix(0, *((f32 *) (((s8 *) arg0) + 0x38)), *((f32 *) (((s8 *) arg0) + 0x3C)), *((f32 *) (((s8 *) arg0) + 0x40)));
    TBoss7Tentacle__sub_803D8A6C(0, *((s32 *) (((s8 *) arg0) + 0x5C)), *((s32 *) (((s8 *) arg0) + 0x60)), *((s32 *) (((s8 *) arg0) + 0x64)));
    scale_matrix(0, lbl_805DF3B8, lbl_805DF3B8, lbl_805DF3B8);
    set_global_param__8TObjFishFi(temp_r30);
    draw_chunk_object(temp_r31);
    pop_matrix();
  }
}

}
