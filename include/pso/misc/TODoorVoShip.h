#ifndef PSO_MISC_TODOORVOSHIP_H
#define PSO_MISC_TODOORVOSHIP_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TODoorVoShip : public TUnk_804AFBF8 {
    virtual ~TODoorVoShip();
    u8 unk_C8[0x4];
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    void* m_dc;
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void free_static_data();
    static void load_shared_resource();
    u8 unk_E0[0xC];
};

typedef char TODoorVoShip_size[sizeof(TODoorVoShip) == 0xEC ? 1 : -1];
#endif
