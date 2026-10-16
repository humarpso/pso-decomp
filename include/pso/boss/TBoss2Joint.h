#ifndef PSO_BOSS_TBOSS2JOINT_H
#define PSO_BOSS_TBOSS2JOINT_H

#include "types.h"
#include "pso/enemy/TObjEneDD.h"

struct TBoss2Joint : public TObjEneDD {
    virtual ~TBoss2Joint();
    u32 m_390;
    u32 m_394;
    u32 m_398;
    u32 m_39c;
    void call_36A90_with_1();
    void init_joint_offset(s32 arg1);
    void update_position_history();
    void run_task();
    s32 init_params();
    void render();
    u8 unk_384[0x38];
};

typedef char TBoss2Joint_size[sizeof(TBoss2Joint) == 0x3BC ? 1 : -1];
#endif
