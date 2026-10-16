#ifndef PSO_MISC_TPHOTONCONCENTRATE_H
#define PSO_MISC_TPHOTONCONCENTRATE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TPhotonConcentrate : public TUnk_804AF8A0 {
    virtual ~TPhotonConcentrate();
    void* m_ac;
    u8 _padB0[0x8];
    u32 m_b8;
    u32 m_bc;
    u32 m_c0;
    void* m_c4;
    u8 _padC8[0x8];
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u8 _padDC[0x10];
    u32 m_ec;
    u32 m_f0;
    u8 _padF4[0x4];
    u32 m_f8;
    u32 m_fc;
    u8 unk_100[0xC];
};

typedef char TPhotonConcentrate_size[sizeof(TPhotonConcentrate) == 0x10C ? 1 : -1];
#endif
