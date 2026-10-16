#ifndef PSO_MISC_TOSENSOR_H
#define PSO_MISC_TOSENSOR_H

#include "types.h"

struct TOSensor
{
    void render();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
};

#endif
