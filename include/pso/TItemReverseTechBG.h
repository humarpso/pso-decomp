#ifndef PSO_TITEMREVERSETECHBG_H
#define PSO_TITEMREVERSETECHBG_H
#include "pso/TObject.h"
#include "types.h"

class TItemReverseTechBG : public TObject {
public:
    virtual ~TItemReverseTechBG();
    virtual void run_task();
    virtual void render();
};

#endif
