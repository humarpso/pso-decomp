#ifndef PSO_TADGAMESTARTGC_H
#define PSO_TADGAMESTARTGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGameStartGC : public TObject {
public:
    virtual ~TAdGameStartGC();
    virtual void render();
    virtual void run_task();
};

#endif
