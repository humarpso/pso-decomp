#ifndef PSO_MISC_TOKURAGE_H
#define PSO_MISC_TOKURAGE_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOKurage : public TUnk_804AFBF8 {
    virtual ~TOKurage();
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
    u8 unk_108[0xC];
};

typedef char TOKurage_size[sizeof(TOKurage) == 0x114 ? 1 : -1];
#endif
