#include "types.h"
extern "C" {
extern const f32 lbl_805DBC0C;
extern const f32 lbl_805DBC10;
extern const f32 lbl_805DBC14;
void fn_80182F2C(u8 *arg0);
}

extern "C" {

void fn_80182F2C(u8 *arg0) {
  s32 temp_r0;
  temp_r0 = *((s32 *) (((s8 *) arg0) + 0x90));
  switch (temp_r0)
  {
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x98)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x98))) - 1);
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x98)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x98)) = 0x12C;
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x94)))) == 2)
      {
        *((s32 *) (((s8 *) arg0) + 0x90)) = 1;
        *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) lbl_805DBC0C;
        return;
        return;
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = 2;
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) lbl_805DBC10;
    }
      return;
    case 1:
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x9C))) + lbl_805DBC14);
      if ((*((f32 *) (((s8 *) arg0) + 0x9C))) >= lbl_805DBC10)
    {
      *((s32 *) (((s8 *) arg0) + 0x94)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0;
      return;
    }
      break;
    case 2:
      *((f32 *) (((s8 *) arg0) + 0x9C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x9C))) - lbl_805DBC14);
      if ((*((f32 *) (((s8 *) arg0) + 0x9C))) <= lbl_805DBC0C)
    {
      *((s32 *) (((s8 *) arg0) + 0x94)) = 2;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0 * 0;
      return;
    }
      break;
  }
}

}
