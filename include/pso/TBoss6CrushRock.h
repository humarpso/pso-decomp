#ifndef PSO_TBOSS6CRUSHROCK_H
#define PSO_TBOSS6CRUSHROCK_H
#include "pso/TObject.h"
#include "types.h"

class TBoss6CrushRock : public TObject {
public:
    virtual ~TBoss6CrushRock();
    virtual void run_task();
    virtual void render();
public:
    static s32 is_falz_alive();
};

#endif
