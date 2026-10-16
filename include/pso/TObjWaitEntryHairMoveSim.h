#ifndef PSO_TOBJWAITENTRYHAIRMOVESIM_H
#define PSO_TOBJWAITENTRYHAIRMOVESIM_H
#include "pso/TObject.h"
#include "types.h"

class TObjWaitEntryHairMoveSim : public TObject {
public:
    virtual ~TObjWaitEntryHairMoveSim();
    virtual void run_task();
};

#endif
