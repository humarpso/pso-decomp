#ifndef PSO_MISC_TOTRAPCHAINSAWKEY_H
#define PSO_MISC_TOTRAPCHAINSAWKEY_H

#include "types.h"
#include "pso/misc/TOTrapChainSaw.h"

struct TOTrapChainSawKey : public TOTrapChainSaw {
    virtual ~TOTrapChainSawKey();
    u32 m_f8;
    u32 m_fc;
    u32 m_100;
    void *create();
    static u8 *get_motion(s32 arg0);
    static u8 *get_model(s32 arg0);
    u8 unk_104[0x8];
};

typedef char TOTrapChainSawKey_size[sizeof(TOTrapChainSawKey) == 0x10C ? 1 : -1];
#endif
