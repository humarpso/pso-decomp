#include "types.h"
#include "pso/ui/TAdScrollWinGC.h"

struct O_8032745C { u8 pad[0x44]; s32 mode; };

extern "C" {
s32 TLobby__sub_80145DB4(int);
}

extern "C" {

int set_cached_blend_factor(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status_value__14TAdScrollWinGCFv(void*);

void TAdScrollWinGC::render() { if (get_state_flag__9TMainTaskFv(this) != 1) { set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)10); render_status_value__14TAdScrollWinGCFv(this); set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)6); } }
s32 TAdScrollWinGC::get_scroll_delay_for_mode() {
    O_8032745C *arg0 = (O_8032745C *)this;
    s32 r = 0;
    switch (arg0->mode) {
    case 0:
        if (TLobby__sub_80145DB4(4) != 0) {
            r = 0x14;
        } else {
            r = 0;
        }
        break;
    case 1:
        r = 0xA;
        break;
    case 2:
        r = -1;
        break;
    }
    return r;
}

}
