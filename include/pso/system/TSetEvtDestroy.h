#ifndef PSO_SYSTEM_TSETEVTDESTROY_H
#define PSO_SYSTEM_TSETEVTDESTROY_H

#include "pso/TObject.h"
#include "types.h"

struct SetDestroyEventRecord {
    s32 field00;
    s16 flags;
    s16 field06;
    s16 spawn_arg0;
    s16 spawn_arg1;
    s32 delay_ticks;
    s32 action_offset;
};
struct WaveEventContext { u8* stream; s32 cursor; };

class TSetEvtDestroy : public TObject {
public:
 SetDestroyEventRecord* m_event_record;
 WaveEventContext m_event_context;
 s32 m_countdown;
 s32 m_phase;
 void* m_30;

public:
    TSetEvtDestroy(TObject* parent, SetDestroyEventRecord* event);
    virtual ~TSetEvtDestroy();
    virtual void run_task();
};

#include <stddef.h>
typedef char TSetEvtDestroySize[(sizeof(TSetEvtDestroy) == 0x34) ? 1 : -1];
typedef char TSetEvtDestroyEventOffset[(offsetof(TSetEvtDestroy, m_event_record) == 0x1C) ? 1 : -1];
typedef char SetDestroyEventRecordSize[(sizeof(SetDestroyEventRecord) == 0x14) ? 1 : -1];
typedef char SetDestroyEventFlagsOffset[(offsetof(SetDestroyEventRecord, flags) == 4) ? 1 : -1];
typedef char SetDestroyEventDelayOffset[(offsetof(SetDestroyEventRecord, delay_ticks) == 0xC) ? 1 : -1];
typedef char SetDestroyEventActionOffset[(offsetof(SetDestroyEventRecord, action_offset) == 0x10) ? 1 : -1];
typedef char TSetEvtDestroyContextOffset[(offsetof(TSetEvtDestroy, m_event_context) == 0x20) ? 1 : -1];
typedef char TSetEvtDestroyCountdownOffset[(offsetof(TSetEvtDestroy, m_countdown) == 0x28) ? 1 : -1];
typedef char TSetEvtDestroyPhaseOffset[(offsetof(TSetEvtDestroy, m_phase) == 0x2C) ? 1 : -1];

#endif
