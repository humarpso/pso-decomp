#ifndef PSO_OBJECT_TOBJENVSOUNDEX_H
#define PSO_OBJECT_TOBJENVSOUNDEX_H

#include "types.h"

struct TObjEnvSoundEx
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u8 _pad94[0x8];
    u32 m_9c;
    u32 m_a0;
    s32 init_sound_params();
    static void render();
};

#endif
