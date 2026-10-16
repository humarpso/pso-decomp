#ifndef PSO_OBJECT_TOBJDFUSOTOWER_H
#define PSO_OBJECT_TOBJDFUSOTOWER_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjDFUsoTower : public TUnk_804B9870 {
    virtual ~TObjDFUsoTower();
    u32 m_90;
    static void *create(void *arg0);
    void render();
    void run_task();
    u8 unk_94[0x4];
};

typedef char TObjDFUsoTower_size[sizeof(TObjDFUsoTower) == 0x98 ? 1 : -1];
#endif
