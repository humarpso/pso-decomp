#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

void fn_801424DC(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 draw_chunk_object();

extern f32 TMainCursor__data_805DB0C0;
extern f32 lbl_805DB0C8;
extern f32 TMainCursor__data_805DB0CC;

void TMainCursor::update_photon_chair() {
    s32 arg0 = (s32)this;
    if (((TMainCursor *)(arg0 + 0x4C))->get_pos() > lbl_805DB0C8) {
        TPlyPhotonChair::update_parts2((void*)(arg0 + 0x4C));
        fn_801424DC(arg0 + 0x4C, TMainCursor__data_805DB0CC, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0);
        TMainCursor::get_cursor_state();
        draw_chunk_object();
        TPlyPhotonChair::update_parts((void*)(arg0 + 0x4C));
    }
}

}
