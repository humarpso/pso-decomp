#ifndef PSO_TEFFGUARD_H
#define PSO_TEFFGUARD_H

#include "pso/TEffect.h"
#include "types.h"

class TEffGuard : public TEffect {
public:
    virtual ~TEffGuard();
    virtual void run_task();
};

#endif
