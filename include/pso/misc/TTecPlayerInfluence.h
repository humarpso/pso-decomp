#ifndef PSO_MISC_TTECPLAYERINFLUENCE_H
#define PSO_MISC_TTECPLAYERINFLUENCE_H

#include "types.h"
#include "pso/effect/TEffect.h"

struct TTecPlayerInfluence : public TEffect {
    virtual ~TTecPlayerInfluence();
    virtual void tick_lifetime();
    virtual void vfunc_7(void *);
    u8 unk_70[0x4];
    f32 m_74;
    u8 unk_78[0x20];
    s16 m_98;
    u8 unk_9A[0x6];
    u32 m_a0;
    s16 m_a4;
    u16 m_a6;
    u16 m_a8;
    u8 _padAA[0x2];
    u32 m_ac;
    void* m_b0;
    u8 _padB4[0x10];
    u32 m_c4;
    u32 m_c8;
    u8 _padCC[0x10];
    u32 m_dc;
    virtual void render();
    virtual void run_task();};

typedef char TTecPlayerInfluence_size[sizeof(TTecPlayerInfluence) == 0xE0 ? 1 : -1];
#endif
