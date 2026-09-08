#ifndef PSO_TBOSS1DRAGONCOLLI_H
#define PSO_TBOSS1DRAGONCOLLI_H

#include "pso/TObject.h"
#include "types.h"

class TBoss1DragonColli : public TObject {
public:
    TObject *objects[3];

public:
    virtual ~TBoss1DragonColli();
};

#include <stddef.h>
typedef char TBoss1DragonColliObjectsOffset[offsetof(TBoss1DragonColli, objects) == 0x1C ? 1 : -1];

#endif
