#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK memmove(s32, s32, M2C_UNK);
s32 fn_8036F7A8(void *arg0);
u8 fn_8036F764(u8 *arg0, u32 arg1);
}

extern "C" {

u8 fn_8036F764(u8 *arg0, u32 arg1) {
    u32 temp_r4;
    u32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, u32 *, 0x24);
    if (temp_r5 > arg1) {
        return M2C_FIELD((M2C_FIELD(arg0, s32 *, 4) + arg1), u8 *, 0);
    }
    temp_r4 = arg1 - temp_r5;
    if (temp_r4 >= (u32) M2C_FIELD(arg0, u32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        return 0U;
    }
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + temp_r4), u8 *, 0);
}

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
