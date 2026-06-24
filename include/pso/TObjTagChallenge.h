#ifndef PSO_TOBJTAGCHALLENGE_H
#define PSO_TOBJTAGCHALLENGE_H

#include "pso/TObject.h"
#include "types.h"

class TObjTagChallenge : public TObject {
public:
    virtual ~TObjTagChallenge();
    virtual void run_task();
};

#endif
