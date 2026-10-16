#ifndef PSO_ENEMY_TOBJENEDELDEPTHBOMB_H
#define PSO_ENEMY_TOBJENEDELDEPTHBOMB_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TObjEneDelDepthBomb : public TUnk_804806E8 {
    virtual ~TObjEneDelDepthBomb();
    virtual void render();
    virtual void run_task();
    void* m_334;
    u8 _pad338[0x10];
    u32 m_348;
    u32 m_34c;
    u32 m_350;
    f32 get_depth_radius();
    u8 unk_354[0x4];
};

typedef char TObjEneDelDepthBomb_size[sizeof(TObjEneDelDepthBomb) == 0x358 ? 1 : -1];
#endif
