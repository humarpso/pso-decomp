#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
M2C_UNK memmove(s32, s32, M2C_UNK);
s32 fn_8036F7A8(void *arg0);
}

extern "C" {

s32 fn_8036F7A8(void *arg0) {
  u32 temp_r3;
  if ((((u32) (*((u32 *) (((s8 *) arg0) + 0x1C)))) >= 0x17FFU) != 0)
  {
    *((u32 *) (((s8 *) arg0) + 0x1C)) = 0U;
    memmove((*((s32 *) (((s8 *) arg0) + 0x18))) + (*((s32 *) (((s8 *) arg0) + 0x24))), *((s32 *) (((s8 *) arg0) + 0x10)), 0x17FF);
    *((s32 *) (((s8 *) arg0) + 0x24)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x24))) + 0x17FF);
  }
  {
    s32 base = *((s32 *) (((s8 *) arg0) + 0x10));
    temp_r3 = *((u32 *) (((s8 *) arg0) + 0x1C));
    *((u32 *) (((s8 *) arg0) + 0x1C)) = (u32) ((temp_r3 + 1) & 0xFFFFFFFFFFFFFFFFu);
    return base + temp_r3;
  }
}

}
