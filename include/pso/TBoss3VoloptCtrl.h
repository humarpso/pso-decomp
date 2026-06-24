#ifndef PSO_TBOSS3VOLOPTCTRL_H
#define PSO_TBOSS3VOLOPTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TBoss3VoloptCtrl : public TObject {
public:
    virtual ~TBoss3VoloptCtrl();
    virtual void run_task();
};

#endif
