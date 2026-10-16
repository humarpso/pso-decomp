#ifndef PSO_MISC_TODOORLABO_H
#define PSO_MISC_TODOORLABO_H

#include "types.h"
#include "pso/misc/TODoorFourLightBase.h"

struct TODoorLabo : public TODoorFourLightBase {
    virtual ~TODoorLabo();};

typedef char TODoorLabo_size[sizeof(TODoorLabo) == 0xFC ? 1 : -1];
#endif
