#ifndef PSO_TADFADEGC_H
#define PSO_TADFADEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdFadeGC : public TObject {
public:
    virtual ~TAdFadeGC();
    virtual void run_task();
    virtual void render();
};

#endif
