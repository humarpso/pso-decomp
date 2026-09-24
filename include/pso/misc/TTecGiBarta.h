#ifndef PSO_MISC_TTECGIBARTA_H
#define PSO_MISC_TTECGIBARTA_H

#include "types.h"

struct TTecGiBarta
{
    u8 _pad00[0x1C];
    u32 m_1c;
    u8 _pad20[0xA8];
    u16 m_c8;
    u8 _padCA[0x2E];
    u32 m_f8;
    u8 _padFC[0x78];
    u32 m_174;
};
typedef char TTecGiBarta_size[sizeof(TTecGiBarta)==0x178?1:-1];

#endif
