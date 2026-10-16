#ifndef PSO_MISC_TPHOTONMAGICSQUARE_H
#define PSO_MISC_TPHOTONMAGICSQUARE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TPhotonMagicSquare : public TUnk_804B9870 {
    virtual ~TPhotonMagicSquare();
    u32 m_90;
    u8 _pad94[0xC];
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    void* m_b8;
    u8 _padBC[0x8];
    u32 m_c4;
    u8 _padC8[0x4];
    u32 m_cc;
    virtual void render();
    virtual void run_task();
    u8 *construct_at_owner(s32 arg1, s32 arg2, s32 arg3);
};

typedef char TPhotonMagicSquare_size[sizeof(TPhotonMagicSquare) == 0xD0 ? 1 : -1];
#endif
