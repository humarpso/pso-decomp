#ifndef PSO_TBOSS3VOLOPTCTRL_H
#define PSO_TBOSS3VOLOPTCTRL_H

#include "pso/TObject.h"
#include "types.h"

class TBoss3VoloptCtrl : public TObject {
public:
    virtual ~TBoss3VoloptCtrl();
    virtual void run_task();
    s32 countdown;
    s32 phase;
};

#include <stddef.h>
typedef char TBoss3VoloptCtrl_countdown_offset[offsetof(TBoss3VoloptCtrl, countdown) == 0x1C ? 1 : -1];
typedef char TBoss3VoloptCtrl_phase_offset[offsetof(TBoss3VoloptCtrl, phase) == 0x20 ? 1 : -1];

#endif
