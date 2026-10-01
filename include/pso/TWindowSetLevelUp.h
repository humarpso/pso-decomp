#ifndef PSO_TWINDOWSETLEVELUP_H
#define PSO_TWINDOWSETLEVELUP_H
#include "pso/TObject.h"
#include "types.h"

class TWindowSetLevelUp : public TObject {
public:
    virtual ~TWindowSetLevelUp();
    virtual void run_task();
    virtual void render();
};

#endif
