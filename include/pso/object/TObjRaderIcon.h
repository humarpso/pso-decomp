#ifndef PSO_OBJECT_TOBJRADERICON_H
#define PSO_OBJECT_TOBJRADERICON_H

#include "types.h"

struct TObjRaderIcon
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x2C];
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u8 _pad9C[0x4];
    u32 m_a0;
    static void render();
    void run_task();
    void initialize_from_placement();
};

#endif
