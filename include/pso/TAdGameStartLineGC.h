#ifndef PSO_TADGAMESTARTLINEGC_H
#define PSO_TADGAMESTARTLINEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGameStartLineGC : public TObject {
public:
    virtual ~TAdGameStartLineGC();
    virtual void run_task();
    virtual void render();
};

#endif
