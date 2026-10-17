#ifndef PSO_MISC_TODOORFOURLIGHTSEABEDU_H
#define PSO_MISC_TODOORFOURLIGHTSEABEDU_H

#include "types.h"
#include "pso/misc/TODoorFourLightBase.h"

struct TODoorFourLightSeabedU : public TODoorFourLightBase {
    virtual ~TODoorFourLightSeabedU();
};

typedef char TODoorFourLightSeabedU_size[sizeof(TODoorFourLightSeabedU) == 0xFC ? 1 : -1];
#endif
