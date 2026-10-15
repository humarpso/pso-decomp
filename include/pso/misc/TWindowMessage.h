#ifndef PSO_MISC_TWINDOWMESSAGE_H
#define PSO_MISC_TWINDOWMESSAGE_H

#include "types.h"

struct TWindowMessage
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 _pad60[0x10];
    u32 m_70;
    u32 m_74;
    u32 m_78;
    u32 m_7c;
    u8 _pad80[0x8];
    u32 m_88;
    u32 m_8c;
    void draw();
};

#endif
