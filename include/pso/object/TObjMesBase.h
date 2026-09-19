#ifndef PSO_OBJECT_TOBJMESBASE_H
#define PSO_OBJECT_TOBJMESBASE_H

#include "types.h"

struct TObjMesBase
{
    u8 _pad00[0x84];
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    void* messageChild;
    s32 messagePhase;
    s32 messageLabel;
    s32 messageBank;
    void start_message();
};
typedef char TObjMesBaseSizeCheck[sizeof(TObjMesBase) == 0xBC ? 1 : -1];

#endif
