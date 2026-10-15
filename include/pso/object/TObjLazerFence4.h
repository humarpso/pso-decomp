#ifndef PSO_OBJECT_TOBJLAZERFENCE4_H
#define PSO_OBJECT_TOBJLAZERFENCE4_H

#include "types.h"

struct TObjLazerFence4
{
    u8 _pad1C[0x2];
    s16 m_1e;
    u8 _pad20[0x10];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u8 _padB0[0x8];
    u16 m_b8;
    u16 m_ba;
    void run_task();
    void init_models();
    void draw();
    void draw_model();
    void reset_if_door_closed();
    void render();
    void *create();
};

#endif
