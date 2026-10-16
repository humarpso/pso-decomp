#ifndef PSO_MISC_TOATTACKABLECOL_H
#define PSO_MISC_TOATTACKABLECOL_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOAttackableCol : public TUnk_804806E8 {
    virtual ~TOAttackableCol();
    u8 unk_334[0x8];
    u32 m_33c;
    void init_params();
    int send_state_change(u16 state);
    int handle_6x91_update_state();
    f32 apply_hit(s32 arg1);
    void release();
    void check_door_trigger();
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    void bswap_state();
    void broadcast_state();
    u8 unk_340[0x10];
};

typedef char TOAttackableCol_size[sizeof(TOAttackableCol) == 0x350 ? 1 : -1];
#endif
