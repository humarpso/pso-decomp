#include "types.h"
#include "pso/misc/TUnk_804D0948.h"
#include "pso/misc/TLobby.h"

extern "C" {

void sub_8026DE94__13TUnk_804D0948Fv(void *arg0);
s32 get_camera_id__11TCameraCtrlFv();
s32 set_position_xy__13TUnk_804CDFE8Fff(void *, f32, f32);
s32 create_menu_scroll_bar(void *);
s32 ensure_status_display__20TWindowSubStatusDispFl();

extern s32 lbl_805D39D0;
extern f32 lbl_805DD340;
extern f32 lbl_805DD344;

void TUnk_804D0948::sub_8026DE94() {
    *(s32 *)((s8 *)this + 0) = (s32) lbl_805D39D0;
    ensure_status_display__20TWindowSubStatusDispFl();
    create_menu_scroll_bar(this);
    ((TLobby *)this)->set_field_1c(lbl_805DD340);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        set_position_xy__13TUnk_804CDFE8Fff(this, lbl_805DD344, lbl_805DD344);
    }
    *(s32 *)((s8 *)this + 0x88) = 0;
}

}
