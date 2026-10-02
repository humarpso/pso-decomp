#include <dolphin/mtx.h>
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800BB218
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
s32 csnVector(void *, void *, int);
extern const f32 lbl_805D9EA4;
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
u8 *csnVectorUnder(f32 *, void *, s32);
u8 *TObjEneDD__vt100(u8 *arg0, u8 *arg1);
}

extern "C" {

void calc_shot_position__9TObjEneDDFPvPvfff(u8 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, s32);

void calc_shot_position__9TObjEneDDFPvPvfff(u8 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r5;

    f32 temp_f3 = farg2 + M2C_FIELD(arg0, f32 *, 0x37C);
    if (enemy_probe_wall_ahead((u8 *)(arg0), farg0, farg1, temp_f3) == 0U) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((farg0 * farg2) + M2C_FIELD(arg0, f32 *, 0x38));
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg1, f32 *, 8) = (f32) ((farg1 * farg2) + M2C_FIELD(arg0, f32 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x380);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_r5 + 1);
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x38, temp_r5);
}
typedef struct Stack_800BB218 Stack_800BB218;
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
  f32 temp_f31;
  Stack_800BB218 stack;
  f32 temp_f30;
  temp_f30 = farg0 * farg2;
  temp_f31 = farg1 * farg2;
  if ((get_random_float__8TObjFishFv(temp_f30) < lbl_805D9EA4) && (get_random_float__8TObjFishFv(temp_f31) < lbl_805D9EA4))
  {
    return farg0 * 0;
  }
  stack.sp8 = (*((f32 *) (((s8 *) arg0) + 0x38))) + temp_f30;
  stack.spC = *((f32 *) (((s8 *) arg0) + 0x300));
  stack.sp10 = (*((f32 *) (((s8 *) arg0) + 0x40))) + temp_f31;
  return csnVector((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) 0x88E0);
}
u8 *TObjEneDD__vt100(u8 *arg0, u8 *arg1) {
    Vec position;
    u8 *temp_r3;
    position.x = M2C_FIELD(arg1, f32 *, 0);
    position.y = M2C_FIELD(arg1, f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    position.z = M2C_FIELD(arg1, f32 *, 8);
    if (csnVectorUnder(&position.x, arg0 + 0x120, 0xE0) != NULL) {
        return NULL;
    }
    temp_r3 = (u8 *)(csnVectorUnder(&position.x, arg0 + 0x120, 0x15));
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    return temp_r3;
}

}
