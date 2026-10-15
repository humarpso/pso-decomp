#ifndef PSO_TOBJBOSS2DUSTCTRL_H
#define PSO_TOBJBOSS2DUSTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TObjBoss2DustCtrl : public TObject {
public:
    virtual ~TObjBoss2DustCtrl();
    virtual void run_task();
public:
    static void create();
};

#endif
