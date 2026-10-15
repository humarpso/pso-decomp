#ifndef PSO_TBOSS1DRAGONDEMO_H
#define PSO_TBOSS1DRAGONDEMO_H
#include "pso/TObject.h"
#include "types.h"

class TBoss1DragonDemo : public TObject {
public:
    virtual ~TBoss1DragonDemo();
    virtual void run_task();
    virtual void render();
public:
    static void render();
};

#endif
