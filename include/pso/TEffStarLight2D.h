#ifndef PSO_TEFFSTARLIGHT2D_H
#define PSO_TEFFSTARLIGHT2D_H
#include "pso/TObject.h"
#include "types.h"

class TEffStarLight2D : public TObject {
public:
    virtual ~TEffStarLight2D();
    virtual void render();
    virtual void run_task();
public:
    void copy_from_subobject(void* a1);
    void copy_from(void* q);
};

#endif
