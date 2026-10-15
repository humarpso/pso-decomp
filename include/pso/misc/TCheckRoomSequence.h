#ifndef PSO_MISC_TCHECKROOMSEQUENCE_H
#define PSO_MISC_TCHECKROOMSEQUENCE_H

#include "types.h"

struct TCheckRoomSequence
{
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    void set_ready_flag();
    void set_position(f32 a, f32 b);
    static int get_room_data(int a0);
    static int get_room_table_entry(int a0);
    static void *create(void *arg0);
    static s32 get_item_def(u32 arg0);
};

#endif
