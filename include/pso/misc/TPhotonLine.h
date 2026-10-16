#ifndef PSO_MISC_TPHOTONLINE_H
#define PSO_MISC_TPHOTONLINE_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TPhotonLine : public TUnk_804806E8 {
    virtual ~TPhotonLine();
    void* m_334;
    u8 _pad338[0x18];
    u32 m_350;
    u8 _pad354[0x14];
    u16 m_368;
    static void render();
    u8 unk_36A[0xE];
};

typedef char TPhotonLine_size[sizeof(TPhotonLine) == 0x378 ? 1 : -1];
#endif
