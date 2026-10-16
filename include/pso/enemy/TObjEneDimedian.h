#ifndef PSO_ENEMY_TOBJENEDIMEDIAN_H
#define PSO_ENEMY_TOBJENEDIMEDIAN_H

#include "types.h"
#include "pso/enemy/TUnk_80493450.h"

struct TObjEneDimedian : public TUnk_80493450 {
    virtual ~TObjEneDimedian();
    void* m_3a8;
    u8 _pad3AC[0x18];
    u32 m_3c4;
    u32 m_3c8;
    void* m_3cc;
    static void *create(void *arg0);
    static void free_boss_objects();
    u8 unk_3D0[0x6C];
};

typedef char TObjEneDimedian_size[sizeof(TObjEneDimedian) == 0x43C ? 1 : -1];
#endif
