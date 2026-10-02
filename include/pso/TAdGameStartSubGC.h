#ifndef PSO_TADGAMESTARTSUBGC_H
#define PSO_TADGAMESTARTSUBGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGameStartSubGC : public TObject {
public:
    virtual ~TAdGameStartSubGC();
    virtual void run_task();
    virtual void render();
};

#endif
