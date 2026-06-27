#ifndef PSO_ITEM_TITEMEQUIPBASE_H
#define PSO_ITEM_TITEMEQUIPBASE_H

#include "types.h"

struct TItemEquipBase
{
    u8 _pad1C[0x154];
    u8 m_170;
    u8 m_171;
    u16 m_172;
    u32 m_174;
    void* m_178;
    u32 m_17c;
    u32 m_180;
    u32 m_184;
    u32 m_188;
};

#endif
