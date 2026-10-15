#ifndef PSO_MISC_TWINDOWCHATSYMBOL_H
#define PSO_MISC_TWINDOWCHATSYMBOL_H

#include "types.h"

struct TWindowChatSymbol
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    void run_task();
    void apply_symbol_from_card();
    void *destroy(s16 arg1);
};

#endif
