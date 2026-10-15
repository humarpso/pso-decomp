#ifndef PSO_MISC_TCHALLENGE_H
#define PSO_MISC_TCHALLENGE_H

#include "types.h"

struct TChallenge
{
    u8 _object[0x1C];
    s32 state;
    s32 frame_count;
    u32 m_24;
    u32 m_28;
    u32 m_2c;

    void run_task();
    void update_active();
    void wait_for_quest();
    void initialize_windows();
    static void *create();
};

#endif
