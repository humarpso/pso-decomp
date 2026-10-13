#ifndef PSO_BOSS_TBOSS2FIN_H
#define PSO_BOSS_TBOSS2FIN_H
#include "pso/TObjEZRopeBase.h"
#include "types.h"

class TBoss2Fin : public TObjEZRopeBase {
public:
    virtual ~TBoss2Fin();
    virtual void run_task();
    virtual void render();
};

#endif
