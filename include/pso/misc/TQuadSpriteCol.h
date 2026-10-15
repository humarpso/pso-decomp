#ifndef PSO_MISC_TQUADSPRITECOL_H
#define PSO_MISC_TQUADSPRITECOL_H

#include "types.h"

struct TQuadSpriteCol
{
    u32 m_1c;
    u8 _pad20[0x8];
    u32 m_28;
    void render();
};

#endif
