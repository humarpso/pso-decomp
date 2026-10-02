#ifndef PSO_TCHCREFFCTRLPL_H
#define PSO_TCHCREFFCTRLPL_H
#include "pso/TObject.h"
#include "types.h"

class TChCrEffCtrlPl : public TObject {
public:
    virtual ~TChCrEffCtrlPl();
    virtual void run_task();
    virtual void render();
};

#endif
