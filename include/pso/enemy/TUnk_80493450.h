#ifndef PSO_ENEMY_TUNK_80493450_H
#define PSO_ENEMY_TUNK_80493450_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_80493450 : public TObjEnemy {
public:
    virtual ~TUnk_80493450();
    virtual void vfunc_83();
    virtual void vfunc_84();
    virtual void vfunc_85();
    virtual void vfunc_86();
    virtual void vfunc_87();
    virtual void vfunc_88();
    virtual void vfunc_89();
    virtual void vfunc_90();
    virtual void vfunc_91();
    virtual int vfunc_92();
    virtual void vfunc_93();
    virtual void vfunc_94();
    virtual void vfunc_95();
    virtual void vfunc_96();
    virtual void vfunc_97();
    virtual void vfunc_98();
    virtual void vfunc_99();
    virtual void vfunc_100();
    virtual void vfunc_101();
    virtual void request_stand_action();
    void*init_enemy_base();
    virtual int test_flag_256();
    virtual void run_task();
    s16 m_374;
    u16 m_376;
    u32 m_378;
    u32 m_37c;
    u8 unk_380[0x10];
    s32 m_390;
    u8 unk_394[0x14];
};

#endif
