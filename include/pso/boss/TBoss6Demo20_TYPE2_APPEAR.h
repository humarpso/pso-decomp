#ifndef PSO_BOSS_TBOSS6DEMO20_TYPE2_APPEAR_H
#define PSO_BOSS_TBOSS6DEMO20_TYPE2_APPEAR_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo20_TYPE2_APPEAR : public TObject {
public:
    virtual ~TBoss6Demo20_TYPE2_APPEAR();
    void draw_fading_model_pair();
    void draw_fading_model_4();
    void draw_fading_model_1_pair();
    void draw_model_12();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0xD4];
};
typedef char TBoss6Demo20_TYPE2_APPEAR_size[sizeof(TBoss6Demo20_TYPE2_APPEAR) == 0xF0 ? 1 : -1];

#endif
