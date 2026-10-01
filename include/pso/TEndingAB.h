#ifndef PSO_TENDINGAB_H
#define PSO_TENDINGAB_H
#include "pso/TObject.h"
#include "types.h"

class TEndingAB : public TObject {
public:
    virtual ~TEndingAB();
    virtual void run_task();
    virtual void render();
};

#endif
