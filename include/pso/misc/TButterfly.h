#ifndef PSO_MISC_TBUTTERFLY_H
#define PSO_MISC_TBUTTERFLY_H

#include "types.h"

struct TButterfly
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x30];
    void* m_9c;
    u8 _padA0[0x14];
    s16 m_b4;
    s16 m_b6;
    u8 m_b8;
    u8 m_b9;
    u8 m_ba;
    void init_motion();
    void render();
    void run_task();
    static void destroy_instance();
    void draw_model();
};

#endif
