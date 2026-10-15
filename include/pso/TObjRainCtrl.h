#ifndef PSO_TOBJRAINCTRL_H
#define PSO_TOBJRAINCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TObjRainCtrl : public TObject {
public:
    virtual ~TObjRainCtrl();
    virtual void run_task();
public:
    static void create();
};

#endif
