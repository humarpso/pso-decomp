#ifndef PSO_MISC_TOTRAPCHAINSAW_H
#define PSO_MISC_TOTRAPCHAINSAW_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOTrapChainSaw : public TUnk_804AFBF8 {
    virtual ~TOTrapChainSaw();
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x10];
    u32 m_e8;
    u32 m_ec;
    u8 _padF0[0x4];
    u32 m_f4;
    static f32 scale_by_level(f32 farg0);
    void update_demo();};

typedef char TOTrapChainSaw_size[sizeof(TOTrapChainSaw) == 0xF8 ? 1 : -1];
#endif
