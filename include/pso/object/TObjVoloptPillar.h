#ifndef PSO_OBJECT_TOBJVOLOPTPILLAR_H
#define PSO_OBJECT_TOBJVOLOPTPILLAR_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjVoloptPillar : public TUnk_804AF8A0 {
    virtual ~TObjVoloptPillar();
    virtual void run_task();
    u32 m_ac;
    u8 _padB0[0x4];
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    virtual void render();
    static void cache_target_values();};

typedef char TObjVoloptPillar_size[sizeof(TObjVoloptPillar) == 0xC0 ? 1 : -1];
#endif
