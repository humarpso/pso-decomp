#ifndef PSO_MISC_TCHCRLOADREQ_H
#define PSO_MISC_TCHCRLOADREQ_H

#include "types.h"

struct TChCrLoadReq
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x28];
    u32 m_64;
};

#endif
