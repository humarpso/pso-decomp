#ifndef PSO_ENEMY_TOBJENEPANARMSATKCOLLI_H
#define PSO_ENEMY_TOBJENEPANARMSATKCOLLI_H

#include "types.h"

struct TObjEnePanarmsAtkColli
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x2C0];
    void* m_308;
    u8 _pad30C[0x68];
    u32 m_374;
    u8 _pad378[0x8];
    u32 m_380;
    u32 m_384;
    u32 m_388;
};

#endif
