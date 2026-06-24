#ifndef PSO_TEFFHIT_H
#define PSO_TEFFHIT_H

#include "pso/TEffect.h"
#include "types.h"

class TEffHit : public TEffect {
public:
    virtual ~TEffHit();
    virtual void run_task();
};

#endif
