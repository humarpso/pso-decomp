#ifndef PSO_OBJECT_TOBJILLGILLKAGE_H
#define PSO_OBJECT_TOBJILLGILLKAGE_H

#include "types.h"

struct TObjIllGillKage
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u32 m_94;
    u16 m_98;
    int queue_destruction();
    void attack_target();
    static void render();
};

#endif
