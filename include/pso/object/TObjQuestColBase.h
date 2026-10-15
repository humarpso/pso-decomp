#ifndef PSO_OBJECT_TOBJQUESTCOLBASE_H
#define PSO_OBJECT_TOBJQUESTCOLBASE_H

#include "types.h"

struct TObjQuestColBase
{
    u16 m_1c;
    u8 _pad1E[0x66];
    u32 m_84;
    u8 _pad88[0x28];
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    s32 is_within_range(f32 farg0);
    void update_room_id_check();
    void run_task();
};

#endif
