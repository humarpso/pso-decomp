#ifndef PSO_MISC_TWINDOWSUBLOG_H
#define PSO_MISC_TWINDOWSUBLOG_H

#include "types.h"

struct TWindowSubLog
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void* m_2c;
    static void render();
    void run_task();
    void clear_flag4c_bit8();
    int cleanup();
    void set_flag4c_bit8();
};

#endif
