#include "types.h"
#include "pso/misc/TWindowCtrl.h"

struct Obj_8024BB30 { u8 pad[0x84]; TWindowCtrl *children[4]; };

extern "C" void TWindowCtrl__sub_8024BB30(TWindowCtrl *ctrl);

void TWindowCtrl__sub_8024BB30(TWindowCtrl *ctrl) {
    u32 i;
    for (i = 0; i < 4; i++) {
        TWindowCtrl *child = ((Obj_8024BB30 *)ctrl)->children[i];
        if (child != 0 && child->all_parents_unqueued_for_destruction() == 0) {
            if (ctrl->m_28 == child->get_flags()) {
                ctrl->m_28 = 0xFFFF;
            }
            ((Obj_8024BB30 *)ctrl)->children[i] = 0;
        }
    }
}
