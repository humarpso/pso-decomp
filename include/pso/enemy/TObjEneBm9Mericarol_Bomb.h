#ifndef PSO_ENEMY_TOBJENEBM9MERICAROL_BOMB_H
#define PSO_ENEMY_TOBJENEBM9MERICAROL_BOMB_H
#include "types.h"
#include "pso/player/TUnk_804928CC.h"

class TObjEneBm9Mericarol_Bomb : public TUnk_804928CC {
public:
    virtual ~TObjEneBm9Mericarol_Bomb();
    void *dt(s16);
    virtual void render();
    virtual void run_task();
    u8 unk_B0[0x4];
    f32 m_b4;
    u8 unk_B8[0x4];
    f32 m_bc;
    u8 unk_C0[0x4];
    f32 m_c4;
    u8 unk_C8[0x24];
    s32 m_ec;
    u8 unk_F0[0x8];
    f32 m_f8;
    u8 unk_FC[0x4];
    s32 m_100;
    u8 unk_104[0x4];
    s32 m_108;
    u8 unk_10C[0x4];
    void * m_110;
    u8 unk_114[0x4];
};
typedef char TObjEneBm9Mericarol_Bomb_size[sizeof(TObjEneBm9Mericarol_Bomb) == 0x118 ? 1 : -1];

#endif
