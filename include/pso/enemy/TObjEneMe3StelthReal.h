#ifndef PSO_ENEMY_TOBJENEME3STELTHREAL_H
#define PSO_ENEMY_TOBJENEME3STELTHREAL_H

#include "types.h"

struct TObjEneMe3StelthReal
{
    void init_common();
    void vfunc_63();
    void vfunc_62();
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0xC4];
    u32 m_3ec;
    static void *create(void *arg0);
};

#endif
