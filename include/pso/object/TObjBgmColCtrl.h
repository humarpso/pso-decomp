#ifndef PSO_OBJECT_TOBJBGMCOLCTRL_H
#define PSO_OBJECT_TOBJBGMCOLCTRL_H

#include "types.h"

struct TObjBgmColCtrl
{
    u32 m_1c;
    static void play_lobby_theme_music();
    static void render();
    void run_task();
    static void create_controller();
    static u8 is_active();
    static void update_all_zones(s32 arg0);
};

#endif
