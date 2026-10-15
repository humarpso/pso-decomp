#ifndef PSO_MISC_TOCAKESHOPCAVE01_H
#define PSO_MISC_TOCAKESHOPCAVE01_H

#include "types.h"

struct TOCakeshopCave01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    void update_blink_state(void *arg1);
    void run_task();
    void render();
    void *create();
    static void close_dialog_window();
    static void load_resource_instance();
};

#endif
