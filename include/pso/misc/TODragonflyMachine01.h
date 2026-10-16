#ifndef PSO_MISC_TODRAGONFLYMACHINE01_H
#define PSO_MISC_TODRAGONFLYMACHINE01_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TODragonflyMachine01 : public TODragonfly {
    virtual ~TODragonflyMachine01();
    s16 m_100;
    u16 m_102;
    u32 m_104;
    static void update_timer();
    void run_task();
    static void *create(void *arg0);
    static void unload_static_data();
    static void create_attack_effect();};

typedef char TODragonflyMachine01_size[sizeof(TODragonflyMachine01) == 0x108 ? 1 : -1];
#endif
