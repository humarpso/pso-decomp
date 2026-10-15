#ifndef PSO_OBJECT_TOBJDOAEX01_H
#define PSO_OBJECT_TOBJDOAEX01_H

#include "types.h"

struct TObjDoaEx01
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x70];
    u32 m_ac;
    u8 _padB0[0x20];
    u32 m_d0;
    void render();
    s32 draw_object_tree(s32 arg1);
    static void free_resource();
    static void load_resources();
};

#endif
