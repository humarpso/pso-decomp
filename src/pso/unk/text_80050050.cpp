#include "types.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80050050_lbl_80485864
{
  s32 value;
  u8 remaining[0x8];
};

extern "C" {
s32 queue_destruction__7TObjectFv();
extern const f32 lbl_805D8A20;
extern const f32 lbl_805D8A24;
void update_fade_and_expire(u8 *arg0);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 draw_chunk_object(int);
s32 draw_model_motion(int, int, f32);
extern RecoveredGlobal_80050050_lbl_80485864 three_part_model_translate_offset;
void draw_three_part_models(u8 *arg0);
}

extern "C" {

typedef struct RecoveredGlobal_80050050_lbl_80485864 RecoveredGlobal_80050050_lbl_80485864;
typedef char RecoveredGlobal_80050050_lbl_80485864_size[((sizeof(RecoveredGlobal_80050050_lbl_80485864)) == 0xC) ? (1) : (-1)];
void draw_three_part_models(u8 *arg0) {
  int var_r31;
  unsigned int temp_r4;
  u8 *temp_r30;
  int var_r29;
  push_matrix();
  TObjPlayer::set_global_flag();
  post_translate_matrix((void *) (&three_part_model_translate_offset.value));
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r30 = (u8 *) (arg0 + var_r31);
    TObjFish::set_global_param((int) (*((int *) (((s8 *) temp_r30) + 0xA0))));
    temp_r4 = *((unsigned int *) (((s8 *) temp_r30) + 0xAC));
    if (temp_r4 == 0U)
    {
      draw_chunk_object((int) (*((int *) (((s8 *) temp_r30) + 0x94))));
    }
    else
    {
      draw_model_motion((int) (*((int *) (((s8 *) temp_r30) + 0x94))), (int) temp_r4, (f32) (*((f32 *) (((s8 *) arg0) + 0xB8))));
    }
    var_r29 += 1;
    var_r31 += 4;
  }
  while (var_r29 < 3);
  TObjPlayer::clear_global_state();
  pop_matrix();
}

#pragma push
#pragma opt_common_subs off
void update_fade_and_expire(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xB8) + lbl_805D8A20;
    *(f32 *)((s8 *)arg0 + 0xB8) = temp_f1;
    if (temp_f1 >= lbl_805D8A24) {
        *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805D8A24;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x90) + 1;
    *(s32 *)((s8 *)arg0 + 0x90) = temp_r0;
    if (temp_r0 >= 0x78) {
        queue_destruction__7TObjectFv();
    }
}
#pragma pop

}
