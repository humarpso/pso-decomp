#ifndef PSO_TBGLIGHTNING_H
#define PSO_TBGLIGHTNING_H
#include "pso/TObject.h"
#include "types.h"

class TBGLightning : public TObject {
public:
    virtual ~TBGLightning();
    virtual void render();
    virtual void run_task();
};

#endif
