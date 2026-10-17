#ifndef PSO_MISC_TOSENSOR_H
#define PSO_MISC_TOSENSOR_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOSensor : public TOKey {
    virtual ~TOSensor();
    virtual void vfunc_16();
    virtual s32 is_confirm_pressed();
    virtual void vfunc_17();
    virtual void update_armed_switch();
    virtual void vfunc_25();
    void render();
};

#endif
