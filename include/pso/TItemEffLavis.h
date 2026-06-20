#ifndef PSO_TITEMEFFLAVIS_H
#define PSO_TITEMEFFLAVIS_H

#include "pso/TItemShootModel.h"
#include "types.h"

class TItemEffLavis : public TItemShootModel {
public:
    virtual ~TItemEffLavis();
    virtual void hook();
};

#endif
