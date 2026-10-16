#ifndef PSO_BOSS_TUNK_80484AFC_H
#define PSO_BOSS_TUNK_80484AFC_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_80484AFC : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_80484AFC();
    virtual void render();
    virtual void run_task();
    u8 unk_AC[0x4];
    s32 m_b0;
    u8 unk_B4[0x3C];
};
typedef char TUnk_80484AFC_size[sizeof(TUnk_80484AFC) == 0xF0 ? 1 : -1];

#endif
