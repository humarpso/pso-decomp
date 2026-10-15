#ifndef PSO_NPC_TOBJNPCFEMALEBASE_H
#define PSO_NPC_TOBJNPCFEMALEBASE_H

#include "types.h"

struct TObjNpcFemaleBase
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void free_static_data();
    static void load_shared_resource();
    void request_action(s32 arg1);
    void *destroy_npc_female_base(s16 arg1);
    u8 *construct_female_base();
    void handle_message_event(u16 arg1);
    void debug_draw_talk();
};

#endif
