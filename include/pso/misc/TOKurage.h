#ifndef PSO_MISC_TOKURAGE_H
#define PSO_MISC_TOKURAGE_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOKurage : public TUnk_804AFBF8 {
    virtual ~TOKurage();
    void sub_8016D8F8();
    u32 m_c8;
    u8 _padCC[0xC];
    void* m_d8;
    u8 unk_DC[0x4];
    f32 m_e0;
    void* m_e4;
    u8 unk_E8[0x10];
    f32 m_f8;
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
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_static_resource();
    u8 unk_108[0x4];
    f32 m_10c;
    u8 unk_110[0x4];
};

typedef char TOKurage_size[sizeof(TOKurage) == 0x114 ? 1 : -1];
#endif
