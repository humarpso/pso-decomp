#ifndef PSO_TBOSS6DPB_H
#define PSO_TBOSS6DPB_H
#include "pso/TObject.h"
#include "types.h"

class TBoss6DPB : public TObject {
public:
    virtual ~TBoss6DPB();
    virtual void run_task();
    virtual void render();
};

#endif
