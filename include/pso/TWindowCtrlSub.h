#ifndef PSO_TWINDOWCTRLSUB_H
#define PSO_TWINDOWCTRLSUB_H

#include "pso/TObject.h"
#include "types.h"

class TWindowCtrlSub : public TObject {
public:
    virtual ~TWindowCtrlSub();
    virtual void run_task();
public:
    static void run_task();
};

#endif
