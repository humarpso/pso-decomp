#ifndef PSO_MISC_TWINDOWSUBCOMCARDLIST_H
#define PSO_MISC_TWINDOWSUBCOMCARDLIST_H

#include "types.h"

struct TWindowSubComCardList
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x60];
    u32 m_88;
    u32 m_8c;
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u8 m_9c;
};

#endif
