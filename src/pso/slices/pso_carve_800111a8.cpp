#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80011274 { u8 pad[0x2be]; s16 v; };

struct O_800112D4 { u8 pad[0x32e]; s16 v; };

extern "C" {
s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1);
s32 add_actor_tp(u8 *arg0, s32 arg1);
int TObjPlayer__sub_8001124C(u8 *arg0);
s32 add_actor_exp(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80011274(O_80011274 *self, s32 x);
s32 TObjPlayer__sub_800112D4(O_800112D4 *self, s32 x);
}

extern "C" {

s32 obj_isState2_324();
s32 get_actor_level_index(void* p);

s32 TObjPlayer__sub_800111A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x11A) = (s16) (M2C_FIELD(arg0, s16 *, 0x11A) + arg1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x11A) > 0x3E7) {
        M2C_FIELD(arg0, s16 *, 0x11A) = 0x3E7;
        return 0;
    }
    return 1;
}

s32 TObjPlayer__sub_800111D8(u8 *arg0, s32 arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x2B0);
    M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) - arg1);
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x2B0);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x1C) < 0) {
        M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
        return 0;
    }
    return 1;
}

s32 add_actor_exp(u8 *arg0, s32 arg1) {
  u8 *temp_r3;
  int new_var;
  u8 *temp_r6;
  temp_r6 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2B0)));
  *((s32 *) (((s8 *) temp_r6) + 0x1C)) = (s32) ((*((s32 *) (((s8 *) temp_r6) + 0x1C))) + arg1);
  temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x2B0)));
  new_var = 0x05F5E0FF;
  if (new_var < ((s32) (*((s32 *) (((s8 *) temp_r3) + 0x1C)))))
  {
    *((s32 *) (((s8 *) temp_r3) + 0x1C)) = new_var;
    return 0;
  }
  return 1;
}

int TObjPlayer__sub_8001124C(u8 *arg0) {
  int new_var;
  s16 temp_r0;
  new_var = 0xFFFFu;
  temp_r0 = (unsigned long) (*((s16 *) (((s8 *) arg0) + (((((0x2BE & new_var) & new_var) & new_var) & new_var) & new_var))));
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

s32 TObjPlayer__sub_80011274(O_80011274 *self, s32 x) {
    self->v += x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

s32 add_actor_tp(u8 *arg0, s32 arg1) {
    s16 temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32E) = (s16) (M2C_FIELD(arg0, s16 *, 0x32E) + arg1);
    if (M2C_FIELD(arg0, s16 *, 0x32E) > M2C_FIELD(arg0, s16 *, 0x2BA)) {
        M2C_FIELD(arg0, s16 *, 0x32E) = M2C_FIELD(arg0, s16 *, 0x2BA);
        return 0;
    }
    return 1;
}
s32 TObjPlayer__sub_800112D4(O_800112D4 *self, s32 x) {
    self->v -= x;
    if (self->v < 0) {
        self->v = 0;
        return 0;
    }
    return 1;
}

}
