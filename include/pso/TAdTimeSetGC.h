#ifndef PSO_TADTIMESETGC_H
#define PSO_TADTIMESETGC_H

#include "pso/TObject.h"
#include "types.h"

class TAdTimeSetGC : public TObject {
public:
    virtual ~TAdTimeSetGC();
    virtual void run_task();
};

#endif
