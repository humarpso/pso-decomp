#ifndef PSO_MISC_TWINDOWCOST_H
#define PSO_MISC_TWINDOWCOST_H

#include "types.h"
#include "pso/misc/TWindowMeseta.h"

struct TWindowCost : public TWindowMeseta {
    virtual ~TWindowCost();
    void run_task();};

typedef char TWindowCost_size[sizeof(TWindowCost) == 0x74 ? 1 : -1];
#endif
