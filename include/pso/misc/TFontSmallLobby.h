#ifndef PSO_MISC_TFONTSMALLLOBBY_H
#define PSO_MISC_TFONTSMALLLOBBY_H

#include "types.h"

struct TFontSmallLobby
{
    u8 _pad1C[0x40C];
    void* m_428;
    u8 _pad42C[0x80];
    void* m_4ac;
    u8 _pad4B0[0x9C];
    u32 m_54c;
    u8 _pad550[0x60];
    void* m_5b0;
};

#endif
