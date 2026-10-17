#ifndef PSO_ENEMY_TOBJENEDUBCHIK_H
#define PSO_ENEMY_TOBJENEDUBCHIK_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TObjEneDubchik : public TObjEnemyCustom {
public:
    virtual ~TObjEneDubchik();
    virtual s32 update_shock_clock();
    s32 sub_800AB068();
    f32 sub_800AAF78(s32);
    virtual void vfunc_59();
    virtual void vfunc_58();
    u8 unk_38C[0x90];
};
typedef char TObjEneDubchik_size[sizeof(TObjEneDubchik) == 0x41C ? 1 : -1];

#endif
