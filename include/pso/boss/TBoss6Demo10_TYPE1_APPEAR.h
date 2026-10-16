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
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x4];
    s32 m_28;
    u8 unk_2C[0x4];
    s32 m_30;
    u8 unk_34[0x2C];
    s32 m_60;
    u8 unk_64[0x4];
};
typedef char TBoss6Demo10_TYPE1_APPEAR_size[sizeof(TBoss6Demo10_TYPE1_APPEAR) == 0x68 ? 1 : -1];

#endif
