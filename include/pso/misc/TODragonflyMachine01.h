#ifndef PSO_MISC_TODRAGONFLYMACHINE01_H
#define PSO_MISC_TODRAGONFLYMACHINE01_H

#include "types.h"
#include "pso/misc/TODragonfly.h"

struct TODragonflyMachine01 : public TODragonfly {
    virtual ~TODragonflyMachine01();
    virtual void render();
    s16 m_100;
    u16 m_102;
    u32 m_104;
    static void update_timer();
    virtual void run_task();
    static void *create(void *arg0);
    static void unload_static_data();
    static void create_attack_effect();
};

typedef char TODragonflyMachine01_size[sizeof(TODragonflyMachine01) == 0x108 ? 1 : -1];

extern "C" {
u8 *TODragonflyMachine01__ct(u8 *arg0, int arg1);
void *__dt__20TODragonflyMachine01Fv(void *arg0, s16 arg1);
}

#endif
