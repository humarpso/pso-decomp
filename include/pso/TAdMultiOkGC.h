#ifndef PSO_TADMULTIOKGC_H
#define PSO_TADMULTIOKGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdMultiOkGC : public TObject {
public:
    virtual ~TAdMultiOkGC();
    virtual void run_task();
    virtual void render();
};

#endif
