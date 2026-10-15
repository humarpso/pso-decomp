#include <dolphin/mtx.h>
#include "types.h"
#pragma fp_contract on

struct Stack_800BB218
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>
#include "pso/enemy/TObjEneDD.h"

extern "C" {
f32 fabs_float(f32);
s32 csnVector(void *, void *, int);
extern const f32 lbl_805D9EA4;
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
u8 *csnVectorUnder(f32 *, void *, s32);
u8 *TObjEneDD__vt100(u8 *arg0, u8 *arg1);
}

extern "C" {

s32 VecCopy__FP3VecPC3Vec(void *, void *, s32);

void TObjEneDD::calc_shot_position(u8 *arg1, f32 farg0, f32 farg1, f32 farg2) {
    u8 *arg0 = (u8 *)this;
    s32 temp_r5;

    f32 temp_f3 = farg2 + *(f32 *)((s8 *)arg0 + 0x37C);
    if (enemy_probe_wall_ahead((u8 *)(arg0), farg0, farg1, temp_f3) == 0U) {
        *(f32 *)((s8 *)arg1 + 0) = (f32) ((farg0 * farg2) + *(f32 *)((s8 *)arg0 + 0x38));
        *(f32 *)((s8 *)arg1 + 4) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
        *(f32 *)((s8 *)arg1 + 8) = (f32) ((farg1 * farg2) + *(f32 *)((s8 *)arg0 + 0x40));
        *(s32 *)((s8 *)arg0 + 0x380) = 0;
        return;
    }
    temp_r5 = *(s32 *)((s8 *)arg0 + 0x380);
    *(s32 *)((s8 *)arg0 + 0x380) = (s32) (temp_r5 + 1);
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x38, temp_r5);
}
typedef struct Stack_800BB218 Stack_800BB218;
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
  f32 temp_f31;
  Stack_800BB218 stack;
  f32 temp_f30;
  temp_f30 = farg0 * farg2;
  temp_f31 = farg1 * farg2;
  if ((fabs_float(temp_f30) < lbl_805D9EA4) && (fabs_float(temp_f31) < lbl_805D9EA4))
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
    position.x = *(f32 *)((s8 *)arg1 + 0);
    position.y = *(f32 *)((s8 *)arg1 + 4) + *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x2B0)) + 0x10);
    position.z = *(f32 *)((s8 *)arg1 + 8);
    if (csnVectorUnder(&position.x, arg0 + 0x120, 0xE0) != NULL) {
        return NULL;
    }
    temp_r3 = (u8 *)(csnVectorUnder(&position.x, arg0 + 0x120, 0x15));
    if (temp_r3 == NULL) {
        return NULL;
    }
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 4);
    return temp_r3;
}

}
