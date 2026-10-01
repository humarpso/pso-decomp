#ifndef PSO_TSLICERHISTORY_H
#define PSO_TSLICERHISTORY_H
#include "pso/TObject.h"
#include "types.h"

class TSlicerHistory : public TObject {
public:
    virtual ~TSlicerHistory();
    virtual void run_task();
    virtual void render();
};

#endif
