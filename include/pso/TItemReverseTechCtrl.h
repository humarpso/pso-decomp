#ifndef PSO_TITEMREVERSETECHCTRL_H
#define PSO_TITEMREVERSETECHCTRL_H
#include "pso/TObject.h"
#include "types.h"

class TItemReverseTechCtrl : public TObject {
public:
    virtual ~TItemReverseTechCtrl();
    virtual void run_task();
public:
    static void *create(void *arg0);
};

#endif
