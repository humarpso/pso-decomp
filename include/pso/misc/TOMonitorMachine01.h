#ifndef PSO_MISC_TOMONITORMACHINE01_H
#define PSO_MISC_TOMONITORMACHINE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOMonitorMachine01 : public TUnk_804AFBF8 {
    virtual ~TOMonitorMachine01();
    void run_task();
    void render();
    void *create();
    static void reset_static_state();
    static void load_resources();
    u8 unk_C8[0x10];
};

typedef char TOMonitorMachine01_size[sizeof(TOMonitorMachine01) == 0xD8 ? 1 : -1];
#endif
