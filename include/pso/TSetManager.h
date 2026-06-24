#ifndef PSO_TSETMANAGER_H
#define PSO_TSETMANAGER_H

#include "pso/TObject.h"
#include "types.h"

class TSetManager : public TObject {
public:
    virtual ~TSetManager();
    virtual void run_task();
};

#endif
