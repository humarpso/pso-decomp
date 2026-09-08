#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_8018289C_lbl_80443F4C
{
  M2C_UNK value;
  u8 remaining[0x18];
};

struct RecoveredGlobal_8018289C_lbl_804B5B4C
{
  M2C_UNK value;
  u8 remaining[0x58];
};

extern "C" {
u8 *TObjPlayer__sub_80182D8C(void *, M2C_UNK, s32, void *);
extern RecoveredGlobal_8018289C_lbl_80443F4C lbl_80443F4C;
extern RecoveredGlobal_8018289C_lbl_804B5B4C lbl_804B5B4C;
extern s32 lbl_805D3250;
extern u8 *lbl_805D5B28;
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef struct RecoveredGlobal_8018289C_lbl_80443F4C RecoveredGlobal_8018289C_lbl_80443F4C;
typedef struct RecoveredGlobal_8018289C_lbl_804B5B4C RecoveredGlobal_8018289C_lbl_804B5B4C;
typedef char RecoveredGlobal_8018289C_lbl_80443F4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_80443F4C)) == 0x1C) ? (1) : (-1)];
typedef char RecoveredGlobal_8018289C_lbl_804B5B4C_size[((sizeof(RecoveredGlobal_8018289C_lbl_804B5B4C)) == 0x5C) ? (1) : (-1)];
u8 *TObjCityDoor_Shop__ct(u8 *arg0, s32 arg1, s32 arg2) {
  unsigned int new_var2;
  M2C_UNK *new_var;
  new_var = &lbl_804B5B4C.value;
  TObjPlayer__sub_80182D8C(arg0, arg1, arg2, &lbl_80443F4C.value);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = new_var;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D3250;
  new_var2 = 1;
  *((f32 *) (((s8 *) arg0) + 0xB0)) = (f32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) (*((u8 **) (((s8 *) lbl_805D5B28) + 0x430)))) + 0x54)))) + 4))) - new_var2);
  return arg0;
}

}
