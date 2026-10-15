#ifndef PSO_BOSS_TBOSS4URO_H
#define PSO_BOSS_TBOSS4URO_H

#include "types.h"

struct TBoss4Uro
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x18];
    u32 m_5c;
    u32 m_60;
    u8 _pad64[0x298];
    void* m_2fc;
    u8 _pad300[0x74];
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x8];
    u32 m_384;
    u32 m_388;
    void* m_38c;
    u8 _pad390[0x24];
    u32 m_3b4;
    u32 m_3b8;
    u32 m_3bc;
    u32 m_3c0;
    s32 get_phase();
    static int get_instance_count();
};

#endif
