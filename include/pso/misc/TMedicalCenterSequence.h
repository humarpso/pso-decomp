#ifndef PSO_MISC_TMEDICALCENTERSEQUENCE_H
#define PSO_MISC_TMEDICALCENTERSEQUENCE_H

#include "types.h"

struct TMedicalCenterSequence
{
    void vfunc_11();
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    static void clear_window_slots();
    static void clear_slot_data();
    s32 open_greeting_window();
    void handle_confirm();
    void handle_window_result();
    void exec_heal();
    void show_declined();
    void show_already_healthy();
    s32 handle_window_input();
};

#endif
