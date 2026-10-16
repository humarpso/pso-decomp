#ifndef PSO_TITEMEFFNEEDLEBASE_H
#define PSO_TITEMEFFNEEDLEBASE_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffNeedleBase : public TObject {
public:
    virtual ~TItemEffNeedleBase();
    virtual int vfunc_6();
    virtual void run_task();
    virtual void render();
    virtual int hook();
public:
};

#endif
