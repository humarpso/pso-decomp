#ifndef PSO_UNK_TUNK_804CC148_H
#define PSO_UNK_TUNK_804CC148_H
#include "types.h"
#include "pso/effect/TEffect.h"

class TUnk_804CC148 : public TEffect {
public:
    virtual ~TUnk_804CC148();
    virtual void render();
    virtual void run_task();
    u8 unk_70[0x7C];
};
typedef char TUnk_804CC148_size[sizeof(TUnk_804CC148) == 0xEC ? 1 : -1];

#endif
