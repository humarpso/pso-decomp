#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80050050_lbl_80485864
{
  M2C_UNK value;
  u8 remaining[0x8];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern const f32 lbl_805D8A20;
extern const f32 lbl_805D8A24;
void fn_800500DC(u8 *arg0);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 TObjFish__sub_803E46BC(int);
s32 TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_80050050_lbl_80485864 lbl_80485864;
void fn_80050050(u8 *arg0);
}

extern "C" {

typedef struct RecoveredGlobal_80050050_lbl_80485864 RecoveredGlobal_80050050_lbl_80485864;
typedef char RecoveredGlobal_80050050_lbl_80485864_size[((sizeof(RecoveredGlobal_80050050_lbl_80485864)) == 0xC) ? (1) : (-1)];
void fn_80050050(u8 *arg0) {
  int var_r31;
  unsigned int temp_r4;
  u8 *temp_r30;
  int var_r29;
  TObjPlayer__sub_803D9B2C();
  set_global_flag__10TObjPlayerFv();
  TOHangerMachine01__sub_803D9C00((void *) (&lbl_80485864.value));
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r30 = (u8 *) (arg0 + var_r31);
    set_global_param__8TObjFishFi((int) (*((int *) (((s8 *) temp_r30) + 0xA0))));
    temp_r4 = *((unsigned int *) (((s8 *) temp_r30) + 0xAC));
    if (temp_r4 == 0U)
    {
      TObjFish__sub_803E46BC((int) (*((int *) (((s8 *) temp_r30) + 0x94))));
    }
    else
    {
      TObjEneSlimeOne__sub_803E4AF4((int) (*((int *) (((s8 *) temp_r30) + 0x94))), (int) temp_r4, (f32) (*((f32 *) (((s8 *) arg0) + 0xB8))));
    }
    var_r29 += 1;
    var_r31 += 4;
  }
  while (var_r29 < 3);
  clear_global_state__10TObjPlayerFv();
  TObjPlayer__sub_803D9B78();
}

#pragma push
#pragma opt_common_subs off
void fn_800500DC(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB8) + lbl_805D8A20;
    M2C_FIELD(arg0, f32 *, 0xB8) = temp_f1;
    if (temp_f1 >= lbl_805D8A24) {
        M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805D8A24;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90) + 1;
    M2C_FIELD(arg0, s32 *, 0x90) = temp_r0;
    if (temp_r0 >= 0x78) {
        queue_destruction__7TObjectFv();
    }
}
#pragma pop

}
