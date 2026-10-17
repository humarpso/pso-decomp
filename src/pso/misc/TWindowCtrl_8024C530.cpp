#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void TWindowMainMenu__sub_8024E3CC(void);
void fn_8026AC50(void);
void queue_destruction__7TObjectFv(void*);

extern u32 TWindowCtrl__active_window;

void TWindowCtrl::shutdown() {
    if ((u32) TWindowCtrl__active_window != 0U) {
        queue_destruction__7TObjectFv((void*)TWindowCtrl__active_window);
        TWindowCtrl__active_window = 0U;
    }
    fn_8026AC50();
    TWindowMainMenu__sub_8024E3CC();
}

}
