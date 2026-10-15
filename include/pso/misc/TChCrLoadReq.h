#ifndef PSO_MISC_TCHCRLOADREQ_H
#define PSO_MISC_TCHCRLOADREQ_H
#include "types.h"
#include <stddef.h>

class TChCrLoadReq {
public:
    u8 pad[0x60];
    s32 state;
    s32 timer;
    s32 calc_preview_last_index(s32 display_index, s32 region_index);
    void run_task();
    void close_and_destroy();
    void try_advance_state();
    void update_load_progress();
public:
    void reset_request();
    void copy(void* q);
    static void *create(void *arg0);
};
typedef char TChCrLoadReq_state_offset[(offsetof(TChCrLoadReq,state)==0x60)?1:-1];
typedef char TChCrLoadReq_timer_offset[(offsetof(TChCrLoadReq,timer)==0x64)?1:-1];
#endif
