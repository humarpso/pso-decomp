#ifndef PSO_NPC_TOBJNPCBASE_H
#define PSO_NPC_TOBJNPCBASE_H

#include "types.h"

struct TObjNpcBase
{
    void deactivateIdleMode();
    u8 _pad00[0x18];
    void* dispatch;
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    f32 position[3];
    u8 _pad44[0x54];
    void* m_98;
    u8 _pad9C[0x28A];
    s16 mode;
    s16 phase;
    u8 _pad32A[0x5E];
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u8 _pad398[0x8];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
};

typedef char NpcBaseSize[(sizeof(TObjNpcBase) == 0x3B8) ? 1 : -1];

#endif
