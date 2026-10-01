#ifndef PSO_TADRAYGC_H
#define PSO_TADRAYGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdRayGC : public TObject {
public:
    virtual ~TAdRayGC();
    virtual void run_task();
    virtual void render();
};

#endif
