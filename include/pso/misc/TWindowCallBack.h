#ifndef PSO_MISC_TWINDOWCALLBACK_H
#define PSO_MISC_TWINDOWCALLBACK_H

#include "types.h"

struct TWindowCallBack
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
};

#endif
