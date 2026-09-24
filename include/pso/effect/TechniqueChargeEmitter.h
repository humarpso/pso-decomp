#ifndef PSO_EFFECT_TECHNIQUE_CHARGE_EMITTER_H
#define PSO_EFFECT_TECHNIQUE_CHARGE_EMITTER_H

#include "types.h"

struct TechniqueChargeEmitter {
    u8 task[0x1C];
    void* actor;
    float position[3];
    s32 age;
    u32 playback;
};
typedef char TechniqueChargeEmitterSize[(sizeof(TechniqueChargeEmitter)==0x34)?1:-1];

#endif
