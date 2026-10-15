#ifndef PSO_MISC_TWINDOWMESETA_H
#define PSO_MISC_TWINDOWMESETA_H

#include "types.h"

struct TWindowMeseta
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x3C];
    u32 m_64;
    u32 m_68;
    void* m_6c;
    void run_task();
    s32 get_meseta_value();
    void draw_value(s32 arg1);
};

#endif
