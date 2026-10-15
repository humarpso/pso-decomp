#ifndef PSO_MISC_TENEPARTICLECTRL_H
#define PSO_MISC_TENEPARTICLECTRL_H

#include "types.h"

struct TEneParticleCtrl
{
    u16 m_1c;
    u8 _pad1E[0x86];
    u32 m_a4;
    u8 _padA8[0x4];
    u16 m_ac;
    u8 _padAE[0x2];
    u32 m_b0;
    void* m_b4;
    u8 _padB8[0x8];
    u32 m_c0;
    void set_param();
    void free_particle_ctrl();
    void*get_field_38_ptr();
};

#endif
