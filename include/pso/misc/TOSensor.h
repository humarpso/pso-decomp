#ifndef PSO_MISC_TOSENSOR_H
#define PSO_MISC_TOSENSOR_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOSensor : public TOKey {
    virtual ~TOSensor();
    void render();};

#endif
