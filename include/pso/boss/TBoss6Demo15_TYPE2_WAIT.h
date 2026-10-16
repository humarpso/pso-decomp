#ifndef PSO_BOSS_TBOSS6DEMO15_TYPE2_WAIT_H
#define PSO_BOSS_TBOSS6DEMO15_TYPE2_WAIT_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo15_TYPE2_WAIT : public TObject {
public:
    virtual ~TBoss6Demo15_TYPE2_WAIT();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x6C];
};
typedef char TBoss6Demo15_TYPE2_WAIT_size[sizeof(TBoss6Demo15_TYPE2_WAIT) == 0x88 ? 1 : -1];

#endif
