#ifndef PSO_MISC_TODOORLABONORMAL_H
#define PSO_MISC_TODOORLABONORMAL_H

#include "types.h"
#include "pso/misc/TODoorFourLightBase.h"

struct TODoorLaboNormal : public TODoorFourLightBase {
    virtual ~TODoorLaboNormal();
    void init_field_d4();};

typedef char TODoorLaboNormal_size[sizeof(TODoorLaboNormal) == 0xFC ? 1 : -1];
#endif
