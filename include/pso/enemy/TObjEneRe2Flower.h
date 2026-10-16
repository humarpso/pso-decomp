#ifndef PSO_ENEMY_TOBJENERE2FLOWER_H
#define PSO_ENEMY_TOBJENERE2FLOWER_H

#include "types.h"

struct TObjEneRe2Flower
{
    void sub_800C3DC4();
    bool sub_800C3B8C();
    void dispatch_action(s32);
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x54];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x6C];
    u32 m_3c0;
    u32 m_3c4;
    u8 _pad3C8[0x4];
    u32 m_3cc;
    u32 m_3d0;
    u32 m_3d4;
    u32 m_3d8;
    u8 _pad3DC[0x18];
    void* m_3f4;
    u8 _pad3F8[0x10];
    u32 m_408;
    u8 _pad40C[0x4];
    u32 m_410;
    u32 m_414;
    u32 m_418;
    u32 m_41c;
    u32 m_420;
    u8 _pad424[0x4];
    u32 m_428;
    void handle_event(s32 arg1);
    void begin_state_242();
    s32 check_hit_flag();
    void clear_child_flags();
    void set_child_flags();
    void update_part_position();
    u8 *find_target_in_range();
    static void destroy_instance();
    static void *create(void *arg0);
    int get_flag_11();
};

#endif
