#include "types.h"

extern "C" {

void TWindowShop__ct(void *arg0);
s32 get_camera_id__11TCameraCtrlFv();
s32 set_position_xy(void *, f32, f32);
s32 set_field_1c__6TLobbyFf(void *, f32);
s32 create_menu_scroll_bar(void *);
s32 ensure_status_display__20TWindowSubStatusDispFl();

extern s32 lbl_805D39D0;
extern f32 lbl_805DD340;
extern f32 lbl_805DD344;

void TWindowShop__ct(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D39D0;
    ensure_status_display__20TWindowSubStatusDispFl();
    create_menu_scroll_bar(arg0);
    set_field_1c__6TLobbyFf(arg0, lbl_805DD340);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        set_position_xy(arg0, lbl_805DD344, lbl_805DD344);
    }
    *(s32 *)((s8 *)arg0 + 0x88) = 0;
}

}
