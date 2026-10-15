#ifndef PSO_OBJECT_TOBJDFUSOTOWER_H
#define PSO_OBJECT_TOBJDFUSOTOWER_H

#include "types.h"

struct TObjDFUsoTower
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    static void *create(void *arg0);
    void render();
    void run_task();
};

#endif
