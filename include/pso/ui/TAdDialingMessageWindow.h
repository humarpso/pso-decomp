#ifndef PSO_UI_TADDIALINGMESSAGEWINDOW_H
#define PSO_UI_TADDIALINGMESSAGEWINDOW_H

#include "types.h"

struct TAdDialingMessageWindow
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void set_flag_and_notify();
    void run_child_tasks();
    void render();
    void tick_countdown();
    void *init(void *arg1, void *arg2, void *arg3);
};

#endif
