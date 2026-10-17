#ifndef PSO_MISC_TOLIGHTMACHINE01_H
#define PSO_MISC_TOLIGHTMACHINE01_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOLightMachine01 : public TUnk_804B9870 {
    virtual ~TOLightMachine01();
    u8 unk_90[0x4];
    f32 m_94;
    u8 unk_98[0x4];
    f32 m_9c;
    u8 unk_A0[0x4];
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void destroy_instance();
    static void load_assets();
};

typedef char TOLightMachine01_size[sizeof(TOLightMachine01) == 0xB0 ? 1 : -1];
#endif
