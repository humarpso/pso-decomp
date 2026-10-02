#ifndef PSO_TITEMATTACKER_H
#define PSO_TITEMATTACKER_H
#include "pso/TObject.h"
#include "types.h"

class TItemAttacker : public TObject {
public:
    virtual ~TItemAttacker();
    virtual void run_task();
};

#endif
