#ifndef PSO_OBJECT_TOBJAREAWARPENDINGJUNG_H
#define PSO_OBJECT_TOBJAREAWARPENDINGJUNG_H

#include "types.h"

struct TObjAreaWarpEndingJung
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x28];
    u32 m_8c;
    void render();
    void run_task();
};

#endif
