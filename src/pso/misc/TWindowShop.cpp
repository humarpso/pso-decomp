#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TUnk_804D0618.h"
#include "pso/misc/TUnk_804D0948.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 get_camera_id__11TCameraCtrlFv();
s32 ensure_status_display__13TUnk_804D0618Fl();

extern s32 lbl_805D39D0;
extern f32 lbl_805DD340;
extern f32 lbl_805DD344;

void TUnk_804D0948::sub_8026DE94() {
    *(s32 *)((s8 *)this + 0) = (s32) lbl_805D39D0;
    ensure_status_display__13TUnk_804D0618Fl();
    create_menu_scroll_bar();
    ((TLobby *)this)->set_field_1c(lbl_805DD340);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        set_position_xy(lbl_805DD344, lbl_805DD344);
    }
    *(s32 *)((s8 *)this + 0x88) = 0;
}

}
