#ifndef PSO_UI_TADENTERPPPPASSGC_H
#define PSO_UI_TADENTERPPPPASSGC_H

#include "types.h"
#include "pso/ui/TAdEnterBaseGC.h"

struct TAdEnterPPPPassGC : public TAdEnterBaseGC {
    virtual ~TAdEnterPPPPassGC();
    void render();
    void run_task();
    u8 unk_38[0xC];
};

typedef char TAdEnterPPPPassGC_size[sizeof(TAdEnterPPPPassGC) == 0x44 ? 1 : -1];
#endif
