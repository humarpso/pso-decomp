#ifndef PSO_UNK_TOBJENEDUBCHIK_H
#define PSO_UNK_TOBJENEDUBCHIK_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TObjEneDubchik : public TObjEnemyCustom {
public:
    virtual ~TObjEneDubchik();
    virtual void vfunc_59();
    virtual void vfunc_58();
    u8 unk_38C[0x90];
};
typedef char TObjEneDubchik_size[sizeof(TObjEneDubchik) == 0x41C ? 1 : -1];

#endif
