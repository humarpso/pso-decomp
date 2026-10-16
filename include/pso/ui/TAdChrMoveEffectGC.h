#ifndef PSO_UI_TADCHRMOVEEFFECTGC_H
#define PSO_UI_TADCHRMOVEEFFECTGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdChrMoveEffectGC : public TObject {
    virtual ~TAdChrMoveEffectGC();
    u32 m_1c;
    u32 m_20;
    void copy4(void* q);
    virtual void render();
    void reset_effect_entries();
    void clear_entries();
    void setup_move_effect_params(s32 arg1, s32 arg2);
    virtual void run_task();
    u8 unk_24[0x380];
};

typedef char TAdChrMoveEffectGC_size[sizeof(TAdChrMoveEffectGC) == 0x3A4 ? 1 : -1];
#endif
