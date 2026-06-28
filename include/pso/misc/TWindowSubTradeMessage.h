#ifndef PSO_MISC_TWINDOWSUBTRADEMESSAGE_H
#define PSO_MISC_TWINDOWSUBTRADEMESSAGE_H

#include "types.h"

struct TWindowSubTradeMessage
{
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
};

#endif
