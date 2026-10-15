#ifndef PSO_OBJECT_TOBJGBADVANCE_H
#define PSO_OBJECT_TOBJGBADVANCE_H

#include "types.h"

struct TObjGbAdvance
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x34];
    void* m_98;
    u8 _pad9C[0x18];
    u32 m_b4;
    static void free_shared_data();
    static void load_resource_instance();
    void render();
};

#endif
