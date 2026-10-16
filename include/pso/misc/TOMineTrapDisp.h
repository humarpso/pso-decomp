#ifndef PSO_MISC_TOMINETRAPDISP_H
#define PSO_MISC_TOMINETRAPDISP_H

#include "types.h"
#include "pso/misc/TOMineDisp.h"

struct TOMineTrapDisp : public TOMineDisp {
    virtual ~TOMineTrapDisp();
    u16 m_ac;
    u8 unk_AE[0x2];
};

typedef char TOMineTrapDisp_size[sizeof(TOMineTrapDisp) == 0xB0 ? 1 : -1];
#endif
