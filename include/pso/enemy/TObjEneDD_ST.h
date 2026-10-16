#ifndef PSO_ENEMY_TOBJENEDD_ST_H
#define PSO_ENEMY_TOBJENEDD_ST_H
#include "types.h"
#include "pso/enemy/TObjEneDD.h"

class TObjEneDD_ST : public TObjEneDD {
public:
    virtual ~TObjEneDD_ST();
    virtual void vfunc_83();
    void *init_object();
    void sub_800F5874(s32);
    void sub_800F5864(s32);
    s32 enemy_check_target_valid();
    s32 enemy_has_live_target();
};

#endif
