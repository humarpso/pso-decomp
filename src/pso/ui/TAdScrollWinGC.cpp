#include "types.h"
#include "pso/system/ModelDrawContext.h"
#include "pso/unk/text_80145A94.h"
#include "pso/ui/TAdScrollWinGC.h"

extern "C" {
int get_state_flag__9TMainTaskFv(void*);

void TAdScrollWinGC::render() { if (get_state_flag__9TMainTaskFv(this) != 1) { set_cached_blend_factor((s32)((void*)0), (s32)((void*)8)); set_cached_blend_factor((s32)((void*)1), (s32)((void*)10)); render_status_value(); set_cached_blend_factor((s32)((void*)0), (s32)((void*)8)); set_cached_blend_factor((s32)((void*)1), (s32)((void*)6)); } }
s32 TAdScrollWinGC::get_scroll_delay_for_mode() {
    TAdScrollWinGC *arg0 = this;
    s32 r = 0;
    switch (arg0->m_44) {
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
