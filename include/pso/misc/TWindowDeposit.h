#ifndef PSO_MISC_TWINDOWDEPOSIT_H
#define PSO_MISC_TWINDOWDEPOSIT_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowDeposit : public TUnk_804CE018 {
    virtual ~TWindowDeposit();
    virtual void render();
    u8 _pad1C[0x8];
    void* m_24;
    u8 unk_28[0x38];
    f32 m_60;
    void* m_64;
    void render_status(s32 arg1);
    virtual void run_task();
    u8 unk_68[0x4];
};

typedef char TWindowDeposit_size[sizeof(TWindowDeposit) == 0x6C ? 1 : -1];
#endif
