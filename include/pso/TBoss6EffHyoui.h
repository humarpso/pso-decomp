#ifndef PSO_TBOSS6EFFHYOUI_H
#define PSO_TBOSS6EFFHYOUI_H

#include "pso/TObject.h"
#include "types.h"

class TBoss6EffHyoui : public TObject {
public:
 void* m_1c;
public:
    virtual ~TBoss6EffHyoui();
    virtual void run_task();
public:
    void *create(void *arg1, void *arg2);
};

#endif
