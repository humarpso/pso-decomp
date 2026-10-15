#include "types.h"
#include "pso/TItemMenuCtrl.h"

extern "C" {

s32 TItemMenuCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(s32);
s32 set_menu_flags__13TItemMenuCtrlFv(u32, s32);
s32 queue_destruction__7TObjectFv(u32);

extern u32 TItemMenuCtrl__instance;
extern s32 tl_05;

void TItemMenuCtrl::open_menu(u32 arg0) {
    u32 obj;
    if (((u32) TItemMenuCtrl__instance == 0U) && ((obj = __nw__7TObjectFUl(0x20)) != 0U)) {
        TItemMenuCtrl__ct(obj, tl_05);
    }
    if (arg0 < 7U) {
        if (arg0 == 0) {
            queue_destruction__7TObjectFv(TItemMenuCtrl__instance);
            return;
        }
        set_menu_flags__13TItemMenuCtrlFv(TItemMenuCtrl__instance, 1 << arg0);
    }
}

}
