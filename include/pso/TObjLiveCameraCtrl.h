#ifndef PSO_TOBJLIVECAMERACTRL_H
#define PSO_TOBJLIVECAMERACTRL_H

#include "pso/TObject.h"
#include "types.h"

class TObjLiveCameraCtrl : public TObject {
public:
    virtual ~TObjLiveCameraCtrl();
    virtual void run_task();
};

#endif
