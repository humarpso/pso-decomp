#include "types.h"

extern "C" {

void update_photon_chair__11TMainCursorFi(s32 arg0);
s32 get_cursor_state__11TMainCursorFv();
f32 get_pos__11TMainCursorFPv(s32);
s32 fn_801424DC(s32, f32, f32, f32, f32);
s32 draw_chunk_object();
s32 update_parts2__15TPlyPhotonChairFPv(s32);
s32 update_parts__15TPlyPhotonChairFPv(s32);

extern f32 TMainCursor__data_805DB0C0;
extern f32 lbl_805DB0C8;
extern f32 TMainCursor__data_805DB0CC;

void update_photon_chair__11TMainCursorFi(s32 arg0) {
    if (get_pos__11TMainCursorFPv(arg0 + 0x4C) > lbl_805DB0C8) {
        update_parts2__15TPlyPhotonChairFPv(arg0 + 0x4C);
        fn_801424DC(arg0 + 0x4C, TMainCursor__data_805DB0CC, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0);
        get_cursor_state__11TMainCursorFv();
        draw_chunk_object();
        update_parts__15TPlyPhotonChairFPv(arg0 + 0x4C);
    }
}

}
