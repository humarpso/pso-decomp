#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
u8 *TWindowSubComCard__sub_8026CBB8(s32);
s32 TWindowMessageYesNo__sub_802A59D8(s32, s32, s32, s32);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, void *, int, f32);
extern const f32 lbl_805DD268;
s32 TWindowOptionCtrl__sub_8026B64C(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 TWindowOptionCtrl__sub_8026B64C(s32 arg0, s32 arg1, s32 arg2) {
  s32 temp_r30;
  u8 *temp_r31;
  temp_r30 = TWindowMessageYesNo__sub_802A59D8(arg0, 6, arg0 * 0, 0);
  ;
  forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) temp_r30, (void *) TAdSinglePlyChrSelectGC__sub_80132F2C(0xF, arg1), (int) ((u8 *) TWindowSubComCard__sub_8026CBB8(arg2)), (f32) lbl_805DD268);
  free_member__17TWindowSubComCardFPv((int) temp_r30, (int) 1);
  return temp_r30;
}

}
