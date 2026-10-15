#ifndef PSO_MISC_TCINECTRL_H
#define PSO_MISC_TCINECTRL_H

#include "types.h"

struct TCineCtrl
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 m_27;
    u32 m_28;
    void render();
    static void reset_state(s32 arg0);
    static void reset(s32 arg0);
    void run_task();
};

#endif
