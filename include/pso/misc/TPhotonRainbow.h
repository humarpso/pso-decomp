#ifndef PSO_MISC_TPHOTONRAINBOW_H
#define PSO_MISC_TPHOTONRAINBOW_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TPhotonRainbow : public TUnk_804B9870 {
    virtual ~TPhotonRainbow();
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u8 _padA0[0x8];
    u32 m_a8;
    void render();
    void run_task();};

typedef char TPhotonRainbow_size[sizeof(TPhotonRainbow) == 0xAC ? 1 : -1];
#endif
