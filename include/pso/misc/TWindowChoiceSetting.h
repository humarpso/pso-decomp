#ifndef PSO_MISC_TWINDOWCHOICESETTING_H
#define PSO_MISC_TWINDOWCHOICESETTING_H

#include "types.h"
#include "pso/misc/TUnk_804D0658.h"

struct TWindowChoiceSetting : public TUnk_804D0658 {
    virtual ~TWindowChoiceSetting();
    virtual void render();
    u16 m_80;
    void request_close();
    void draw();
    void move_next_choice();
    void move_cursor_prev();
    void update_scroll_offset();
    void clamp_scroll();
    void draw_setting(s32 arg1);
    virtual void run_task();
    int is_selected();
    u8 unk_82[0x2];
};

typedef char TWindowChoiceSetting_size[sizeof(TWindowChoiceSetting) == 0x84 ? 1 : -1];
#endif
