#ifndef PSO_BOSS_TUNK_804848A0_H
#define PSO_BOSS_TUNK_804848A0_H
#include "types.h"
#include "pso/boss/TUnk_804999E8.h"

class TUnk_804848A0 : public TUnk_804999E8 {
public:
    virtual ~TUnk_804848A0();
    void *init_fade_color(void *, void *);
    u8 unk_24[0x4];
};
typedef char TUnk_804848A0_size[sizeof(TUnk_804848A0) == 0x28 ? 1 : -1];

#endif
