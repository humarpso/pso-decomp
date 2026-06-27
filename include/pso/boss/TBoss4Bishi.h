#ifndef PSO_BOSS_TBOSS4BISHI_H
#define PSO_BOSS_TBOSS4BISHI_H

#include "types.h"

struct TBoss4Bishi
{
    u16 m_1c;
    u8 _pad1E[0x1A];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    void* m_44;
    u8 _pad48[0x14];
    u32 m_5c;
    u8 _pad60[0x314];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x4];
    u32 m_384;
    u8 _pad388[0x4];
    void* m_38c;
};

#endif
