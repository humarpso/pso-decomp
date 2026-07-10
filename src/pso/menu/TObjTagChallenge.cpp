#include "pso/TObjTagChallenge.h"

extern "C" {
s32 TWindowCtrlMain__sub_8024CE58(void);
void TWindowCtrl__sub_8024A3EC(void);
void fn_800740DC(void);
void open_status_111__11TWindowCtrlFv(void);
}

void TObjTagChallenge::run_task() {
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        TWindowCtrl__sub_8024A3EC();
        fn_800740DC();
        open_status_111__11TWindowCtrlFv();
        queue_destruction();
    }
}

TObjTagChallenge::~TObjTagChallenge() {}
