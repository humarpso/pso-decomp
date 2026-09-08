#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_80010E44_lbl_8050EA40
{
  M2C_UNK value;
  u8 remaining[0x2C];
};

extern "C" {
int TObjPlayer__sub_80019248(void *);
u8 TOMineTrap__sub_801D7238(void *);
M2C_UNK TOMineTrap__sub_801B0300(void *, void *, void *);
extern RecoveredGlobal_80010E44_lbl_8050EA40 lbl_8050EA40;
void TObjPlayer__sub_80010E44(u8 *arg0, u32 arg1, s32 arg2);
}

extern "C" {

typedef struct RecoveredGlobal_80010E44_lbl_8050EA40 RecoveredGlobal_80010E44_lbl_8050EA40;
#pragma opt_pointer_analysis on
typedef char RecoveredGlobal_80010E44_lbl_8050EA40_size[((sizeof(RecoveredGlobal_80010E44_lbl_8050EA40)) == 0x30) ? (1) : (-1)];
void TObjPlayer__sub_80010E44(u8 *arg0, u32 arg1, s32 arg2) {
  if ((((TOMineTrap__sub_801D7238(&lbl_8050EA40.value) == 1) && (TObjPlayer__sub_80019248(arg0) != 0)) && (arg2 > 0)) && (arg1 != 0U))
  {
    TOMineTrap__sub_801B0300((void *) arg0, (void *) arg1, (void *) arg2);
  }
}

}
