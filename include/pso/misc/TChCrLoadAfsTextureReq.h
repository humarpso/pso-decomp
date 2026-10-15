#ifndef PSO_MISC_TCHCRLOADAFSTEXTUREREQ_H
#define PSO_MISC_TCHCRLOADAFSTEXTUREREQ_H

#include "types.h"

struct TChCrLoadAfsTextureReq
{
    u8 _pad1C[0xC];
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u8 _pad38[0x2C];
    u32 m_64;
    u8 _pad68[0x4];
    u32 m_6c;
    u32 m_70;
    void update_loading(void *);
    void start_read(void *);
};

#endif
