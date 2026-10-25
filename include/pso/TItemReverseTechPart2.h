#ifndef PSO_TITEMREVERSETECHPART2_H
#define PSO_TITEMREVERSETECHPART2_H
#include "pso/TObject.h"
#include "types.h"

class TItemReverseTechPart2 : public TObject {
public:
    virtual ~TItemReverseTechPart2();
    virtual void run_task();
    virtual void render();
public:
    void destroy_and_flag();
    static void render();
};

#endif
