#ifndef PSO_MISC_TOKURAGE_H
#define PSO_MISC_TOKURAGE_H

#include "types.h"

struct TOKurage
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x14];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x54];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u8 _padCC[0xC];
    void* m_d8;
    u8 _padDC[0x8];
    void* m_e4;
    u8 _padE8[0x14];
    s16 m_fc;
    s16 m_fe;
    u8 m_100;
    u8 m_101;
    u8 m_102;
    u8 _pad103[0x1];
    void* m_104;
    void check_player_distance();
    void update_state();
    void debug_print_ranges();
    void init();
    void run_task();
    void render();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_static_resource();
};

#endif
