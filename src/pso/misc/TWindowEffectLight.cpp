#include "pso/TWindowEffectLight.h"

TWindowEffectLight::~TWindowEffectLight() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DE0E0;
extern const f32 lbl_805DE0E8;
extern const f32 lbl_805DE0EC;
extern const f32 lbl_805DE0F0;
void TWindowEffectLight__sub_802ACFE0(u8 *arg0);
extern const f32 lbl_805DE0E0;
extern const f32 TWindowEffectLight__data_805DE0E4;
extern const f32 lbl_805DE0E8;
f32 TWindowEffectLight__sub_802ACF9C(u8 *arg0);
}

extern "C" {

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2);
void run_task__18TWindowEffectLightFv(void *arg0);
void *__ct__18TWindowEffectLightFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK queue_destruction__7TObjectFv();

#pragma fp_contract on

#pragma fp_contract on
f32 TWindowEffectLight__sub_802ACF9C(u8 *arg0) {
  float new_var2;
  s16 *new_var;
  new_var2 = TWindowEffectLight__data_805DE0E4 * ((f32) (*(new_var = (s16 *) (((s8 *) arg0) + 0x26))));
  return (new_var2 * lbl_805DE0E8) + lbl_805DE0E0;
}

void TWindowEffectLight__sub_802ACFE0(u8 *arg0) {
  float new_var;
  new_var = lbl_805DE0F0 * ((f32) (*((s16 *) (((s8 *) arg0) + 0x26))));
  __cvt_fp2unsigned(lbl_805DE0EC * ((new_var * lbl_805DE0E8) + lbl_805DE0E0));
}

void run_task__18TWindowEffectLightFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x26) + 1;
    M2C_FIELD(arg0, s16 *, 0x26) = temp_r4;
    if ((s16)temp_r4 >= 8) {
        queue_destruction__7TObjectFv();
    }
}

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__18TWindowEffectLightFv(o, arg0, arg1, arg2);
    }
    return o;
}

}
