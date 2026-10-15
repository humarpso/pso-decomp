#ifndef PSO_MISC_TOATTACKABLECOL_H
#define PSO_MISC_TOATTACKABLECOL_H

#include "types.h"

struct TOAttackableCol
{
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0x14];
    u32 m_33c;
    void init_params();
    int send_state_change(u16 state);
    int handle_6x91_update_state();
    f32 apply_hit(s32 arg1);
    void release();
    void check_door_trigger();
    void run_task();
    static void render();
    static void *create(void *arg0);
    void bswap_state();
    void broadcast_state();
};

#endif
