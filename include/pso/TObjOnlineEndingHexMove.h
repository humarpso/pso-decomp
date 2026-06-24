#ifndef PSO_TOBJONLINEENDINGHEXMOVE_H
#define PSO_TOBJONLINEENDINGHEXMOVE_H

#include "pso/TObject.h"
#include "types.h"

class TObjOnlineEndingHexMove : public TObject {
public:
    virtual ~TObjOnlineEndingHexMove();
    virtual void run_task();
};

#endif
