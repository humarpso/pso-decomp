#ifndef PSO_TTECZONDEEFF_H
#define PSO_TTECZONDEEFF_H
#include "pso/TObject.h"
#include "types.h"

class TTecZondeEff : public TObject {
public:
    virtual ~TTecZondeEff();
    virtual void run_task();
    virtual void render();
};

#endif
