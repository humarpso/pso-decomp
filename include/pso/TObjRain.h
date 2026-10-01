#ifndef PSO_TOBJRAIN_H
#define PSO_TOBJRAIN_H
#include "pso/TObject.h"
#include "types.h"

class TObjRain : public TObject {
public:
    virtual ~TObjRain();
    virtual void run_task();
    virtual void render();
};

#endif
