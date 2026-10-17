#include "types.h"

struct RecoveredFields_8013157C_arg0
{
  f32 field_0;
  u8 unknown_4[0x4];
  f32 field_8;
};

extern "C" {
f32 xyz_distance_squared(u8 *arg0, u8 *arg1);
f32 xz_distance_squared(struct RecoveredFields_8013157C_arg0 *arg0, u8 *arg1);
#pragma fp_contract on

typedef struct RecoveredFields_8013157C_arg0 RecoveredFields_8013157C_arg0;
#pragma fp_contract on
f32 xz_distance_squared(struct RecoveredFields_8013157C_arg0 *arg0, u8 *arg1) {
  f32 temp_f1;
  f32 temp_f3;
  temp_f1 = arg0->field_0 - (*((f32 *) (((s8 *) arg1) + 0)));
  temp_f3 = arg0->field_8 - (*((f32 *) (((s8 *) arg1) + 8)));
  return (temp_f1 * temp_f1) + (temp_f3 * temp_f3);
}

f32 xyz_distance_squared(u8 *arg0, u8 *arg1) {
  f32 temp_f1;
  f32 temp_f3;
  f32 temp_f4;
  temp_f3 = (*((f32 *) (((s8 *) arg0) + 0))) - (*((f32 *) (((s8 *) arg1) + 0)));
 temp_f4 = (*((f32 *) (((s8 *) arg0) + 4))) - (*((f32 *) (((s8 *) arg1) + 4))); do { temp_f1 = (*((f32 *) (((s8 *) arg0) + 8))) - (*((f32 *) (((s8 *) arg1) + 8))); return (temp_f1 * temp_f1) + (((temp_f3 * 1.0f) * temp_f3) + (temp_f4 * temp_f4)); } while (0);
}

}
