#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
extern const f32 lbl_805DAF38;
extern const f32 lbl_805DAF3C;
extern const f32 lbl_805DAF50;
extern const f32 lbl_805DAF54;
void TObjPlayer__sub_8012DB48(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8012DB48(u8 *arg0) {
  u8 temp_r3;
  temp_r3 = get_slot_count__14TItemProShieldFPv();
  switch ((s32) temp_r3)
  {
    case 5:
      approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) lbl_805DAF50, (f32) lbl_805DAF38);
      if (lbl_805DAF38 <= (*((f32 *) (((s8 *) arg0) + 0x204))))
    {
      TObjPlayer__sub_80115BC0((void *) (arg0 + 0x1F8), (int) (-0x2AAA), (int) 0);
    }
    case 6:
      return;
    return;
    case 7:
      approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) lbl_805DAF54, (f32) lbl_805DAF3C);
      TObjPlayer__sub_80115BC0((void *) (arg0 + 0x1F8), (int) 0x2AAA, (int) 0);
      break;
  }
}

}
