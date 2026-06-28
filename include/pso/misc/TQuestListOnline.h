#ifndef PSO_MISC_TQUESTLISTONLINE_H
#define PSO_MISC_TQUESTLISTONLINE_H

#include "types.h"

struct TQuestListOnline
{
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u8 _pad30[0x4];
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    void* m_4c;
    u8 _pad50[0x18];
    u32 m_68;
    u32 m_6c;
};

#endif
