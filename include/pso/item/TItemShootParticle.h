#ifndef PSO_ITEM_TITEMSHOOTPARTICLE_H
#define PSO_ITEM_TITEMSHOOTPARTICLE_H
#include "types.h"
#include "pso/TItemShoot.h"

class TItemShootParticle : public TItemShoot {
public:
    virtual ~TItemShootParticle();
    virtual void hook();
    u8 unk_58[0xC];
};
typedef char TItemShootParticle_size[sizeof(TItemShootParticle) == 0x64 ? 1 : -1];

#endif
