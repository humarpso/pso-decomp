#ifndef PSO_TOBJCHALLENGERETRY_H
#define PSO_TOBJCHALLENGERETRY_H

#include "pso/TObject.h"
#include "types.h"

class TObjChallengeRetry : public TObject {
public:
    virtual ~TObjChallengeRetry();
    virtual void run_task();
};

#endif
