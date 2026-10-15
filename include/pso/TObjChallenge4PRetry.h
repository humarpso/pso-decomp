#ifndef PSO_TOBJCHALLENGE4PRETRY_H
#define PSO_TOBJCHALLENGE4PRETRY_H

#include "pso/TObject.h"
#include "types.h"

class TObjChallenge4PRetry : public TObject {
public:
 u8 _pad1c[0x04];
 s32 m_20;
 s32 m_24;

public:
    virtual ~TObjChallenge4PRetry();
    virtual void run_task();
public:
    static void *create(void *arg0);
};

#endif
