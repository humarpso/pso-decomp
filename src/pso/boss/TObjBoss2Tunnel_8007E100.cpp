#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Curve_8007E16C {
    f32 accel;
    f32 decel;
    f32 peak;
    f32 accelEnd;
    f32 decelStart;
    f32 end;
    f32 accelDist;
    f32 decelPos;
    f32 dist;
} Curve_8007E16C;

extern "C" {
f32 sample_acceleration_curve(Curve_8007E16C *c, f32 t);
}

extern "C" {

int check_param_threshold__15TObjBoss2TunnelFPvf(void *arg0, f32 arg1);
s32 dt__15TObjBoss2TunnelFis(s32 arg0, s16 arg1);
s32 reset_floats__15TObjBoss2TunnelFi(s32 arg0);
M2C_UNK __dl__FPv();
M2C_UNK reset_floats__15TObjBoss2TunnelFPv();

s32 dt__15TObjBoss2TunnelFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

s32 reset_floats__15TObjBoss2TunnelFi(s32 arg0) {
    reset_floats__15TObjBoss2TunnelFPv();
    return arg0;
}

#pragma push
#pragma fp_contract on
f32 sample_acceleration_curve(Curve_8007E16C *c, f32 t) {
    if (t < 0.0f) {
        return 0.0f;
    }
    if (t < c->accelEnd) {
        return t * (0.5f * c->accel * t);
    }
    if (t < c->decelStart) {
        t -= c->accelEnd;
        return t * c->peak + c->accelDist;
    }
    if (t < c->end) {
        t = c->end - t;
        return t * (0.5f * c->decel * t) + c->dist;
    }
    return c->dist;
}
#pragma pop

int check_param_threshold__15TObjBoss2TunnelFPvf(void *arg0, f32 arg1) {
    return arg1 >= *(f32 *)((u8 *)arg0 + 20);
}

}
