#ifndef PSO_NPC_TOBJNPCBASE_H
#define PSO_NPC_TOBJNPCBASE_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjNpcBase : public TObjEnemy {
    virtual ~TObjNpcBase();
    virtual void vfunc_83();
    virtual void vfunc_84();
    virtual void vfunc_85();
    virtual void vfunc_86();
    virtual void vfunc_87(s32, s32);
    virtual void vfunc_88();
    virtual void vfunc_89();
    virtual void vfunc_90();
    virtual void vfunc_91();
    virtual void vfunc_92();
    virtual void vfunc_93();
    void sub_80149360(s32);
    void sub_80149358(s32);
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
    static void free_static();
    void setup_common();};

typedef char NpcBaseSize[(sizeof(TObjNpcBase) == 0x3B8) ? 1 : -1];

#endif
