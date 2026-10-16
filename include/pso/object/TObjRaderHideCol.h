#ifndef PSO_OBJECT_TOBJRADERHIDECOL_H
#define PSO_OBJECT_TOBJRADERHIDECOL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjRaderHideCol : public TUnk_804B9870 {
    virtual ~TObjRaderHideCol();
    u8 unk_90[0x4];
    u32 m_94;
    virtual void render();
    virtual void run_task();};

typedef char TObjRaderHideCol_size[sizeof(TObjRaderHideCol) == 0x98 ? 1 : -1];
#endif
