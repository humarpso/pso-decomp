#ifndef PSO_MISC_TOSWITCHITEM_H
#define PSO_MISC_TOSWITCHITEM_H

#include "types.h"

struct TOSwitchItem
{
    void run_task();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x8C];
    u32 m_c8;
    u8 _padCC[0x20];
    u32 m_ec;
    u32 m_f0;
    u32 m_f4;
    void update_anim();
    void render();
    static void *create(void *arg0);
    u8 get_field_ec();
};

#endif
