#ifndef PSO_NPC_TOBJNPCENEMY_H
#define PSO_NPC_TOBJNPCENEMY_H

#include "types.h"
#include "pso/npc/TObjNpcBase.h"

struct TObjNpcEnemy : public TObjNpcBase {
    virtual ~TObjNpcEnemy();
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
    static void set_global_count(s32 arg0);};

typedef char TObjNpcEnemy_size[sizeof(TObjNpcEnemy) == 0x3BC ? 1 : -1];
#endif
