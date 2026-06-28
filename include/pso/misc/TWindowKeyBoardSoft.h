#ifndef PSO_MISC_TWINDOWKEYBOARDSOFT_H
#define PSO_MISC_TWINDOWKEYBOARDSOFT_H

#include "types.h"

struct TWindowKeyBoardSoft
{
    u8 _pad1C[0x44];
    u16 m_60;
    u16 m_62;
    u8 m_64;
    u8 m_65;
    u8 m_66;
    u8 _pad67[0x1];
    u32 m_68;
    u32 m_6c;
    u8 _pad70[0xC];
    u32 m_7c;
    u8 _pad80[0x2C];
    u32 m_ac;
    u8 _padB0[0x4];
    u32 m_b4;
};

#endif
