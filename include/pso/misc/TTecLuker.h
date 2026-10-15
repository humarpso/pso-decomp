#ifndef PSO_MISC_TTECLUKER_H
#define PSO_MISC_TTECLUKER_H

#include "types.h"

struct TTecLuker
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x8];
    void* m_2c;
    u8 _pad30[0xC];
    void* m_3c;
    u8 _pad40[0x2C];
    u32 m_6c;
    u8 _pad70[0x44];
    u16 m_b4;
    u8 _padB6[0x36];
    u32 m_ec;
    u32 m_f0;
    s16 m_f4;
    u16 m_f6;
    u32 m_f8;
    void* m_fc;
    u8 _pad100[0x8];
    u32 m_108;
    u32 m_10c;
    void *destroy(s16 arg1);
    void set_interaction_latch();
    void update_player_target();
    static void apply_all_players();
    static void create_for_player(int arg0, s32 arg1);
    void init_fields(s16 arg1);
    void send_telepipe_packet();
    void create(void *arg1, void *arg2, void *arg3);
    void setup_telepipe_field();
    void send_swapped_telepipe_packet();
    void byteswap_telepipe_packet();
    void set_state(s32 v);
    static s32 is_parents_unqueued(u32 arg0);
};

#endif
