#include "types.h"
extern "C" {
f32 fn_801315A0(u8 *arg0, u8 *arg1);
}

extern "C" {

#pragma fp_contract on
f32 fn_801315A0(u8 *arg0, u8 *arg1) {
  f32 temp_f1;
  f32 temp_f3;
  f32 temp_f4;
  temp_f3 = (*((f32 *) (((s8 *) arg0) + 0))) - (*((f32 *) (((s8 *) arg1) + 0)));
 temp_f4 = (*((f32 *) (((s8 *) arg0) + 4))) - (*((f32 *) (((s8 *) arg1) + 4))); do { temp_f1 = (*((f32 *) (((s8 *) arg0) + 8))) - (*((f32 *) (((s8 *) arg1) + 8))); return (temp_f1 * temp_f1) + (((temp_f3 * 1.0f) * temp_f3) + (temp_f4 * temp_f4)); } while (0);
}

}
