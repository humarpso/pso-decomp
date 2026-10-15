#ifndef PSO_OBJECT_TOBJROOMID_H
#define PSO_OBJECT_TOBJROOMID_H

#include "types.h"

struct TObjRoomId
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x4C];
    u32 m_88;
    u32 m_8c;
    void* m_90;
    static void draw_debug_line(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
};

#endif
