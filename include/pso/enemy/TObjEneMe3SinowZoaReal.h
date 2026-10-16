#ifndef PSO_ENEMY_TOBJENEME3SINOWZOAREAL_H
#define PSO_ENEMY_TOBJENEME3SINOWZOAREAL_H

#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

struct TObjEneMe3SinowZoaReal : public TObjEneMe3SinowZoa {
    virtual ~TObjEneMe3SinowZoaReal();
    virtual u8 is_target_in_range();
    virtual s32 try_run_effect_m7();
    void vfunc_63();
    void vfunc_62();
    static void *create_instance(void *arg0);
    u8 unk_3FC[0x60];
};

typedef char TObjEneMe3SinowZoaReal_size[sizeof(TObjEneMe3SinowZoaReal) == 0x45C ? 1 : -1];
#endif
