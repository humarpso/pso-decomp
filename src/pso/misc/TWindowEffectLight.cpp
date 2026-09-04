#include "pso/TWindowEffectLight.h"

TWindowEffectLight::~TWindowEffectLight() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create__18TWindowEffectLightFPvPvPv(void *arg0, void *arg1, void *arg2);
void run_task__18TWindowEffectLightFv(void *arg0);
void *__ct__18TWindowEffectLightFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK queue_destruction__7TObjectFv();

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
