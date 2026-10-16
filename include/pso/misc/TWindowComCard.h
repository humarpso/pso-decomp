#ifndef PSO_MISC_TWINDOWCOMCARD_H
#define PSO_MISC_TWINDOWCOMCARD_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowComCard : public TUnk_804CE018 {
    virtual ~TWindowComCard();
    u8 _pad1C[0x8];
    void* m_24;
    u8 unk_28[0x38];
};

typedef char TWindowComCard_size[sizeof(TWindowComCard) == 0x60 ? 1 : -1];
#endif
