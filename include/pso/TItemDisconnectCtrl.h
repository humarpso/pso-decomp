#ifndef PSO_TITEMDISCONNECTCTRL_H
#define PSO_TITEMDISCONNECTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TItemDisconnectCtrl : public TObject {
public:
    virtual ~TItemDisconnectCtrl();
    virtual void run_task();
};

#endif
