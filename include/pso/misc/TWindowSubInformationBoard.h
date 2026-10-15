#ifndef PSO_MISC_TWINDOWSUBINFORMATIONBOARD_H
#define PSO_MISC_TWINDOWSUBINFORMATIONBOARD_H

#include "types.h"

struct TWindowSubInformationBoard
{
    u8 m_1c;
    u8 _pad1D[0x3];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    void* m_40;
    static void render();
    void run_task();
    static void clear_if_current(u32 arg0);
    void set_page(s32 arg1);
    void set_message_index(s32 arg1);
    static s32 open_keyboard(s32 arg0);
    void show_card_a7();
};

#endif
