#ifndef PSO_TOBJLIVEMONITORSMALL_H
#define PSO_TOBJLIVEMONITORSMALL_H
#include "pso/TObjLiveMonitor.h"
#include "types.h"

class TObjLiveMonitorSmall : public TObjLiveMonitor {
public:
    virtual ~TObjLiveMonitorSmall();
    virtual void run_task();
    virtual void render();
public:
    s32 spawn_for_each_fish();
};

#endif
