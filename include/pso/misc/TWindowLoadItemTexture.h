#ifndef PSO_MISC_TWINDOWLOADITEMTEXTURE_H
#define PSO_MISC_TWINDOWLOADITEMTEXTURE_H

#include "types.h"

struct TWindowLoadItemTexture
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x38];
    u8 m_60;
    u8 m_61;
    u8 _pad62[0x2];
    void* m_64;
    u8 _pad68[0x4];
    u32 m_6c;
    u32 m_70;
};

#endif
