#ifndef PSO_BOSS_TBOSS6DEMO10_TYPE1_APPEAR_H
#define PSO_BOSS_TBOSS6DEMO10_TYPE1_APPEAR_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo10_TYPE1_APPEAR : public TObject {
public:
    virtual ~TBoss6Demo10_TYPE1_APPEAR();
    void sub_8033C7C8();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x4C];
};
typedef char TBoss6Demo10_TYPE1_APPEAR_size[sizeof(TBoss6Demo10_TYPE1_APPEAR) == 0x68 ? 1 : -1];

#endif
