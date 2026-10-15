#ifndef PSO_OBJECT_TOBJLUKER_H
#define PSO_OBJECT_TOBJLUKER_H

#include "types.h"

struct TObjLuker
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u8 _pad88[0x18];
    u32 m_a0;
    u32 m_a4;
    u16 m_a8;
    u16 m_aa;
    s16 m_ac;
    u16 m_ae;
    s16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    u32 m_b8;
    void show_part(s32 arg1);
    void update_floor_name_windows();
    void open_destination_windows();
    void transfer_to_town();
    static void render();
    void run_task();
    void set_flag_4();
    static int get_stat_table_entry(int a0);
};

#endif
