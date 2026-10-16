#ifndef PSO_TADGUIDETXTGC_H
#define PSO_TADGUIDETXTGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGuideTxtGC : public TObject {
public:
    virtual ~TAdGuideTxtGC();
    virtual void render();
    virtual void run_task();
};

#endif
