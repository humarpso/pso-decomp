#ifndef PSO_UNK_TOBJENEEPSILONBODY_H
#define PSO_UNK_TOBJENEEPSILONBODY_H
#include "types.h"
#include "pso/enemy/TObjEneEpsilon.h"

class TObjEneEpsilonBody : public TObjEneEpsilon {
public:
    virtual ~TObjEneEpsilonBody();
    virtual void vfunc_28();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual void vfunc_88();
    virtual void vfunc_105();
    virtual void vfunc_106();
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    u8 unk_3A8[0x16C];
};
typedef char TObjEneEpsilonBody_size[sizeof(TObjEneEpsilonBody) == 0x514 ? 1 : -1];

#endif
