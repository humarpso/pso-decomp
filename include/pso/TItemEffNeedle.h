#ifndef PSO_TITEMEFFNEEDLE_H
#define PSO_TITEMEFFNEEDLE_H

#include "pso/TItemEffNeedleBase.h"
#include "types.h"

class TItemEffNeedle : public TItemEffNeedleBase {
public:
    virtual ~TItemEffNeedle();
    virtual int hook();
};

#endif
