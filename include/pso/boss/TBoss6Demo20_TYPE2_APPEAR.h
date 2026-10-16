#ifndef PSO_BOSS_TBOSS6DEMO20_TYPE2_APPEAR_H
#define PSO_BOSS_TBOSS6DEMO20_TYPE2_APPEAR_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo20_TYPE2_APPEAR : public TObject {
public:
    virtual ~TBoss6Demo20_TYPE2_APPEAR();
    u8 unk_1C[0xD4];
};
typedef char TBoss6Demo20_TYPE2_APPEAR_size[sizeof(TBoss6Demo20_TYPE2_APPEAR) == 0xF0 ? 1 : -1];

#endif
