#ifndef PSO_TBOSS8DRAGONDEMO_H
#define PSO_TBOSS8DRAGONDEMO_H
#include "pso/TObject.h"
#include "types.h"

class TBoss8DragonDemo : public TObject {
public:
    virtual ~TBoss8DragonDemo();
    virtual void run_task();
    virtual void render();
public:
    int copy_position();
    static void render();
};

#endif
