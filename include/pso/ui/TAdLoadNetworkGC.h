#ifndef PSO_UI_TADLOADNETWORKGC_H
#define PSO_UI_TADLOADNETWORKGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdLoadNetworkGC : public TObject {
    virtual ~TAdLoadNetworkGC();
    u8 _pad1C[0x18];
    void* m_34;
    static void render();
    void run_task();
    u8 unk_38[0x8];
};

typedef char TAdLoadNetworkGC_size[sizeof(TAdLoadNetworkGC) == 0x40 ? 1 : -1];
#endif
