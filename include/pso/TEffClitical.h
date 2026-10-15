#ifndef PSO_TEFFCLITICAL_H
#define PSO_TEFFCLITICAL_H
#include "pso/effect/TEffect.h"
#include "types.h"

class TEffClitical : public TEffect {
public:
    virtual ~TEffClitical();
    virtual void run_task();
    virtual void render();
public:
    void create();
};

#endif
