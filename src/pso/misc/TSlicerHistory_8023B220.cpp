#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DC950;
extern const f32 lbl_805DC94C;
void run_task__14TSlicerHistoryFv(u8 *arg0);
}

extern "C" {

void run_task__14TSlicerHistoryFv(u8 *arg0) {
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3c))) - lbl_805DC94C);
  if ((*((f32 *) (((s8 *) arg0) + 0x3c))) < (*(new_var = &lbl_805DC950)))
  {
    *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) (*new_var);
    queue_destruction__7TObjectFv(arg0);
  }
}

}
