#ifndef PSO_TSETEVTDESTROY_H
#define PSO_TSETEVTDESTROY_H

#include "pso/TObject.h"
#include "types.h"

class TSetEvtDestroy : public TObject {
public:
    virtual ~TSetEvtDestroy();
    virtual void run_task();
};

#endif
