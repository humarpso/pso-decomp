#ifndef PSO_OBJECT_TOBJCITYMAINWARPCHALLENGE_H
#define PSO_OBJECT_TOBJCITYMAINWARPCHALLENGE_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjCityMainWarpChallenge : public TObjAreaWarp {
    virtual ~TObjCityMainWarpChallenge();
    virtual void vfunc_20();
    void count_players_in_warp_radius();
    void update_challenge_state();
    void trigger_warp_effect(s32);
    void send_6x6A_set_boss_warp_flags(u16);
    s32 are_all_players_in_range();
    u8 unk_AC[0x8];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x4];
    s16 m_dc;
    s16 m_de;
    s16 m_e0;
    s16 m_e2;
    u8 _padE4[0x80];
    u32 m_164;
    u32 m_168;
    u32 m_16c;
    void update_state();
    void render();
    void run_task();
    u8 unk_154[0x2C];
};

typedef char TObjCityMainWarpChallenge_size[sizeof(TObjCityMainWarpChallenge) == 0x180 ? 1 : -1];
#endif
