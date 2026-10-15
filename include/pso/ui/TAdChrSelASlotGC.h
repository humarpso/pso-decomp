#ifndef PSO_UI_TADCHRSELASLOTGC_H
#define PSO_UI_TADCHRSELASLOTGC_H

#include "types.h"

struct TAdChrSelASlotGC
{
    u32 m_1c;
    u8 _pad20[0x4];
    u32 m_24;
    u32 m_28;
    u8 _pad2C[0x4];
    u32 m_30;
    void check_room_seq_4(s32 arg1);
    void set_flag_40();
    static void render(void *self);
    s32 get_plate_value_for_slot(s32 k);
    s32 open_confirm_message(s32 arg1, s32 arg2);
    s32 create_message_window(s32 arg1, s32 arg2);
    static s32 create_format_message_window(s32 arg0, s32 arg1, s32 arg2);
    static s32 open_yes_no_window(s32 arg0, s32 arg1, s32 arg2);
    void update_load_state();
    void set_state();
    void check_load_state();
    void init_selection();
    void update_window_78();
    void update_window_7c();
    void update_window_74();
    void update_window_70();
    void update_window_6c();
    void update_slot5();
    void update_slot4();
    void update_slot3();
    void update_slot2();
    void update_slot1();
    void close_windows();
    void create_children(s32 arg1);
    void init(s32 arg1);
    s32 get_slot_index();
    void forward_slot_selection(void* a1, void* a2);
};

#endif
