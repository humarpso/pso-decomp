#ifndef PSO_OBJECT_TOBJSEABEDSUISOBRAKABLE_H
#define PSO_OBJECT_TOBJSEABEDSUISOBRAKABLE_H

#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"

struct TObjSeabedSuisoBrakable : public TORockCaveBrakable {
    virtual ~TObjSeabedSuisoBrakable();
    void sub_802A6438();
    virtual void vfunc_19();
    virtual void spawn_break_effect();
    virtual void render();
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
    static u8 *get_bml_motion_by_index(s32 arg0);
    static void load_shared_models();
};

typedef char TObjSeabedSuisoBrakable_size[sizeof(TObjSeabedSuisoBrakable) == 0xC0 ? 1 : -1];
#endif
