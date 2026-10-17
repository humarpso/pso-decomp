#ifndef PSO_MISC_TPLYFOLLOWPARTICLECTRL_H
#define PSO_MISC_TPLYFOLLOWPARTICLECTRL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TPlyFollowParticleCtrl : public TUnk_804AF8A0 {
    virtual ~TPlyFollowParticleCtrl();
    virtual void*vfunc_9();
    u16 m_ac;
    u16 m_ae;
    void set_type(s16 v);
    u16 get_lifetime();
    static void destroy_if_inactive(s32 arg0);
};

typedef char TPlyFollowParticleCtrl_size[sizeof(TPlyFollowParticleCtrl) == 0xB0 ? 1 : -1];
#endif
