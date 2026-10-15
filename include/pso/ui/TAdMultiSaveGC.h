#ifndef PSO_UI_TADMULTISAVEGC_H
#define PSO_UI_TADMULTISAVEGC_H

#include "types.h"

struct TAdMultiSaveGC
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    static void free_window();
    static void load_shared_resource();
    static void render(void *self);
    static void queue_destruction();
};

#endif
