#ifndef PSO_TBOSS5GRYPHONLIGHTNINGWING_H
#define PSO_TBOSS5GRYPHONLIGHTNINGWING_H
#include "pso/TBoss5GryphonLightning.h"
#include "types.h"

class TBoss5GryphonLightningWing : public TBoss5GryphonLightning {
public:
    virtual ~TBoss5GryphonLightningWing();
    virtual void run_task();
    virtual void render();
};

#endif
