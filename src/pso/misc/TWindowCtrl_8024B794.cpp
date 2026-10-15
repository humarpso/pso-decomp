#include "types.h"

extern "C" {

void dispatch_to_child__11TWindowCtrlFiPv(s32 arg0, void *arg1);
s32 spawn_palette_slot_light__15TWindowCtrlMainFPv(u32, void*);

extern u32* TWindowCtrl__active_window;

void dispatch_to_child__11TWindowCtrlFiPv(s32 arg0, void *arg1) {
    u32* p = TWindowCtrl__active_window;
    if (p != 0 && p[arg0 + 18] != 0U) {
        spawn_palette_slot_light__15TWindowCtrlMainFPv(p[arg0 + 18], arg1);
    }
}

}
