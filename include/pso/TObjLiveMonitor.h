#ifndef PSO_TOBJLIVEMONITOR_H
#define PSO_TOBJLIVEMONITOR_H
#include "pso/TObject.h"
#include "types.h"

class TObjLiveMonitor : public TObject {
public:
    virtual ~TObjLiveMonitor();
    virtual void run_task();
    virtual void render();
public:
    static void *create(void *arg0);
};

#endif
