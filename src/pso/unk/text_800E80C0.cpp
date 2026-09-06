#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK TObjPlayer__sub_800E81B4(void *);
M2C_UNK TObjPlayer__sub_800E82B8(void *, void *, void *, f32);
M2C_UNK TObjPlayer__sub_800E841C();
extern const f32 lbl_805DA68C;
extern const f32 lbl_805DA690;
extern const f32 lbl_805DA694;
extern const f32 lbl_805DA698;
extern const f32 lbl_805DA69C;
void TObjPlayer__sub_800E84F8(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800E81A8(void);

    extern int lbl_805D52B4;
void TObjPlayer__sub_800E81A8(void) { lbl_805D52B4 = 0; }
void TObjPlayer__sub_800E84F8(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f3;
  TObjPlayer__sub_800E841C();
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x378)))) != 0)
  {
    temp_f3 = *((f32 *) (((s8 *) arg0) + 0xC0));
    temp_f1 = lbl_805DA68C;
    if (temp_f3 < temp_f1)
    {
      TObjPlayer__sub_800E82B8((void *) arg0, (void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38), (void *) (arg0 + 0x38), (f32) (temp_f3 / temp_f1));
    }
    else
      if ((temp_f3 >= lbl_805DA690) && (temp_f3 < lbl_805DA694))
    {
      TObjPlayer__sub_800E82B8((void *) arg0, (void *) (arg0 + 0x38), (void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38), (f32) ((temp_f3 - lbl_805DA690) / temp_f1));
    }
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC0));
  if ((temp_f1 >= lbl_805DA698) && (temp_f1 < lbl_805DA69C))
  {
    TObjPlayer__sub_800E81B4((void *) arg0);
  }
}

}
