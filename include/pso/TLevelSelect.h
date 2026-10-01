#ifndef PSO_TLEVELSELECT_H
#define PSO_TLEVELSELECT_H
#include "pso/TObject.h"
#include "types.h"

class TLevelSelect : public TObject {
public:
    virtual ~TLevelSelect();
    virtual void run_task();
    virtual void render();
};

#endif
