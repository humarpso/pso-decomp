#ifndef PSO_MISC_TWINDOWMESSAGEPAGE_H
#define PSO_MISC_TWINDOWMESSAGEPAGE_H

#include "types.h"
#include "pso/misc/TWindowMessage.h"

struct TWindowMessagePage : public TWindowMessage {
    virtual ~TWindowMessagePage();
    s32 is_message_window_ready();
    s32 is_ready();
    void update_message();
    void set_message(void *msg, s32 flags);
    static u8 *create(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void set_text(s32 a, s32 b, s32 c);
    void render();
    void run_task();
    u8 unk_90[0x8];
};

typedef char TWindowMessagePage_size[sizeof(TWindowMessagePage) == 0x98 ? 1 : -1];
#endif
