#ifndef PSO_BOSS_TUNK_804F322C_H
#define PSO_BOSS_TUNK_804F322C_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_804F322C : public TObjEnemy {
public:
    virtual ~TUnk_804F322C();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void render();
    virtual void run_task();
    u8 unk_374[0x40];
};
typedef char TUnk_804F322C_size[sizeof(TUnk_804F322C) == 0x3B4 ? 1 : -1];

#endif
