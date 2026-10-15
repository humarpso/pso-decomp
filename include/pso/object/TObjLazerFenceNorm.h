#ifndef PSO_OBJECT_TOBJLAZERFENCENORM_H
#define PSO_OBJECT_TOBJLAZERFENCENORM_H

#include "types.h"

struct TObjLazerFenceNorm
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x50];
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    void run_task();
    static void free_resources();
    void draw_model();
    void render();
    void reset_by_door();
};

#endif
