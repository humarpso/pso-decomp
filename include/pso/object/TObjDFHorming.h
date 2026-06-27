#ifndef PSO_OBJECT_TOBJDFHORMING_H
#define PSO_OBJECT_TOBJDFHORMING_H

#include "types.h"

struct TObjDFHorming
{
    u8 _pad1C[0x28];
    void* m_44;
    u8 _pad48[0x2B4];
    void* m_2fc;
    u8 _pad300[0x34];
    u16 m_334;
    u8 _pad336[0x2];
    u32 m_338;
    void* m_33c;
    u8 _pad340[0x8];
    void* m_348;
    u8 _pad34C[0x14];
    u32 m_360;
    u8 _pad364[0x4];
    u32 m_368;
    void* m_36c;
};

#endif
