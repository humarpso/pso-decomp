#ifndef PSO_TBOSS5GRYPHONDEMO_H
#define PSO_TBOSS5GRYPHONDEMO_H
#include "pso/TObject.h"
#include "types.h"

class TBoss5GryphonDemo : public TObject {
public:
    virtual ~TBoss5GryphonDemo();
    virtual void run_task();
    virtual void render();
};

#endif
