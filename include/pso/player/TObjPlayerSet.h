#ifndef PSO_PLAYER_TOBJPLAYERSET_H
#define PSO_PLAYER_TOBJPLAYERSET_H

#include "types.h"

struct TObjPlayerSet
{
    u8 _pad1C[0x68];
    u32 m_84;
    static void render();
    static void run_task();
    static void *create(void *arg0);
};

#endif
