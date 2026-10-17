#ifndef PSO_ITEM_TOBJITEMLIGHT_H
#define PSO_ITEM_TOBJITEMLIGHT_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjItemLight : public TUnk_804B9870 {
    virtual ~TObjItemLight();
    void run_task();
    u8 unk_90[0x4];
    s32 m_94;
};

typedef char TObjItemLight_size[sizeof(TObjItemLight) == 0x98 ? 1 : -1];
#endif
