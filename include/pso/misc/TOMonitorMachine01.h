#ifndef PSO_MISC_TOMONITORMACHINE01_H
#define PSO_MISC_TOMONITORMACHINE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOMonitorMachine01 : public TUnk_804AFBF8 {
    virtual ~TOMonitorMachine01();
    virtual void run_task();
    virtual void render();
    void *create();
    static void reset_static_state();
    static void load_resources();
    u8 unk_C8[0x10];
};

typedef char TOMonitorMachine01_size[sizeof(TOMonitorMachine01) == 0xD8 ? 1 : -1];

extern "C" {
void *TOMonitorMachine01__ct(void *arg0_, void *arg1);
void *__dt__18TOMonitorMachine01Fv(void *arg0, s16 arg1);
}

#endif
