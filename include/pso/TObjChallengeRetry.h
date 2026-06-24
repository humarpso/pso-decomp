#ifndef PSO_TOBJCHALLENGERETRY_H
#define PSO_TOBJCHALLENGERETRY_H

#include "pso/TObject.h"
#include "types.h"

class TObjChallengeRetry : public TObject {
public:
 u8 _pad1c[0x04];
 s32 m_20;
 s32 m_24;

public:
    virtual ~TObjChallengeRetry();
    virtual void run_task();
};

#endif
