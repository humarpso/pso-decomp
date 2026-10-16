#ifndef PSO_MISC_TPLYPTCLOBJECTRIGHTHAND_H
#define PSO_MISC_TPLYPTCLOBJECTRIGHTHAND_H

#include "types.h"
#include "pso/misc/TPlyFollowParticleCtrl.h"

struct TPlyPtclObjectRightHand : public TPlyFollowParticleCtrl {
    virtual ~TPlyPtclObjectRightHand();
};

typedef char TPlyPtclObjectRightHand_size[sizeof(TPlyPtclObjectRightHand) == 0xB0 ? 1 : -1];
#endif
