#ifndef PSO_TEFFHIT_H
#define PSO_TEFFHIT_H
#include "pso/effect/TEffect.h"

class TEffHit : public TEffect {
public:
    TEffHit(const Vec* position);
    virtual ~TEffHit();
    virtual void run_task();

    s32 state;
};
typedef char HitEffectSize[(sizeof(TEffHit) == 0x74) ? 1 : -1];
typedef char HitEffectStateOffset[(offsetof(TEffHit, state) == 0x70) ? 1 : -1];
#endif
