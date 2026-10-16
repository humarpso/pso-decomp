#ifndef PSO_MISC_TWINDOWPARTYSTATUS_H
#define PSO_MISC_TWINDOWPARTYSTATUS_H

#include "types.h"
#include "pso/misc/TWindowSimpleStatus.h"

struct TWindowPartyStatus : public TWindowSimpleStatus {
    virtual ~TWindowPartyStatus();
    void draw();
    void draw_background(u8 *arg1);
    void run_task();};

typedef char TWindowPartyStatus_size[sizeof(TWindowPartyStatus) == 0x78 ? 1 : -1];
#endif
