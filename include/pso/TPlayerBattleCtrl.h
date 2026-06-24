#ifndef PSO_TPLAYERBATTLECTRL_H
#define PSO_TPLAYERBATTLECTRL_H

#include "pso/TObject.h"
#include "types.h"

class TPlayerBattleCtrl : public TObject {
public:
    virtual ~TPlayerBattleCtrl();
    virtual void run_task();
};

#endif
