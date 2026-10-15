#ifndef PSO_ITEM_TITEMPROARMORPARTICLE_H
#define PSO_ITEM_TITEMPROARMORPARTICLE_H

#include "types.h"

struct TItemProArmorParticle
{
    u8 _pad1C[0x158];
    u32 m_174;
    u8 _pad178[0x20];
    u32 m_198;
    u32 m_19c;
    u32 m_1a0;
    static void create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    void *initialize(void *arg1, void *arg2, void *arg3, void *arg4);
};

#endif
