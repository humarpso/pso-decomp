#include "pso/TObjTagChallenge.h"

extern "C" {
s32 TWindowCtrlMain__sub_8024CE58(void);
void close_active_window__11TWindowCtrlFv(void);
void fn_800740DC(void);
void open_status_111__11TWindowCtrlFv(void);
}

void TObjTagChallenge::run_task() {
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        close_active_window__11TWindowCtrlFv();
        fn_800740DC();
        open_status_111__11TWindowCtrlFv();
        queue_destruction();
    }
}

TObjTagChallenge::~TObjTagChallenge() {}
