#ifndef PSO_BOSS_TUNK_80484610_H
#define PSO_BOSS_TUNK_80484610_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TUnk_80484610 : public TObjEnemyCustom {
public:
    virtual ~TUnk_80484610();
    virtual void run_task();
    u8 unk_38C[0x184];
};
typedef char TUnk_80484610_size[sizeof(TUnk_80484610) == 0x510 ? 1 : -1];

#endif
