#ifndef PSO_TADMULTICHGGAMEMODEGC_H
#define PSO_TADMULTICHGGAMEMODEGC_H
#include "pso/TObject.h"
#include "types.h"

class TAdMultiChgGameModeGC : public TObject {
public:
    virtual ~TAdMultiChgGameModeGC();
    virtual void run_task();
    virtual void render();
};

#endif
