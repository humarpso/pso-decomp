#ifndef PSO_MISC_TOEXPLOSIVEMACHINE_H
#define PSO_MISC_TOEXPLOSIVEMACHINE_H

#include "types.h"

struct TOExplosiveMachine
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x38];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    void explode();
    static void destroy_static_lobby();
    static void load_shared_resource();
    s32 check_trigger();
    s32 update_trigger();
    void update();
};

#endif
