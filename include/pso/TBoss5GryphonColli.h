#ifndef PSO_TBOSS5GRYPHONCOLLI_H
#define PSO_TBOSS5GRYPHONCOLLI_H

#include "pso/TObject.h"
#include "types.h"

class TBoss5GryphonColli : public TObject {
public:
    TObject *objects[1];
public:
    virtual ~TBoss5GryphonColli();
};

#include <stddef.h>
typedef char TBoss5GryphonColliObjectsOffset[offsetof(TBoss5GryphonColli, objects) == 0x1C ? 1 : -1];

#endif
