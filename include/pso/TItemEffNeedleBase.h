#ifndef PSO_TITEMEFFNEEDLEBASE_H
#define PSO_TITEMEFFNEEDLEBASE_H

#include "pso/TObject.h"
#include "types.h"

class TItemEffNeedleBase : public TObject {
public:
    virtual ~TItemEffNeedleBase();
    virtual void run_task();
    virtual void render();
    virtual int hook();
public:
    void draw_model();
};

#endif
