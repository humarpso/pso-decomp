#ifndef PSO_MISC_TWINDOWTIMER_H
#define PSO_MISC_TWINDOWTIMER_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowTimer : public TUnk_804CE018 {
    virtual ~TWindowTimer();
    void ease_window_timer_position();
    virtual void render();
    virtual void run_task();
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x38];
    u32 m_60;
    void update_chat_parts();
    void draw(s32 arg1, s32 arg2);
    void set_time(u32 secs);
    static void draw_tab(s32 arg0, s32 arg1);
    static s32 create();
    static s32 create_alt();
    static void clear_status_flags();
    void copy_state(u8 *arg1);
};

typedef char TWindowTimer_size[sizeof(TWindowTimer) == 0x64 ? 1 : -1];
#endif
