#ifndef PSO_UI_TADMULTICONFIRMGC_H
#define PSO_UI_TADMULTICONFIRMGC_H

#include "types.h"

struct TAdMultiConfirmGC
{
    u32 m_1c;
    u32 m_20;
    u8 _pad24[0x20];
    u32 m_44;
    u32 m_48;
    static void render();
    void run_task();
    static int reset_cursor(void* p);
    static int set_cursor_index_1(void* p);
    static int set_cursor_index_2(void* p);
};

#endif
