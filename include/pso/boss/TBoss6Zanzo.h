#ifndef PSO_BOSS_TBOSS6ZANZO_H
#define PSO_BOSS_TBOSS6ZANZO_H

#include "types.h"
#include "pso/TObject.h"

struct TBoss6Zanzo : public TObject {
    virtual ~TBoss6Zanzo();
    void copy_trail_buffer(void *, void *);
    virtual void run_task();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    virtual void render();};

typedef char TBoss6Zanzo_size[sizeof(TBoss6Zanzo) == 0x2C ? 1 : -1];
#endif
