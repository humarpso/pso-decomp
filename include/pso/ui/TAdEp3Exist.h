#ifndef PSO_UI_TADEP3EXIST_H
#define PSO_UI_TADEP3EXIST_H

#include "types.h"

struct TAdEp3Exist
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u8 _pad2C[0x4];
    u32 m_30;
    u32 m_34;
    void draw_message_window(s32 arg1);
    static void render();
    int request_game_mode_transition();
    int request_scene_change();
    void close_window();
    void run_task();
    static s32 free_if_valid(s32 arg0, s16 arg1);
};

#endif
