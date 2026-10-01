#ifndef PSO_TADGAMESTARTSHADOWGC_H
#define PSO_TADGAMESTARTSHADOWGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGameStartShadowGC : public TObject {
public:
    virtual ~TAdGameStartShadowGC();
    virtual void run_task();
    virtual void render();
};

#endif
