#ifndef PSO_MISC_TWINDOWSUBTECHNIQUE_H
#define PSO_MISC_TWINDOWSUBTECHNIQUE_H

#include "types.h"

struct TWindowSubTechnique
{
    u8 _base[0x1C];
    u8 m_1c;
    u8 _pad1D[0x1];
    u16 m_1e;
    void* m_20;
    void* m_24;
    s32 playerIndex;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;

    void rebuildTechniqueList(s32 list, s32 category);
};

#endif
