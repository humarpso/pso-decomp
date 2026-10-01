#ifndef PSO_TSWITCH_H
#define PSO_TSWITCH_H
#include "pso/TObject.h"
#include "types.h"

class TSwitch : public TObject {
public:
    virtual ~TSwitch();
    virtual void run_task();
    virtual void render();
};

#endif
