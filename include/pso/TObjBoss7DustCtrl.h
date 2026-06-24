#ifndef PSO_TOBJBOSS7DUSTCTRL_H
#define PSO_TOBJBOSS7DUSTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TObjBoss7DustCtrl : public TObject {
public:
    virtual ~TObjBoss7DustCtrl();
    virtual void run_task();
};

#endif
