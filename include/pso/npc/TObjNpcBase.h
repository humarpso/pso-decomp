#ifndef PSO_NPC_TOBJNPCBASE_H
#define PSO_NPC_TOBJNPCBASE_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjNpcBase : public TObjEnemy {
    virtual ~TObjNpcBase();
    void sub_80149360(s32);
    void sub_80149358(s32);
    virtual void vfunc_83();
    virtual void vfunc_59();
    virtual void vfunc_58();
    virtual s32 vfunc_30();
    virtual void vfunc_28();
    u8 unk_374[0x10];
    s32 m_384;
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u8 unk_398[0x4];
    f32 m_39c;
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
    void play_voice();
    static void free_static();
    void setup_common();
    void apply_set_params(s32 arg1, s32 arg2);
    void update_conversation();
    void update_wandering();
    void update_standing();};

typedef char NpcBaseSize[(sizeof(TObjNpcBase) == 0x3B8) ? 1 : -1];

#endif
