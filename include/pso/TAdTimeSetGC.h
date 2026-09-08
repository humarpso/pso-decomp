#ifndef PSO_TADTIMESETGC_H
#define PSO_TADTIMESETGC_H

#include "pso/TObject.h"
#include "types.h"

class TAdTimeSetGC : public TObject {
public:
    virtual ~TAdTimeSetGC();
    virtual void run_task();
    s32 state_index;
    u8 unknown_20[0x24];
    s32 load_status;
    u8 unknown_48[8];
    TObject *owned_object;
    void *window;
    TObject *queued_object;
    u32 unknown_5c;
    s32 timer;

};

typedef void (TAdTimeSetGC::*TAdTimeSetGCStateAction)();
struct TAdTimeSetGCStateActions {
    TAdTimeSetGCStateAction first;
    TAdTimeSetGCStateAction task;
};

#include <stddef.h>
typedef char TAdTimeSetGC_owned_object_offset[offsetof(TAdTimeSetGC, owned_object) == 0x50 ? 1 : -1];
typedef char TAdTimeSetGC_window_offset[offsetof(TAdTimeSetGC, window) == 0x54 ? 1 : -1];
typedef char TAdTimeSetGC_queued_object_offset[offsetof(TAdTimeSetGC, queued_object) == 0x58 ? 1 : -1];
typedef char TAdTimeSetGC_state_index_offset[offsetof(TAdTimeSetGC, state_index) == 0x1c ? 1 : -1];
typedef char TAdTimeSetGC_load_status_offset[offsetof(TAdTimeSetGC, load_status) == 0x44 ? 1 : -1];
typedef char TAdTimeSetGC_timer_offset[offsetof(TAdTimeSetGC, timer) == 0x60 ? 1 : -1];
typedef char TAdTimeSetGCActionSize[sizeof(TAdTimeSetGCStateAction) == 12 ? 1 : -1];
typedef char TAdTimeSetGCEntrySize[sizeof(TAdTimeSetGCStateActions) == 24 ? 1 : -1];
typedef char TAdTimeSetGCStateTaskOffset[offsetof(TAdTimeSetGCStateActions, task) == 12 ? 1 : -1];

#endif
