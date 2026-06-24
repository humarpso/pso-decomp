#ifndef PSO_TITEMTEXLOAD_H
#define PSO_TITEMTEXLOAD_H

#include "pso/TObject.h"
#include "types.h"

class TItemTexLoad : public TObject {
public:
    virtual ~TItemTexLoad();
    virtual void run_task();
};

#endif
