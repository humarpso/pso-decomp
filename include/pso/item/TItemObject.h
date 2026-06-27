#ifndef PSO_ITEM_TITEMOBJECT_H
#define PSO_ITEM_TITEMOBJECT_H

#include "types.h"

struct TItemObject
{
    u8 _pad1C[0xD4];
    u32 m_f0;
    u8 _padF4[0x4];
    u32 m_f8;
    u32 m_fc;
    u8 m_100;
    u8 m_101;
};

#endif
