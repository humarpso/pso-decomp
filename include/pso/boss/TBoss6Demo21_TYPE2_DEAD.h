#ifndef PSO_BOSS_TBOSS6DEMO21_TYPE2_DEAD_H
#define PSO_BOSS_TBOSS6DEMO21_TYPE2_DEAD_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo21_TYPE2_DEAD : public TObject {
public:
    virtual ~TBoss6Demo21_TYPE2_DEAD();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x98];
public:
    void draw_model_13();
    static void draw_fading_model_8(void *p);
    static void draw_fading_model_5(void *p);
    void draw_fading_model_4();
};
typedef char TBoss6Demo21_TYPE2_DEAD_size[sizeof(TBoss6Demo21_TYPE2_DEAD) == 0xB4 ? 1 : -1];

#endif
