#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80011378 { u8 pad[0x2bc]; s16 v; };

extern "C" {
s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1);
s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1);
void TObjPlayer__sub_800113E4(u8 *arg0, s16 arg1);
s32 TItemProShield__sub_8001140C(u8 *arg0, s16 arg1);
int TObjPlayer__sub_80011350(u8 *arg0);
s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1);
s32 TObjPlayer__sub_80011378(O_80011378 *self, s32 x);
}

extern "C" {

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

int TObjPlayer__sub_80011350(u8 *arg0) {
  s16 temp_r0;
  int new_var;
  new_var = *((s16 *) (((s8 *) arg0) + 0x2BC));
  temp_r0 = new_var;
  if (temp_r0 < 0)
  {
    return 0U;
  }
  if (temp_r0 <= 0xFA)
  {
    return (u8) temp_r0;
  }
  return 0xFAU;
}

s32 TObjPlayer__sub_80011378(O_80011378 *self, s32 x) {
    self->v += x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

s32 TObjPlayer__sub_800113A8(u8 *arg0, s16 *arg1) {
    s16 temp_r0;
    s16 temp_r5;
    temp_r5 = *arg1;
    if (temp_r5 < 0) {
        *arg1 = 0;
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x2B8);
    if (temp_r5 > temp_r0) {
        *arg1 = temp_r0;
        return 0;
    }
    return 1;
}

void TObjPlayer__sub_800113E4(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x32C) = arg1;
    TObjPlayer__sub_800113A8((u8 *)(arg0), (s16 *)(arg0 + 0x32C));
}

#pragma push
#pragma scheduling off
s32 TItemProShield__sub_8001140C(u8 *arg0, s16 arg1) {
    s16 temp_r4;
    s16 temp_r0;
    if (arg1 < 0) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (M2C_FIELD(arg0, s16 *, 0x32C) + arg1);
    if (M2C_FIELD(arg0, s16 *, 0x32C) > M2C_FIELD(arg0, s16 *, 0x2B8)) {
        M2C_FIELD(arg0, s16 *, 0x32C) = M2C_FIELD(arg0, s16 *, 0x2B8);
        return 0;
    }
    return 1;
}
#pragma pop

s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1) {
  if (arg1 < 0)
  {
    return 0;
  }
  *((s16 *) (((s8 *) arg0) + 0x32C)) = (s16) ((*((s16 *) (((s8 *) arg0) + 0x32C))) - arg1);
  if ((*((s16 *) (((s8 *) arg0) + 0x32C))) < 0)
  {
    *((s16 *) (((s8 *) arg0) + 0x32C)) = 0;
    return 0;
  }
  return 1;
}

}
