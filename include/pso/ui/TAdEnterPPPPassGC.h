#ifndef PSO_UI_TADENTERPPPPASSGC_H
#define PSO_UI_TADENTERPPPPASSGC_H

#include "types.h"

struct TAdEnterPPPPassGC
{
    void render();
    void run_task();
    u32 m_1c;
    u8 _pad20[0x4];
    u32 m_24;
    u8 _pad28[0x18];
    u32 m_40;
};

#endif
