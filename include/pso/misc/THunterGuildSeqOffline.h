#ifndef PSO_MISC_THUNTERGUILDSEQOFFLINE_H
#define PSO_MISC_THUNTERGUILDSEQOFFLINE_H

#include "types.h"

struct THunterGuildSeqOffline
{
    void vfunc_11();
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    void handle_select();
    void open_judgment_window();
    void resolve_active_quest_result();
    void open_greeting();
    static void clear_instance_table();
    static void notify_quest_thread();
    static void reset_quest_result_callbacks(void* _w0);
    void handle_confirm_window();
    void open_judgment_item_window();
    static void *create(void *arg0);
    static s32 check_party_gathered();
    void update_member_proximity();
    void open_member_name_window();
    static void set_state_close();
    static void set_state_4();
    void handle_click();
    static void set_state_3();
    static void init_quest_list();
    static void notify_close();
    static void create_quest_list_vm();
    static void set_state_close2();
    static void set_enemy_mode_5();
    static void set_enemy_mode_1();
    static void set_enemy_mode_0();
    static void request_close();
    void handle_cancel_choice();
    void open_quest_list();
    void handle_window_input();
    void *init(void *arg1, void *arg2);
};

#endif
