#include "types.h"

extern "C" {

void shutdown__11TWindowCtrlFv(void);
s32 TWindowMainMenu__sub_8024E3CC();
s32 fn_8026AC50();
void queue_destruction__7TObjectFv(void*);

extern u32 TWindowCtrl__active_window;

void shutdown__11TWindowCtrlFv(void) {
    if ((u32) TWindowCtrl__active_window != 0U) {
        queue_destruction__7TObjectFv((void*)TWindowCtrl__active_window);
        TWindowCtrl__active_window = 0U;
    }
    fn_8026AC50();
    TWindowMainMenu__sub_8024E3CC();
}

}
