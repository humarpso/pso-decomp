#ifndef PSO_MISC_TWINDOWMAINMENU1P_H
#define PSO_MISC_TWINDOWMAINMENU1P_H

#include "types.h"

struct TWindowMainMenu1P
{
    u8 _pad1C[0x30];
    u32 m_4c;
    u8 _pad50[0x4];
    u32 m_54;
    u8 _pad58[0x8];
    u8 m_60;
    u8 m_61;
    u8 _pad62[0x2];
    void* m_64;
    void update_backdrop_transition();
    static void render();
    void run_task();
    void create_char_select_slot();
};

#endif
