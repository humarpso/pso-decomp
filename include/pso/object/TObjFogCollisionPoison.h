#ifndef PSO_OBJECT_TOBJFOGCOLLISIONPOISON_H
#define PSO_OBJECT_TOBJFOGCOLLISIONPOISON_H

#include "types.h"

struct TObjFogCollisionPoison
{
    u8 _pad1C[0x7C];
    u32 m_98;
    void update_poison_damage();
    void record_hit(s32 arg1, s32 arg2);
    static void create();
    static void clear_state_array();
    u8 check_switch();
    void apply_poison_damage(s32 arg1);
    void record_poison_hit(u16 arg1);
};

#endif
