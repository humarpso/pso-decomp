#ifndef PSO_TBOSS1DRAGONCOLLI_H
#define PSO_TBOSS1DRAGONCOLLI_H

#include "pso/TObject.h"
#include "types.h"

class TBoss1DragonColli : public TObject {
public:
 void* m_objs[3];

public:
    virtual ~TBoss1DragonColli();
};

#endif
