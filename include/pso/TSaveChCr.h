#ifndef PSO_TSAVECHCR_H
#define PSO_TSAVECHCR_H

#include "pso/TObject.h"
#include "types.h"

class TSaveChCr : public TObject {
public:
    virtual ~TSaveChCr();
    virtual void run_task();
};

#endif
