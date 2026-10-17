#ifndef PSO_MISC_TODOORFOURLIGHTSEABED_H
#define PSO_MISC_TODOORFOURLIGHTSEABED_H

#include "types.h"
#include "pso/misc/TODoorFourLightBase.h"

struct TODoorFourLightSeabed : public TODoorFourLightBase {
    virtual ~TODoorFourLightSeabed();
};

typedef char TODoorFourLightSeabed_size[sizeof(TODoorFourLightSeabed) == 0xFC ? 1 : -1];
#endif
