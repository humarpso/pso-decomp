#ifndef PSO_TOBJCONTROL_H
#define PSO_TOBJCONTROL_H

#include "pso/TObject.h"
#include "types.h"

class TObjControl : public TObject {
public:
    virtual ~TObjControl();
    virtual void run_task();
};

#endif
