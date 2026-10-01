#ifndef PSO_TADGAMESTARTBACKGC_H
#define PSO_TADGAMESTARTBACKGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdGameStartBackGC : public TObject {
public:
    virtual ~TAdGameStartBackGC();
    virtual void run_task();
    virtual void render();
};

#endif
