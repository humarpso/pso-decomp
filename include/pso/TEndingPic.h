#ifndef PSO_TENDINGPIC_H
#define PSO_TENDINGPIC_H
#include "pso/TObject.h"
#include "types.h"

class TEndingPic : public TObject {
public:
    virtual ~TEndingPic();
    virtual void run_task();
    virtual void render();
};

#endif
