#ifndef PSO_MISC_TWINDOWMESSAGEPAGE_H
#define PSO_MISC_TWINDOWMESSAGEPAGE_H

#include "types.h"

struct TWindowMessagePage
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x6E];
    u32 m_90;
    u32 m_94;
    s32 is_ready();
    void update_message();
    void set_message(void *msg, s32 flags);
    static u8 *create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void set_text(s32 a, s32 b, s32 c);
    int render();
    void run_task();
};

#endif
