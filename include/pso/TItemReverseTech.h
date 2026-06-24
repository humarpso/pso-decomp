#ifndef PSO_TITEMREVERSETECH_H
#define PSO_TITEMREVERSETECH_H

#include "pso/TObject.h"
#include "types.h"

class TItemReverseTech : public TObject {
public:
    virtual ~TItemReverseTech();
    virtual void run_task();
};

#endif
