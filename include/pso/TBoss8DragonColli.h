#ifndef PSO_TBOSS8DRAGONCOLLI_H
#define PSO_TBOSS8DRAGONCOLLI_H

#include "pso/TObject.h"
#include "types.h"

class TBoss8DragonColli : public TObject {
public:
    virtual ~TBoss8DragonColli();
    TObject *objects[3];

};

#include <stddef.h>
typedef char TBoss8DragonColli_objects_offset[offsetof(TBoss8DragonColli, objects) == 0x1c ? 1 : -1];

#endif
