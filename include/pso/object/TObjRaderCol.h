#ifndef PSO_OBJECT_TOBJRADERCOL_H
#define PSO_OBJECT_TOBJRADERCOL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjRaderCol : public TUnk_804B9870 {
    virtual ~TObjRaderCol();
    u8 unk_90[0x4];
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    virtual void render();
    static void check_local_player_in_range(void *arg0_);
    virtual void run_task();};

typedef char TObjRaderCol_size[sizeof(TObjRaderCol) == 0xA0 ? 1 : -1];
#endif
