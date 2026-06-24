#ifndef PSO_TOSWITCHATTACKSUB_H
#define PSO_TOSWITCHATTACKSUB_H

#include "pso/TObject.h"
#include "types.h"

class TOSwitchAttackSub : public TObject {
public:
    u8 _pad1C[0x4];
 void* m_20;
public:
    virtual ~TOSwitchAttackSub();
    virtual void run_task();
};

#endif
