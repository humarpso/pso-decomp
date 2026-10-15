#ifndef PSO_OBJECT_TOBJWARPJUNGMAIN_H
#define PSO_OBJECT_TOBJWARPJUNGMAIN_H

#include "types.h"

struct TObjWarpJungMain
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x28];
    u32 m_8c;
    u8 _pad90[0x20];
    u32 m_b0;
    u8 _padB4[0x4];
    u16 m_b8;
    u8 _padBA[0x2];
    u32 m_bc;
    u32 m_c0;
    void render();
    void run_task();
};

#endif
