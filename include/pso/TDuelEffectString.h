#ifndef PSO_TDUELEFFECTSTRING_H
#define PSO_TDUELEFFECTSTRING_H
#include "pso/TObject.h"
#include "types.h"

class TDuelEffectString : public TObject {
public:
    TDuelEffectString(TObject *arg1, void *arg2, void *arg3);
    virtual ~TDuelEffectString();
    virtual void run_task();
    virtual void render();
};

#endif
