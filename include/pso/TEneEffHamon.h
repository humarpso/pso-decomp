#ifndef PSO_TENEEFFHAMON_H
#define PSO_TENEEFFHAMON_H
#include "pso/TObject.h"
#include "types.h"

class TEneEffHamon : public TObject {
public:
    virtual ~TEneEffHamon();
    virtual void render();
    virtual void run_task();
};

#endif
