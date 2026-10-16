#ifndef PSO_BOSS_TBOSS6MINE_H
#define PSO_BOSS_TBOSS6MINE_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TBoss6Mine : public TObjEnemy {
    virtual ~TBoss6Mine();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void render_shadows();
    virtual void render();
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u32 m_384;
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
    u8 _pad39C[0x4];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u8 _pad3AC[0x4];
    void* m_3b0;
    u8 _pad3B4[0x8];
    void* m_3bc;
    u8 unk_3C0[0x8];
    float m_3c8;
    u32 m_3cc;
    void copy_pos();
    void draw();
    void update_facing_angles();
    s32 is_far_from_origin();
    static s32 create(s32 arg0);
    static f32 next_random_float(s32 *arg0);};

typedef char TBoss6Mine_size[sizeof(TBoss6Mine) == 0x3D0 ? 1 : -1];
#endif
