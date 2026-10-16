#ifndef PSO_MISC_TTECPLAYERINFLUENCE_H
#define PSO_MISC_TTECPLAYERINFLUENCE_H

#include "types.h"
#include "pso/effect/TEffect.h"

struct TTecPlayerInfluence : public TEffect {
    virtual ~TTecPlayerInfluence();
    u8 unk_70[0x30];
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
    void render();
    void tick_lifetime();
    void run_task();};

typedef char TTecPlayerInfluence_size[sizeof(TTecPlayerInfluence) == 0xE0 ? 1 : -1];
#endif
