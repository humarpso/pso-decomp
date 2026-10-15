#ifndef PSO_MISC_TWINDOWSOUNDBALANCE_H
#define PSO_MISC_TWINDOWSOUNDBALANCE_H

#include "types.h"

struct TWindowSoundBalance
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x38];
    u8 m_60;
    u8 m_61;
    u16 m_62;
    u16 m_64;
    void play_open_sound();
    void handle_lr_input();
    void run_task();
    void apply_balance(void *arg1);
    void handle_cancel();
};

#endif
