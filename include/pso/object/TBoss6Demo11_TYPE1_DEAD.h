#ifndef PSO_OBJECT_TBOSS6DEMO11_TYPE1_DEAD_H
#define PSO_OBJECT_TBOSS6DEMO11_TYPE1_DEAD_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo11_TYPE1_DEAD : public TObject {
public:
    virtual ~TBoss6Demo11_TYPE1_DEAD();
    void *destroy(s16);
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x74];
};
typedef char TBoss6Demo11_TYPE1_DEAD_size[sizeof(TBoss6Demo11_TYPE1_DEAD) == 0x90 ? 1 : -1];

#endif
