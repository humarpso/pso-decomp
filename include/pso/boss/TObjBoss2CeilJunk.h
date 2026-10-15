#ifndef PSO_BOSS_TOBJBOSS2CEILJUNK_H
#define PSO_BOSS_TOBJBOSS2CEILJUNK_H

#include "types.h"

struct TObjBoss2CeilJunk
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x14];
    u32 m_5c;
    u32 m_60;
    u8 _pad64[0x2C];
    void* m_90;
    u8 _pad94[0x8];
    void* m_9c;
    u8 _padA0[0x8];
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    void render();
    static void *create(void *arg0);
    static void create_particle();
};

#endif
