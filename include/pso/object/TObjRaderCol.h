#ifndef PSO_OBJECT_TOBJRADERCOL_H
#define PSO_OBJECT_TOBJRADERCOL_H

#include "types.h"

struct TObjRaderCol
{
    u8 _pad1C[0x68];
    u32 m_84;
    u8 _pad88[0xC];
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    static void render();
    static void check_local_player_in_range(void *arg0_);
    void run_task();
};

#endif
