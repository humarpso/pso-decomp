#ifndef PSO_TEFFSTARLIGHTCHILD_H
#define PSO_TEFFSTARLIGHTCHILD_H
#include "pso/TObject.h"
#include "types.h"

class TEffStarLightChild : public TObject {
public:
    virtual ~TEffStarLightChild();
    virtual void run_task();
public:
    virtual void render();
};

#endif
