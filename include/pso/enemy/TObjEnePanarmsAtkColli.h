#ifndef PSO_ENEMY_TOBJENEPANARMSATKCOLLI_H
#define PSO_ENEMY_TOBJENEPANARMSATKCOLLI_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEnePanarmsAtkColli : public TObjEnemy {
    virtual ~TObjEnePanarmsAtkColli();
    u32 m_374;
    u8 _pad378[0x8];
    u32 m_380;
    u32 m_384;
    u32 m_388;
    void run_task();
    void *create(void *arg1, void *arg2, void *arg3);
    u8 unk_38C[0x4];
};

typedef char TObjEnePanarmsAtkColli_size[sizeof(TObjEnePanarmsAtkColli) == 0x390 ? 1 : -1];
#endif
