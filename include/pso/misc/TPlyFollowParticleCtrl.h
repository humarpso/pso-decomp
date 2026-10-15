#ifndef PSO_MISC_TPLYFOLLOWPARTICLECTRL_H
#define PSO_MISC_TPLYFOLLOWPARTICLECTRL_H

#include "types.h"

struct TPlyFollowParticleCtrl
{
    u8 _pad1C[0x88];
    u32 m_a4;
    u8 _padA8[0x4];
    u16 m_ac;
    u16 m_ae;
    void set_type(s16 v);
    u16 get_lifetime();
    static void destroy_if_inactive(s32 arg0);
};

#endif
