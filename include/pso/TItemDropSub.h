#ifndef PSO_TITEMDROPSUB_H
#define PSO_TITEMDROPSUB_H

#include "pso/TObject.h"
#include "types.h"

class TItemDropSub : public TObject {
public:
    virtual ~TItemDropSub();
public:
    static void create_instance(s32 arg0);
};

#endif
