#ifndef PSO_ENEMY_TOBJENEME3SINOWZOAREAL_H
#define PSO_ENEMY_TOBJENEME3SINOWZOAREAL_H

#include "types.h"

struct TObjEneMe3SinowZoaReal
{
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0xD4];
    u32 m_3fc;
    static void *create_instance(void *arg0);
};

#endif
