#ifndef PSO_MISC_TOLIGHTMACHINE01_H
#define PSO_MISC_TOLIGHTMACHINE01_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOLightMachine01 : public TUnk_804B9870 {
    virtual ~TOLightMachine01();
    u8 _pad90[0x14];
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    void run_task();
    void render();
    static void *create(void *arg0);
    static void destroy_instance();
    static void load_assets();};

typedef char TOLightMachine01_size[sizeof(TOLightMachine01) == 0xB0 ? 1 : -1];
#endif
