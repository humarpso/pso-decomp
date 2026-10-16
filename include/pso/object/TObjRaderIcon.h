#ifndef PSO_OBJECT_TOBJRADERICON_H
#define PSO_OBJECT_TOBJRADERICON_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjRaderIcon : public TUnk_804B9870 {
    virtual ~TObjRaderIcon();
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u8 _pad9C[0x4];
    u32 m_a0;
    static void render();
    void run_task();
    void initialize_from_placement();};

typedef char TObjRaderIcon_size[sizeof(TObjRaderIcon) == 0xA4 ? 1 : -1];
#endif
