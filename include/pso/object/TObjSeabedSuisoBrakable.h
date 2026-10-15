#ifndef PSO_OBJECT_TOBJSEABEDSUISOBRAKABLE_H
#define PSO_OBJECT_TOBJSEABEDSUISOBRAKABLE_H

#include "types.h"

struct TObjSeabedSuisoBrakable
{
    u8 _pad1C[0x18];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x2C];
    u32 m_b8;
    u32 m_bc;
    static void free_static_resources();
    static void load_resources();
    static int get_break_data(int a0);
    static int get_table0_entry(int a0);
    static int get_table1_entry(int a0);
    void walk_linked_switches();
    s32 count_linked_switches(s32 arg1);
    void collect_recursive();
    static void *create_instance(void *arg0);
    static void notify_break(u32 arg0);
    static void *create(void *arg0);
    void update_state();
    void init_kind_params();
    static u8 *get_bml_motion_by_index(s32 arg0);
    static void load_shared_models();
};

#endif
