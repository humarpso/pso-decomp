#ifndef PSO_BOSS_TOBJBOSS7TUNNELCOL_H
#define PSO_BOSS_TOBJBOSS7TUNNELCOL_H

#include "types.h"

struct TObjBoss7TunnelCol
{
    u8 _pad1C[0x90];
    void* m_ac;
    static void render();
    static void run_task();
    void update_collision();
    s32 is_in_camera_range();
};

#endif
