#ifndef PSO_MISC_TWINDOWMESSAGEYESNO_H
#define PSO_MISC_TWINDOWMESSAGEYESNO_H

#include "types.h"

struct TWindowMessageYesNo
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    static void render();
    void run_task();
    static void *create(void *arg0, void *arg1, void *arg2, void *arg3);
};

#endif
