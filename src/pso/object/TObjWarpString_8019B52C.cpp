#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DBFE4;
extern const f32 lbl_805DBFEC;
void TObjWarpString__sub_8019B6E4(u8 *arg0);
}

extern "C" {

void TObjWarpString__sub_8019B728(void *arg0);
void TObjWarpString__sub_8019B77C(void *arg0);

void TObjWarpString__sub_8019B6E4(u8 *arg0) {
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x44)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x44))) - lbl_805DBFEC);
  if ((*((f32 *) (((s8 *) arg0) + 0x44))) < (*(new_var = &lbl_805DBFE4)))
  {
    *((f32 *) (((s8 *) arg0) + 0x44)) = (f32) (*new_var);
    queue_destruction__7TObjectFv(arg0);
  }
}

void TObjWarpString__sub_8019B728(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40) - 1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 3;
    }
}

void TObjWarpString__sub_8019B77C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40) - 1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    }
}

}
