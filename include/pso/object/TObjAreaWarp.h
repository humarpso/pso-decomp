#ifndef PSO_OBJECT_TOBJAREAWARP_H
#define PSO_OBJECT_TOBJAREAWARP_H

#include "types.h"

struct TObjAreaWarp
{
    u8 _pad1C[0x68];
    u32 m_84;
    u8 _pad88[0x34];
    u32 m_bc;
    u32 m_c0;
    void debug_print_area_num();
    void open_confirm_window(u16 arg1);
    u16 find_active_player();
};

#endif
