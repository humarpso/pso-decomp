#ifndef PSO_MISC_TOHEALGENERAL_H
#define PSO_MISC_TOHEALGENERAL_H

#include "types.h"

struct TOHealGeneral
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x48];
    u32 m_ac;
    u8 _padB0[0x1C];
    u32 m_cc;
    u8 _padD0[0x4];
    void* m_d4;
    u8 _padD8[0x8];
    void* m_e0;
    u8 _padE4[0x8];
    u32 m_ec;
    u32 m_f0;
    u16 m_f4;
    void run_task();
    void render();
    void *create();
    static void close_dialog_window();
    static void load_resources();
    void accept_player(u16 arg1);
    s32 update_active_state();
    void set_enable_count(s32 arg1);
    void set_script_entry(s32 arg1);
    s32 update_heal_gauge_state();
    void update_closing();
    void update_opening();
    void apply_heal_to_target();
};

#endif
