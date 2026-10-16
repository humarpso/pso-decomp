#ifndef PSO_TEFFECT_H
#define PSO_TEFFECT_H
#include "pso/TObject.h"
#include <dolphin/mtx.h>

class TEffect : public TObject {
public:
    TEffect();
    virtual ~TEffect();

    u32 source;
    Vec position;
    f32 field_2c[4];
    Vec scale;
    f32 direction[3];
    s32 angles[3];
    f32 field_60[2];
    s32 age;
    u32 field_6c;
};
#include <stddef.h>
typedef char EffectSize[(sizeof(TEffect) == 0x70) ? 1 : -1];
typedef char EffectPositionOffset[(offsetof(TEffect, position) == 0x20) ? 1 : -1];
typedef char EffectScaleOffset[(offsetof(TEffect, scale) == 0x3C) ? 1 : -1];
typedef char EffectAgeOffset[(offsetof(TEffect, age) == 0x68) ? 1 : -1];
#endif
