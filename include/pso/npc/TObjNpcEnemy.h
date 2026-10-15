#ifndef PSO_NPC_TOBJNPCENEMY_H
#define PSO_NPC_TOBJNPCENEMY_H

#include "types.h"

struct TObjNpcEnemy
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x50];
    u16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x3C];
    u32 m_390;
    u8 _pad394[0x24];
    u32 m_3b8;
    void draw_model();
    void draw_debug_info();
    static s16 *get_entry_by_index(s16 arg0);
    static s16 *insert_slot_by_id(s16 arg0);
    static void reset_all_anim_fields();
    void set_npc_data(void *arg1);
    void update_state();
    void render();
    void reset_anim_fields();
    static void set_global_count(s32 arg0);
};

#endif
