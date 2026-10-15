#ifndef PSO_MISC_TLOADCTRL_H
#define PSO_MISC_TLOADCTRL_H

#include "types.h"

struct TLoadCtrl
{
    u32 m_1c;
    u32 m_20;
    static void render();
    void run_task();
    static void cleanup_scene();
    static void start_loading(u32 arg0);
    static void poll_default();
    static void step();
    static void set_field1C(s32 arg0);
};

#endif
