#ifndef PSO_MISC_TODOORFOURLIGHTBASE_H
#define PSO_MISC_TODOORFOURLIGHTBASE_H

#include "types.h"

struct TODoorFourLightBase
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
    void clamp_light_index();
    void render_lights();
};

#endif
