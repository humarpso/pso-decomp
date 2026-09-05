#ifndef PSO_SYSTEM_TSETEVTDESTROY_H
#define PSO_SYSTEM_TSETEVTDESTROY_H

#include "pso/TObject.h"
#include "types.h"

class TSetEvtDestroy : public TObject {
public:
 s16* m_1c;
 u8 m_event_context[8];
 s32 m_countdown;
 s32 m_phase;
 void* m_30;

public:
    virtual ~TSetEvtDestroy();
    virtual void run_task();
};

#include <stddef.h>
typedef char TSetEvtDestroySize[(sizeof(TSetEvtDestroy) == 0x34) ? 1 : -1];
typedef char TSetEvtDestroyEventOffset[(offsetof(TSetEvtDestroy, m_1c) == 0x1C) ? 1 : -1];
typedef char TSetEvtDestroyCountdownOffset[(offsetof(TSetEvtDestroy, m_countdown) == 0x28) ? 1 : -1];
typedef char TSetEvtDestroyPhaseOffset[(offsetof(TSetEvtDestroy, m_phase) == 0x2C) ? 1 : -1];

#endif
