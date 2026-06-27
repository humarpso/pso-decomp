#ifndef PSO_OBJECT_TOBJCAMERA_H
#define PSO_OBJECT_TOBJCAMERA_H

#include "types.h"

struct TObjCamera
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x64];
    u32 m_c8;
};

#endif
