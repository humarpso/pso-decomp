#ifndef PSO_TBOSS5GRYPHONLIGHTNINGHORN_H
#define PSO_TBOSS5GRYPHONLIGHTNINGHORN_H
#include "pso/TBoss5GryphonLightning.h"
#include "types.h"

class TBoss5GryphonLightningHorn : public TBoss5GryphonLightning {
public:
    virtual ~TBoss5GryphonLightningHorn();
    virtual void run_task();
    virtual void render();
};

#endif
