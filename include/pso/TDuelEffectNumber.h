#ifndef PSO_TDUELEFFECTNUMBER_H
#define PSO_TDUELEFFECTNUMBER_H
#include "pso/TObject.h"
#include "types.h"

class TDuelEffectNumber : public TObject {
public:
    virtual ~TDuelEffectNumber();
    virtual void run_task();
    virtual void render();
};

#endif
