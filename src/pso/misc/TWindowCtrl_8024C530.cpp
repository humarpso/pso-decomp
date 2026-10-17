#include "types.h"
#include "pso/misc/TWindowMainMenu_8024E3CC.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_8026AC50.h"
#include "pso/misc/TWindowCtrl.h"

extern u32 TWindowCtrl__active_window;

void TWindowCtrl::shutdown() {
    if ((u32) TWindowCtrl__active_window != 0U) {
        queue_destruction__7TObjectFv((void*)TWindowCtrl__active_window);
        TWindowCtrl__active_window = 0U;
    }
    fn_8026AC50();
    TWindowMainMenu__sub_8024E3CC();
}
