#ifndef PSO_MISC_TOTRAPSEABED01_H
#define PSO_MISC_TOTRAPSEABED01_H

#include "types.h"
#include "pso/misc/TOTrap.h"

struct TOTrapSeabed01 : public TOTrap {
    virtual ~TOTrapSeabed01();
    virtual void render();
    u32 m_344;
    u32 m_348;
    u32 m_34c;
    u32 m_350;
    u32 m_354;
    u32 m_358;
    void clamp_params_and_init();
    static void *create(void *arg0);
    static void free_static_resources();
    static void load_resources();};

typedef char TOTrapSeabed01_size[sizeof(TOTrapSeabed01) == 0x35C ? 1 : -1];
#endif
