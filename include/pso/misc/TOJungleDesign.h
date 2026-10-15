#ifndef PSO_MISC_TOJUNGLEDESIGN_H
#define PSO_MISC_TOJUNGLEDESIGN_H

#include "types.h"

struct TOJungleDesign
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x44];
    u32 m_ac;
    u32 m_b0;
    void init_design_variant();
    void render();
};

#endif
