#ifndef PSO_TDEADSPOT_H
#define PSO_TDEADSPOT_H
#include "pso/TObject.h"
#include "types.h"

class TDeadSpot : public TObject {
public:
    virtual ~TDeadSpot();
    virtual void render();
    virtual void run_task();
};

#endif
