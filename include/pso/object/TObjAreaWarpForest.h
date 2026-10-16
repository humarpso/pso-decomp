#ifndef PSO_OBJECT_TOBJAREAWARPFOREST_H
#define PSO_OBJECT_TOBJAREAWARPFOREST_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjAreaWarpForest : public TObjAreaWarp {
    virtual ~TObjAreaWarpForest();
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    void render();
    void run_task();
    void render_if_active();
    void *init(void *, void *);
    void *alloc_and_init();
    u8 unk_C0[0x1C];
};

typedef char TObjAreaWarpForest_size[sizeof(TObjAreaWarpForest) == 0xDC ? 1 : -1];
#endif
