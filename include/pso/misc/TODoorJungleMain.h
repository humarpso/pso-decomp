#ifndef PSO_MISC_TODOORJUNGLEMAIN_H
#define PSO_MISC_TODOORJUNGLEMAIN_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorJungleMain : public TUnk_804B0BB8 {
    virtual ~TODoorJungleMain();
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    static void free_static_resources();
    static void load_resources();
    virtual void render();
    virtual void run_task();};

typedef char TODoorJungleMain_size[sizeof(TODoorJungleMain) == 0xE0 ? 1 : -1];
#endif
